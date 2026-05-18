/*
 * XREFs of sub_1800415B8 @ 0x1800415B8
 * Callers:
 *     sub_18004126C @ 0x18004126C (sub_18004126C.c)
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 * Callees:
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 */

bool __fastcall sub_1800415B8(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return sub_18004099C(a1 + 128, (__int64)&v3) != *(_QWORD *)(a1 + 128);
}
