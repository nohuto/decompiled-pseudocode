/*
 * XREFs of PopSetUserShutdownMarkerWorker @ 0x1407499E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4D54 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 */

__int64 PopSetUserShutdownMarkerWorker()
{
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) |= 4u;
  PopBsdHandleRequest(9u);
  PopOkayToQueueNextWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
