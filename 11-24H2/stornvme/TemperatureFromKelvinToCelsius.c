/*
 * XREFs of TemperatureFromKelvinToCelsius @ 0x140026B10
 * Callers:
 *     LogSenseTemperature @ 0x140021E18 (LogSenseTemperature.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x140022E50 (NVMeGetLogPageHealthInfoCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall TemperatureFromKelvinToCelsius(unsigned __int16 a1)
{
  if ( a1 == 0xFFFF )
    return -1;
  if ( a1 > 0x20Fu )
    return -2;
  if ( a1 <= 0x111u )
    return 0;
  return a1 - 17;
}
