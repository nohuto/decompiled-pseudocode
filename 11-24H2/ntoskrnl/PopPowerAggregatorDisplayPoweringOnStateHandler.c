/*
 * XREFs of PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140AA9580
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404B1130 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140902BD0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorDisplayPoweringOnStateHandler(__int64 a1)
{
  int v2; // ebx
  __int64 MonitorReasonFromPowerEventId; // rax
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 72) )
  {
    memset(v5, 0, sizeof(v5));
    PopPowerAggregatorSetCurrentState(a1, (__int64)v5);
    v2 = *(_DWORD *)(a1 + 24);
    PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
    MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(v2);
    PopSleepstudyStartNextSession(0LL, MonitorReasonFromPowerEventId & 0xFFFFFF);
    PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  }
  return 0LL;
}
