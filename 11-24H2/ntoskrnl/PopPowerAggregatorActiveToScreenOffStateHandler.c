/*
 * XREFs of PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407574E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404AB9C0 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A6E4B0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorActiveToScreenOffStateHandler(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rbx
  _DWORD v5[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v5, 0, 32);
  v5[0] = 3;
  PopPowerAggregatorSetCurrentState(a1, v5);
  v2 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 304) = 0;
  v3 = PopGetMonitorReasonFromPowerEventId(v2) & 0xFFFFFF;
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(1LL, (unsigned int)v3);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  return 0LL;
}
