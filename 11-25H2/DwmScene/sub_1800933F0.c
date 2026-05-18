/*
 * XREFs of sub_1800933F0 @ 0x1800933F0
 * Callers:
 *     sub_180093480 @ 0x180093480 (sub_180093480.c)
 *     sub_1800945C0 @ 0x1800945C0 (sub_1800945C0.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 */

__int64 __fastcall sub_1800933F0(_QWORD *a1)
{
  *a1 = &Spectre::Engine::SamplerState::`vftable';
  sub_18000B2D4((__int64)(a1 + 385), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180055140);
  sub_18000B2D4((__int64)(a1 + 193), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180055140);
  return sub_18000B2D4((__int64)(a1 + 1), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180055140);
}
