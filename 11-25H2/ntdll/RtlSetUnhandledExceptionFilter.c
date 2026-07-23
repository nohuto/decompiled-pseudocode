/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x1800EBAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x1800EBB00 (RtlEncodePointer.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  RtlpUnhandledExceptionFilter = RtlEncodePointer(UnhandledExceptionFilter);
}
