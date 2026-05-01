/*
 * XREFs of StringExValidateSrcW @ 0x18030EA78
 * Callers:
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18005C194 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringExValidateSrcW(
        STRSAFE_PCNZWCH *ppszSrc,
        size_t *pcchToRead,
        const size_t cchMax,
        DWORD dwFlags)
{
  if ( (dwFlags & 0x100) != 0 && !*ppszSrc )
    *ppszSrc = &pvData;
  return 0;
}
