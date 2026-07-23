/*
 * XREFs of MiPartitionDeleteMemoryNode @ 0x14068C280
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiDeletePartitionPageNode @ 0x14068B124 (MiDeletePartitionPageNode.c)
 *     MiMakePartitionMemoryBlock @ 0x1407FCD8C (MiMakePartitionMemoryBlock.c)
 */

void __fastcall MiPartitionDeleteMemoryNode(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID *v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  KIRQL v8; // bl

  if ( (ULONG *)a1 != &MiSystemPartition )
  {
    v5 = *(PVOID **)(a1 + 24);
    if ( v5 )
    {
      v6 = a2 & 0x3FFFFFFFFFFFFFFFLL;
      do
      {
        v7 = (unsigned __int64)v5[3] & 0x3FFFFFFFFFFFFFFFLL;
        if ( v6 >= v7 )
        {
          if ( v6 < (unsigned __int64)v5[4] + v7 )
            break;
          v5 = (PVOID *)v5[1];
        }
        else
        {
          v5 = (PVOID *)*v5;
        }
      }
      while ( v5 );
    }
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), (__int64)v5);
    *(_QWORD *)(a1 + 18512) -= a3;
    *(_BYTE *)(a1 + 12) = 1;
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v8);
    MiMakePartitionMemoryBlock(a1);
    MiDeletePartitionPageNode(v5);
  }
}
