/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1400966B0
 * Callers:
 *     DriverEntry @ 0x14009603C (DriverEntry.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x140079488 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1400967C4 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  int v0; // ebx
  _UNKNOWN **i; // rax
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( g_wil_details_isFeatureStagingInitialized )
    return 0LL;
  g_wil_details_isFeatureStagingInitialized = 1;
  v3 = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = &wil_details_featureDescriptors_a; i < (_UNKNOWN **)&wil_details_featureDescriptors_z; ++i )
  {
    if ( *i )
    {
LABEL_15:
      if ( i )
      {
        if ( *((_BYTE *)i + 29) || *((_BYTE *)i + 30) || *((_BYTE *)i + 28) )
        {
          for ( i += 7; i < (_UNKNOWN **)&wil_details_featureDescriptors_z; ++i )
          {
            if ( *i )
              goto LABEL_15;
          }
        }
        else if ( (unsigned int)RtlRegisterFeatureConfigurationChangeNotification(
                                  wil_details_ReevaluateOnFeatureConfigurationChange,
                                  0LL,
                                  &v3,
                                  &WPP_MAIN_CB.DeviceLock) )
        {
          *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock = 0LL;
        }
        else
        {
          v0 = 1;
        }
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
