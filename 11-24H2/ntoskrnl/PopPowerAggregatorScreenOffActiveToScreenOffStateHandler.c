/*
 * XREFs of PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x140759B70
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerAggregatorEnterScreenOff @ 0x140902758 (PopPowerAggregatorEnterScreenOff.c)
 */

__int64 PopPowerAggregatorScreenOffActiveToScreenOffStateHandler()
{
  if ( PopPowerAggregatorUmpoInitialized )
    PopPowerAggregatorEnterScreenOff();
  return 0LL;
}
