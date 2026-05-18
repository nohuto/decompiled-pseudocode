/*
 * XREFs of sub_180081DA8 @ 0x180081DA8
 * Callers:
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 * Callees:
 *     sub_180073DEC @ 0x180073DEC (sub_180073DEC.c)
 *     sub_18007D294 @ 0x18007D294 (sub_18007D294.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180081DA8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 i; // rdi

  v4 = a2;
  for ( i = a1; v4; --v4 )
  {
    sub_18007D294(a1, a3, i);
    a3 += 48LL;
    i += 48LL;
  }
  sub_180073DEC(a3, a3);
  return a3;
}
