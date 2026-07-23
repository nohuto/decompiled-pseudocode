/*
 * XREFs of CmFcpManagerPublishUsageTimerRoutine @ 0x140667150
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14021E9B0 (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerPublishUsageTimerRoutine(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 1688));
}
