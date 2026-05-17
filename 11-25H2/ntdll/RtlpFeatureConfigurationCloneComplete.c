/*
 * XREFs of RtlpFeatureConfigurationCloneComplete @ 0x180148A20
 * Callers:
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpFeatureConfigurationCloneComplete(int a1)
{
  if ( a1 )
  {
    *(_QWORD *)&xmmword_1801D5CE8 = xmmword_1801D5CE8 & 1;
    qword_1801D5DE0 = 1LL;
    RtlpFcProcessManager[0] = 1LL;
    if ( (qword_1801D5DD0 & 3) == 1 )
      qword_1801D5DD0 = 1LL;
  }
  RtlReleaseSRWLockExclusive(&qword_1801D5DE0);
  RtlReleaseSRWLockExclusive(RtlpFcProcessManager);
  return RtlRunOnceComplete(&qword_1801D5DD0, 4u, 0LL);
}
