/*
 * XREFs of __report_rangecheckfailure @ 0x1802D1F38
 * Callers:
 *     ?SetW@TraceLoggingCorrelationVector@@SAPEAV1@PEBG_N@Z @ 0x18033407C (-SetW@TraceLoggingCorrelationVector@@SAPEAV1@PEBG_N@Z.c)
 * Callees:
 *     __report_securityfailure @ 0x1802D1F54 (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
