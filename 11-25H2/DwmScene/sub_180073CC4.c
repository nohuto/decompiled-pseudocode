/*
 * XREFs of sub_180073CC4 @ 0x180073CC4
 * Callers:
 *     sub_180074540 @ 0x180074540 (sub_180074540.c)
 *     sub_180076C00 @ 0x180076C00 (sub_180076C00.c)
 * Callees:
 *     sub_180073BD4 @ 0x180073BD4 (sub_180073BD4.c)
 */

_QWORD *__fastcall sub_180073CC4(_QWORD *a1, const void **a2, _BYTE *a3)
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
  sub_180073BD4(a1, v5 >> 3, &v7, &v8);
  return a1;
}
