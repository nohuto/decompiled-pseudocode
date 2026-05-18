/*
 * XREFs of sub_180069DD8 @ 0x180069DD8
 * Callers:
 *     sub_180069C10 @ 0x180069C10 (sub_180069C10.c)
 * Callees:
 *     sub_18002CEF8 @ 0x18002CEF8 (sub_18002CEF8.c)
 */

__int64 __fastcall sub_180069DD8(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18002CEF8((__int64)a1, (__int64)a1, *(_QWORD *)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
