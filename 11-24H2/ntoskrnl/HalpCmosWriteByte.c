/*
 * XREFs of HalpCmosWriteByte @ 0x1405500A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall HalpCmosWriteByte(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 result; // al

  __outbyte(0x70u, a1);
  result = a2;
  __outbyte(0x71u, a2);
  return result;
}
