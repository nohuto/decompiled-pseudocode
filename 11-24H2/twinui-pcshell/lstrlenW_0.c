/*
 * XREFs of lstrlenW_0 @ 0x1802D386D
 * Callers:
 *     EncodeRelativePath @ 0x1800660F8 (EncodeRelativePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall lstrlenW_0(LPCWSTR lpString)
{
  return lstrlenW(lpString);
}
