/*
 * XREFs of ILIsEqualByPath @ 0x1801F89EC
 * Callers:
 *     ?FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z @ 0x1801F8914 (-FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     SHGetPathFromIDListW_0 @ 0x1802DA12D (SHGetPathFromIDListW_0.c)
 */

__int64 __fastcall ILIsEqualByPath(const ITEMIDLIST *a1, const ITEMIDLIST *a2)
{
  unsigned int v3; // ebx
  WCHAR v5[264]; // [rsp+20h] [rbp-438h] BYREF
  WCHAR pszPath[264]; // [rsp+230h] [rbp-228h] BYREF

  v3 = 0;
  if ( SHGetPathFromIDListW_0(a1, pszPath) && SHGetPathFromIDListW_0(a2, v5) )
    LOBYTE(v3) = (unsigned int)PathComparePaths(pszPath, v5) == 2;
  return v3;
}
