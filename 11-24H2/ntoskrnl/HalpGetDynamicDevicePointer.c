/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x140A81570
 * Callers:
 *     HalpSetAcpiRealTimeClock @ 0x1406FC25C (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140701EB4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpArmAcpiWakeAlarm @ 0x140A811F0 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A813F4 (HalpQueryAcpiRealTimeClock.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
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
