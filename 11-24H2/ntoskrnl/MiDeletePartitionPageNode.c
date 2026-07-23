/*
 * XREFs of MiDeletePartitionPageNode @ 0x14068B124
 * Callers:
 *     MiClearRangeInPartitionTree @ 0x14068AF94 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x14068B150 (MiDeletePartitionPageNodes.c)
 *     MiFinishChildPartitionHotAdd @ 0x14068B460 (MiFinishChildPartitionHotAdd.c)
 *     MiFreePartitionTree @ 0x14068B6B0 (MiFreePartitionTree.c)
 *     MiInsertPartitionPageNodes @ 0x14068B7F4 (MiInsertPartitionPageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x14068C280 (MiPartitionDeleteMemoryNode.c)
 *     MiReturnPartitionPagesToParent @ 0x14068C3BC (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x1407FC9F4 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionPageNode(PVOID *P)
{
  ExFreePoolWithTag(P[5], 0);
  ExFreePoolWithTag(P, 0);
}
