/*
 * XREFs of sub_18001D37C @ 0x18001D37C
 * Callers:
 *     sub_18002BC74 @ 0x18002BC74 (sub_18002BC74.c)
 *     sub_18002BFE4 @ 0x18002BFE4 (sub_18002BFE4.c)
 *     sub_18005CC84 @ 0x18005CC84 (sub_18005CC84.c)
 *     sub_18005D888 @ 0x18005D888 (sub_18005D888.c)
 *     sub_1800CDC30 @ 0x1800CDC30 (sub_1800CDC30.c)
 * Callees:
 *     sub_18001B49C @ 0x18001B49C (sub_18001B49C.c)
 */

_QWORD *__fastcall sub_18001D37C(_QWORD *a1, __int64 a2)
{
  sub_18001B49C((__int64)a1, -2147024809, a2, 0);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
