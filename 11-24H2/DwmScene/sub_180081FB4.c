/*
 * XREFs of sub_180081FB4 @ 0x180081FB4
 * Callers:
 *     sub_18004F770 @ 0x18004F770 (sub_18004F770.c)
 *     sub_1800C655C @ 0x1800C655C (sub_1800C655C.c)
 * Callees:
 *     sub_180075A78 @ 0x180075A78 (sub_180075A78.c)
 */

__int64 __fastcall sub_180081FB4(_QWORD *a1)
{
  *a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  sub_180075A78((__int64)(a1 + 14));
  return sub_1800266BC((__int64)a1);
}
