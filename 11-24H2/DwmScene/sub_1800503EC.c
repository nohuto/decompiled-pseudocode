/*
 * XREFs of sub_1800503EC @ 0x1800503EC
 * Callers:
 *     sub_18004F0C0 @ 0x18004F0C0 (sub_18004F0C0.c)
 *     sub_1800B7F84 @ 0x1800B7F84 (sub_1800B7F84.c)
 * Callees:
 *     sub_1800277F0 @ 0x1800277F0 (sub_1800277F0.c)
 *     sub_180050390 @ 0x180050390 (sub_180050390.c)
 */

_QWORD *__fastcall sub_1800503EC(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800277F0();
  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  sub_180050390(a1 + 12);
  a1[14] = 0LL;
  result = a1;
  a1[15] = 0LL;
  return result;
}
