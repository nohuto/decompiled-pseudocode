/*
 * XREFs of HalpECmosWriteByte @ 0x140550110
 * Callers:
 *     <none>
 * Callees:
 *     WRITE_PORT_USHORT_PAIR @ 0x1405418D8 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpIoDelay @ 0x1406A6AC0 (HalpIoDelay.c)
 */

__int64 __fastcall HalpECmosWriteByte(__int16 a1, unsigned __int8 a2)
{
  WRITE_PORT_USHORT_PAIR(0x74u, 0x75u, a1);
  HalpIoDelay();
  __outbyte(0x76u, a2);
  return HalpIoDelay();
}
