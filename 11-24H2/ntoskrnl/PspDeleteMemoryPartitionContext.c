/*
 * XREFs of PspDeleteMemoryPartitionContext @ 0x140A6EB58
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PspDeleteMemoryPartitionContext(void *a1)
{
  LONG_PTR result; // rax

  if ( a1 )
    return ObfDereferenceObjectWithTag(a1, 0x624A7350u);
  return result;
}
