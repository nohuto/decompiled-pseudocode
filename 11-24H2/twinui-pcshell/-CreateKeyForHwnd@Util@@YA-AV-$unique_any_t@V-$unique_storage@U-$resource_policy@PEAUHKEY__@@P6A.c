/*
 * XREFs of ?CreateKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x18064B030
 * Callers:
 *     ?SetValue@InProcPropertyStore@Util@@UEAAX_KAEBUhstring@winrt@@1@Z @ 0x180650F30 (-SetValue@InProcPropertyStore@Util@@UEAAX_KAEBUhstring@winrt@@1@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x180361AC4 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     ?GetKeyPathForHwnd@Util@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@Z @ 0x18064C9B0 (-GetKeyPathForHwnd@Util@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=2
HKEY *__fastcall Util::CreateKeyForHwnd(HKEY *a1, __int64 a2)
{
  HKEY *phkResult; // rsi
  __int64 KeyPathForHwnd; // rax
  unsigned int Key; // eax
  void *v8[4]; // [rsp+78h] [rbp-30h] BYREF

  *a1 = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(a1);
  KeyPathForHwnd = Util::GetKeyPathForHwnd(v8, a2);
  if ( *(_QWORD *)(KeyPathForHwnd + 24) > 7uLL )
    KeyPathForHwnd = *(_QWORD *)KeyPathForHwnd;
  Key = RegCreateKeyExW(HKEY_CURRENT_USER, (LPCWSTR)KeyPathForHwnd, 0, 0LL, 1u, 0xF003Fu, 0LL, phkResult, 0LL);
  winrt::check_win32<unsigned long>((winrt::impl *)Key);
  std::wstring::_Tidy_deallocate(v8);
  return a1;
}
