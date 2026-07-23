/*
 * XREFs of PopBsdFlushWorker @ 0x140A64E50
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14049FAE4 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x140A64EE4 (PopBsdFlush.c)
 */

__int64 PopBsdFlushWorker()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  PopBsdFlush(7LL);
  PopReleaseRwLock(&PopBsdUpdateLock);
  return PopOkayToQueueNextWorkItem((__int64)&PopBsdFlushWorkItem);
}
