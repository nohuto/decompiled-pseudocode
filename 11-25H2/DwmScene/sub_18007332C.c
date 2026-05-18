/*
 * XREFs of sub_18007332C @ 0x18007332C
 * Callers:
 *     sub_180072EF8 @ 0x180072EF8 (sub_180072EF8.c)
 * Callees:
 *     sub_180072ECC @ 0x180072ECC (sub_180072ECC.c)
 */

__int64 *__fastcall sub_18007332C(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_180072ECC();
  return a1;
}
