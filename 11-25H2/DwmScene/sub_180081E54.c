/*
 * XREFs of sub_180081E54 @ 0x180081E54
 * Callers:
 *     sub_18004F610 @ 0x18004F610 (sub_18004F610.c)
 *     sub_1800C63FC @ 0x1800C63FC (sub_1800C63FC.c)
 * Callees:
 *     sub_180075918 @ 0x180075918 (sub_180075918.c)
 */

__int64 __fastcall sub_180081E54(_QWORD *a1)
{
  *a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  sub_180075918((__int64)(a1 + 14));
  return sub_18002655C((__int64)a1);
}
