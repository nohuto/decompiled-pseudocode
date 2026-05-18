/*
 * XREFs of sub_180041F58 @ 0x180041F58
 * Callers:
 *     sub_1800420D4 @ 0x1800420D4 (sub_1800420D4.c)
 *     sub_180042184 @ 0x180042184 (sub_180042184.c)
 *     sub_180042348 @ 0x180042348 (sub_180042348.c)
 *     sub_18007A0C8 @ 0x18007A0C8 (sub_18007A0C8.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180017398 @ 0x180017398 (sub_180017398.c)
 *     sub_180044538 @ 0x180044538 (sub_180044538.c)
 */

__int64 *__fastcall sub_180041F58(__int64 *a1, __int64 a2, __int64 a3)
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
    sub_180044538(a1, v6 >> 2);
    v7 = *a1;
    memmove((void *)*a1, v3, v6);
    v9 = 0LL;
    a1[1] = v7 + 4 * (v6 >> 2);
    sub_180017398(&v9);
  }
  return a1;
}
