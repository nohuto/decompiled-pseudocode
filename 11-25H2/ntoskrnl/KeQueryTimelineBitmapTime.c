/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x1404560B0
 * Callers:
 *     PsQueryProcessEnergyValues @ 0x1408DE290 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextCleanup @ 0x1408E11B4 (PoEnergyContextCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x140960110 (PopEtEnergyTrackerQuery.c)
 *     PoEnergyContextUpdateComponentPower @ 0x140962FE8 (PoEnergyContextUpdateComponentPower.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
