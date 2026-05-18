/*
 * XREFs of sub_180084C80 @ 0x180084C80
 * Callers:
 *     sub_180084FC8 @ 0x180084FC8 (sub_180084FC8.c)
 * Callees:
 *     sub_180085008 @ 0x180085008 (sub_180085008.c)
 */

__int64 __fastcall sub_180084C80(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_180085008(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 16LL;
  return result;
}
