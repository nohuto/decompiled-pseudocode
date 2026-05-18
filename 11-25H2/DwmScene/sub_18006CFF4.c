/*
 * XREFs of sub_18006CFF4 @ 0x18006CFF4
 * Callers:
 *     sub_18006CF4C @ 0x18006CF4C (sub_18006CF4C.c)
 *     sub_18006D080 @ 0x18006D080 (sub_18006D080.c)
 * Callees:
 *     sub_180028CB4 @ 0x180028CB4 (sub_180028CB4.c)
 *     sub_18006D054 @ 0x18006D054 (sub_18006D054.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006CFF4(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx

  v2 = a2;
  for ( i = a1; v2; --v2 )
  {
    sub_18006D054(a1, i);
    i += 152LL;
  }
  sub_180028CB4(i, i);
  return i;
}
