/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x140482214
 * Callers:
 *     IoQueueWorkItemToNode @ 0x1404821C0 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402E6800 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1403AD260 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1403AD280 (ExpValidateWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 1);
}
