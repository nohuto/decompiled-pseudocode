/*
 * XREFs of MiUpdatePartitionChildPageCounts @ 0x14068B904
 * Callers:
 *     MiInitializeDynamicPfns @ 0x14066D8BC (MiInitializeDynamicPfns.c)
 *     MiActOnPartitionNodePages @ 0x140688F24 (MiActOnPartitionNodePages.c)
 *     MiMoveBadPagePartition @ 0x14068B054 (MiMoveBadPagePartition.c)
 *     MiTransferPartitionPageRun @ 0x14068B4FC (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x140401E10 (MiRestrictRangeToNode.c)
 */

__int64 __fastcall MiUpdatePartitionChildPageCounts(ULONG *a1, ULONG *a2, ULONG_PTR a3, ULONG_PTR a4)
{
  __int64 result; // rax
  ULONG_PTR v5; // rbx
  ULONG_PTR v9; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = a4;
  if ( a2 == &MiSystemPartition || a1 == &MiSystemPartition )
  {
    result = a2[1];
    if ( (result & 0x80u) == 0LL )
    {
      result = a1[1];
      if ( (result & 0x80u) == 0LL )
      {
        if ( a4 )
        {
          do
          {
            v9 = MiRestrictRangeToNode(a3, v5);
            result = MiPageToNode(a3);
            if ( a2 == &MiSystemPartition )
            {
              _InterlockedAdd64((volatile signed __int64 *)&MiState + (unsigned int)result + 5496, v9);
            }
            else if ( a1 == &MiSystemPartition )
            {
              _InterlockedAdd64((volatile signed __int64 *)&MiState + (unsigned int)result + 5496, -(__int64)v9);
            }
            a3 += v9;
            v5 -= v9;
          }
          while ( v5 );
        }
      }
    }
  }
  return result;
}
