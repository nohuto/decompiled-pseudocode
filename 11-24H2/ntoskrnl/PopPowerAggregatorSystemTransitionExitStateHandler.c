/*
 * XREFs of PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407582D0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PopCheckForWork @ 0x1403E6AAC (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403E6B24 (PopGetPolicyWorker.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A6E4B0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSuspendResumePdc @ 0x140A7300C (PopSuspendResumePdc.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionExitStateHandler(struct _KEVENT *a1)
{
  _OWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF

  KeResetEvent(a1 + 11);
  memset(v3, 0, sizeof(v3));
  LODWORD(v3[0]) = 3;
  PopPowerAggregatorSetCurrentState(a1, v3);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(1LL, 20LL);
  if ( PopIdleScanInterval )
  {
    KeResetEvent(&PopIdleLoopExecuted);
    PopGetPolicyWorker(128);
    PopCheckForWork();
    KeWaitForSingleObject(&PopIdleLoopExecuted, Executive, 0, 0, 0LL);
  }
  PopSuspendResumePdc(2LL);
  PopSuspendResumePdc(3LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  return 0LL;
}
