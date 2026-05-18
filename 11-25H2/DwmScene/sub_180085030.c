/*
 * XREFs of sub_180085030 @ 0x180085030
 * Callers:
 *     sub_180085908 @ 0x180085908 (sub_180085908.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180073DF8 @ 0x180073DF8 (sub_180073DF8.c)
 *     sub_180084FC8 @ 0x180084FC8 (sub_180084FC8.c)
 */

__int64 *__fastcall sub_180085030(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = 512LL;
  v2 = sub_1800108F8((__int64)a1, &v5);
  *a1 = v2;
  a1[1] = v2;
  a1[2] = v2 + 0x2000;
  v3 = sub_180084FC8(v2, 512LL, (__int64)a1);
  v5 = 0LL;
  a1[1] = v3;
  sub_180073DF8(&v5);
  return a1;
}
