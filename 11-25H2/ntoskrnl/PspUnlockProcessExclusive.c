/*
 * XREFs of PspUnlockProcessExclusive @ 0x1403D76DC
 * Callers:
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
 *     PspSyscallProviderOptIn @ 0x140761B7C (PspSyscallProviderOptIn.c)
 *     PsTerminateMinimalProcess @ 0x140768FA8 (PsTerminateMinimalProcess.c)
 *     PspCreatePicoProcess @ 0x14076A1B0 (PspCreatePicoProcess.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     DbgkForwardException @ 0x14091F420 (DbgkForwardException.c)
 *     PsSetProcessTelemetryAppState @ 0x14091FCB0 (PsSetProcessTelemetryAppState.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1409CD200 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspProcessClose @ 0x1409F2500 (PspProcessClose.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140A334FC (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessWin32Process @ 0x140A48280 (PsSetProcessWin32Process.c)
 *     PsSetProcessFaultInformation @ 0x140A5B7E0 (PsSetProcessFaultInformation.c)
 *     NtTerminateProcess @ 0x140A6C390 (NtTerminateProcess.c)
 *     PspThreadDelete @ 0x140AC7750 (PspThreadDelete.c)
 *     PsFreezeProcess @ 0x140AC7BE0 (PsFreezeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a1 + 456;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 456));
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2);
}
