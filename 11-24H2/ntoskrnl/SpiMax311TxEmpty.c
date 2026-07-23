/*
 * XREFs of SpiMax311TxEmpty @ 0x1406A63A0
 * Callers:
 *     SpiMax311PutByte @ 0x1406A6160 (SpiMax311PutByte.c)
 * Callees:
 *     SpiMax311BufferRxData @ 0x1406A6054 (SpiMax311BufferRxData.c)
 *     SpiSend16 @ 0x1406A63D8 (SpiSend16.c)
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
