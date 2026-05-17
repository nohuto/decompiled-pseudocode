/*
 * XREFs of __raise_securityfailure @ 0x180122368
 * Callers:
 *     __report_securityfailure @ 0x180122528 (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x180148720 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
