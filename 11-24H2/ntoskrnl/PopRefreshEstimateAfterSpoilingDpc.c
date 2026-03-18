/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1405D7E40
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x1404A42EC (PopBatteryQueueWork.c)
 */

void PopRefreshEstimateAfterSpoilingDpc()
{
  PopBatteryQueueWork(1u);
}
