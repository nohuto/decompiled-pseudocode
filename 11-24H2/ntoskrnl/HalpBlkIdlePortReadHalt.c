/*
 * XREFs of HalpBlkIdlePortReadHalt @ 0x140BDD8C0
 * Callers:
 *     HalpBlkIdleLoop @ 0x140BDD7D0 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HalpBlkIdlePortReadHalt(unsigned __int16 a1)
{
  __inbyte(a1);
  _enable();
  __halt();
}
