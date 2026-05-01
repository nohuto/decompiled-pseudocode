/*
 * XREFs of ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180574C40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180574DD4 (-GetExePathFromAppId@ExePathToAppIdMapping@@QEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x180575840 (-TryGetWindowFromAppId@ExeDataCache@@QEAA-AV-$optional@PEAUHWND__@@@std@@AEBV-$basic_string@GU-$.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805769D4 (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x180576B80 (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall Win32AppStateManager::GetDisplayName(__int64 a1, _OWORD *a2, _WORD *a3)
{
  const WCHAR *v5; // rdx
  __int128 v7; // [rsp+28h] [rbp-21h] BYREF
  __m128i si128; // [rsp+38h] [rbp-11h]
  void *v9; // [rsp+48h] [rbp-1h] BYREF
  char v10; // [rsp+50h] [rbp+7h]
  __int64 v11; // [rsp+58h] [rbp+Fh]
  LPCWSTR pszPath[4]; // [rsp+68h] [rbp+1Fh] BYREF

  v9 = a2;
  std::wstring::wstring((char **)&v7, a3);
  ExePathToAppIdMapping::GetExePathFromAppId(a1 + 120, pszPath, &v7);
  if ( !pszPath[2] )
  {
    ExeDataCache::TryGetWindowFromAppId(a1 + 96, &v9, &v7);
    if ( v10 )
    {
      GetDisplayNameFromWindow(&v9, v9);
      if ( v11 )
      {
        std::wstring::wstring((__int64)a2, (__int64)&v9);
        std::wstring::_Tidy_deallocate(&v9);
        goto LABEL_10;
      }
      std::wstring::_Tidy_deallocate(&v9);
    }
    *a2 = v7;
    a2[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v7) = 0;
    goto LABEL_10;
  }
  v5 = (const WCHAR *)pszPath;
  if ( pszPath[3] > (LPCWSTR)7 )
    v5 = pszPath[0];
  GetDisplayNameFromExePath(a2, v5);
LABEL_10:
  std::wstring::_Tidy_deallocate((void **)pszPath);
  std::wstring::_Tidy_deallocate((void **)&v7);
  return a2;
}
