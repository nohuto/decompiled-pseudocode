/*
 * XREFs of sub_180085128 @ 0x180085128
 * Callers:
 *     sub_180084F80 @ 0x180084F80 (sub_180084F80.c)
 *     sub_180085190 @ 0x180085190 (sub_180085190.c)
 *     sub_180085E20 @ 0x180085E20 (sub_180085E20.c)
 *     sub_180086078 @ 0x180086078 (sub_180086078.c)
 *     sub_1800862C0 @ 0x1800862C0 (sub_1800862C0.c)
 *     sub_1800866B4 @ 0x1800866B4 (sub_1800866B4.c)
 * Callees:
 *     sub_180084DE0 @ 0x180084DE0 (sub_180084DE0.c)
 */

__int64 __fastcall sub_180085128(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v5 = a1;
  v6 = a1;
  v7 = a3;
  if ( a2 )
  {
    do
      sub_180084DE0((__int64)&v5);
    while ( v3 != 1 );
    return v6;
  }
  return a1;
}
