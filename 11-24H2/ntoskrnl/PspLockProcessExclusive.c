/*
 * XREFs of PspLockProcessExclusive @ 0x14045AB10
 * Callers:
 *     PsThawMultiProcess @ 0x1404EEE60 (PsThawMultiProcess.c)
 *     PspSyscallProviderOptIn @ 0x14077153C (PspSyscallProviderOptIn.c)
 *     PsTerminateMinimalProcess @ 0x140778C58 (PsTerminateMinimalProcess.c)
 *     PspCreatePicoProcess @ 0x140779E60 (PspCreatePicoProcess.c)
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
 *     PspThreadDelete @ 0x140AD1250 (PspThreadDelete.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a2 + 484);
  v2 = (unsigned __int64 *)(a1 + 456);
  result = (__int64)KeAbPreAcquire(a1 + 456, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
