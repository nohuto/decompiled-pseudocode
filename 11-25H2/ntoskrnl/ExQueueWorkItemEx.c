/*
 * XREFs of ExQueueWorkItemEx @ 0x1403ABC60
 * Callers:
 *     PopPepIdleTimeoutDpcRoutine @ 0x1403AA490 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x1403AA4D0 (PopFxResidentTimeoutDpcRoutine.c)
 *     KeTerminateThread @ 0x1403AB638 (KeTerminateThread.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402E6800 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1403AD260 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1403AD280 (ExpValidateWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // eax

  ExpValidateWorkItem((ULONG_PTR)a1);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 0);
}
