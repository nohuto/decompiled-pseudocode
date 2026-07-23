/*
 * XREFs of HalpBlkIdlePortRead @ 0x140BDD8D0
 * Callers:
 *     HalpBlkIdleLoop @ 0x140BDD7D0 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall HalpBlkIdlePortRead(unsigned __int16 a1)
{
  unsigned __int8 result; // al

  _enable();
  result = __inbyte(a1);
  _disable();
  return result;
}
