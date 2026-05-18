/*
 * XREFs of sub_18008176C @ 0x18008176C
 * Callers:
 *     sub_18007FD70 @ 0x18007FD70 (sub_18007FD70.c)
 *     sub_180080304 @ 0x180080304 (sub_180080304.c)
 * Callees:
 *     sub_1800277C8 @ 0x1800277C8 (sub_1800277C8.c)
 */

_QWORD *__fastcall sub_18008176C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800277C8(a1);
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  return result;
}
