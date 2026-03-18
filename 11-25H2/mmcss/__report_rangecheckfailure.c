/*
 * XREFs of __report_rangecheckfailure @ 0x1C0004670
 * Callers:
 *     CiConfigQueryValue @ 0x1C000FB90 (CiConfigQueryValue.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
