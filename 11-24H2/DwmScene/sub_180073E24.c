/*
 * XREFs of sub_180073E24 @ 0x180073E24
 * Callers:
 *     sub_1800746A0 @ 0x1800746A0 (sub_1800746A0.c)
 *     sub_180076D60 @ 0x180076D60 (sub_180076D60.c)
 * Callees:
 *     sub_180073D34 @ 0x180073D34 (sub_180073D34.c)
 */

_QWORD *__fastcall sub_180073E24(_QWORD *a1, const void **a2, _BYTE *a3)
{
  _BYTE *v3; // r10
  __int64 v5; // r10
  const void *v7; // [rsp+30h] [rbp+8h] BYREF
  _BYTE *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v8 = a2[1];
  v3 = v8;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = v3 - (_BYTE *)*a2;
  v7 = *a2;
  sub_180073D34(a1, v5 >> 3, &v7, &v8);
  return a1;
}
