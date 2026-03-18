/*
 * XREFs of PopBatteryQueueWork @ 0x1404A42EC
 * Callers:
 *     PopBatteryIrpComplete @ 0x1404A4270 (PopBatteryIrpComplete.c)
 *     PopBatteryWakeDpc @ 0x1405D7D50 (PopBatteryWakeDpc.c)
 *     PopPowerAdapterIrpComplete @ 0x1405D7DC0 (PopPowerAdapterIrpComplete.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1405D7E40 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryAdd @ 0x14075AC50 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14075B010 (PopBatteryRemove.c)
 *     PopPowerAdapterRecOverrideWnfCallback @ 0x14075BC40 (PopPowerAdapterRecOverrideWnfCallback.c)
 *     PopPowerAdapterRemove @ 0x14075BD60 (PopPowerAdapterRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x14075C050 (PopUsbErrorWNFNotificationCallback.c)
 *     PopSpoilBatteryEstimate @ 0x140A26FF0 (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCurrentState @ 0x140A2C178 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
