/*
 * XREFs of PopSetCleanShutdownMarker @ 0x140747CD0
 * Callers:
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A3364 (PopBsdHandleRequest.c)
 */

__int64 PopSetCleanShutdownMarker()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~1u;
  PopBsdHandleRequest(9u);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
