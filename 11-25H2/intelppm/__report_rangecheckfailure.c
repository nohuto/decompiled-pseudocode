/*
 * XREFs of __report_rangecheckfailure @ 0x140006890
 * Callers:
 *     GetHwDebugRegisters @ 0x14002B330 (GetHwDebugRegisters.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
