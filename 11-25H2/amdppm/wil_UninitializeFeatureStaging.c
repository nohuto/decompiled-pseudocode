/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x140024138
 * Callers:
 *     EvtDriverUnload @ 0x140023B20 (EvtDriverUnload.c)
 *     DriverEntry @ 0x14004214C (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( WPP_MAIN_CB.Reserved )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    WPP_MAIN_CB.Reserved = 0LL;
  }
  if ( g_wil_details_featureUsageProvider )
  {
    result = RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = 0;
  return result;
}
