/*
 * XREFs of RtlpFeatureConfigurationCloneComplete @ 0x180148A20
 * Callers:
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

NTSTATUS __fastcall RtlpFeatureConfigurationCloneComplete(int a1)
{
  if ( a1 )
  {
    *(_QWORD *)&xmmword_1801D5CE8 = xmmword_1801D5CE8 & 1;
    SRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    RtlpFcProcessManager.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    if ( ((__int64)stru_1801D5DD0.Ptr & 3) == 1 )
      stru_1801D5DD0.Value = 1LL;
  }
  RtlReleaseSRWLockExclusive(&SRWLock);
  RtlReleaseSRWLockExclusive(&RtlpFcProcessManager);
  return RtlRunOnceComplete(&stru_1801D5DD0, 4u, 0LL);
}
