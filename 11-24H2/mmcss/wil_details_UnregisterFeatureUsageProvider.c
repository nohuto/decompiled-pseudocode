/*
 * XREFs of wil_details_UnregisterFeatureUsageProvider @ 0x14000D440
 * Callers:
 *     CiDriverUnload @ 0x14000D350 (CiDriverUnload.c)
 * Callees:
 *     <none>
 */

__int64 wil_details_UnregisterFeatureUsageProvider()
{
  __int64 result; // rax

  if ( g_wil_details_featureUsageProvider )
  {
    result = RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  return result;
}
