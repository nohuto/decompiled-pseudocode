/*
 * XREFs of sub_180092D00 @ 0x180092D00
 * Callers:
 *     sub_180092DF0 @ 0x180092DF0 (sub_180092DF0.c)
 *     sub_1800945C0 @ 0x1800945C0 (sub_1800945C0.c)
 *     sub_1800DB7E6 @ 0x1800DB7E6 (sub_1800DB7E6.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180092D00(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ConstantBufferState::`vftable';
  sub_18000B2D4((__int64)(a1 + 289), 192LL, 6LL, (void (__fastcall *)(__int64))sub_180055110);
  sub_18000B2D4((__int64)(a1 + 145), 192LL, 6LL, (void (__fastcall *)(__int64))sub_180055110);
  return sub_18000B2D4((__int64)(a1 + 1), 192LL, 6LL, (void (__fastcall *)(__int64))sub_180055110);
}
