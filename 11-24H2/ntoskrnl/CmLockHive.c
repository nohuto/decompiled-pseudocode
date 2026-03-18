/*
 * XREFs of CmLockHive @ 0x140845C74
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402C8600 (CmpWaitForLateUnloadWorker.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmpFlushNotify @ 0x14086869C (CmpFlushNotify.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087E638 (CmpDoQueueLateUnloadWorker.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmLockHive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 1680);
  result = (__int64)KeAbPreAcquire(a1 + 1680, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  return result;
}
