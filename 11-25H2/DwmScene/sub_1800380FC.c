/*
 * XREFs of sub_1800380FC @ 0x1800380FC
 * Callers:
 *     sub_18003884C @ 0x18003884C (sub_18003884C.c)
 *     sub_1800388E4 @ 0x1800388E4 (sub_1800388E4.c)
 * Callees:
 *     sub_180010A74 @ 0x180010A74 (sub_180010A74.c)
 */

__int64 __fastcall sub_1800380FC(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r9

  result = sub_180010A74(*(_QWORD **)(a1 + 8), a2);
  *(_QWORD *)(v3 + 8) += 16LL;
  return result;
}
