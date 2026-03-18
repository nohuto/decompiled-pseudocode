/*
 * XREFs of MiWakeFileOnlyReaper @ 0x1404DAD18
 * Callers:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x1404F35A4 (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140E2D3C1 )
  {
    stru_140E2D380.List.Flink = 0LL;
    stru_140E2D380.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140E2D380.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140E2D380, DelayedWorkQueue);
    byte_140E2D3C1 = 1;
  }
}
