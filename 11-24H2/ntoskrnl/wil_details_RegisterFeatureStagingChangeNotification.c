/*
 * XREFs of wil_details_RegisterFeatureStagingChangeNotification @ 0x1407D666C
 * Callers:
 *     CmFcInitSystem1 @ 0x140C4C340 (CmFcInitSystem1.c)
 * Callees:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1404C5390 (RtlRegisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS wil_details_RegisterFeatureStagingChangeNotification()
{
  NTSTATUS result; // eax

  result = RtlRegisterFeatureConfigurationChangeNotification(
             (PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK)wil_details_ReevaluateOnFeatureConfigurationChange,
             0LL,
             0LL,
             &g_wil_details_featureChangeNotification);
  if ( result )
    g_wil_details_featureChangeNotification = 0LL;
  return result;
}
