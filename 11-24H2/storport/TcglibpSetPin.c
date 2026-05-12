/*
 * XREFs of TcglibpSetPin @ 0x14014091C
 * Callers:
 *     TcglibSetAdmin1Pin @ 0x14013C5B4 (TcglibSetAdmin1Pin.c)
 *     TcglibSetBandPin @ 0x14013CC20 (TcglibSetBandPin.c)
 *     TcglibSetSidPin @ 0x14013CD8C (TcglibSetSidPin.c)
 * Callees:
 *     TcglibpSetTableColumnData @ 0x14013F4F0 (TcglibpSetTableColumnData.c)
 */

__int64 __fastcall TcglibpSetPin(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  if ( (unsigned int)*a4 <= 0x20 )
    return TcglibpSetTableColumnData(a1, a2, a3, 3u, (__int64)(a4 + 1), *a4, 15);
  else
    return 3221225485LL;
}
