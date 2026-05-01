/*
 * XREFs of SHGetPathFromIDListW_0 @ 0x1801CADC4
 * Callers:
 *     ILIsEqualByPath @ 0x18079B5D8 (ILIsEqualByPath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall SHGetPathFromIDListW_0(LPCITEMIDLIST pidl, LPWSTR pszPath)
{
  return SHGetPathFromIDListW(pidl, pszPath);
}
