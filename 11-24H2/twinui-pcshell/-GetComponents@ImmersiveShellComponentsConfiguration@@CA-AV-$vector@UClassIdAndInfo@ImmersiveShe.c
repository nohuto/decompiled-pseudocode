/*
 * XREFs of ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803EBFDC
 * Callers:
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803DFDA4 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803DF438 (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 *     ??$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@Z @ 0x1803DF500 (--$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_1.c)
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG0@Z @ 0x1803DFA04 (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG.c)
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG0@Z @ 0x1803DFAB8 (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ImmersiveShellComponentsConfiguration::GetComponents(
        __int64 a1,
        HKEY a2,
        const unsigned __int16 *a3,
        HKEY a4)
{
  HKEY *v6; // rax
  const WCHAR *v7; // rdx
  __int64 v8; // r8
  const WCHAR *v9; // rbx
  HKEY *phkResult; // rax
  HKEY hKey; // [rsp+30h] [rbp-69h] BYREF
  HKEY v13; // [rsp+38h] [rbp-61h] BYREF
  int v14; // [rsp+40h] [rbp-59h]
  const unsigned __int16 *v15[2]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v16[4]; // [rsp+58h] [rbp-41h] BYREF
  __int128 v17; // [rsp+78h] [rbp-21h] BYREF
  LPCWSTR v18[4]; // [rsp+88h] [rbp-11h] BYREF
  LPCWSTR lpSubKey[4]; // [rsp+A8h] [rbp+Fh] BYREF

  v16[3] = a1;
  v15[0] = a3;
  hKey = a4;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v14 = 1;
  wil::str_concat<std::wstring,unsigned short const * &,unsigned short const (&)[16],unsigned short const * &>(
    (__int64)lpSubKey,
    v15,
    (__int64)a3,
    (const unsigned __int16 **)&hKey);
  v13 = 0LL;
  v6 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v13);
  v7 = (const WCHAR *)lpSubKey;
  if ( lpSubKey[3] > (LPCWSTR)7 )
    v7 = lpSubKey[0];
  if ( !RegOpenKeyW(a2, v7, v6) )
  {
    v17 = 0LL;
    v16[0] = &v17;
    v16[1] = &v13;
    v16[2] = a1;
    ForEachValueName<_lambda_10825b8ae890a1dc19d83ed8e1513741_>(v13, (__int64)v16);
    wil::str_concat<std::wstring,unsigned short const * &,unsigned short const (&)[21],unsigned short const * &>(
      (__int64)v18,
      v15,
      v8,
      (const unsigned __int16 **)&hKey);
    v15[0] = (const unsigned __int16 *)&v17;
    v15[1] = (const unsigned __int16 *)a1;
    v9 = (const WCHAR *)v18;
    if ( v18[3] > (LPCWSTR)7 )
      v9 = v18[0];
    hKey = 0LL;
    phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
    if ( !RegOpenKeyExW(a2, v9, 0, 0x20019u, phkResult) )
      ForEachKey<_lambda_57cfb88a9168c5b81c3cd8194129e25c_>(hKey, (__int64)v15);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    std::wstring::_Tidy_deallocate((void **)v18);
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v13);
  std::wstring::_Tidy_deallocate((void **)lpSubKey);
  return a1;
}
