/*
 * XREFs of CmFcpManagerPublishUsageTimerRoutine @ 0x14065CD90
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x1403B8E30 (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerPublishUsageTimerRoutine(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 1616));
}
