/*
 * XREFs of sub_180074010 @ 0x180074010
 * Callers:
 *     sub_180074060 @ 0x180074060 (sub_180074060.c)
 * Callees:
 *     sub_180073F98 @ 0x180073F98 (sub_180073F98.c)
 */

__int64 __fastcall sub_180074010(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  sub_180073F98((__int64)(a1 + 19), a2);
  return sub_18008DDFC(a1);
}
