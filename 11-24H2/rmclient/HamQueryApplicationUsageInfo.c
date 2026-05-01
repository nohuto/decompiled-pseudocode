/*
 * XREFs of HamQueryApplicationUsageInfo @ 0x18001AD90
 * Callers:
 *     <none>
 * Callees:
 *     ?HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z @ 0x18000B890 (-HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z.c)
 *     HampUsageInfoRegistryQuery @ 0x18000BAD0 (HampUsageInfoRegistryQuery.c)
 *     ?HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180010478 (-HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

__int64 __fastcall HamQueryApplicationUsageInfo(const WCHAR *a1, void *a2, __int64 a3)
{
  HKEY v3; // rdi
  __int64 v6; // r8
  int v7; // ebx
  int v8; // eax
  __int128 v9; // xmm1
  UINT32 packageRelativeApplicationIdLength; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+34h] [rbp-CCh] BYREF
  HKEY v13; // [rsp+38h] [rbp-C8h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v15; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v16; // [rsp+58h] [rbp-A8h]
  WCHAR packageFamilyName[72]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0LL;
  hKey = 0LL;
  v13 = 0LL;
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  v15 = 0LL;
  v16 = 0LL;
  if ( ParseApplicationUserModelId(
         a1,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId) )
  {
    v7 = -1073741585;
  }
  else
  {
    v8 = HampSystemOpenAppRegistryKey(packageFamilyName, a2, v6, &v13);
    v3 = v13;
    v7 = v8;
    if ( v8 >= 0 )
    {
      v7 = HampSystemOpenKey(v13, L"HAM\\AUI", 1u, &hKey);
      if ( v7 >= 0 )
      {
        v7 = HampUsageInfoRegistryQuery(hKey, packageRelativeApplicationId, &v15);
        if ( v7 >= 0 )
        {
          v7 = 0;
          v9 = v16;
          *(__m128i *)a3 = v15;
          *(_OWORD *)(a3 + 16) = v9;
        }
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( v3 )
    RegCloseKey(v3);
  return (unsigned int)v7;
}
