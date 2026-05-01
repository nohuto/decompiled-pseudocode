/*
 * XREFs of StringExHandleFillBehindNullW @ 0x18048AD38
 * Callers:
 *     ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1802D56E8 (-StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x18048AB6C (-StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

HRESULT __stdcall StringExHandleFillBehindNullW(STRSAFE_LPWSTR pszDestEnd, size_t cbRemaining, DWORD dwFlags)
{
  if ( cbRemaining > 2 )
    memset_0(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
