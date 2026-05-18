/*
 * XREFs of sub_180092E60 @ 0x180092E60
 * Callers:
 *     sub_180092F50 @ 0x180092F50 (sub_180092F50.c)
 *     sub_180094720 @ 0x180094720 (sub_180094720.c)
 *     sub_1800DB946 @ 0x1800DB946 (sub_1800DB946.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180092E60(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ConstantBufferState::`vftable';
  sub_18000B6A4((__int64)(a1 + 289), 192LL, 6LL, (void (__fastcall *)(__int64))sub_180055270);
  sub_18000B6A4((__int64)(a1 + 145), 192LL, 6LL, (void (__fastcall *)(__int64))sub_180055270);
  return sub_18000B6A4((__int64)(a1 + 1), 192LL, 6LL, (void (__fastcall *)(__int64))sub_180055270);
}
