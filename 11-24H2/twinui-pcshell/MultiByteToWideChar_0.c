/*
 * XREFs of MultiByteToWideChar_0 @ 0x1802D3843
 * Callers:
 *     ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1802DB334 (--$to_hstring@PEBD$0A@@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall MultiByteToWideChar_0(
        UINT CodePage,
        DWORD dwFlags,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpWideCharStr,
        int cchWideChar)
{
  return MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}
