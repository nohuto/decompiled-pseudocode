/*
 * XREFs of sub_180082B48 @ 0x180082B48
 * Callers:
 *     sub_1800D3B6C @ 0x1800D3B6C (sub_1800D3B6C.c)
 *     sub_1800D3FE0 @ 0x1800D3FE0 (sub_1800D3FE0.c)
 * Callees:
 *     sub_180082AE0 @ 0x180082AE0 (sub_180082AE0.c)
 *     sub_180082BAC @ 0x180082BAC (sub_180082BAC.c)
 *     sub_1800832A8 @ 0x1800832A8 (sub_1800832A8.c)
 */

__int64 *__fastcall sub_180082B48(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    sub_1800832A8();
    v5 = sub_180082AE0(*a1, a2, (__int64)a1);
    v7 = 0LL;
    a1[1] = v5;
    sub_180082BAC(&v7);
  }
  return a1;
}
