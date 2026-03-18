/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x14005169C
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1400776F8 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1400778C0 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14007793C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x140078078 (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x140078168 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
