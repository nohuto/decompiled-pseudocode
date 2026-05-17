/*
 * XREFs of RtlpFeatureConfigurationClonePrepare @ 0x180148A8C
 * Callers:
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlRunOnceBeginInitialize @ 0x18008E110 (RtlRunOnceBeginInitialize.c)
 */

struct _TEB *RtlpFeatureConfigurationClonePrepare()
{
  RtlRunOnceBeginInitialize(&qword_1801D5DD0, 0, 0LL);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)RtlpFcProcessManager);
  return RtlAcquireSRWLockExclusive((volatile signed __int32 *)&qword_1801D5DE0);
}
