/*
 * XREFs of sub_18006D154 @ 0x18006D154
 * Callers:
 *     sub_18006D0AC @ 0x18006D0AC (sub_18006D0AC.c)
 *     sub_18006D1E0 @ 0x18006D1E0 (sub_18006D1E0.c)
 * Callees:
 *     sub_180028E14 @ 0x180028E14 (sub_180028E14.c)
 *     sub_18006D1B4 @ 0x18006D1B4 (sub_18006D1B4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006D154(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx

  v2 = a2;
  for ( i = a1; v2; --v2 )
  {
    sub_18006D1B4(a1, i);
    i += 152LL;
  }
  sub_180028E14(i, i);
  return i;
}
