/*
 * XREFs of sub_180084FC8 @ 0x180084FC8
 * Callers:
 *     sub_180084E20 @ 0x180084E20 (sub_180084E20.c)
 *     sub_180085030 @ 0x180085030 (sub_180085030.c)
 *     sub_180085CC0 @ 0x180085CC0 (sub_180085CC0.c)
 *     sub_180085F18 @ 0x180085F18 (sub_180085F18.c)
 *     sub_180086160 @ 0x180086160 (sub_180086160.c)
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 * Callees:
 *     sub_180084C80 @ 0x180084C80 (sub_180084C80.c)
 */

__int64 __fastcall sub_180084FC8(__int64 a1, __int64 a2, __int64 a3)
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
      sub_180084C80((__int64)&v5);
    while ( v3 != 1 );
    return v6;
  }
  return a1;
}
