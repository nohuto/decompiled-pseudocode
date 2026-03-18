/*
 * XREFs of SmQueueExWorkItem @ 0x1404AA2A8
 * Callers:
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1404BAE90 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall SmQueueExWorkItem(struct _WORK_QUEUE_ITEM *a1, WORK_QUEUE_TYPE a2, __int64 a3)
{
  if ( a3 )
    ExQueueWorkItemToPartition((ULONG_PTR)a1, a2, 0xFFFFFFFF, a3);
  else
    ExQueueWorkItem(a1, a2);
}
