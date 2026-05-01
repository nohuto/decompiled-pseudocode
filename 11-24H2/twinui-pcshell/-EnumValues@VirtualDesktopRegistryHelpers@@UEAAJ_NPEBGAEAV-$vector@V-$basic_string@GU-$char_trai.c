/*
 * XREFs of ?EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800F08C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9AEC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$_Emplace_one_at_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1802C1C3C (--$_Emplace_one_at_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall VirtualDesktopRegistryHelpers::EnumValues(__int64 a1, char a2, const WCHAR *a3, __int64 a4)
{
  HKEY *v7; // rdi
  HKEY *v8; // rbx
  HKEY *v9; // rax
  LSTATUS v10; // eax
  unsigned int v11; // ebx
  DWORD i; // ebx
  unsigned int v14; // eax
  const char *v15; // r9
  unsigned int v16; // ebx
  unsigned int v17; // [rsp+20h] [rbp-298h]
  DWORD cchValueName; // [rsp+40h] [rbp-278h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-270h] BYREF
  void *v20[4]; // [rsp+50h] [rbp-268h] BYREF
  WCHAR ValueName[264]; // [rsp+70h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  if ( a2 )
  {
    v8 = (HKEY *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 24) )
    {
      v7 = (HKEY *)(a1 + 16);
      goto LABEL_6;
    }
    return 0LL;
  }
  v7 = (HKEY *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 16) )
    return 0LL;
  v8 = (HKEY *)(a1 + 24);
LABEL_6:
  hKey = 0LL;
  v9 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  if ( !a2 )
    v8 = v7;
  v10 = RegOpenKeyW(*v8, a3, v9);
  v11 = v10;
  if ( v10 )
  {
    if ( v10 > 0 )
      v11 = (unsigned __int16)v10 | 0x80070000;
    if ( hKey )
      RegCloseKey(hKey);
    return v11;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      cchValueName = 260;
      v14 = RegEnumValueW(hKey, i, ValueName, &cchValueName, 0LL, 0LL, 0LL, 0LL);
      if ( v14 )
        break;
      std::wstring::wstring((char **)v20, ValueName);
      std::vector<std::wstring>::_Emplace_one_at_back<std::wstring>(a4, v20);
      std::wstring::_Tidy_deallocate(v20);
    }
    v15 = 0LL;
    if ( v14 != 259 )
      v15 = (const char *)v14;
    if ( (_DWORD)v15 )
    {
      v16 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x96,
              (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
              v15,
              v17);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
      return v16;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
      return 0LL;
    }
  }
}
