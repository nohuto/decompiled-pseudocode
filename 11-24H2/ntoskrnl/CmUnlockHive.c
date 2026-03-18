/*
 * XREFs of CmUnlockHive @ 0x140846740
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402C8600 (CmpWaitForLateUnloadWorker.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmpFlushNotify @ 0x14086869C (CmpFlushNotify.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087E638 (CmpDoQueueLateUnloadWorker.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1680;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1680));
  return KeAbPostRelease(v1);
}
