/*
 * XREFs of PopClearSystemShutdownMarker @ 0x1406EDD44
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140B57D60 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 */

__int64 PopClearSystemShutdownMarker()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~8u;
  LOBYTE(PopBsdPowerTransitionExtension) = -1;
  PopBsdHandleRequest(0xBu);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
