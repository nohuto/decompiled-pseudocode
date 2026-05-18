/*
 * XREFs of sub_180093068 @ 0x180093068
 * Callers:
 *     sub_180093150 @ 0x180093150 (sub_180093150.c)
 *     sub_1800945C0 @ 0x1800945C0 (sub_1800945C0.c)
 *     sub_1800DB7FF @ 0x1800DB7FF (sub_1800DB7FF.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 */

__int64 __fastcall sub_180093068(_QWORD *a1)
{
  *a1 = &Spectre::Engine::TextureState::`vftable';
  sub_18000B2D4((__int64)(a1 + 385), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180055140);
  sub_18000B2D4((__int64)(a1 + 193), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180055140);
  return sub_18000B2D4((__int64)(a1 + 1), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180055140);
}
