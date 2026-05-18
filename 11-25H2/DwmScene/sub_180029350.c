/*
 * XREFs of sub_180029350 @ 0x180029350
 * Callers:
 *     sub_180028BE8 @ 0x180028BE8 (sub_180028BE8.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_180029350(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_180016F54(a2, a3);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a3 + 48);
  return result;
}
