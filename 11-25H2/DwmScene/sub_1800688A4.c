/*
 * XREFs of sub_1800688A4 @ 0x1800688A4
 * Callers:
 *     sub_18004EEDC @ 0x18004EEDC (sub_18004EEDC.c)
 *     sub_1800C7FA0 @ 0x1800C7FA0 (sub_1800C7FA0.c)
 * Callees:
 *     sub_180027668 @ 0x180027668 (sub_180027668.c)
 */

_QWORD *__fastcall sub_1800688A4(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180027668(a1);
  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
