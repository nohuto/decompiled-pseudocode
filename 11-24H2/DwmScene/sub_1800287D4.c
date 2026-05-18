/*
 * XREFs of sub_1800287D4 @ 0x1800287D4
 * Callers:
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 * Callees:
 *     sub_1800281EC @ 0x1800281EC (sub_1800281EC.c)
 */

__int64 __fastcall sub_1800287D4(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 8) = 1;
  sub_1800281EC(a1);
  return a2;
}
