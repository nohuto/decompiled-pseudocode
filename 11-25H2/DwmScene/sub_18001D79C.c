/*
 * XREFs of sub_18001D79C @ 0x18001D79C
 * Callers:
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18001DF88 @ 0x18001DF88 (sub_18001DF88.c)
 *     sub_18001E404 @ 0x18001E404 (sub_18001E404.c)
 *     sub_18001E4BC @ 0x18001E4BC (sub_18001E4BC.c)
 *     sub_180054160 @ 0x180054160 (sub_180054160.c)
 *     sub_180054848 @ 0x180054848 (sub_180054848.c)
 *     sub_1800CF2A4 @ 0x1800CF2A4 (sub_1800CF2A4.c)
 *     sub_1800CF828 @ 0x1800CF828 (sub_1800CF828.c)
 * Callees:
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 */

char __fastcall sub_18001D79C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180013128(v3);
      v3 += 32LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
