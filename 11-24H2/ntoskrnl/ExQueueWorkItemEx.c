/*
 * XREFs of ExQueueWorkItemEx @ 0x1402D6B60
 * Callers:
 *     KeTerminateThread @ 0x1402D5BB8 (KeTerminateThread.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x140314F70 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140314FB0 (PopFxResidentTimeoutDpcRoutine.c)
 * Callees:
 *     ExpTypeToPriority @ 0x14027AA00 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x14027AA20 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x1402CD0A0 (ExpQueueWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 0);
}
