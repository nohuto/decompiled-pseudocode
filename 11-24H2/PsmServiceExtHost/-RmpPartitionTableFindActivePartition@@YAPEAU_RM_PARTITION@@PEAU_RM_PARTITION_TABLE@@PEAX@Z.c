/*
 * XREFs of ?RmpPartitionTableFindActivePartition@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAX@Z @ 0x180089BC8
 * Callers:
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x1800103E8 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     ?RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x180046730 (-RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 */

struct _RM_PARTITION *__fastcall RmpPartitionTableFindActivePartition(struct _RM_PARTITION_TABLE *a1, void *a2)
{
  void *v2; // rdi
  struct _RM_PARTITION *PartitionInternal; // rax
  struct _RM_PARTITION *v5; // rdi

  v2 = a2;
  if ( a2 == (void *)-2LL )
    v2 = (void *)*((_QWORD *)a1 + 6);
  RtlAcquireSRWLockShared(a1);
  PartitionInternal = RmpPartitionTableFindPartitionInternal(a1, v2, 2);
  v5 = PartitionInternal;
  if ( PartitionInternal && _InterlockedIncrement64((volatile signed __int64 *)PartitionInternal) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(a1);
  return v5;
}
