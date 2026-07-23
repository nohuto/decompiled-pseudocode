/*
 * XREFs of RtlStringExHandleFillBehindNullA @ 0x140537A54
 * Callers:
 *     RtlStringCbPrintfExA @ 0x1405378C4 (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullA(NTSTRSAFE_PSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 1 )
    memset_0(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 1);
  return 0;
}
