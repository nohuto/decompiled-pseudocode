/*
 * XREFs of sub_180095338 @ 0x180095338
 * Callers:
 *     sub_180096100 @ 0x180096100 (sub_180096100.c)
 * Callees:
 *     sub_180095590 @ 0x180095590 (sub_180095590.c)
 */

_QWORD *__fastcall sub_180095338(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)sub_180095590(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
