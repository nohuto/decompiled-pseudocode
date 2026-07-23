/*
 * XREFs of CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement @ 0x1406F9CC4
 * Callers:
 *     CmFcManagerFlushFeatureUsage @ 0x140AA3DAC (CmFcManagerFlushFeatureUsage.c)
 * Callees:
 *     <none>
 */

char __fastcall CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement(char a1, char a2)
{
  if ( a1 )
    return (a2 != 0) + 2;
  else
    return a2 != 0;
}
