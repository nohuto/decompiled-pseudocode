/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x14065E730
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x1404A9118 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x14091F3D4 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x72506D4Du);
}
