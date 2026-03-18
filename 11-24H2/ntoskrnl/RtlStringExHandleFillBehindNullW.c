/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1405A3F94
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140356698 (RtlStringCbPrintfExW.c)
 *     RtlStringCchPrintfExW @ 0x140424CB0 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset_0(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
