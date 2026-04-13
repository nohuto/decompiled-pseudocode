/*
 * XREFs of ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x180051780
 * Callers:
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18005245C (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?GetLockScreenRegistryKeyRoot@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x1800527F4 (-GetLockScreenRegistryKeyRoot@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAUH.c)
 * Callees:
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029924 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A468 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AAD8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003B984 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D810 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180056FAC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_InitializeFromRegistry@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEAUHKEY__@@PEBG_N@Z @ 0x18005B484 (-_InitializeFromRegistry@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 **a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  HRESULT v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int phkResult; // [rsp+20h] [rbp-60h]
  HKEY hKey; // [rsp+30h] [rbp-50h] BYREF
  HKEY v14; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  WCHAR SubKey[8]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  *(_QWORD *)this = 0LL;
  hKey = 0LL;
  v14 = 0LL;
  v3 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\SessionData",
         0,
         9u,
         &v14);
  if ( v3 )
  {
    v4 = 96LL;
LABEL_7:
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v4,
           (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
           (const char *)v3,
           phkResult);
    goto LABEL_14;
  }
  v5 = StringCchPrintfW(SubKey, 8uLL, (size_t *)L"%d", NtCurrentPeb()->SessionId);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v3 = RegOpenKeyExW(v14, SubKey, 0, 1u, &hKey);
    if ( v3 )
    {
      v4 = 100LL;
      goto LABEL_7;
    }
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeFromRegistry(
           &v15,
           hKey);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v10 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        v17 = 0LL;
        v16 = 0LL;
        *(_QWORD *)this = v10;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
        v6 = 0;
        goto LABEL_14;
      }
      v6 = -2147024882;
      v9 = 104LL;
      v8 = 2147942414LL;
    }
    else
    {
      v8 = (unsigned int)v7;
      v9 = 103LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
      (const char *)v8);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
      (const char *)(unsigned int)v5);
  }
LABEL_14:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v14);
  return v6;
}
