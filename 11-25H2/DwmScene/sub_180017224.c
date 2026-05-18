/*
 * XREFs of sub_180017224 @ 0x180017224
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180017224(_QWORD *a1, __int64 a2)
{
  *a1 = &stdext::exception::`vftable';
  a1[1] = *(_QWORD *)(a2 + 8);
  *a1 = &std::runtime_error::`vftable';
  return a1;
}
