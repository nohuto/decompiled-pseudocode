/*
 * XREFs of PspUnlockProcessExclusive @ 0x140458484
 * Callers:
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 *     PspSyscallProviderOptIn @ 0x14077175C (PspSyscallProviderOptIn.c)
 *     PsTerminateMinimalProcess @ 0x140778D58 (PsTerminateMinimalProcess.c)
 *     PspCreatePicoProcess @ 0x140779F60 (PspCreatePicoProcess.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     PsSetProcessTelemetryAppState @ 0x1408F3B80 (PsSetProcessTelemetryAppState.c)
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140912870 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspProcessClose @ 0x1409E5850 (PspProcessClose.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140A2C58C (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessWin32Process @ 0x140A414D0 (PsSetProcessWin32Process.c)
 *     PsSetProcessFaultInformation @ 0x140A55880 (PsSetProcessFaultInformation.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 *     NtTerminateProcess @ 0x140ACF260 (NtTerminateProcess.c)
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 *     PsFreezeProcess @ 0x140ACF964 (PsFreezeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockProcessExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 456;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 456));
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread();
}
