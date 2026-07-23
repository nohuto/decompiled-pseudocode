/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140C4C474
 * Callers:
 *     CmFcInitSystem0 @ 0x140C4C294 (CmFcInitSystem0.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404B90F4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     RtlQueryFeatureConfigurationFromBuffers @ 0x1405E66C4 (RtlQueryFeatureConfigurationFromBuffers.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1406F8A2C (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults @ 0x140C4C534 (wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults.c)
 */

__int64 *__fastcall wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 *result; // rax
  __int64 *v4; // rbx
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  v2 = (__int64 *)&wil_details_featureDescriptors_a;
  while ( 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(v2);
    v4 = result;
    if ( !result )
      break;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0;
    if ( *((_BYTE *)result + 29) || *((_BYTE *)result + 30) )
    {
      v5 = -1073741275;
    }
    else
    {
      v5 = RtlQueryFeatureConfigurationFromBuffers(
             a1,
             *((_DWORD *)result + 6),
             (unsigned __int8)(*((_BYTE *)result + 28) - 2) > 1u,
             &v7);
      if ( v5 == -2147483614 )
        return (__int64 *)wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults(v4);
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(v5, (__int64)&v7, &v6);
    v2 = v4 + 7;
    *(_QWORD *)*v4 = v6;
  }
  return result;
}
