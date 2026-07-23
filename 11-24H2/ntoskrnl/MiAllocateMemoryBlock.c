/*
 * XREFs of MiAllocateMemoryBlock @ 0x1407E9560
 * Callers:
 *     MiAllocateInitialMemoryBlocks @ 0x1407E9474 (MiAllocateInitialMemoryBlocks.c)
 *     MiExtendMemoryBlocks @ 0x1407E9A94 (MiExtendMemoryBlocks.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
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
