/*
 * XREFs of wil_InitializeFeatureStaging @ 0x140196C88
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x14009F738 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x14014254C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x140196D78 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  int v0; // ebx
  _QWORD *i; // rcx
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
  for ( i = &wil_details_featureDescriptors_a; ; i = v2 + 56 )
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
  g_wil_details_recordFeatureUsage = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))wil_details_RecordFeatureUsageReporting;
  result = RtlRegisterFeatureUsageProvider(
             wil_details_OnFeatureUsageProviderFlushNotification,
             0LL,
             &g_wil_details_featureUsageProvider);
  if ( !(_DWORD)result )
    return 0LL;
  g_wil_details_featureUsageProvider = 0LL;
  if ( v0 )
    return 0LL;
  return result;
}
