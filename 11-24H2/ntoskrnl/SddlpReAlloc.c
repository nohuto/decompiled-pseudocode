/*
 * XREFs of SddlpReAlloc @ 0x140796BF8
 * Callers:
 *     GetOperandValue @ 0x14086038C (GetOperandValue.c)
 *     GetPrintableOperandValue @ 0x140861C7C (GetPrintableOperandValue.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void *__fastcall SddlpReAlloc(size_t Size, SIZE_T a2, PVOID P)
{
  PVOID PoolWithTag; // rax
  void *v7; // rbx

  if ( !P || a2 < Size )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x64536553u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset_0(PoolWithTag, 0, a2);
    memmove(v7, P, Size);
  }
  ExFreePoolWithTag(P, 0);
  return v7;
}
