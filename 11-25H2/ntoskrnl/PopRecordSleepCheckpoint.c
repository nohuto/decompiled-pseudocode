/*
 * XREFs of PopRecordSleepCheckpoint @ 0x140A871EC
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x140C1C5B4 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordSleepCheckpoint(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  BYTE2(PopBsdPowerTransitionExtension) = a1;
  PopBsdHandleRequest(0xAu);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
