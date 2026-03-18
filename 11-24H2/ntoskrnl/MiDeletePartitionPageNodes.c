/*
 * XREFs of MiDeletePartitionPageNodes @ 0x14068A020
 * Callers:
 *     MiReturnAddMemoryResources @ 0x14066E8AC (MiReturnAddMemoryResources.c)
 *     MiClearPartitionPageBitMap @ 0x140689D44 (MiClearPartitionPageBitMap.c)
 *     MiDuplicatePartitionNodeTree @ 0x14068A284 (MiDuplicatePartitionNodeTree.c)
 *     MiInsertPartitionPages @ 0x14068A8D0 (MiInsertPartitionPages.c)
 *     MmRemovePhysicalMemory @ 0x1407EA5D0 (MmRemovePhysicalMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiDeletePartitionPageNode @ 0x140689FF4 (MiDeletePartitionPageNode.c)
 */

void __fastcall MiDeletePartitionPageNodes(unsigned __int64 *a1)
{
  PVOID *v1; // rax
  PVOID *i; // rbx
  PVOID **v4; // rax
  PVOID *v5; // rsi
  PVOID *v6; // rcx
  PVOID *v7; // rcx

  v1 = (PVOID *)*a1;
  i = 0LL;
  while ( v1 )
  {
    i = v1;
    v1 = (PVOID *)*v1;
  }
  while ( i )
  {
    v4 = (PVOID **)i[1];
    v5 = i;
    v6 = i;
    if ( v4 )
    {
      v7 = *v4;
      for ( i = (PVOID *)i[1]; v7; v7 = (PVOID *)*v7 )
        i = v7;
    }
    else
    {
      while ( 1 )
      {
        i = (PVOID *)((unsigned __int64)i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || *i == v6 )
          break;
        v6 = i;
      }
    }
    RtlAvlRemoveNode(a1, (__int64)v5);
    MiDeletePartitionPageNode(v5);
  }
}
