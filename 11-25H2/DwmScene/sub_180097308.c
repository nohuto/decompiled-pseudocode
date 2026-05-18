/*
 * XREFs of sub_180097308 @ 0x180097308
 * Callers:
 *     sub_180097354 @ 0x180097354 (sub_180097354.c)
 * Callees:
 *     sub_18006D368 @ 0x18006D368 (sub_18006D368.c)
 */

__int64 *__fastcall sub_180097308(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8

  if ( a1 != a2 )
  {
    sub_18006D368(a1);
    v4 = *a1;
    *a1 = *a2;
    *a2 = v4;
    v5 = a1[1];
    a1[1] = a2[1];
    a2[1] = v5;
  }
  return a1;
}
