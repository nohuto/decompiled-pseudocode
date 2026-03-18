/*
 * XREFs of PopBsdUpdateWorker @ 0x140A6B930
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4D54 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x140A6B984 (PopBsdFlush.c)
 */

__int64 PopBsdUpdateWorker()
{
  unsigned int v0; // eax

  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  while ( 1 )
  {
    v0 = PopBsdUpdateRequests;
    PopBsdUpdateRequests = 0;
    if ( !v0 )
      break;
    PopBsdFlush(v0);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopBsdUpdateWorkItem);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
