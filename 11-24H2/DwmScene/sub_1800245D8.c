/*
 * XREFs of sub_1800245D8 @ 0x1800245D8
 * Callers:
 *     sub_180024A20 @ 0x180024A20 (sub_180024A20.c)
 * Callees:
 *     sub_180023B48 @ 0x180023B48 (sub_180023B48.c)
 */

__int64 __fastcall sub_1800245D8(void **a1)
{
  sub_180023B48((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x68uLL);
}
