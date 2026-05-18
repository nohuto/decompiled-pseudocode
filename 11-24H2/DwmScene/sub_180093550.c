/*
 * XREFs of sub_180093550 @ 0x180093550
 * Callers:
 *     sub_1800935E0 @ 0x1800935E0 (sub_1800935E0.c)
 *     sub_180094720 @ 0x180094720 (sub_180094720.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 */

__int64 __fastcall sub_180093550(_QWORD *a1)
{
  *a1 = &Spectre::Engine::SamplerState::`vftable';
  sub_18000B6A4((__int64)(a1 + 385), 256LL, 6LL, (void (__fastcall *)(__int64))sub_1800552A0);
  sub_18000B6A4((__int64)(a1 + 193), 256LL, 6LL, (void (__fastcall *)(__int64))sub_1800552A0);
  return sub_18000B6A4((__int64)(a1 + 1), 256LL, 6LL, (void (__fastcall *)(__int64))sub_1800552A0);
}
