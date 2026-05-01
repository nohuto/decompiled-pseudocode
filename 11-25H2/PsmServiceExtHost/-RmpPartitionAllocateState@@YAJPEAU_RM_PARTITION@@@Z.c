/*
 * XREFs of ?RmpPartitionAllocateState@@YAJPEAU_RM_PARTITION@@@Z @ 0x18007090C
 * Callers:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180046400 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPartitionAllocateState(struct _RM_PARTITION *a1)
{
  char *v1; // rsi
  unsigned int v2; // edi
  unsigned int v3; // ebx
  HANDLE EventW; // rax
  int v5; // eax

  v1 = (char *)a1 + 40;
  v2 = 1;
  v3 = 0;
  while ( v2 < 6 )
  {
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *(_QWORD *)&v1[8 * v2 + 8] = EventW;
    if ( !EventW )
    {
      v5 = -1073741823;
      goto LABEL_8;
    }
    ++v2;
  }
  v5 = TpAllocTimer(v1 + 64, RmpMemoryMonitorTimerCallback, v1, 0LL);
  if ( v5 >= 0 )
    v5 = 0;
LABEL_8:
  if ( v5 < 0 )
    return (unsigned int)v5;
  return v3;
}
