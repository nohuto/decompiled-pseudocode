/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x180106220
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x1800314C0 (RtlEncodePointer.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  RtlpUnhandledExceptionFilter = RtlEncodePointer(UnhandledExceptionFilter);
}
