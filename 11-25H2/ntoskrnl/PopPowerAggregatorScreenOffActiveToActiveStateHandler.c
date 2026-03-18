/*
 * XREFs of PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140A2C1C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A2C210 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A2C294 (PopPowerAggregatorNotifyCsStateExited.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffActiveToActiveStateHandler(__int64 a1)
{
  _DWORD v2[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, 32);
  v2[0] = 2;
  PopPowerAggregatorSetCurrentState(a1, v2);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopPowerAggregatorNotifyCsStateExited();
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  return 0LL;
}
