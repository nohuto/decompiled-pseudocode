/*
 * XREFs of sub_1800CFEC8 @ 0x1800CFEC8
 * Callers:
 *     sub_1800CFF60 @ 0x1800CFF60 (sub_1800CFF60.c)
 *     sub_1800CFF94 @ 0x1800CFF94 (sub_1800CFF94.c)
 * Callees:
 *     sub_1800CF330 @ 0x1800CF330 (sub_1800CF330.c)
 */

__int64 __fastcall sub_1800CFEC8(void **a1)
{
  sub_1800CF330((__int64)a1, (__int64)a1, *((char **)*a1 + 1));
  return sub_180010234(*a1, 0xC0uLL);
}
