/*
 * XREFs of SmQueueExWorkItem @ 0x1404A44A4
 * Callers:
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1404B5D30 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall SmQueueExWorkItem(struct _WORK_QUEUE_ITEM *a1, WORK_QUEUE_TYPE a2, __int64 a3)
{
  if ( a3 )
    ExQueueWorkItemToPartition((ULONG_PTR)a1, a2, 0xFFFFFFFF, a3);
  else
    ExQueueWorkItem(a1, a2);
}
