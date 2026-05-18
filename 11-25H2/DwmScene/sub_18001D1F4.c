/*
 * XREFs of sub_18001D1F4 @ 0x18001D1F4
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800171A8 @ 0x1800171A8 (sub_1800171A8.c)
 */

_QWORD *__fastcall sub_18001D1F4(_QWORD *a1, __int64 a2)
{
  sub_1800171A8((__int64)a1, a2);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
