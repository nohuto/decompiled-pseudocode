/*
 * XREFs of MiUnmapPfns @ 0x1407DA250
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407D87AC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 *     MiPhysicalMemoryEverRemoved @ 0x140662B04 (MiPhysicalMemoryEverRemoved.c)
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
    qword_140E38A08 += *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)qword_140E38A08 >= 0x5555 && !byte_140E38A8C )
    {
      stru_140E389E8.List.Flink = 0LL;
      stru_140E389E8.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
      stru_140E389E8.Parameter = &MiSystemPartition;
      ExQueueWorkItem(&stru_140E389E8, DelayedWorkQueue);
      byte_140E38A8C = 1;
    }
  }
}
