/*
 * XREFs of MiWakeFileOnlyReaper @ 0x1404C87B0
 * Callers:
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x1404C8730 (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140E2D741 )
  {
    stru_140E2D700.List.Flink = 0LL;
    stru_140E2D700.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140E2D700.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140E2D700, DelayedWorkQueue);
    byte_140E2D741 = 1;
  }
}
