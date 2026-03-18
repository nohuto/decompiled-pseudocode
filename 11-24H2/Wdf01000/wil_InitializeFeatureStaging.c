/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1400E50AC
 * Callers:
 *     DriverEntry @ 0x140085A50 (DriverEntry.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140085EE4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1400D90C8 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1400E519C (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 __fastcall wil_InitializeFeatureStaging()
{
  int v0; // ebx
  const wil_details_FeatureDescriptor *i; // rcx
  const wil_details_FeatureDescriptor *v2; // rax
  __int64 result; // rax
  unsigned __int64 initialChangeStamp; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( g_wil_details_isFeatureStagingInitialized )
    return 0LL;
  g_wil_details_isFeatureStagingInitialized = 1;
  initialChangeStamp = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = wil_details_featureDescriptors_a; ; i = v2 + 1 )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      break;
    if ( !v2->isAlwaysDisabled && !v2->isAlwaysEnabled && !v2->changeTime )
    {
      if ( (unsigned int)RtlRegisterFeatureConfigurationChangeNotification(
                           wil_details_ReevaluateOnFeatureConfigurationChange,
                           0LL,
                           &initialChangeStamp,
                           &g_wil_details_featureChangeNotification) )
        g_wil_details_featureChangeNotification = 0LL;
      else
        v0 = 1;
      break;
    }
  }
  g_wil_details_recordFeatureUsage = (void (__fastcall *)(unsigned int, wil_details_ServiceReportingKind, unsigned int, wil_details_FeatureReportingCache *, wil_details_RecordUsageResult *))wil_details_RecordFeatureUsageReporting;
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
