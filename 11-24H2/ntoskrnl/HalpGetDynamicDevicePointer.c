/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x140A7BFD0
 * Callers:
 *     HalpSetAcpiRealTimeClock @ 0x1406F9E9C (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1406FFAF4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpArmAcpiWakeAlarm @ 0x140A7BC50 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A7BE54 (HalpQueryAcpiRealTimeClock.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
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
