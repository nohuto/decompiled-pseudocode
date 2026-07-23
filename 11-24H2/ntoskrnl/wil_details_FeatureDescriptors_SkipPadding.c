/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1404B90F4
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1406F72C4 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1407D65F0 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x1407D66A0 (wil_details_RegisterFeatureUsageProvider.c)
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x1407D6714 (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A9FE68 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140C4C474 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults @ 0x140C4C534 (wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall wil_details_FeatureDescriptors_SkipPadding(__int64 *a1)
{
  while ( 1 )
  {
    if ( a1 >= &wil_details_featureDescriptors_z )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
