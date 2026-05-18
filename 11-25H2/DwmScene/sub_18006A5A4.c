/*
 * XREFs of sub_18006A5A4 @ 0x18006A5A4
 * Callers:
 *     sub_18006A8D0 @ 0x18006A8D0 (sub_18006A8D0.c)
 * Callees:
 *     sub_18006A804 @ 0x18006A804 (sub_18006A804.c)
 */

__int64 __fastcall sub_18006A5A4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rbp

  v4 = (a3 - a1) >> 4;
  if ( v4 <= 40 )
  {
    v8 = a1;
    v9 = a3;
  }
  else
  {
    v6 = (v4 + 1) >> 3;
    v7 = 16 * v6;
    v6 *= 32LL;
    v8 = v7 + a1;
    sub_18006A804(a1, v7 + a1, v6 + a1);
    sub_18006A804(a2 - v7, a2, v7 + a2);
    v9 = a3 - v7;
    sub_18006A804(a3 - v6, a3 - v7, a3);
  }
  return sub_18006A804(v8, a2, v9);
}
