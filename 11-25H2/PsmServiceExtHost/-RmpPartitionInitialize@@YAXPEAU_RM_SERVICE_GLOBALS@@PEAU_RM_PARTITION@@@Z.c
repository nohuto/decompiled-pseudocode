/*
 * XREFs of ?RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z @ 0x180070C70
 * Callers:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180046400 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 * Callees:
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

void __fastcall RmpPartitionInitialize(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PARTITION *a2)
{
  memset_0(a2, 0, 0xF8uLL);
  *((_DWORD *)a2 + 60) &= 0xFFFFFFFC;
  *((_QWORD *)a2 + 3) = a1;
  *(_QWORD *)a2 = 1LL;
  *((_QWORD *)a2 + 28) = (char *)a2 + 216;
  *((_QWORD *)a2 + 27) = (char *)a2 + 216;
  memset_0((char *)a2 + 48, 0, 0x70uLL);
  *((_QWORD *)a2 + 5) = a2;
  *((_DWORD *)a2 + 28) = *((_DWORD *)a1 + 919);
  *((_DWORD *)a2 + 29) = *((_DWORD *)a1 + 920);
  *((_DWORD *)a2 + 31) = *((_DWORD *)a1 + 921);
  *((_DWORD *)a2 + 34) = 5;
  *((_DWORD *)a2 + 35) = 5;
}
