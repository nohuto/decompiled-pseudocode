/*
 * XREFs of sub_18001CC24 @ 0x18001CC24
 * Callers:
 *     sub_18001D620 @ 0x18001D620 (sub_18001D620.c)
 *     sub_18004D1F4 @ 0x18004D1F4 (sub_18004D1F4.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 *     sub_1800C6A94 @ 0x1800C6A94 (sub_1800C6A94.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

__int64 __fastcall sub_18001CC24(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9

  v2 = sub_1800137F8(a2);
  return sub_18001CC4C(v3, v2);
}
