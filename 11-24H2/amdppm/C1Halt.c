/*
 * XREFs of C1Halt @ 0x14000E340
 * Callers:
 *     C1Idle @ 0x140003A50 (C1Idle.c)
 *     IoHaltC1Idle @ 0x140006360 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
