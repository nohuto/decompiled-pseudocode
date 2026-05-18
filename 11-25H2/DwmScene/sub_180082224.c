/*
 * XREFs of sub_180082224 @ 0x180082224
 * Callers:
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 * Callees:
 *     sub_18007CC38 @ 0x18007CC38 (sub_18007CC38.c)
 */

bool __fastcall sub_180082224(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(a1 + 144);
  v5 = a2;
  sub_18007CC38((__int64 *)(a1 + 144), (__int64)&v4, &v5);
  return v4 != *v2;
}
