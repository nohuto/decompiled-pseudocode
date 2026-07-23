/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1405D53C0
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x14049F07C (PopBatteryQueueWork.c)
 */

void PopRefreshEstimateAfterSpoilingDpc()
{
  PopBatteryQueueWork(1u);
}
