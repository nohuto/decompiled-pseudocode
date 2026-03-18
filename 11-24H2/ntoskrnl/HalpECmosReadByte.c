/*
 * XREFs of HalpECmosReadByte @ 0x140552790
 * Callers:
 *     <none>
 * Callees:
 *     WRITE_PORT_USHORT_PAIR @ 0x140543F88 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpIoDelay @ 0x1406A5AC0 (HalpIoDelay.c)
 */

unsigned __int8 __fastcall HalpECmosReadByte(__int16 a1)
{
  unsigned __int8 v1; // al
  unsigned __int8 v2; // bl

  WRITE_PORT_USHORT_PAIR(0x74u, 0x75u, a1);
  HalpIoDelay();
  v1 = __inbyte(0x76u);
  v2 = v1;
  HalpIoDelay();
  return v2;
}
