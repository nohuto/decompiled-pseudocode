/*
 * XREFs of sub_180081A8C @ 0x180081A8C
 * Callers:
 *     sub_18004F098 @ 0x18004F098 (sub_18004F098.c)
 *     sub_1800B7F04 @ 0x1800B7F04 (sub_1800B7F04.c)
 * Callees:
 *     sub_1800277F0 @ 0x1800277F0 (sub_1800277F0.c)
 */

_QWORD *__fastcall sub_180081A8C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800277F0();
  result = a1;
  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
