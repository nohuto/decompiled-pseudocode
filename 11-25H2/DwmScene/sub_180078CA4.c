/*
 * XREFs of sub_180078CA4 @ 0x180078CA4
 * Callers:
 *     sub_18007A544 @ 0x18007A544 (sub_18007A544.c)
 *     sub_18008D8BC @ 0x18008D8BC (sub_18008D8BC.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180017298 @ 0x180017298 (sub_180017298.c)
 *     sub_1800443D8 @ 0x1800443D8 (sub_1800443D8.c)
 */

__int64 *__fastcall sub_180078CA4(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  signed __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  if ( v4 )
  {
    sub_1800443D8(a1, v4);
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v6 = *a1;
    memmove((void *)*a1, *(const void **)a2, v5);
    v8 = 0LL;
    a1[1] = v6 + 4 * (v5 >> 2);
    sub_180017298(&v8);
  }
  return a1;
}
