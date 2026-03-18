/*
 * XREFs of StringCchPrintfW @ 0x1C0093754
 * Callers:
 *     PlaySoundConnect @ 0x1C03994B8 (PlaySoundConnect.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x1C0093790 (StringVPrintfWorkerW.c)
 */

HRESULT StringCchPrintfW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  HRESULT result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(pszDest, cchDest, (size_t *)pszFormat, pszFormat, va);
  result = -2147024809;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
