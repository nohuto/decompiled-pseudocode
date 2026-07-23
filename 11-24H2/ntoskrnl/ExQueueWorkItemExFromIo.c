/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x1403A9120
 * Callers:
 *     IoQueueWorkItemToNode @ 0x1403A9180 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpTypeToPriority @ 0x14027AA00 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x14027AA20 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x1402CD0A0 (ExpQueueWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 1);
}
