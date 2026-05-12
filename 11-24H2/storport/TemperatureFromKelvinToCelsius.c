/*
 * XREFs of TemperatureFromKelvinToCelsius @ 0x1400DD4E0
 * Callers:
 *     NvmeControllerGetTemperatureThresholdWorkerCompletion @ 0x1400DB1A0 (NvmeControllerGetTemperatureThresholdWorkerCompletion.c)
 *     NvmeGetStorageTemperaturePropertyComplete @ 0x1400DB9B0 (NvmeGetStorageTemperaturePropertyComplete.c)
 *     NvmeNamespacePopulateLogSenseInformationalExceptions @ 0x140117CB4 (NvmeNamespacePopulateLogSenseInformationalExceptions.c)
 *     NvmeNamespacePopulateLogSenseTemperature @ 0x140117DAC (NvmeNamespacePopulateLogSenseTemperature.c)
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
