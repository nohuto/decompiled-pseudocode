/*
 * XREFs of __raise_securityfailure @ 0x180120888
 * Callers:
 *     __report_securityfailure @ 0x180120A48 (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x180147170 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
