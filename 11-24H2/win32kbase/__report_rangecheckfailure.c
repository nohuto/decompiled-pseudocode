/*
 * XREFs of __report_rangecheckfailure @ 0x14019FD30
 * Callers:
 *     GetMonitorCapabilityFromInf @ 0x14008FBC4 (GetMonitorCapabilityFromInf.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
