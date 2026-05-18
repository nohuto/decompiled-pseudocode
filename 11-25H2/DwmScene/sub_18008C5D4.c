/*
 * XREFs of sub_18008C5D4 @ 0x18008C5D4
 * Callers:
 *     sub_18008C728 @ 0x18008C728 (sub_18008C728.c)
 * Callees:
 *     sub_18008C714 @ 0x18008C714 (sub_18008C714.c)
 */

__int64 __fastcall sub_18008C5D4(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_18008C714(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 16LL;
  return result;
}
