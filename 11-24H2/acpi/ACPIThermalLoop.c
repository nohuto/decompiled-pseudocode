/*
 * XREFs of ACPIThermalLoop @ 0x1400379FC
 * Callers:
 *     ACPIThermalComplete @ 0x140036740 (ACPIThermalComplete.c)
 *     ACPIThermalEvent @ 0x1400370A0 (ACPIThermalEvent.c)
 *     ACPIThermalDeviceControl @ 0x140037210 (ACPIThermalDeviceControl.c)
 *     ACPIThermalRereadTemperature @ 0x140037874 (ACPIThermalRereadTemperature.c)
 *     ACPIThermalTMPCallback @ 0x1400379A0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x140037A14 (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x140038030 (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalStopZone @ 0x140056244 (ACPIThermalStopZone.c)
 *     ACPIThermalReadTemperatureComplete @ 0x140069070 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalStopZoneWorker @ 0x140069144 (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalWorker @ 0x1400B5660 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x140037A14 (ACPIThermalLoopEx.c)
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
