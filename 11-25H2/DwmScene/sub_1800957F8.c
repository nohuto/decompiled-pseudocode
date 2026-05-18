/*
 * XREFs of sub_1800957F8 @ 0x1800957F8
 * Callers:
 *     sub_180095858 @ 0x180095858 (sub_180095858.c)
 *     sub_180095864 @ 0x180095864 (sub_180095864.c)
 * Callees:
 *     sub_18009640C @ 0x18009640C (sub_18009640C.c)
 */

__int64 __fastcall sub_1800957F8(void **a1)
{
  void *v2; // rcx

  sub_18009640C();
  v2 = *a1;
  *a1 = 0LL;
  return sub_180010134(v2, 0x10uLL);
}
