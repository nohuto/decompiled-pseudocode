/*
 * XREFs of RtlpFeatureConfigurationClonePrepare @ 0x1801474DC
 * Callers:
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18003A720 (RtlRunOnceBeginInitialize.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *RtlpFeatureConfigurationClonePrepare()
{
  volatile signed __int32 **v0; // rdx
  unsigned __int64 v1; // r8
  volatile signed __int32 **v2; // rdx
  unsigned __int64 v3; // r8

  RtlRunOnceBeginInitialize(&qword_1801D3D70, 0, 0LL);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)RtlpFcProcessManager, v0, v1);
  return RtlAcquireSRWLockExclusive((volatile signed __int32 *)&qword_1801D3D80, v2, v3);
}
