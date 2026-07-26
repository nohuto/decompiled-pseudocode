/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x140095B88
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x140137464 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x140137670 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x1401376FC (wil_details_RegisterFeatureUsageProvider.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140137778 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x14018BC94 (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x14018BD58 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil_details_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= wil_details_featureDescriptors_z )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
