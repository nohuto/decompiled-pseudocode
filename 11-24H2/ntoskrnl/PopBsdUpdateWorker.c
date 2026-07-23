/*
 * XREFs of PopBsdUpdateWorker @ 0x140A64E90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14049FAE4 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x140A64EE4 (PopBsdFlush.c)
 */

__int64 PopBsdUpdateWorker()
{
  unsigned int v0; // eax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  while ( 1 )
  {
    v0 = PopBsdUpdateRequests;
    PopBsdUpdateRequests = 0;
    if ( !v0 )
      break;
    PopBsdFlush(v0);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopBsdUpdateWorkItem);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
