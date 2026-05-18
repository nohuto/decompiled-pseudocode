/*
 * XREFs of sub_18001D21C @ 0x18001D21C
 * Callers:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_18002BE84 @ 0x18002BE84 (sub_18002BE84.c)
 *     sub_18005CB24 @ 0x18005CB24 (sub_18005CB24.c)
 *     sub_18005D728 @ 0x18005D728 (sub_18005D728.c)
 *     sub_1800CDAD0 @ 0x1800CDAD0 (sub_1800CDAD0.c)
 * Callees:
 *     sub_18001B33C @ 0x18001B33C (sub_18001B33C.c)
 */

_QWORD *__fastcall sub_18001D21C(_QWORD *a1, __int64 a2)
{
  sub_18001B33C((__int64)a1, -2147024809, a2, 0);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
