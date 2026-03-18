/*
 * XREFs of ExpSvmDpcRoutine @ 0x14064D980
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall ExpSvmDpcRoutine(__int64 a1, unsigned int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(ExpSvmWorkQueues + 104LL * a2), HyperCriticalWorkQueue);
}
