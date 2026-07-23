/*
 * XREFs of PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140758230
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404AB9C0 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A6E4B0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSuspendResumePdc @ 0x140A7300C (PopSuspendResumePdc.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140AA99CC (PopPowerRequestRevokeRequestsForSleep.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionEnterStateHandler(__int64 a1)
{
  __int64 MonitorReasonFromPowerEventId; // rax
  unsigned int v3; // ebx
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 56) != 5 )
  {
    MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 60));
    memset(v5, 0, sizeof(v5));
    v3 = MonitorReasonFromPowerEventId & 0xFFFFFF;
    LODWORD(v5[0]) = 5;
    PopPowerAggregatorSetCurrentState(a1, v5);
    PopReleaseRwLock(&PopPowerAggregatorLock);
    PopSuspendResumePdc(1LL);
    PopPowerRequestRevokeRequestsForSleep();
    KeSetEvent((PRKEVENT)(a1 + 264), 0, 0);
    PopSleepstudyStartNextSession(3LL, v3);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  }
  return 0LL;
}
