/*
 * XREFs of sub_180067F84 @ 0x180067F84
 * Callers:
 *     sub_1800684A0 @ 0x1800684A0 (sub_1800684A0.c)
 * Callees:
 *     sub_18005DDF0 @ 0x18005DDF0 (sub_18005DDF0.c)
 */

__int64 __fastcall sub_180067F84(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_18005DDF0((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
