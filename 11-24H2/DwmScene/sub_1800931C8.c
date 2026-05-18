/*
 * XREFs of sub_1800931C8 @ 0x1800931C8
 * Callers:
 *     sub_1800932B0 @ 0x1800932B0 (sub_1800932B0.c)
 *     sub_180094720 @ 0x180094720 (sub_180094720.c)
 *     sub_1800DB95F @ 0x1800DB95F (sub_1800DB95F.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 */

__int64 __fastcall sub_1800931C8(_QWORD *a1)
{
  *a1 = &Spectre::Engine::TextureState::`vftable';
  sub_18000B6A4((__int64)(a1 + 385), 256LL, 6LL, (void (__fastcall *)(__int64))sub_1800552A0);
  sub_18000B6A4((__int64)(a1 + 193), 256LL, 6LL, (void (__fastcall *)(__int64))sub_1800552A0);
  return sub_18000B6A4((__int64)(a1 + 1), 256LL, 6LL, (void (__fastcall *)(__int64))sub_1800552A0);
}
