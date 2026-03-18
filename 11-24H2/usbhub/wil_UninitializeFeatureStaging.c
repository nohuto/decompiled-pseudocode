/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x140077638
 * Callers:
 *     UsbhDriverUnload @ 0x14004F680 (UsbhDriverUnload.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    WPP_MAIN_CB.Dpc.DeferredContext = 0LL;
  }
  if ( g_wil_details_featureUsageProvider )
  {
    result = RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  WPP_MAIN_CB.ActiveThreadCount = 0;
  return result;
}
