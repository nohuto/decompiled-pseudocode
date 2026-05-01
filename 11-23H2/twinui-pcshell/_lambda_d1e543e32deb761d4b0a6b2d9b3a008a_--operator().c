/*
 * XREFs of _lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator() @ 0x1800969BC
 * Callers:
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x180096970 (-DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800C55FC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator()(__int64 a1)
{
  signed int v2; // ebx
  HKEY v3; // rdi
  LSTATUS v4; // eax
  LSTATUS v5; // eax
  DWORD LastError; // ebx
  LPCWSTR lpSubKey[4]; // [rsp+30h] [rbp-20h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+20h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp+28h] BYREF

  hKey = 0LL;
  memset(lpSubKey, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         lpSubKey,
         L"%s\\%s",
         *(_QWORD *)(*(_QWORD *)a1 + 8LL),
         L"Configs");
  if ( v2 >= 0 )
  {
    v3 = hKey;
    if ( hKey )
    {
      LastError = GetLastError();
      RegCloseKey(v3);
      SetLastError(LastError);
    }
    v4 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0x20019u, &hKey);
    v2 = v4;
    if ( v4 )
    {
      if ( v4 > 0 )
        v2 = (unsigned __int16)v4 | 0x80070000;
    }
    else
    {
      phkResult = 0LL;
      v5 = RegOpenKeyExW(hKey, **(LPCWSTR **)(a1 + 8), 0, 0x20019u, &phkResult);
      v2 = v5;
      if ( v5 )
      {
        if ( v5 > 0 )
          v2 = (unsigned __int16)v5 | 0x80070000;
      }
      else
      {
        **(_BYTE **)(a1 + 16) = 1;
        v2 = 0;
      }
      if ( phkResult )
        RegCloseKey(phkResult);
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v2;
}
