/*
 * XREFs of lstrlenW_0 @ 0x1801C8521
 * Callers:
 *     EncodeRelativePath @ 0x180749C74 (EncodeRelativePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall lstrlenW_0(LPCWSTR lpString)
{
  return lstrlenW(lpString);
}
