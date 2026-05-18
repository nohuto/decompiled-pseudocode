/*
 * XREFs of sub_180095498 @ 0x180095498
 * Callers:
 *     sub_180096260 @ 0x180096260 (sub_180096260.c)
 * Callees:
 *     sub_1800956F0 @ 0x1800956F0 (sub_1800956F0.c)
 */

_QWORD *__fastcall sub_180095498(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)sub_1800956F0(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
