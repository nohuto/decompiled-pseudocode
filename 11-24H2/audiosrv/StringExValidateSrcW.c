/*
 * XREFs of StringExValidateSrcW @ 0x1801388FC
 * Callers:
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18004001C (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
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
