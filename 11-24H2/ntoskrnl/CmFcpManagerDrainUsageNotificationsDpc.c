/*
 * XREFs of CmFcpManagerDrainUsageNotificationsDpc @ 0x1404A9A20
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14021E9B0 (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerDrainUsageNotificationsDpc(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 496));
}
