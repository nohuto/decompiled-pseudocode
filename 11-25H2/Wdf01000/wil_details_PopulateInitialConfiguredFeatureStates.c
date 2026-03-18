/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x1400E519C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1400E50AC (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140085EF4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1400D9060 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

const wil_details_FeatureDescriptor *wil_details_PopulateInitialConfiguredFeatureStates()
{
  const wil_details_FeatureDescriptor *v0; // rcx
  int v1; // eax
  __int64 v2; // rdx
  const wil_details_FeatureDescriptor *v3; // rax
  const wil_details_FeatureDescriptor *v4; // rbx
  wil_details_FeatureStateCache result; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 changeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION featureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  v0 = wil_details_featureDescriptors_a;
  while ( 1 )
  {
    v3 = wil_details_FeatureDescriptors_SkipPadding(v0);
    v4 = v3;
    if ( !v3 )
      break;
    changeStamp = 0LL;
    result.exchange64 = 0LL;
    *(_QWORD *)&featureConfiguration.FeatureId = 0LL;
    featureConfiguration.VariantPayload = 0;
    if ( v3->isAlwaysDisabled || v3->isAlwaysEnabled )
    {
      v1 = -1073741275;
    }
    else
    {
      v1 = RtlQueryFeatureConfiguration(
             v3->featureId,
             (unsigned __int8)(v3->changeTime - 2) > 1u,
             &changeStamp,
             &featureConfiguration);
      if ( v1 == -2147483614 )
      {
        result.exchange64 = 518LL;
        v2 = 518LL;
        do
        {
          v4->featureStateCache->exchange64 = v2;
          v3 = wil_details_FeatureDescriptors_SkipPadding(v4 + 1);
          v4 = v3;
        }
        while ( v3 );
        return v3;
      }
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(v1, &featureConfiguration, &result);
    v0 = v4 + 1;
    v4->featureStateCache->exchange64 = result.exchange64;
  }
  return v3;
}
