/*
 * XREFs of CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x140667170
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14021E9B0 (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerRetryUsageNotificationsTimerRoutine(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 568));
}
