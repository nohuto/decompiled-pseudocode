/*
 * XREFs of sub_180067E24 @ 0x180067E24
 * Callers:
 *     sub_180068340 @ 0x180068340 (sub_180068340.c)
 * Callees:
 *     sub_18005DC90 @ 0x18005DC90 (sub_18005DC90.c)
 */

__int64 __fastcall sub_180067E24(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_18005DC90((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
