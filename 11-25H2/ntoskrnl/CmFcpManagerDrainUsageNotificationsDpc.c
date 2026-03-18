/*
 * XREFs of CmFcpManagerDrainUsageNotificationsDpc @ 0x1403B9040
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x1403B8E30 (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerDrainUsageNotificationsDpc(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 496));
}
