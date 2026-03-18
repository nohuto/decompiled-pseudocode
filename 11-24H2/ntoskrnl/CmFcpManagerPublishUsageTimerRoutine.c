/*
 * XREFs of CmFcpManagerPublishUsageTimerRoutine @ 0x140668860
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x1403A68B0 (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerPublishUsageTimerRoutine(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 1616));
}
