/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x140025288
 * Callers:
 *     EvtDriverUnload @ 0x140024C70 (EvtDriverUnload.c)
 *     DriverEntry @ 0x14004314C (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 0LL;
  }
  if ( g_wil_details_featureUsageProvider )
  {
    result = RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  g_wil_details_isFeatureStagingInitialized = 0;
  return result;
}
