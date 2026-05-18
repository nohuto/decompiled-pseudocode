/*
 * XREFs of sub_180082384 @ 0x180082384
 * Callers:
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 * Callees:
 *     sub_18007CD98 @ 0x18007CD98 (sub_18007CD98.c)
 */

bool __fastcall sub_180082384(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(a1 + 144);
  v5 = a2;
  sub_18007CD98((__int64 *)(a1 + 144), (__int64)&v4, &v5);
  return v4 != *v2;
}
