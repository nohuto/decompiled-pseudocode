/*
 * XREFs of PsQuitNextProcessThread @ 0x140A65AD0
 * Callers:
 *     ExpDebuggerWorker @ 0x140B7BF70 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
