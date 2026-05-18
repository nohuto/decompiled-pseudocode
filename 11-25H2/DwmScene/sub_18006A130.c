/*
 * XREFs of sub_18006A130 @ 0x18006A130
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A17C @ 0x18006A17C (sub_18006A17C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006A130(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_18006A17C(a1, a3, a4, a2, 1);
  return a2;
}
