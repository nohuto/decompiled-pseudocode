/*
 * XREFs of sub_18005028C @ 0x18005028C
 * Callers:
 *     sub_18004EF60 @ 0x18004EF60 (sub_18004EF60.c)
 *     sub_1800B7E24 @ 0x1800B7E24 (sub_1800B7E24.c)
 * Callees:
 *     sub_180027690 @ 0x180027690 (sub_180027690.c)
 *     sub_180050230 @ 0x180050230 (sub_180050230.c)
 */

_QWORD *__fastcall sub_18005028C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180027690();
  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  sub_180050230(a1 + 12);
  a1[14] = 0LL;
  result = a1;
  a1[15] = 0LL;
  return result;
}
