/*
 * XREFs of CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement @ 0x1406FC084
 * Callers:
 *     CmFcManagerFlushFeatureUsage @ 0x140AA8D00 (CmFcManagerFlushFeatureUsage.c)
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
