/*
 * XREFs of sub_180076F74 @ 0x180076F74
 * Callers:
 *     sub_180076FB0 @ 0x180076FB0 (sub_180076FB0.c)
 * Callees:
 *     sub_180073F98 @ 0x180073F98 (sub_180073F98.c)
 */

char __fastcall sub_180076F74(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  sub_180073F98((__int64)(a1 + 14), a2);
  return sub_18005AE94(a1);
}
