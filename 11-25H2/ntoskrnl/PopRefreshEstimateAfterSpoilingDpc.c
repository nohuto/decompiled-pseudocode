/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1405D34E0
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x1404A406C (PopBatteryQueueWork.c)
 */

void PopRefreshEstimateAfterSpoilingDpc()
{
  PopBatteryQueueWork(1u);
}
