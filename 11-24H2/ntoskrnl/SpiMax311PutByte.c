/*
 * XREFs of SpiMax311PutByte @ 0x1406A6160
 * Callers:
 *     <none>
 * Callees:
 *     SpiMax311BufferRxData @ 0x1406A6054 (SpiMax311BufferRxData.c)
 *     SpiMax311TxEmpty @ 0x1406A63A0 (SpiMax311TxEmpty.c)
 *     SpiSend16 @ 0x1406A63D8 (SpiSend16.c)
 */

__int64 __fastcall SpiMax311PutByte(_QWORD *a1, unsigned __int8 a2, char a3)
{
  unsigned __int16 v3; // di
  __int64 v5; // rdx
  __int16 v6; // cx

  v3 = a2;
  if ( !a1 || !*a1 )
    return 3LL;
  if ( a3 )
  {
    while ( !(unsigned __int8)SpiMax311TxEmpty(a1) )
      ;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)((__int64 (*)(void))SpiMax311TxEmpty)() )
    return 3LL;
LABEL_7:
  v5 = v3;
  LOWORD(v5) = v3 | 0x8000;
  while ( 1 )
  {
    v6 = SpiSend16(a1, v5);
    if ( v6 >= 0 )
      break;
    SpiMax311BufferRxData(v6);
    v5 = 0LL;
  }
  return 0LL;
}
