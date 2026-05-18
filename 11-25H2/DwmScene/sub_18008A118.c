/*
 * XREFs of sub_18008A118 @ 0x18008A118
 * Callers:
 *     sub_18008AF4C @ 0x18008AF4C (sub_18008AF4C.c)
 * Callees:
 *     sub_18008AA80 @ 0x18008AA80 (sub_18008AA80.c)
 */

__int64 __fastcall sub_18008A118(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 result; // rax

  sub_18008AA80(a1, *(_QWORD *)(a1 + 8), a2, a3);
  result = *(_QWORD *)(v3 + 8);
  *(_QWORD *)(v3 + 8) = result + 16;
  return result;
}
