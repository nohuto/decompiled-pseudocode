/*
 * XREFs of FormatMessageW_0 @ 0x18009C5D4
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1800A0980 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall FormatMessageW_0(
        DWORD dwFlags,
        LPCVOID lpSource,
        DWORD dwMessageId,
        DWORD dwLanguageId,
        LPWSTR lpBuffer,
        DWORD nSize,
        va_list *Arguments)
{
  return FormatMessageW(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
}
