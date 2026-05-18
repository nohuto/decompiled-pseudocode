/*
 * XREFs of sub_180041DF8 @ 0x180041DF8
 * Callers:
 *     sub_180041F74 @ 0x180041F74 (sub_180041F74.c)
 *     sub_180042024 @ 0x180042024 (sub_180042024.c)
 *     sub_1800421E8 @ 0x1800421E8 (sub_1800421E8.c)
 *     sub_180079F68 @ 0x180079F68 (sub_180079F68.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180017298 @ 0x180017298 (sub_180017298.c)
 *     sub_1800443D8 @ 0x1800443D8 (sub_1800443D8.c)
 */

__int64 *__fastcall sub_180041DF8(__int64 *a1, __int64 a2, __int64 a3)
{
  const void *v3; // r14
  __int64 v5; // rbp
  signed __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v3 = *(const void **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  *a1 = 0LL;
  v6 = v5 - (_QWORD)v3;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 >> 2 )
  {
    sub_1800443D8(a1, v6 >> 2);
    v7 = *a1;
    memmove((void *)*a1, v3, v6);
    v9 = 0LL;
    a1[1] = v7 + 4 * (v6 >> 2);
    sub_180017298(&v9);
  }
  return a1;
}
