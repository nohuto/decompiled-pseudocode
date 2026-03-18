/*
 * XREFs of PopRecordSleepCheckpointSource @ 0x14073D8D4
 * Callers:
 *     PopCheckShutdownMarker @ 0x140C1C5B4 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordSleepCheckpointSource(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  BYTE1(PopBsdPowerTransitionExtension) = BYTE1(PopBsdPowerTransitionExtension) & 0xF3 | (4 * (a1 & 3));
  PopBsdHandleRequest(0xAu);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
