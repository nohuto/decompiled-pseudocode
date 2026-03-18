/*
 * XREFs of PsQuitNextPartition @ 0x1405DA7B4
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x1407B0420 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x140B5DB2C (MiMirrorBrownPhase.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
