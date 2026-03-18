/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x14008512C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x14008503C (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1400465B8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x14007B4E0 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

_QWORD *wil_details_PopulateInitialConfiguredFeatureStates()
{
  _QWORD *v0; // rcx
  int v1; // eax
  __int64 v2; // rdx
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v0 = &wil_details_featureDescriptors_a;
  while ( 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(v0);
    v4 = result;
    if ( !result )
      break;
    v6 = 0LL;
    v5 = 0LL;
    v7 = 0LL;
    v8 = 0;
    if ( *((_BYTE *)result + 29) || *((_BYTE *)result + 30) )
    {
      v1 = -1073741275;
    }
    else
    {
      v1 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *, __int64))RtlQueryFeatureConfiguration)(
             *((unsigned int *)result + 6),
             (unsigned __int8)(*((_BYTE *)result + 28) - 2) > 1u,
             &v6,
             &v7,
             v5);
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
    wil_details_BuildFeatureStateCacheFromQueryResults(v1, (__int64)&v7, &v5);
    v0 = v4 + 7;
    *(_QWORD *)*v4 = v5;
  }
  return result;
}
