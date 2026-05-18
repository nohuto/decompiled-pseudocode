/*
 * XREFs of sub_1800277C8 @ 0x1800277C8
 * Callers:
 *     sub_1800510E0 @ 0x1800510E0 (sub_1800510E0.c)
 *     sub_180068A04 @ 0x180068A04 (sub_180068A04.c)
 *     sub_18008176C @ 0x18008176C (sub_18008176C.c)
 *     sub_18008196C @ 0x18008196C (sub_18008196C.c)
 *     sub_1800B7F3C @ 0x1800B7F3C (sub_1800B7F3C.c)
 * Callees:
 *     sub_1800277F0 @ 0x1800277F0 (sub_1800277F0.c)
 */

_QWORD *__fastcall sub_1800277C8(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800277F0();
  result = a1;
  *a1 = &Spectre::Engine::DeviceBuffer::`vftable';
  return result;
}
