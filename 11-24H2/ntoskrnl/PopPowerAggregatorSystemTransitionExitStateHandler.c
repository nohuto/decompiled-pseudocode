/*
 * XREFs of PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140759E80
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopCheckForWork @ 0x1403F2D8C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403F2E04 (PopGetPolicyWorker.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140902BD0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSuspendResumePdc @ 0x140A78D0C (PopSuspendResumePdc.c)
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionExitStateHandler(struct _KEVENT *a1)
{
  _OWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF

  KeResetEvent(a1 + 11);
  memset(v3, 0, sizeof(v3));
  LODWORD(v3[0]) = 3;
  PopPowerAggregatorSetCurrentState(a1, v3);
  PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
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
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  return 0LL;
}
