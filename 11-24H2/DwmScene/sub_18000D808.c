/*
 * XREFs of sub_18000D808 @ 0x18000D808
 * Callers:
 *     sub_18000D63C @ 0x18000D63C (sub_18000D63C.c)
 *     sub_18000ECFC @ 0x18000ECFC (sub_18000ECFC.c)
 * Callees:
 *     sub_18000D790 @ 0x18000D790 (sub_18000D790.c)
 */

__int64 __fastcall sub_18000D808(_QWORD *a1)
{
  sub_18000D790(a1 + 1);
  return sub_18000D790(a1);
}
