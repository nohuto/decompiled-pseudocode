/*
 * XREFs of sub_180054848 @ 0x180054848
 * Callers:
 *     sub_180054160 @ 0x180054160 (sub_180054160.c)
 * Callees:
 *     sub_18001D79C @ 0x18001D79C (sub_18001D79C.c)
 *     sub_180023C44 @ 0x180023C44 (sub_180023C44.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180054848(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 i; // rdi

  v4 = a2;
  for ( i = a1; v4; --v4 )
  {
    sub_180023C44(a1, a3, i);
    a3 += 32LL;
    i += 32LL;
  }
  sub_18001D79C(a3, a3);
  return a3;
}
