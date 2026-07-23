/*
 * XREFs of CmInitSystem2 @ 0x140C61648
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     Feature_MachineHiveCache__private_ReportDeviceUsage @ 0x1404F389C (Feature_MachineHiveCache__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x1406F6E90 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1406F923C (CmpRegisterTraceLoggingProvider.c)
 *     CmpBuildMachineHiveCache @ 0x1407D91E4 (CmpBuildMachineHiveCache.c)
 *     MmLockRegistryRecoverySections @ 0x1407E8704 (MmLockRegistryRecoverySections.c)
 *     IoCreateDriver @ 0x140AACC00 (IoCreateDriver.c)
 *     CmpMachineHiveListInitialize @ 0x140AB6E50 (CmpMachineHiveListInitialize.c)
 *     CmFcInitSystem3 @ 0x140C61360 (CmFcInitSystem3.c)
 */

void CmInitSystem2()
{
  int v0; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v1 = 2097182LL;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  CmFcInitSystem3();
  v0 = IoCreateDriver(&v1, VRegSetup);
  if ( v0 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v0, 0LL, 0LL);
  if ( CmBugcheckRecoveryEnabled )
    MmLockRegistryRecoverySections();
  CmpVolumeManagerCreateContextsForWellKnownVolumes();
  CmpMachineHiveListInitialize();
  Feature_MachineHiveCache__private_ReportDeviceUsage();
  CmpBuildMachineHiveCache();
}
