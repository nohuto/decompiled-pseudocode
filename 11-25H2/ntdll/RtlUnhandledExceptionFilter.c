/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x180148720
 * Callers:
 *     __raise_securityfailure @ 0x180122368 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x180122390 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnhandledExceptionFilter(const void **a1)
{
  return RtlUnhandledExceptionFilter2(a1);
}
