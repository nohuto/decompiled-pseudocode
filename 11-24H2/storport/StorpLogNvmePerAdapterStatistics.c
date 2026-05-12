/*
 * XREFs of StorpLogNvmePerAdapterStatistics @ 0x1400B0974
 * Callers:
 *     StorpLogStatistics @ 0x14003FE88 (StorpLogStatistics.c)
 * Callees:
 *     NvmeAdapterAcquireRemoveLock @ 0x1400CC668 (NvmeAdapterAcquireRemoveLock.c)
 */

void __fastcall StorpLogNvmePerAdapterStatistics(__int64 a1, char a2)
{
  __int64 v3; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( !*(_QWORD *)(a1 + 1136)
    || (v3 = *(_QWORD *)(a1 + 160), *(_DWORD *)(v3 + 68) == 1) && (*(_DWORD *)(v3 + 76) & 0x27) == 0 )
  {
    if ( a2 < 0 && (int)NvmeAdapterAcquireRemoveLock(a1) >= 0 )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, StorpNvmeAdapterHealthWorkItemRoutine, NormalWorkQueue, WorkItem);
      else
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152));
    }
  }
}
