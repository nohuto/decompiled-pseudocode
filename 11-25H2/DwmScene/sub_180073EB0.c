/*
 * XREFs of sub_180073EB0 @ 0x180073EB0
 * Callers:
 *     sub_180073F00 @ 0x180073F00 (sub_180073F00.c)
 * Callees:
 *     sub_180073E38 @ 0x180073E38 (sub_180073E38.c)
 */

__int64 __fastcall sub_180073EB0(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  sub_180073E38((__int64)(a1 + 19), a2);
  return sub_18008DC9C(a1);
}
