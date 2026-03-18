/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1400D9008
 * Callers:
 *     DriverEntry @ 0x140085A60 (DriverEntry.c)
 *     DriverUnload @ 0x140085CD0 (DriverUnload.c)
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
