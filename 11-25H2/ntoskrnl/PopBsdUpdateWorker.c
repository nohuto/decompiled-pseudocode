/*
 * XREFs of PopBsdUpdateWorker @ 0x140A68F90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4824 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x140A68FE4 (PopBsdFlush.c)
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
