/*
 * XREFs of C1Halt @ 0x14000D690
 * Callers:
 *     C1Idle @ 0x140003A50 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1400056C0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
