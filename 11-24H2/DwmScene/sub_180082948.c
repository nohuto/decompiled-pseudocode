/*
 * XREFs of sub_180082948 @ 0x180082948
 * Callers:
 *     sub_180083220 @ 0x180083220 (sub_180083220.c)
 * Callees:
 *     sub_1800828E8 @ 0x1800828E8 (sub_1800828E8.c)
 */

__int64 __fastcall sub_180082948(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  sub_1800828E8(*(_QWORD *)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 12;
  return result;
}
