/*
 * XREFs of PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x14074D720
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 */

__int64 PopPowerAggregatorScreenOffActiveToScreenOffStateHandler()
{
  if ( PopPowerAggregatorUmpoInitialized )
    PopPowerAggregatorEnterScreenOff();
  return 0LL;
}
