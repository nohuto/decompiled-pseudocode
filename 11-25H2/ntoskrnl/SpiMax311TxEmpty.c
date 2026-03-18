/*
 * XREFs of SpiMax311TxEmpty @ 0x14069A170
 * Callers:
 *     SpiMax311PutByte @ 0x140699F30 (SpiMax311PutByte.c)
 * Callees:
 *     SpiMax311BufferRxData @ 0x140699E24 (SpiMax311BufferRxData.c)
 *     SpiSend16 @ 0x14069A1A8 (SpiSend16.c)
 */

bool __fastcall SpiMax311TxEmpty(__int64 a1)
{
  __int64 i; // rbx
  __int16 v2; // cx

  for ( i = a1; ; a1 = i )
  {
    v2 = SpiSend16(a1, 0LL);
    if ( v2 >= 0 )
      break;
    SpiMax311BufferRxData(v2);
  }
  return (v2 & 0x4000) != 0;
}
