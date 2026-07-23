/*
 * XREFs of PspDeleteMemoryPartitionContext @ 0x140A67FDC
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PspDeleteMemoryPartitionContext(void *a1)
{
  LONG_PTR result; // rax

  if ( a1 )
    return ObfDereferenceObjectWithTag(a1, 0x624A7350u);
  return result;
}
