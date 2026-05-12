/*
 * XREFs of StringValidateDestW @ 0x140070F2C
 * Callers:
 *     StringCchPrintfW @ 0x140070E78 (StringCchPrintfW.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringValidateDestW(STRSAFE_PCNZWCH pszDest, size_t cchDest, const size_t cchMax)
{
  HRESULT result; // eax

  result = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    return -2147024809;
  return result;
}
