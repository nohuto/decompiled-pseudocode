/*
 * XREFs of HalpSetCmosCenturyByte @ 0x14041A82C
 * Callers:
 *     HalpWriteCmosTime @ 0x140419448 (HalpWriteCmosTime.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall HalpSetCmosCenturyByte(unsigned __int8 a1)
{
  unsigned __int8 result; // al

  if ( (HalpCmosCenturyOffset & 0x100) != 0 )
  {
    __outbyte(0x70u, 0xAu);
    result = __inbyte(0x71u);
    __outbyte(0x70u, 0xAu);
    __outbyte(0x71u, result | 0x10);
    __outbyte(0x70u, HalpCmosCenturyOffset);
    __outbyte(0x71u, a1);
    __outbyte(0x70u, 0xAu);
  }
  else
  {
    __outbyte(0x70u, HalpCmosCenturyOffset);
    result = a1;
  }
  __outbyte(0x71u, result);
  return result;
}
