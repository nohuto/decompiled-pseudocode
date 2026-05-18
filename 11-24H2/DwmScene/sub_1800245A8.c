/*
 * XREFs of sub_1800245A8 @ 0x1800245A8
 * Callers:
 *     sub_180024840 @ 0x180024840 (sub_180024840.c)
 * Callees:
 *     sub_180023AA8 @ 0x180023AA8 (sub_180023AA8.c)
 */

__int64 __fastcall sub_1800245A8(void **a1)
{
  sub_180023AA8((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x40uLL);
}
