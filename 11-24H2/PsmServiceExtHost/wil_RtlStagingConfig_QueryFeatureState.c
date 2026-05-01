/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x18007731C
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18007127C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1800793A4 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_GetCurrentVariantState @ 0x1800794E0 (wil_details_GetCurrentVariantState.c)
 * Callees:
 *     wil_details_RtlQueryFeatureConfiguration @ 0x180077738 (wil_details_RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  unsigned int v7; // ebx
  int v8; // edx
  unsigned int v9; // ecx
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v7 = 0;
  v8 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *))wil_details_RtlQueryFeatureConfiguration)(
         a2,
         a3 == 0,
         &v11,
         &v12);
  if ( v8 )
  {
    if ( v8 != 279 )
      goto LABEL_6;
    v9 = HIDWORD(v12);
    v7 = 1;
  }
  else
  {
    v9 = HIDWORD(v12);
    v7 = 1;
    *(_DWORD *)a1 = (HIDWORD(v12) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v9) & 0x3F;
    *(_DWORD *)(a1 + 12) = v13;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v9 >> 14;
    *(_DWORD *)(a1 + 20) = (v9 >> 6) & 1;
  }
  *(_DWORD *)(a1 + 16) = (v9 >> 7) & 1;
LABEL_6:
  if ( a4 )
  {
    LOBYTE(v4) = v8 != -2147483614;
    *a4 = v4;
  }
  return v7;
}
