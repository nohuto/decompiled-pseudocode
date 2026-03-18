/*
 * XREFs of PoQueueShutdownWorkItem @ 0x140750D40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 */

NTSTATUS __stdcall PoQueueShutdownWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  NTSTATUS v2; // ebx
  struct _LIST_ENTRY *v3; // rax

  ExAcquireFastMutex(&PopShutdownListMutex);
  v2 = 0;
  if ( PopShutdownListAvailable )
  {
    v3 = (struct _LIST_ENTRY *)qword_140F0D298;
    if ( *(__int64 **)qword_140F0D298 != &PopShutdownQueue )
      __fastfail(3u);
    WorkItem->List.Flink = (struct _LIST_ENTRY *)&PopShutdownQueue;
    WorkItem->List.Blink = v3;
    v3->Flink = &WorkItem->List;
    qword_140F0D298 = (__int64)WorkItem;
  }
  else
  {
    v2 = -1073741077;
  }
  KeReleaseGuardedMutex(&PopShutdownListMutex);
  return v2;
}
