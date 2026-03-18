/*
 * XREFs of PsQuitNextProcessThread @ 0x140A6C570
 * Callers:
 *     ExpDebuggerWorker @ 0x140B79F70 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
