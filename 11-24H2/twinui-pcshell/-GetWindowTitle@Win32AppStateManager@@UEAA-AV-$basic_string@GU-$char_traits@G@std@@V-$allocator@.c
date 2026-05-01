/*
 * XREFs of ?GetWindowTitle@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180574ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x180575840 (-TryGetWindowFromAppId@ExeDataCache@@QEAA-AV-$optional@PEAUHWND__@@@std@@AEBV-$basic_string@GU-$.c)
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x180576B80 (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32AppStateManager::GetWindowTitle(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // rbx
  __int64 v6; // [rsp+28h] [rbp-50h] BYREF
  char v7; // [rsp+30h] [rbp-48h]
  void *v8[4]; // [rsp+38h] [rbp-40h] BYREF

  v6 = a2;
  v4 = a1 + 96;
  std::wstring::wstring((char **)v8, a3);
  ExeDataCache::TryGetWindowFromAppId(v4, &v6, v8);
  std::wstring::_Tidy_deallocate(v8);
  if ( v7 )
  {
    GetDisplayNameFromWindow(a2, v6);
  }
  else
  {
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
  }
  return a2;
}
