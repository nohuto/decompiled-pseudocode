/*
 * XREFs of PopBatteryQueueWork @ 0x1404A406C
 * Callers:
 *     PopBatteryIrpComplete @ 0x1404A3FF0 (PopBatteryIrpComplete.c)
 *     PopBatteryWakeDpc @ 0x1405D33F0 (PopBatteryWakeDpc.c)
 *     PopPowerAdapterIrpComplete @ 0x1405D3460 (PopPowerAdapterIrpComplete.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1405D34E0 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryAdd @ 0x14074E680 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14074E7B0 (PopBatteryRemove.c)
 *     PopPowerAdapterRecOverrideWnfCallback @ 0x14074F3C0 (PopPowerAdapterRecOverrideWnfCallback.c)
 *     PopPowerAdapterRemove @ 0x14074F4E0 (PopPowerAdapterRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x14074F7D0 (PopUsbErrorWNFNotificationCallback.c)
 *     PopSpoilBatteryEstimate @ 0x140A1E050 (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCurrentState @ 0x140A22C30 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
