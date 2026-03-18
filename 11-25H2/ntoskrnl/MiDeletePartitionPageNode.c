/*
 * XREFs of MiDeletePartitionPageNode @ 0x14067E764
 * Callers:
 *     MiClearRangeInPartitionTree @ 0x14067E5D4 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x14067E790 (MiDeletePartitionPageNodes.c)
 *     MiFinishChildPartitionHotAdd @ 0x14067EAA0 (MiFinishChildPartitionHotAdd.c)
 *     MiFreePartitionTree @ 0x14067ECF0 (MiFreePartitionTree.c)
 *     MiInsertPartitionPageNodes @ 0x14067EE34 (MiInsertPartitionPageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x14067F8C0 (MiPartitionDeleteMemoryNode.c)
 *     MiReturnPartitionPagesToParent @ 0x14067F9FC (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x1407EC3F4 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionPageNode(PVOID *P)
{
  ExFreePoolWithTag(P[5], 0);
  ExFreePoolWithTag(P, 0);
}
