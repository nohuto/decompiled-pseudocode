/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x180148720
 * Callers:
 *     __raise_securityfailure @ 0x180122368 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x180122390 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
}
