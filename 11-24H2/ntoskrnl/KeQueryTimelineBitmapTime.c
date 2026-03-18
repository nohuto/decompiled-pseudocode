/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x140456314
 * Callers:
 *     PoEnergyContextCleanup @ 0x1408A9850 (PoEnergyContextCleanup.c)
 *     PsQueryProcessEnergyValues @ 0x1408ED600 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1409048E0 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyTrackerQuery @ 0x140AC9770 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
