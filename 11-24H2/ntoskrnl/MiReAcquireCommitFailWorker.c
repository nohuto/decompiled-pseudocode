/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x14066B420
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x1404A1E44 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x72506D4Du);
}
