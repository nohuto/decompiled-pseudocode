/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x14007B488
 * Callers:
 *     DriverCleanup @ 0x14007A960 (DriverCleanup.c)
 *     DriverEntry @ 0x14007AA30 (DriverEntry.c)
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
