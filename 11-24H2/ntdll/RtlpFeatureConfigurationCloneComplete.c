/*
 * XREFs of RtlpFeatureConfigurationCloneComplete @ 0x180145820
 * Callers:
 *     RtlCloneUserProcess @ 0x18015D630 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015D940 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015DAF0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

NTSTATUS __fastcall RtlpFeatureConfigurationCloneComplete(int a1)
{
  if ( a1 )
  {
    *(_QWORD *)&xmmword_1801D2C88 = xmmword_1801D2C88 & 1;
    SRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    RtlpFcProcessManager.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    if ( ((__int64)stru_1801D2D70.Ptr & 3) == 1 )
      stru_1801D2D70.Value = 1LL;
  }
  RtlReleaseSRWLockExclusive(&SRWLock);
  RtlReleaseSRWLockExclusive(&RtlpFcProcessManager);
  return RtlRunOnceComplete(&stru_1801D2D70, 4u, 0LL);
}
