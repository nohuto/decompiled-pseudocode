/*
 * XREFs of sub_1800801A4 @ 0x1800801A4
 * Callers:
 *     sub_18004EF04 @ 0x18004EF04 (sub_18004EF04.c)
 *     sub_1800B7B18 @ 0x1800B7B18 (sub_1800B7B18.c)
 * Callees:
 *     sub_18008160C @ 0x18008160C (sub_18008160C.c)
 */

_QWORD *__fastcall sub_1800801A4(_QWORD *a1)
{
  sub_18008160C(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::DeviceIndexBuffer::`vftable';
  return a1;
}
