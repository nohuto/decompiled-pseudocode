/*
 * XREFs of sub_18006A290 @ 0x18006A290
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A2DC @ 0x18006A2DC (sub_18006A2DC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006A290(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_18006A2DC(a1, a3, a4, a2, 1);
  return a2;
}
