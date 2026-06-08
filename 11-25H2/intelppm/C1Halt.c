/*
 * XREFs of C1Halt @ 0x14000FF20
 * Callers:
 *     C1Idle @ 0x140005D60 (C1Idle.c)
 *     IoHaltC1Idle @ 0x140009DD0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
