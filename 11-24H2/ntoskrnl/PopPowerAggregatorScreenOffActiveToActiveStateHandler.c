/*
 * XREFs of PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140902B80
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140902BD0 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140902C54 (PopPowerAggregatorNotifyCsStateExited.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffActiveToActiveStateHandler(__int64 a1)
{
  _DWORD v2[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, 32);
  v2[0] = 2;
  PopPowerAggregatorSetCurrentState(a1, v2);
  PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  PopPowerAggregatorNotifyCsStateExited();
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  return 0LL;
}
