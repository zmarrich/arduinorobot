//must be saved on desktop
#include <NewPing.h>
#include <Adafruit_NeoPixel.h>
#define TRIGGER_PIN 8
#define ECHO_PIN 7
#define MAX_DISTANCE 200

#define PIN 6



NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
int delaytime=30;
const int pingPin = 8;    //Trig - green Jumper
const int echoPin = 7;    //Echo - yellow Jumper
long duration, cm, inches;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(12, PIN, NEO_RGBW + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
//Define inputs and outputs
  pinMode(pingPin, OUTPUT);
  pinMode(echoPin, INPUT);
//Serial Port begin
  Serial.begin (9600);
}



void loop(){
  int pingyity;
  strip.begin();
  strip.show();
  delaytime=pingyity;
  for(int i=0; i<60; i++){
  strip.setPixelColor(i, 255, 255, 0);
  strip.show();
  delay(delaytime);}
  
  delaytime=pingyity;
  for(int i=0; i<60; i++){
  strip.setPixelColor(i, 0, 255, 255);
  strip.show();
  delay(delaytime);}
  
  delaytime=pingyity;
  for(int i=0; i<60; i++){
  strip.setPixelColor(i, 0, 255, 0);
  strip.show();
  delay(delaytime);}
  
  delaytime=pingyity;
  for(int i=0; i<60; i++){
  strip.setPixelColor(i, 0, 0, 255);
  strip.show();
  delay(delaytime);}
  
  delaytime=pingyity;
  for(int i=0; i<60; i++){
  strip.setPixelColor(i, 255, 0, 255);
  strip.show();
  delay(delaytime);
  
 
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(pingPin, LOW);
  delayMicroseconds(5);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);
  
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  
  // convert the time into a distance
  cm = (duration/2) / 29.1;
  inches = (duration/2) / 74; 
  
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  delay(250);
  
  unsigned int uS = sonar.ping_cm();
  Serial.print(uS);
  Serial.println("cm");
  delaytime=pingyity;
  for(int i=0; i<60; i++){
  strip.setPixelColor(i, 255, 0, 0);
  strip.show();
  delay(delaytime);

   }
 
 {
 //Send ping signal out
 long duration, inches;
 digitalWrite(pingPin, LOW);
 delayMicroseconds(2);
 digitalWrite(pingPin, HIGH);
 delayMicroseconds(5);
 digitalWrite(pingPin, LOW);
 
 
 //read ping sensor signal input
 duration = pulseIn(echoPin, HIGH);
 // convert the time into a distance
 inches = duration / 74 / 2;
 return;
   
 
 
 //set light delay time based on sensor
 //if(inches<=30) return(inches);
  //else return(30);
 }
 }}
