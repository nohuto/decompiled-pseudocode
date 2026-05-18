/*
 * XREFs of sub_18002FD0C @ 0x18002FD0C
 * Callers:
 *     sub_18002FF50 @ 0x18002FF50 (sub_18002FF50.c)
 *     sub_180030504 @ 0x180030504 (sub_180030504.c)
 *     sub_1800699BC @ 0x1800699BC (sub_1800699BC.c)
 *     sub_1800BCB30 @ 0x1800BCB30 (sub_1800BCB30.c)
 * Callees:
 *     sub_18002CEF8 @ 0x18002CEF8 (sub_18002CEF8.c)
 */

__int64 __fastcall sub_18002FD0C(void **a1)
{
  sub_18002CEF8((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x30uLL);
}
