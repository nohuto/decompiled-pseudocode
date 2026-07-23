/*
 * XREFs of PopRecordSleepCheckpoint @ 0x140A88720
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x140C2F7D4 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A3364 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordSleepCheckpoint(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  BYTE2(PopBsdPowerTransitionExtension) = a1;
  PopBsdHandleRequest(0xAu);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
