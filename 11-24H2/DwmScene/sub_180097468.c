/*
 * XREFs of sub_180097468 @ 0x180097468
 * Callers:
 *     sub_1800974B4 @ 0x1800974B4 (sub_1800974B4.c)
 * Callees:
 *     sub_18006D4C8 @ 0x18006D4C8 (sub_18006D4C8.c)
 */

__int64 *__fastcall sub_180097468(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8

  if ( a1 != a2 )
  {
    sub_18006D4C8(a1);
    v4 = *a1;
    *a1 = *a2;
    *a2 = v4;
    v5 = a1[1];
    a1[1] = a2[1];
    a2[1] = v5;
  }
  return a1;
}
