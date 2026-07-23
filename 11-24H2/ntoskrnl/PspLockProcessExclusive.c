/*
 * XREFs of PspLockProcessExclusive @ 0x14044FF38
 * Callers:
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 *     PspSyscallProviderOptIn @ 0x14077175C (PspSyscallProviderOptIn.c)
 *     PsTerminateMinimalProcess @ 0x140778D58 (PsTerminateMinimalProcess.c)
 *     PspCreatePicoProcess @ 0x140779F60 (PspCreatePicoProcess.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     PsSetProcessTelemetryAppState @ 0x1408F3B80 (PsSetProcessTelemetryAppState.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140912870 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspProcessClose @ 0x1409E5850 (PspProcessClose.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140A2C58C (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessWin32Process @ 0x140A414D0 (PsSetProcessWin32Process.c)
 *     PsSetProcessFaultInformation @ 0x140A55880 (PsSetProcessFaultInformation.c)
 *     NtTerminateProcess @ 0x140ACF260 (NtTerminateProcess.c)
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 *     PsFreezeProcess @ 0x140ACF964 (PsFreezeProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  char *result; // rax
  char *v4; // rbx

  --*(_WORD *)(a2 + 484);
  v2 = (unsigned __int64 *)(a1 + 456);
  result = (char *)KeAbPreAcquire(a1 + 456, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    v4[10] = 1;
  return result;
}
