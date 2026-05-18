/*
 * XREFs of sub_180081C48 @ 0x180081C48
 * Callers:
 *     sub_180081B4C @ 0x180081B4C (sub_180081B4C.c)
 * Callees:
 *     sub_180073C8C @ 0x180073C8C (sub_180073C8C.c)
 *     sub_18007D134 @ 0x18007D134 (sub_18007D134.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180081C48(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 i; // rdi

  v4 = a2;
  for ( i = a1; v4; --v4 )
  {
    sub_18007D134(a1, a3, i);
    a3 += 48LL;
    i += 48LL;
  }
  sub_180073C8C(a3, a3);
  return a3;
}
