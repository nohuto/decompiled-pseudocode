/*
 * XREFs of sub_18001FD88 @ 0x18001FD88
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001FD88(_QWORD *a1, __int64 a2)
{
  *a1 = &stdext::exception::`vftable';
  a1[1] = *(_QWORD *)(a2 + 8);
  *a1 = &std::logic_error::`vftable';
  return a1;
}
