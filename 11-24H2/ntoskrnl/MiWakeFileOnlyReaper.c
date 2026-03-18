/*
 * XREFs of MiWakeFileOnlyReaper @ 0x1404CF4E8
 * Callers:
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x1404CF468 (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140E2D601 )
  {
    stru_140E2D5C0.List.Flink = 0LL;
    stru_140E2D5C0.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140E2D5C0.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140E2D5C0, DelayedWorkQueue);
    byte_140E2D601 = 1;
  }
}
