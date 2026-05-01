/*
 * XREFs of ?_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z @ 0x180697EFC
 * Callers:
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18068CFE4 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180065FB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x1806910B4 (-GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBackupLocationManager::_GetTombstoneShortcutLocation(PCWSTR *this, LPCWSTR pszPath, char *a3)
{
  int TombstonePath; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  const WCHAR *FileNameW; // rax
  __int64 v10; // r9
  unsigned __int16 *v12[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h]
  WCHAR pszPatha[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v13 = 0LL;
  v12[0] = 0LL;
  v12[1] = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v12);
  v12[1] = (unsigned __int16 *)-1LL;
  v13 = -1LL;
  TombstonePath = CBackupLocationManager::GetTombstonePath(this, v12);
  v7 = TombstonePath;
  if ( TombstonePath < 0 )
  {
    v8 = 3149LL;
LABEL_5:
    v10 = (unsigned int)TombstonePath;
    goto LABEL_6;
  }
  StringCchCopyW((char *)pszPatha, 260LL, (char *)v12[0]);
  FileNameW = PathFindFileNameW(pszPath);
  TombstonePath = PathCchAppend(pszPatha, 0x104uLL, FileNameW);
  v7 = TombstonePath;
  if ( TombstonePath < 0 )
  {
    v8 = 3152LL;
    goto LABEL_5;
  }
  if ( PathYetAnotherMakeUniqueName(pszPatha, pszPatha, 0LL, 0LL) )
  {
    StringCchCopyW(a3, 261LL, (char *)pszPatha);
    v7 = 0;
    goto LABEL_10;
  }
  v7 = -2147467259;
  v10 = 2147500037LL;
  v8 = 3154LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)v10);
LABEL_10:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v12);
  return v7;
}
