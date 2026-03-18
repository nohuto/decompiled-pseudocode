/*
 * XREFs of wil_details_RegisterFeatureStagingChangeNotification @ 0x1407D612C
 * Callers:
 *     CmInitSystem0 @ 0x140C483D8 (CmInitSystem0.c)
 * Callees:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1404CBF20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 wil_details_RegisterFeatureStagingChangeNotification()
{
  __int64 result; // rax

  result = RtlRegisterFeatureConfigurationChangeNotification(
             (__int64)wil_details_ReevaluateOnFeatureConfigurationChange,
             0LL,
             0LL,
             (__int64)&g_wil_details_featureChangeNotification);
  if ( (_DWORD)result )
    g_wil_details_featureChangeNotification = 0LL;
  return result;
}
