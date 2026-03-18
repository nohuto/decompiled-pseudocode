/*
 * XREFs of PopGetMonitorReasonFromPowerEventId @ 0x1404B0130
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x14074CE00 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x14074D254 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x14074D990 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140AA4520 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetMonitorReasonFromPowerEventId(int a1)
{
  unsigned int v1; // edx
  unsigned int i; // eax

  v1 = 0;
  for ( i = 0; i < 0x3A; ++i )
  {
    if ( PopMonitorEventMapping[2 * i + 1] == a1 )
      return (unsigned int)PopMonitorEventMapping[2 * i];
  }
  return v1;
}
