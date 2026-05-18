/*
 * XREFs of sub_180041DC4 @ 0x180041DC4
 * Callers:
 *     sub_180041E84 @ 0x180041E84 (sub_180041E84.c)
 * Callees:
 *     sub_180041DE8 @ 0x180041DE8 (sub_180041DE8.c)
 */

__int64 __fastcall sub_180041DC4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = sub_180041DE8(a1, *(_QWORD *)(a1 + 8), a2);
  *(_QWORD *)(v3 + 8) += 4LL;
  return result;
}
