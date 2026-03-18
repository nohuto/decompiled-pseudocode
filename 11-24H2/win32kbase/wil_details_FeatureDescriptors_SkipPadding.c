/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x14013A044
 * Callers:
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1402C34B0 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1402C3E9C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates @ 0x1402C3F14 (wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1402C3FA4 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x1402E3C00 (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1402E3CF0 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil_details_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( a1 < wil_details_featureDescriptors_z )
  {
    if ( *a1 )
      return a1;
    ++a1;
  }
  return 0LL;
}
