/*
 * XREFs of _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x18001DF00
 * Callers:
 *     ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x18001DEC0 (-IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@E.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18000FDB4 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180016930 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001DA28 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18002269C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800229C8 (--1last_error_context@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator()(_BYTE **a1)
{
  int v2; // ebx
  HKEY v4; // rbx
  LSTATUS v5; // eax
  LSTATUS v6; // eax
  LPCWSTR lpSubKey[4]; // [rsp+30h] [rbp-20h] BYREF
  DWORD cbData; // [rsp+70h] [rbp+20h] BYREF
  DWORD Type; // [rsp+78h] [rbp+28h] BYREF
  HKEY hKey; // [rsp+80h] [rbp+30h] BYREF
  char v11; // [rsp+88h] [rbp+38h] BYREF

  hKey = 0LL;
  memset(lpSubKey, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         lpSubKey,
         (__int64)L"%s\\%s",
         *((_QWORD *)*a1 + 1),
         L"Configs");
  if ( v2 < 0 )
  {
LABEL_2:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    return (unsigned int)v2;
  }
  v4 = hKey;
  if ( hKey )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v11);
    RegCloseKey(v4);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v11);
  }
  v5 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0x20019u, &hKey);
  v2 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      v2 = (unsigned __int16)v5 | 0x80070000;
    if ( lpSubKey[0] )
      CoTaskMemFree((LPVOID)lpSubKey[0]);
    if ( hKey )
      RegCloseKey(hKey);
    return (unsigned int)v2;
  }
  Type = 0;
  cbData = 0;
  v6 = RegQueryValueExW(hKey, L"GlobalProfileId", 0LL, &Type, 0LL, &cbData);
  v2 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      v2 = (unsigned __int16)v6 | 0x80070000;
    goto LABEL_2;
  }
  *a1[1] = 1;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return 0LL;
}
