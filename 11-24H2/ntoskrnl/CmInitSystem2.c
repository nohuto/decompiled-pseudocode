/*
 * XREFs of CmInitSystem2 @ 0x140C5F4F8
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     Feature_MachineHiveCache__private_ReportDeviceUsage @ 0x1404F5F9C (Feature_MachineHiveCache__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x1406F9250 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1406FB5FC (CmpRegisterTraceLoggingProvider.c)
 *     CmpBuildMachineHiveCache @ 0x1407D8C94 (CmpBuildMachineHiveCache.c)
 *     MmLockRegistryRecoverySections @ 0x1407E8134 (MmLockRegistryRecoverySections.c)
 *     IoCreateDriver @ 0x140AB1C90 (IoCreateDriver.c)
 *     CmpMachineHiveListInitialize @ 0x140ABBE30 (CmpMachineHiveListInitialize.c)
 *     CmFcInitSystem3 @ 0x140C5F210 (CmFcInitSystem3.c)
 */

void CmInitSystem2()
{
  int v0; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v1 = 2097182LL;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  CmFcInitSystem3();
  v0 = IoCreateDriver(&v1, (unsigned __int64)VRegSetup);
  if ( v0 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v0, 0LL, 0LL);
  if ( CmBugcheckRecoveryEnabled )
    MmLockRegistryRecoverySections();
  CmpVolumeManagerCreateContextsForWellKnownVolumes();
  CmpMachineHiveListInitialize();
  Feature_MachineHiveCache__private_ReportDeviceUsage();
  CmpBuildMachineHiveCache();
}
