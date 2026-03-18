/*
 * XREFs of PopPowerAggregatorSystemTransitionExitStateHandler @ 0x14074DA30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopCheckForWork @ 0x14047697C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1404769F4 (PopGetPolicyWorker.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A2C210 (PopPowerAggregatorSetCurrentState.c)
 *     PopSuspendResumePdc @ 0x140A7707C (PopSuspendResumePdc.c)
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
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
