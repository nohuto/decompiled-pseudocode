/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1404BDF84
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1406F9684 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1407D60B0 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x1407D61A0 (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140AA4B68 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140C4A2D8 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults @ 0x140C4A398 (wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall wil_details_FeatureDescriptors_SkipPadding(__int64 (__fastcall **a1)()))()
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
