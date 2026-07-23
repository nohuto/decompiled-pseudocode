/*
 * XREFs of PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140AA4630
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404AB9C0 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A6E4B0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorDisplayPoweringOnStateHandler(__int64 a1)
{
  int v2; // ebx
  __int64 MonitorReasonFromPowerEventId; // rax
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 72) )
  {
    memset(v5, 0, sizeof(v5));
    PopPowerAggregatorSetCurrentState((LARGE_INTEGER *)a1, (__int64)v5);
    v2 = *(_DWORD *)(a1 + 24);
    PopReleaseRwLock(&PopPowerAggregatorLock);
    MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(v2);
    PopSleepstudyStartNextSession(0LL, MonitorReasonFromPowerEventId & 0xFFFFFF);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  }
  return 0LL;
}
