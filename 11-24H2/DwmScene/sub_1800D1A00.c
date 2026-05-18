/*
 * XREFs of sub_1800D1A00 @ 0x1800D1A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800172A8 @ 0x1800172A8 (sub_1800172A8.c)
 */

_QWORD *__fastcall sub_1800D1A00(_QWORD *a1, __int64 a2)
{
  sub_1800172A8((__int64)a1, a2);
  *a1 = &Spectre::Utils::CancelledException::`vftable';
  return a1;
}
