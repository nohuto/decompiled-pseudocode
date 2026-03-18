/*
 * XREFs of PopRecordSleepCheckpoint @ 0x140A8C1E8
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x140C2D6B4 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordSleepCheckpoint(char a1)
{
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  BYTE2(PopBsdPowerTransitionExtension) = a1;
  PopBsdHandleRequest(0xAu);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
