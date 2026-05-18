/*
 * XREFs of sub_18001D678 @ 0x18001D678
 * Callers:
 *     sub_180025D94 @ 0x180025D94 (sub_180025D94.c)
 *     sub_180050C18 @ 0x180050C18 (sub_180050C18.c)
 *     sub_1800525F0 @ 0x1800525F0 (sub_1800525F0.c)
 *     sub_1800544F4 @ 0x1800544F4 (sub_1800544F4.c)
 *     sub_1800C621C @ 0x1800C621C (sub_1800C621C.c)
 *     sub_1800CF2A4 @ 0x1800CF2A4 (sub_1800CF2A4.c)
 * Callees:
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 */

__int64 __fastcall sub_18001D678(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_18001D7D4(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
