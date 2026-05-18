/*
 * XREFs of sub_180069C78 @ 0x180069C78
 * Callers:
 *     sub_180069AB0 @ 0x180069AB0 (sub_180069AB0.c)
 * Callees:
 *     sub_18002CD98 @ 0x18002CD98 (sub_18002CD98.c)
 */

__int64 __fastcall sub_180069C78(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18002CD98((__int64)a1, (__int64)a1, *(_QWORD *)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
