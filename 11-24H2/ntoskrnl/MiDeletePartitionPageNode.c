/*
 * XREFs of MiDeletePartitionPageNode @ 0x140689FF4
 * Callers:
 *     MiClearRangeInPartitionTree @ 0x140689E64 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x14068A020 (MiDeletePartitionPageNodes.c)
 *     MiFinishChildPartitionHotAdd @ 0x14068A330 (MiFinishChildPartitionHotAdd.c)
 *     MiFreePartitionTree @ 0x14068A580 (MiFreePartitionTree.c)
 *     MiInsertPartitionPageNodes @ 0x14068A6C4 (MiInsertPartitionPageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x14068B150 (MiPartitionDeleteMemoryNode.c)
 *     MiReturnPartitionPagesToParent @ 0x14068B28C (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x1407FC284 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionPageNode(PVOID *P)
{
  ExFreePoolWithTag(P[5], 0);
  ExFreePoolWithTag(P, 0);
}
