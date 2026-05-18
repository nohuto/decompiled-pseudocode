/*
 * XREFs of sub_1800964CC @ 0x1800964CC
 * Callers:
 *     sub_180096028 @ 0x180096028 (sub_180096028.c)
 *     sub_180096100 @ 0x180096100 (sub_180096100.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180027138 @ 0x180027138 (sub_180027138.c)
 */

_QWORD *__fastcall sub_1800964CC(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r9
  _QWORD *v5; // r10
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a3;
  sub_18001C2C0(&v8);
  v6 = sub_180027138(v5, v4);
  sub_180010134(v6, 0x28uLL);
  *a2 = v8;
  return a2;
}
