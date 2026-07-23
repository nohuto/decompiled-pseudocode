/*
 * XREFs of CmInitSystem2 @ 0x140C4E174
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     Feature_MachineHiveCache__private_ReportDeviceUsage @ 0x1404F3748 (Feature_MachineHiveCache__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x1406ED9CC (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1406EF78C (CmpRegisterTraceLoggingProvider.c)
 *     CmpBuildMachineHiveCache @ 0x1407C94A4 (CmpBuildMachineHiveCache.c)
 *     MmLockRegistryRecoverySections @ 0x1407D8274 (MmLockRegistryRecoverySections.c)
 *     IoCreateDriver @ 0x140AACA20 (IoCreateDriver.c)
 *     CmpMachineHiveListInitialize @ 0x140AB7CF0 (CmpMachineHiveListInitialize.c)
 *     CmFcInitSystem3 @ 0x140C4DE90 (CmFcInitSystem3.c)
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
