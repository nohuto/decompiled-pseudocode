/*
 * XREFs of sub_1800D1E80 @ 0x1800D1E80
 * Callers:
 *     sub_1800D2150 @ 0x1800D2150 (sub_1800D2150.c)
 * Callees:
 *     sub_1800D2044 @ 0x1800D2044 (sub_1800D2044.c)
 */

_QWORD *__fastcall sub_1800D1E80(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)sub_1800D2044(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
