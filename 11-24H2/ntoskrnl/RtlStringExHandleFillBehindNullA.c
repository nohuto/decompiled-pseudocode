/*
 * XREFs of RtlStringExHandleFillBehindNullA @ 0x14053A214
 * Callers:
 *     RtlStringCbPrintfExA @ 0x14053A084 (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullA(NTSTRSAFE_PSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 1 )
    memset_0(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 1);
  return 0;
}
