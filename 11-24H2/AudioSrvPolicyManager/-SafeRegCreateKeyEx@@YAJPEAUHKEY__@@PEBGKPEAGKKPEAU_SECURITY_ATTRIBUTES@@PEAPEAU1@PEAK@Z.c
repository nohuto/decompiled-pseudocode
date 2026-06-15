/*
 * XREFs of ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180013150
 * Callers:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180013150 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180042804 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180046BE0 (-CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180013150 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     atexit @ 0x18002065C (atexit.c)
 *     _Init_thread_footer @ 0x180020870 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800208D8 (_Init_thread_header.c)
 *     ?Init@CNtDeleteKey@@QEAA_NXZ @ 0x180046EE8 (-Init@CNtDeleteKey@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LSTATUS __fastcall SafeRegCreateKeyEx(
        HKEY a1,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned int a5,
        REGSAM samDesired,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
        HKEY *a8)
{
  const unsigned __int16 *v8; // rdi
  wchar_t *v10; // rax
  wchar_t *v11; // rbx
  BYTE *v12; // rsi
  int v13; // ebx
  LSTATUS v14; // eax
  LSTATUS v15; // eax
  LSTATUS v16; // ebx
  CNtDeleteKey *v17; // rcx
  int v18; // ebx
  LSTATUS result; // eax
  int Key; // ebx
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  DWORD dwDisposition; // [rsp+58h] [rbp-A8h] BYREF
  DWORD Type; // [rsp+5Ch] [rbp-A4h] BYREF
  DWORD cbData; // [rsp+60h] [rbp-A0h] BYREF
  HKEY phkResult; // [rsp+68h] [rbp-98h] BYREF
  HKEY v26; // [rsp+70h] [rbp-90h] BYREF
  BYTE v27[528]; // [rsp+80h] [rbp-80h] BYREF
  BYTE Data[528]; // [rsp+290h] [rbp+190h] BYREF

  v8 = a2;
  if ( a8 )
    *a8 = 0LL;
  if ( !a2 )
    return 87;
  v10 = wcschr(a2, 0x5Cu);
  v11 = v10;
  if ( !v10 )
  {
    v12 = (BYTE *)v8;
    goto LABEL_8;
  }
  if ( (unsigned __int64)(v10 - v8) >= 0x104 )
    return 87;
  _o_wcsncpy_s(v27, 260LL, v8);
  v12 = v27;
  v8 = v11 + 1;
LABEL_8:
  phkResult = 0LL;
  hKey = 0LL;
  v13 = 0;
  v14 = RegOpenKeyExW(a1, (LPCWSTR)v12, 8u, samDesired, &phkResult);
  if ( v14 )
  {
    if ( v14 == 2 )
    {
      v13 = 3;
    }
    else
    {
      LOBYTE(v13) = v14 != 5;
      v13 += 4;
    }
  }
  else
  {
    cbData = 520;
    Type = 0;
    v15 = RegQueryValueExW(phkResult, L"SymbolicLinkValue", 0LL, &Type, Data, &cbData);
    if ( (!v15 || v15 == 234) && Type == 6 )
      v13 = 1;
    if ( v15 == 2 || v13 != 1 )
    {
      v26 = 0LL;
      v16 = RegOpenKeyExW(a1, (LPCWSTR)v12, 0, 0x20019u, &v26);
      RegCloseKey(v26);
      v13 = 2 - (v16 != 0);
    }
    hKey = phkResult;
  }
  v17 = (CNtDeleteKey *)*(unsigned int *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                        + 4LL);
  if ( dword_180064B94 > (int)v17 )
  {
    Init_thread_header(&dword_180064B94);
    if ( dword_180064B94 == -1 )
    {
      atexit(SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__);
      Init_thread_footer(&dword_180064B94);
    }
  }
  if ( v13 == 5 || !v13 )
    goto LABEL_27;
  v18 = v13 - 1;
  if ( v18 )
  {
    if ( (unsigned int)(v18 - 1) >= 2 )
      goto LABEL_27;
  }
  else
  {
    if ( !CNtDeleteKey::Init(v17) || !qword_180064BA0 || (unsigned int)qword_180064BA0(hKey) )
    {
LABEL_27:
      if ( hKey )
        RegCloseKey(hKey);
      return 5;
    }
    RegCloseKey(hKey);
    hKey = 0LL;
  }
  dwDisposition = 0;
  if ( hKey )
  {
    dwDisposition = 2;
  }
  else
  {
    result = RegCreateKeyExW(a1, (LPCWSTR)v12, 0, 0LL, 0, samDesired, lpSecurityAttributes, &hKey, &dwDisposition);
    if ( result )
      return result;
    if ( dwDisposition != 1 )
    {
      RegCloseKey(hKey);
      return 5;
    }
  }
  if ( v12 == (BYTE *)v8 )
  {
    if ( a8 )
      *a8 = hKey;
    return 0;
  }
  else
  {
    Key = SafeRegCreateKeyEx(hKey, v8, 0, 0LL, 0, samDesired, lpSecurityAttributes, a8, 0LL);
    RegCloseKey(hKey);
    return Key;
  }
}
