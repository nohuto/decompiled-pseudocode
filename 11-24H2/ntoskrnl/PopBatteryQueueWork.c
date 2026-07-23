/*
 * XREFs of PopBatteryQueueWork @ 0x14049F07C
 * Callers:
 *     PopBatteryIrpComplete @ 0x14049F000 (PopBatteryIrpComplete.c)
 *     PopBatteryWakeDpc @ 0x1405D52D0 (PopBatteryWakeDpc.c)
 *     PopPowerAdapterIrpComplete @ 0x1405D5340 (PopPowerAdapterIrpComplete.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1405D53C0 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryAdd @ 0x140759340 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x140759700 (PopBatteryRemove.c)
 *     PopBatteryUpdateTestExempt @ 0x140759914 (PopBatteryUpdateTestExempt.c)
 *     PopPowerAdapterRecOverrideWnfCallback @ 0x14075A940 (PopPowerAdapterRecOverrideWnfCallback.c)
 *     PopPowerAdapterRemove @ 0x14075AD90 (PopPowerAdapterRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x14075B080 (PopUsbErrorWNFNotificationCallback.c)
 *     PopSpoilBatteryEstimate @ 0x140A1BA70 (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCurrentState @ 0x140A200A0 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
