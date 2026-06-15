/*
 * XREFs of StringExHandleOtherFlagsA @ 0x14006BCC0
 * Callers:
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x14002CDAC (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 * Callees:
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 */

HRESULT __stdcall StringExHandleOtherFlagsA(
        STRSAFE_LPSTR pszDest,
        size_t cbDest,
        size_t cchOriginalDestLength,
        STRSAFE_LPSTR *ppszDestEnd,
        size_t *pcchRemaining,
        DWORD dwFlags)
{
  char *v10; // rax

  if ( cbDest && (dwFlags & 0x1000) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = cbDest;
    *pszDest = 0;
  }
  if ( (dwFlags & 0x400) == 0 )
  {
LABEL_7:
    if ( !cbDest )
      return 0;
    goto LABEL_8;
  }
  memset_0(pszDest, (unsigned __int8)dwFlags, cbDest);
  if ( !(_BYTE)dwFlags )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = cbDest;
    goto LABEL_7;
  }
  if ( !cbDest )
    return 0;
  *pcchRemaining = 1LL;
  v10 = &pszDest[cbDest - 1];
  *ppszDestEnd = v10;
  *v10 = 0;
LABEL_8:
  if ( (dwFlags & 0x800) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = cbDest;
    *pszDest = 0;
  }
  return 0;
}
