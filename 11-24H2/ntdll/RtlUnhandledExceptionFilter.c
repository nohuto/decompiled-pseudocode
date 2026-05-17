/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x180147170
 * Callers:
 *     __raise_securityfailure @ 0x180120888 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x1801208B0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnhandledExceptionFilter(const void **a1)
{
  return RtlUnhandledExceptionFilter2(a1);
}
