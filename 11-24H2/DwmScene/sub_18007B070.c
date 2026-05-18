/*
 * XREFs of sub_18007B070 @ 0x18007B070
 * Callers:
 *     sub_18007ADF4 @ 0x18007ADF4 (sub_18007ADF4.c)
 * Callees:
 *     sub_180078718 @ 0x180078718 (sub_180078718.c)
 *     sub_180078D64 @ 0x180078D64 (sub_180078D64.c)
 */

__int64 __fastcall sub_18007B070(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r10
  __int64 v5; // r11

  v3 = a3;
  if ( a2 )
  {
    v4 = a1 - a3;
    do
    {
      sub_180078D64(a1, v3, v4 + v3);
      v3 += 40LL;
    }
    while ( v5 != 1 );
  }
  sub_180078718(v3, v3);
  return v3;
}
