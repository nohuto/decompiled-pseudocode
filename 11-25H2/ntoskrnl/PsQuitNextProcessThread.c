/*
 * XREFs of PsQuitNextProcessThread @ 0x140A6A0F0
 * Callers:
 *     ExpDebuggerWorker @ 0x140B69F70 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
