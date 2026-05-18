/*
 * XREFs of sub_18002922C @ 0x18002922C
 * Callers:
 *     sub_180028E6C @ 0x180028E6C (sub_180028E6C.c)
 *     sub_180028F84 @ 0x180028F84 (sub_180028F84.c)
 *     sub_18006CF4C @ 0x18006CF4C (sub_18006CF4C.c)
 * Callees:
 *     sub_180028CB4 @ 0x180028CB4 (sub_180028CB4.c)
 *     sub_180029390 @ 0x180029390 (sub_180029390.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002922C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 152LL )
  {
    sub_180029390(a1, a3, i);
    a3 += 152LL;
  }
  sub_180028CB4(a3, a3);
  return a3;
}
