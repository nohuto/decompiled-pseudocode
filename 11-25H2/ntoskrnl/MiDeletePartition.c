/*
 * XREFs of MiDeletePartition @ 0x1407DC78C
 * Callers:
 *     PspTeardownPartition @ 0x14076B4B0 (PspTeardownPartition.c)
 *     MmCreatePartition @ 0x1407ECA7C (MmCreatePartition.c)
 * Callees:
 *     MiDrainCrossPartitionUsage @ 0x14067E824 (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x1407DC7D0 (MiFreePartitionId.c)
 *     MiDeletePartitionResources @ 0x1407EBEB4 (MiDeletePartitionResources.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartition(unsigned __int16 *P)
{
  unsigned __int16 v1; // bx

  v1 = *P;
  MiDrainCrossPartitionUsage((__int64)P);
  MiDeletePartitionResources(P);
  MiFreePartitionId(v1);
  ExFreePoolWithTag(P, 0);
}
