/*
 * XREFs of PopDeepSleepEvaluateCallback @ 0x14049EB60
 * Callers:
 *     <none>
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x140203AF8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x14049EC20 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x14049ECE0 (PopDiagTraceIdleResiliencyEnd.c)
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
      PopDiagTraceIdleResiliencyStart(v2, (unsigned int)(v3 + 2), 0x1E / KeMaximumIncrement + 1);
    PopDeepSleepIsEngaged = v4;
    KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v1);
    PpmAcquireLock(&PopFxSystemLatencyLock, v5, v6);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  }
  PopDeepSleepEvaluateWorkItemQueued = 0;
  KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v0);
}
