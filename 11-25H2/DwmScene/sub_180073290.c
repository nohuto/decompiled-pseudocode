/*
 * XREFs of sub_180073290 @ 0x180073290
 * Callers:
 *     sub_180072F28 @ 0x180072F28 (sub_180072F28.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_180073290(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_180016F54(a2, a3);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a3 + 48);
  return result;
}
