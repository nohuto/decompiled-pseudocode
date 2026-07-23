/*
 * XREFs of MiDeletePartition @ 0x1407ECBFC
 * Callers:
 *     PspTeardownPartition @ 0x14077AF00 (PspTeardownPartition.c)
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 * Callees:
 *     MiDrainCrossPartitionUsage @ 0x14068B1E4 (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x1407ECC40 (MiFreePartitionId.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
