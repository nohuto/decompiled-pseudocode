/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x180145520
 * Callers:
 *     __raise_securityfailure @ 0x18011EAB8 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18011EAE0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
}
