/*
 * XREFs of MiUnmapPfns @ 0x1407EA6E0
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407E8C3C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiPhysicalMemoryEverRemoved @ 0x14066F818 (MiPhysicalMemoryEverRemoved.c)
 */

void __fastcall MiUnmapPfns(__int64 a1)
{
  unsigned int v1; // r9d

  v1 = *(_DWORD *)(a1 + 40);
  if ( (v1 & 1) != 0 )
    v1 = v1 & 0xFFFFFFD6 | 0x20;
  MiInitializeDynamicPfns(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), (__int64)&MiSystemPartition, v1, 0LL);
  MiPhysicalMemoryEverRemoved(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), 0);
  if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
  {
    qword_140E38D88 += *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)qword_140E38D88 >= 0x5555 && !byte_140E38E0C )
    {
      stru_140E38D68.List.Flink = 0LL;
      stru_140E38D68.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
      stru_140E38D68.Parameter = &MiSystemPartition;
      ExQueueWorkItem(&stru_140E38D68, DelayedWorkQueue);
      byte_140E38E0C = 1;
    }
  }
}
