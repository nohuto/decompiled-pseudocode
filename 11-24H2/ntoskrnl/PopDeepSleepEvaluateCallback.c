/*
 * XREFs of PopDeepSleepEvaluateCallback @ 0x14049DC40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1403B5638 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x14049DD00 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x14049DDC0 (PopDiagTraceIdleResiliencyEnd.c)
 */

void PopDeepSleepEvaluateCallback()
{
  KIRQL v0; // al
  KIRQL v1; // di
  __int64 v2; // rcx
  BOOL v3; // r9d
  bool v4; // bl
  __int64 v5; // rdx
  unsigned int v6; // r8d

  while ( 1 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    v1 = v0;
    LOBYTE(v2) = PopDeepSleepIsEngaged;
    v3 = PopDeepSleepEnforced != 0;
    v4 = PopDeepSleepDisengageReasonMask == 0;
    if ( PopDeepSleepIsEngaged == (PopDeepSleepDisengageReasonMask == 0) )
      break;
    if ( PopDeepSleepDisengageReasonMask )
      PopDiagTraceIdleResiliencyEnd(v2, (unsigned int)(v3 + 2));
    else
      PopDiagTraceIdleResiliencyStart(v2, (unsigned int)(v3 + 2), 0x1Eu / KeMaximumIncrement + 1);
    PopDeepSleepIsEngaged = v4;
    KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v1);
    PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock, v5, v6);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock(&PopFxSystemLatencyLock);
  }
  PopDeepSleepEvaluateWorkItemQueued = 0;
  KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v0);
}
