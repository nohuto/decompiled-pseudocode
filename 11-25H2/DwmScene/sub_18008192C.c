/*
 * XREFs of sub_18008192C @ 0x18008192C
 * Callers:
 *     sub_18004EF38 @ 0x18004EF38 (sub_18004EF38.c)
 *     sub_1800B7DA4 @ 0x1800B7DA4 (sub_1800B7DA4.c)
 * Callees:
 *     sub_180027690 @ 0x180027690 (sub_180027690.c)
 */

_QWORD *__fastcall sub_18008192C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180027690();
  result = a1;
  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
