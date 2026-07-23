/*
 * XREFs of MiUpdatePartitionChildPageCounts @ 0x14068CA34
 * Callers:
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MiMoveBadPagePartition @ 0x14068C184 (MiMoveBadPagePartition.c)
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
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
