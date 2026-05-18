/*
 * XREFs of sub_1800208AC @ 0x1800208AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800208AC(_QWORD *a1, __int64 a2)
{
  *a1 = &stdext::exception::`vftable';
  a1[1] = *(_QWORD *)(a2 + 8);
  *a1 = &stdext::bad_alloc::`vftable';
  return a1;
}
