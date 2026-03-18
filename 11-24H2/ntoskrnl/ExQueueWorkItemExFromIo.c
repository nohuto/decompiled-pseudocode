/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x140483044
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140482FF0 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpTypeToPriority @ 0x1402A8C10 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1402A8C30 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x140324510 (ExpQueueWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 1);
}
