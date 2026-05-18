/*
 * XREFs of sub_18002FCAC @ 0x18002FCAC
 * Callers:
 *     sub_18002FF44 @ 0x18002FF44 (sub_18002FF44.c)
 *     sub_180030504 @ 0x180030504 (sub_180030504.c)
 * Callees:
 *     sub_18002CE2C @ 0x18002CE2C (sub_18002CE2C.c)
 */

__int64 __fastcall sub_18002FCAC(void **a1)
{
  sub_18002CE2C((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x60uLL);
}
