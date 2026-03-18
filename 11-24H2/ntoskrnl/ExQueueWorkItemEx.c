/*
 * XREFs of ExQueueWorkItemEx @ 0x1402A7430
 * Callers:
 *     KeTerminateThread @ 0x1402A6488 (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x14049A3F0 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x14049A7E0 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpTypeToPriority @ 0x1402A8C10 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1402A8C30 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x140324510 (ExpQueueWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemEx(ULONG_PTR a1, unsigned int a2, int a3)
{
  int v5; // esi
  int v6; // eax

  v5 = a1;
  ExpValidateWorkItem(a1);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v5, v6, a3, 0);
}
