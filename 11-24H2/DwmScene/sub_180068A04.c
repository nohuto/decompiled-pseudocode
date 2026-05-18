/*
 * XREFs of sub_180068A04 @ 0x180068A04
 * Callers:
 *     sub_18004F03C @ 0x18004F03C (sub_18004F03C.c)
 *     sub_1800C8100 @ 0x1800C8100 (sub_1800C8100.c)
 * Callees:
 *     sub_1800277C8 @ 0x1800277C8 (sub_1800277C8.c)
 */

_QWORD *__fastcall sub_180068A04(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800277C8(a1);
  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
