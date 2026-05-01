/*
 * XREFs of ?RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x180046730
 * Callers:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180046380 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpPartitionTableFindActivePartition@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAX@Z @ 0x180089BC8 (-RmpPartitionTableFindActivePartition@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAX@Z.c)
 *     ?RmpPartitionTablePartitionExists@@YAKPEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x180089C48 (-RmpPartitionTablePartitionExists@@YAKPEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_PARTITION *__fastcall RmpPartitionTableFindPartitionInternal(
        struct _RM_PARTITION_TABLE *a1,
        void *a2,
        int a3)
{
  char *v3; // rsi
  char *v5; // rbx
  __int64 v7; // rdi

  v3 = (char *)a1 + 16;
  v5 = (char *)*((_QWORD *)a1 + 2);
  v7 = 0LL;
  while ( v5 != v3 )
  {
    if ( (int)NtCompareObjects(*((_QWORD *)v5 + 3), a2) >= 0 )
      return (struct _RM_PARTITION *)((unsigned __int64)(v5 - 8) & -(__int64)((a3 & (1 << (v5[232] & 3))) != 0));
    v5 = *(char **)v5;
  }
  return (struct _RM_PARTITION *)v7;
}
