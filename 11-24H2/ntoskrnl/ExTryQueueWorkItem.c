/*
 * XREFs of ExTryQueueWorkItem @ 0x1403AB6D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1403AB6FC (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2);
}
