/*
 * XREFs of sub_180085190 @ 0x180085190
 * Callers:
 *     sub_180085A68 @ 0x180085A68 (sub_180085A68.c)
 * Callees:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180073F58 @ 0x180073F58 (sub_180073F58.c)
 *     sub_180085128 @ 0x180085128 (sub_180085128.c)
 */

__int64 *__fastcall sub_180085190(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = 512LL;
  v2 = sub_1800109F8((__int64)a1, &v5);
  *a1 = v2;
  a1[1] = v2;
  a1[2] = v2 + 0x2000;
  v3 = sub_180085128(v2, 512LL, (__int64)a1);
  v5 = 0LL;
  a1[1] = v3;
  sub_180073F58(&v5);
  return a1;
}
