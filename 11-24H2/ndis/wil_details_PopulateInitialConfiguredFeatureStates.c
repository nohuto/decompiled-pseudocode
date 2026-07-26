/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x14018BD58
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x14018BC94 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140095B88 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1401373FC (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

_QWORD *wil_details_PopulateInitialConfiguredFeatureStates()
{
  int **v0; // rcx
  NTSTATUS v1; // eax
  __int64 v2; // rdx
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  ULONGLONG ChangeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  v0 = &wil_details_featureDescriptors_a;
  while ( 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(v0);
    v4 = result;
    if ( !result )
      break;
    ChangeStamp = 0LL;
    v5 = 0LL;
    *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
    FeatureConfiguration.VariantPayload = 0;
    if ( *((_BYTE *)result + 29) || *((_BYTE *)result + 30) )
    {
      v1 = -1073741275;
    }
    else
    {
      v1 = RtlQueryFeatureConfiguration(
             *((_DWORD *)result + 6),
             (RTL_FEATURE_CONFIGURATION_TYPE)((unsigned __int8)(*((_BYTE *)result + 28) - 2) > 1u),
             &ChangeStamp,
             &FeatureConfiguration);
      if ( v1 == -2147483614 )
      {
        v5 = 518LL;
        v2 = 518LL;
        do
        {
          *(_QWORD *)*v4 = v2;
          result = wil_details_FeatureDescriptors_SkipPadding(v4 + 7);
          v4 = result;
        }
        while ( result );
        return result;
      }
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(v1, (__int64)&FeatureConfiguration, &v5);
    v0 = (int **)(v4 + 7);
    *(_QWORD *)*v4 = v5;
  }
  return result;
}
