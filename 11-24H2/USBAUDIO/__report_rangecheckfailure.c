/*
 * XREFs of __report_rangecheckfailure @ 0x14000BE40
 * Callers:
 *     IsClassDriverOnly @ 0x14002F324 (IsClassDriverOnly.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
