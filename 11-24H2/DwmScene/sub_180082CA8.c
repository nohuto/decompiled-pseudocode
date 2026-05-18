/*
 * XREFs of sub_180082CA8 @ 0x180082CA8
 * Callers:
 *     sub_1800D3CCC @ 0x1800D3CCC (sub_1800D3CCC.c)
 *     sub_1800D4140 @ 0x1800D4140 (sub_1800D4140.c)
 * Callees:
 *     sub_180082C40 @ 0x180082C40 (sub_180082C40.c)
 *     sub_180082D0C @ 0x180082D0C (sub_180082D0C.c)
 *     sub_180083408 @ 0x180083408 (sub_180083408.c)
 */

__int64 *__fastcall sub_180082CA8(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    sub_180083408();
    v5 = sub_180082C40(*a1, a2, (__int64)a1);
    v7 = 0LL;
    a1[1] = v5;
    sub_180082D0C(&v7);
  }
  return a1;
}
