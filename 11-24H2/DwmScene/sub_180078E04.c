/*
 * XREFs of sub_180078E04 @ 0x180078E04
 * Callers:
 *     sub_18007A6A4 @ 0x18007A6A4 (sub_18007A6A4.c)
 *     sub_18008DA1C @ 0x18008DA1C (sub_18008DA1C.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180017398 @ 0x180017398 (sub_180017398.c)
 *     sub_180044538 @ 0x180044538 (sub_180044538.c)
 */

__int64 *__fastcall sub_180078E04(__int64 *a1, __int64 a2)
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
    sub_180044538(a1, v4);
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v6 = *a1;
    memmove((void *)*a1, *(const void **)a2, v5);
    v8 = 0LL;
    a1[1] = v6 + 4 * (v5 >> 2);
    sub_180017398(&v8);
  }
  return a1;
}
