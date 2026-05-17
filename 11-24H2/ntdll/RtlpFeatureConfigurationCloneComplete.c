/*
 * XREFs of RtlpFeatureConfigurationCloneComplete @ 0x180147470
 * Callers:
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015F580 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpFeatureConfigurationCloneComplete(int a1)
{
  if ( a1 )
  {
    *(_QWORD *)&xmmword_1801D3C88 = xmmword_1801D3C88 & 1;
    qword_1801D3D80 = 1LL;
    RtlpFcProcessManager[0] = 1LL;
    if ( (qword_1801D3D70 & 3) == 1 )
      qword_1801D3D70 = 1LL;
  }
  RtlReleaseSRWLockExclusive(&qword_1801D3D80);
  RtlReleaseSRWLockExclusive(RtlpFcProcessManager);
  return RtlRunOnceComplete(&qword_1801D3D70, 4u, 0LL);
}
