/*
 * XREFs of WRITE_PORT_USHORT_PAIR @ 0x1405418D8
 * Callers:
 *     HalMakeBeep @ 0x140541810 (HalMakeBeep.c)
 *     HalpECmosReadByte @ 0x1405500D0 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x140550110 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x140567160 (HalpPicSetLineState.c)
 * Callees:
 *     HalpIoDelay @ 0x1406A6AC0 (HalpIoDelay.c)
 */

unsigned __int8 __fastcall WRITE_PORT_USHORT_PAIR(unsigned __int16 a1, unsigned __int16 a2, __int16 a3)
{
  unsigned __int8 v4; // di^1
  unsigned __int8 result; // al

  __outbyte(a1, a3);
  v4 = HIBYTE(a3);
  HalpIoDelay();
  result = v4;
  __outbyte(a2, v4);
  return result;
}
