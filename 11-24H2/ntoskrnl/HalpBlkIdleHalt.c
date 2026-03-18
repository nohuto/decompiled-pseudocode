/*
 * XREFs of HalpBlkIdleHalt @ 0x140BDB8B0
 * Callers:
 *     HalpBlkIdleLoop @ 0x140BDB7D0 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __noreturn HalpBlkIdleHalt()
{
  _enable();
  __halt();
}
