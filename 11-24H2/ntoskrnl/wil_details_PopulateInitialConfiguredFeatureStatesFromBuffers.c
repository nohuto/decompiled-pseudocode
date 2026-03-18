/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140C4A2D8
 * Callers:
 *     CmFcInitSystem0 @ 0x140C4A170 (CmFcInitSystem0.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404BDF84 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     RtlQueryFeatureConfigurationFromBuffers @ 0x1405E9174 (RtlQueryFeatureConfigurationFromBuffers.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1406FADEC (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults @ 0x140C4A398 (wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults.c)
 */

__int64 (__fastcall **__fastcall wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers(__int64 a1))()
{
  __int64 (__fastcall **v2)(); // rcx
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall **v4)(); // rbx
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  v2 = (__int64 (__fastcall **)())&wil_details_featureDescriptors_a;
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
        return (__int64 (__fastcall **)())wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults(v4);
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(v5, (__int64)&v7, &v6);
    v2 = v4 + 7;
    *(_QWORD *)*v4 = v6;
  }
  return result;
}
