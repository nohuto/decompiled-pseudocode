/*
 * XREFs of sub_18007FD70 @ 0x18007FD70
 * Callers:
 *     sub_18004F120 @ 0x18004F120 (sub_18004F120.c)
 *     sub_1800B800C @ 0x1800B800C (sub_1800B800C.c)
 * Callees:
 *     sub_18008176C @ 0x18008176C (sub_18008176C.c)
 */

_QWORD *__fastcall sub_18007FD70(_QWORD *a1)
{
  sub_18008176C(a1, 11LL, 5LL);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return a1;
}
