/*
 * XREFs of wil_details_UnregisterFeatureStagingChangeNotification @ 0x14000D410
 * Callers:
 *     CiDriverUnload @ 0x14000D350 (CiDriverUnload.c)
 * Callees:
 *     <none>
 */

__int64 wil_details_UnregisterFeatureStagingChangeNotification()
{
  __int64 result; // rax

  if ( g_wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    g_wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
