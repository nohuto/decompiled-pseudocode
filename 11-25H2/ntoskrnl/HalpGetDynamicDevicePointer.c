/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x140A7DEF0
 * Callers:
 *     HalpSetAcpiRealTimeClock @ 0x1406F0518 (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1406F60C4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpArmAcpiWakeAlarm @ 0x140A7DB70 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A7DD74 (HalpQueryAcpiRealTimeClock.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 */

__int64 __fastcall HalpGetDynamicDevicePointer(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi

  v2 = 0;
  if ( !HalpDynamicDevicesReady )
    return 3221226645LL;
  KeWaitForSingleObject(&HalpDynamicDeviceInterfaceLock, WrExecutive, 0, 0, 0LL);
  v4 = HalpDynamicDevices[0];
  if ( HalpDynamicDevices[0] )
  {
    PsReferenceSiloContext((void *)HalpDynamicDevices[0]);
    *a2 = v4;
  }
  else
  {
    v2 = -1073741275;
  }
  KeSetEvent(&HalpDynamicDeviceInterfaceLock, 0, 0);
  return v2;
}
