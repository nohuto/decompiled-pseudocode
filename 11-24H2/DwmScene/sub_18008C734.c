/*
 * XREFs of sub_18008C734 @ 0x18008C734
 * Callers:
 *     sub_18008C888 @ 0x18008C888 (sub_18008C888.c)
 * Callees:
 *     sub_18008C874 @ 0x18008C874 (sub_18008C874.c)
 */

__int64 __fastcall sub_18008C734(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_18008C874(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 16LL;
  return result;
}
