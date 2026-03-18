/*
 * XREFs of PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140759DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404B1130 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140902BD0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSuspendResumePdc @ 0x140A78D0C (PopSuspendResumePdc.c)
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140AAEAF0 (PopPowerRequestRevokeRequestsForSleep.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionEnterStateHandler(__int64 a1)
{
  __int64 MonitorReasonFromPowerEventId; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 56) != 5 )
  {
    MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 60));
    memset(v8, 0, sizeof(v8));
    v3 = MonitorReasonFromPowerEventId & 0xFFFFFF;
    LODWORD(v8[0]) = 5;
    PopPowerAggregatorSetCurrentState(a1, v8);
    PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
    PopSuspendResumePdc(1LL);
    PopPowerRequestRevokeRequestsForSleep(v5, v4, v6);
    KeSetEvent((PRKEVENT)(a1 + 264), 0, 0);
    PopSleepstudyStartNextSession(3LL, v3);
    PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  }
  return 0LL;
}
