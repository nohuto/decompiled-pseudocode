/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x18009F48C
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x18009F358 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x18009F560 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // ecx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v5 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *))RtlQueryFeatureConfiguration)(a2, a3 == 0, &v8, &v9);
  if ( !v5 )
  {
    v7 = HIDWORD(v9);
    *(_DWORD *)a1 = (HIDWORD(v9) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v7) & 0x3F;
    *(_DWORD *)(a1 + 12) = v10;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v7 >> 14;
    *(_DWORD *)(a1 + 20) = (v7 >> 6) & 1;
    *(_DWORD *)(a1 + 16) = (v7 >> 7) & 1;
    return 1;
  }
  if ( v5 == 279 )
  {
    *(_DWORD *)(a1 + 16) = (HIDWORD(v9) >> 7) & 1;
    return 1;
  }
  return v4;
}
