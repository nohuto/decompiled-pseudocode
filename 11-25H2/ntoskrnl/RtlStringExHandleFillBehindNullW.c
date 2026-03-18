/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1405A0824
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140292E0C (RtlStringCbPrintfExW.c)
 *     RtlStringCchPrintfExW @ 0x14042CC40 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset_0(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
