/*
 * XREFs of PspUnlockProcessExclusive @ 0x140462E74
 * Callers:
 *     PsThawMultiProcess @ 0x1404EEE60 (PsThawMultiProcess.c)
 *     PspSyscallProviderOptIn @ 0x14077153C (PspSyscallProviderOptIn.c)
 *     PsTerminateMinimalProcess @ 0x140778C58 (PsTerminateMinimalProcess.c)
 *     PspCreatePicoProcess @ 0x140779E60 (PspCreatePicoProcess.c)
 *     PspInsertProcess @ 0x1408A7074 (PspInsertProcess.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     DbgkForwardException @ 0x140938C20 (DbgkForwardException.c)
 *     PsSetProcessTelemetryAppState @ 0x1409394B0 (PsSetProcessTelemetryAppState.c)
 *     PsFreezeProcess @ 0x14093A750 (PsFreezeProcess.c)
 *     NtTerminateProcess @ 0x14093B030 (NtTerminateProcess.c)
 *     PsSetProcessFaultInformation @ 0x14093B330 (PsSetProcessFaultInformation.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1409B2350 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspProcessClose @ 0x1409EAF60 (PspProcessClose.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140A37A4C (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessWin32Process @ 0x140A4A7B0 (PsSetProcessWin32Process.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 *     PspThreadDelete @ 0x140AD1250 (PspThreadDelete.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
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
