/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x14066A250
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x1404A7414 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x140938BD4 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x72506D4Du);
}
