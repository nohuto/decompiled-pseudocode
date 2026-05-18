/*
 * XREFs of sub_18001D8FC @ 0x18001D8FC
 * Callers:
 *     sub_18001DE9C @ 0x18001DE9C (sub_18001DE9C.c)
 *     sub_18001E0E8 @ 0x18001E0E8 (sub_18001E0E8.c)
 *     sub_18001E564 @ 0x18001E564 (sub_18001E564.c)
 *     sub_18001E61C @ 0x18001E61C (sub_18001E61C.c)
 *     sub_1800542C0 @ 0x1800542C0 (sub_1800542C0.c)
 *     sub_1800549A8 @ 0x1800549A8 (sub_1800549A8.c)
 *     sub_1800CF404 @ 0x1800CF404 (sub_1800CF404.c)
 *     sub_1800CF988 @ 0x1800CF988 (sub_1800CF988.c)
 * Callees:
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 */

char __fastcall sub_18001D8FC(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180013228(v3);
      v3 += 32LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
