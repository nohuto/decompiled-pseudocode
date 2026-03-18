/*
 * XREFs of PopBsdFlushWorker @ 0x140A6B8F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4D54 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x140A6B984 (PopBsdFlush.c)
 */

__int64 PopBsdFlushWorker()
{
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  PopBsdFlush(7LL);
  PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
  return PopOkayToQueueNextWorkItem((__int64)&PopBsdFlushWorkItem);
}
