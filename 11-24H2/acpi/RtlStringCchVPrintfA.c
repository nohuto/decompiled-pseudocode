/*
 * XREFs of RtlStringCchVPrintfA @ 0x14003FC98
 * Callers:
 *     CatError @ 0x14006DA70 (CatError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchVPrintfA(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCSTR pszFormat,
        va_list argList)
{
  size_t v5; // rdi
  NTSTATUS v6; // ebx
  int v7; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v6 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v6 = 0;
    v7 = _vsnprintf(pszDest, cchDest - 1, pszFormat, argList);
    if ( v7 < 0 || v7 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v7 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v6;
}
