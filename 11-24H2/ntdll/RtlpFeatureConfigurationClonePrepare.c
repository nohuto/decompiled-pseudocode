/*
 * XREFs of RtlpFeatureConfigurationClonePrepare @ 0x18014588C
 * Callers:
 *     RtlCloneUserProcess @ 0x18015D630 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015DAF0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18001A9A0 (RtlRunOnceBeginInitialize.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

void RtlpFeatureConfigurationClonePrepare()
{
  RtlRunOnceBeginInitialize(&stru_1801D2D70, 0, 0LL);
  RtlAcquireSRWLockExclusive(&RtlpFcProcessManager);
  RtlAcquireSRWLockExclusive(&SRWLock);
}
