/*
 * XREFs of PopClearSleepMarker @ 0x140AAD448
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140B67B90 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 */

__int64 PopClearSleepMarker()
{
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  *(_QWORD *)&PopBsdPowerTransition = 0LL;
  BYTE8(PopBsdPowerTransition) &= 0xFu;
  PopBsdHandleRequest(9u);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
