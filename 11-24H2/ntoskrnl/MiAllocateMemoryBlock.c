/*
 * XREFs of MiAllocateMemoryBlock @ 0x1407E8F90
 * Callers:
 *     MiAllocateInitialMemoryBlocks @ 0x1407E8EA4 (MiAllocateInitialMemoryBlocks.c)
 *     MiExtendMemoryBlocks @ 0x1407E94C4 (MiExtendMemoryBlocks.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 */

__int64 __fastcall MiAllocateMemoryBlock(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned __int64 v5; // r10
  __int64 result; // rax

  if ( a2 <= *a1 )
    return 0LL;
  v5 = a3 != 0 ? 24LL : 16LL;
  if ( a2 > *a1 + (-33LL - v5 * *a1) / v5 )
    return 0LL;
  result = MiAllocatePool(0x40uLL, v5 * a2 + 32, 538996045);
  if ( result )
  {
    *(_DWORD *)(result + 16) = a2;
    if ( a3 )
      *(_QWORD *)result = 1LL;
  }
  return result;
}
