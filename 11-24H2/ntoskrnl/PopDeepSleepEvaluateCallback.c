/*
 * XREFs of PopDeepSleepEvaluateCallback @ 0x140498A40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402AD9A8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140498B00 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x140498BC0 (PopDiagTraceIdleResiliencyEnd.c)
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
