/*
 * XREFs of ?RegQueryEnabledForTest@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAK@Z @ 0x14006D81C
 * Callers:
 *     ?ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x14006DD68 (-ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::RegQueryEnabledForTest(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this,
        unsigned int *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+48h] [rbp-B8h]
  const wchar_t *v7; // [rsp+50h] [rbp-B0h]
  int *v8; // [rsp+58h] [rbp-A8h]
  int v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  int v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  int v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  __int128 v15; // [rsp+90h] [rbp-70h]
  __int128 v16; // [rsp+A0h] [rbp-60h]
  _OWORD v17[6]; // [rsp+B0h] [rbp-50h] BYREF
  int v18; // [rsp+110h] [rbp+10h]
  wchar_t v19; // [rsp+114h] [rbp+14h]

  v6 = 292;
  *(_DWORD *)this = 0;
  v17[0] = *(_OWORD *)L"\\Registry\\Machine\\Software\\Microsoft\\Shell\\Docking";
  v18 = *(_DWORD *)L"ng";
  v17[2] = *(_OWORD *)L"e\\Software\\Microsoft\\Shell\\Docking";
  v17[1] = *(_OWORD *)L"y\\Machine\\Software\\Microsoft\\Shell\\Docking";
  v19 = aRegistryMachin_0[50];
  v17[4] = *(_OWORD *)L"soft\\Shell\\Docking";
  v17[3] = *(_OWORD *)L"re\\Microsoft\\Shell\\Docking";
  v7 = L"EnabledForTest";
  v15 = 0LL;
  v4 = 0;
  v16 = 0LL;
  v5 = 0LL;
  v17[5] = *(_OWORD *)L"ll\\Docking";
  v8 = &v4;
  v9 = 0x4000000;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  result = RtlQueryRegistryValuesEx(0LL, v17, &v5, 0LL, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 )
      return 0LL;
  }
  else
  {
    *(_DWORD *)this = v4;
  }
  return result;
}
