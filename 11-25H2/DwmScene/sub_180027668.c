/*
 * XREFs of sub_180027668 @ 0x180027668
 * Callers:
 *     sub_180050F80 @ 0x180050F80 (sub_180050F80.c)
 *     sub_1800688A4 @ 0x1800688A4 (sub_1800688A4.c)
 *     sub_18008160C @ 0x18008160C (sub_18008160C.c)
 *     sub_18008180C @ 0x18008180C (sub_18008180C.c)
 *     sub_1800B7DDC @ 0x1800B7DDC (sub_1800B7DDC.c)
 * Callees:
 *     sub_180027690 @ 0x180027690 (sub_180027690.c)
 */

_QWORD *__fastcall sub_180027668(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180027690();
  result = a1;
  *a1 = &Spectre::Engine::DeviceBuffer::`vftable';
  return result;
}
