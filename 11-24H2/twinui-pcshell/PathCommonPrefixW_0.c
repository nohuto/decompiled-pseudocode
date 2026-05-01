/*
 * XREFs of PathCommonPrefixW_0 @ 0x1802D3861
 * Callers:
 *     EncodeRelativePath @ 0x1800660F8 (EncodeRelativePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall PathCommonPrefixW_0(LPCWSTR pszFile1, LPCWSTR pszFile2, LPWSTR achPath)
{
  return PathCommonPrefixW(pszFile1, pszFile2, achPath);
}
