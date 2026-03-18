/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x140091B14
 * Callers:
 *     DriverUnload @ 0x14004B760 (DriverUnload.c)
 *     DriverEntry @ 0x140119078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( g_wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    g_wil_details_featureChangeNotification = 0LL;
  }
  if ( g_wil_details_featureUsageProvider )
  {
    result = RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  g_wil_details_isFeatureStagingInitialized = 0;
  return result;
}
