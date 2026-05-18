/*
 * XREFs of sub_1800982F4 @ 0x1800982F4
 * Callers:
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 * Callees:
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_18009686C @ 0x18009686C (sub_18009686C.c)
 *     sub_180097784 @ 0x180097784 (sub_180097784.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_1800982F4(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // di

  v2 = a1 + 8;
  sub_180027FBC(a1 + 8);
  sub_180097784(a1);
  v3 = 0;
  if ( !sub_18009686C(a1 + 32) )
    v3 = !sub_18009686C(a1 + 216);
  sub_18002815C(v2);
  return v3;
}
