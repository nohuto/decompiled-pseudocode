/*
 * XREFs of sub_180076E14 @ 0x180076E14
 * Callers:
 *     sub_180076E50 @ 0x180076E50 (sub_180076E50.c)
 * Callees:
 *     sub_180073E38 @ 0x180073E38 (sub_180073E38.c)
 */

char __fastcall sub_180076E14(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  sub_180073E38((__int64)(a1 + 14), a2);
  return sub_18005AD34(a1);
}
