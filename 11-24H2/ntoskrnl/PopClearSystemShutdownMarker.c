/*
 * XREFs of PopClearSystemShutdownMarker @ 0x1406F9A20
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140B67B90 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 */

__int64 PopClearSystemShutdownMarker()
{
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~8u;
  LOBYTE(PopBsdPowerTransitionExtension) = -1;
  PopBsdHandleRequest(0xBu);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
