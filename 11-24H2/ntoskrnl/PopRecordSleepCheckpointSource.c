/*
 * XREFs of PopRecordSleepCheckpointSource @ 0x140749950
 * Callers:
 *     PopCheckShutdownMarker @ 0x140C2D6B4 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordSleepCheckpointSource(char a1)
{
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  BYTE1(PopBsdPowerTransitionExtension) = BYTE1(PopBsdPowerTransitionExtension) & 0xF3 | (4 * (a1 & 3));
  PopBsdHandleRequest(0xAu);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
