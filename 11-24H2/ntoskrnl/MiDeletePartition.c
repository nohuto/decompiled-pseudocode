/*
 * XREFs of MiDeletePartition @ 0x1407EC62C
 * Callers:
 *     PspTeardownPartition @ 0x14077B050 (PspTeardownPartition.c)
 *     MmCreatePartition @ 0x1407FC90C (MmCreatePartition.c)
 * Callees:
 *     MiDrainCrossPartitionUsage @ 0x14068A0B4 (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x1407EC670 (MiFreePartitionId.c)
 *     MiDeletePartitionResources @ 0x1407FBD44 (MiDeletePartitionResources.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
