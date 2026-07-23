/*
 * XREFs of PopRecordSleepCheckpointSource @ 0x140747C80
 * Callers:
 *     PopCheckShutdownMarker @ 0x140C2F7D4 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A3364 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordSleepCheckpointSource(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  BYTE1(PopBsdPowerTransitionExtension) = BYTE1(PopBsdPowerTransitionExtension) & 0xF3 | (4 * (a1 & 3));
  PopBsdHandleRequest(0xAu);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
