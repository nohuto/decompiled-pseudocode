/*
 * XREFs of CmLockHive @ 0x140841F34
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402B98A0 (CmpWaitForLateUnloadWorker.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmpFlushNotify @ 0x14086C98C (CmpFlushNotify.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408824E8 (CmpDoQueueLateUnloadWorker.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall CmLockHive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  char *result; // rax
  char *v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 1680);
  result = (char *)KeAbPreAcquire(a1 + 1680, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    v3[10] = 1;
  return result;
}
