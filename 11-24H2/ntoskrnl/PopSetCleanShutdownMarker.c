/*
 * XREFs of PopSetCleanShutdownMarker @ 0x1407499A0
 * Callers:
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 */

__int64 PopSetCleanShutdownMarker()
{
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~1u;
  PopBsdHandleRequest(9u);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
