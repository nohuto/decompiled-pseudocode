/*
 * XREFs of PspLockProcessExclusive @ 0x14045AFE0
 * Callers:
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
 *     PspSyscallProviderOptIn @ 0x140761B7C (PspSyscallProviderOptIn.c)
 *     PsTerminateMinimalProcess @ 0x140768FA8 (PsTerminateMinimalProcess.c)
 *     PspCreatePicoProcess @ 0x14076A1B0 (PspCreatePicoProcess.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     DbgkForwardException @ 0x14091F420 (DbgkForwardException.c)
 *     PsSetProcessTelemetryAppState @ 0x14091FCB0 (PsSetProcessTelemetryAppState.c)
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
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 *result; // rax
  __int64 *v4; // rbx

  --*(_WORD *)(a2 + 484);
  v2 = (unsigned __int64 *)(a1 + 456);
  result = KeAbPreAcquire(a1 + 456, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
