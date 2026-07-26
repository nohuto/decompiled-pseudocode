/*
 * XREFs of wil_InitializeFeatureStaging @ 0x14018BC94
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140095B88 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x140137464 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x1401376FC (wil_details_RegisterFeatureUsageProvider.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x14018BD58 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  int v0; // ebx
  int **i; // rcx
  _BYTE *v2; // rax
  __int64 result; // rax
  ULONGLONG ObservedChangeStamp; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( g_wil_details_isFeatureStagingInitialized )
    return 0LL;
  g_wil_details_isFeatureStagingInitialized = 1;
  ObservedChangeStamp = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v2 + 56) )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      break;
    if ( !v2[29] && !v2[30] && !v2[28] )
    {
      if ( RtlRegisterFeatureConfigurationChangeNotification(
             (PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK)wil_details_ReevaluateOnFeatureConfigurationChange,
             0LL,
             &ObservedChangeStamp,
             &g_wil_details_featureChangeNotification) )
      {
        g_wil_details_featureChangeNotification = 0LL;
      }
      else
      {
        v0 = 1;
      }
      break;
    }
  }
  result = wil_details_RegisterFeatureUsageProvider();
  if ( !(_DWORD)result )
    return 0LL;
  if ( v0 )
    return 0LL;
  return result;
}
