/*
 * XREFs of StringExValidateSrcW @ 0x18012F82C
 * Callers:
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180043160 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
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
    *ppszSrc = &LocaleName;
  return 0;
}
