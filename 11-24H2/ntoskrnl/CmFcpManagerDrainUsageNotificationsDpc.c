/*
 * XREFs of CmFcpManagerDrainUsageNotificationsDpc @ 0x1403A6B40
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x1403A68B0 (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerDrainUsageNotificationsDpc(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 496));
}
