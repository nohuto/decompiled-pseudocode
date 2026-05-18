/*
 * XREFs of sub_18008160C @ 0x18008160C
 * Callers:
 *     sub_18007FC10 @ 0x18007FC10 (sub_18007FC10.c)
 *     sub_1800801A4 @ 0x1800801A4 (sub_1800801A4.c)
 * Callees:
 *     sub_180027668 @ 0x180027668 (sub_180027668.c)
 */

_QWORD *__fastcall sub_18008160C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180027668(a1);
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  return result;
}
