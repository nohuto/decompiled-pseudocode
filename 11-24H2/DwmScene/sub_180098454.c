/*
 * XREFs of sub_180098454 @ 0x180098454
 * Callers:
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 * Callees:
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_1800969CC @ 0x1800969CC (sub_1800969CC.c)
 *     sub_1800978E4 @ 0x1800978E4 (sub_1800978E4.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_180098454(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // di

  v2 = a1 + 8;
  sub_18002811C(a1 + 8);
  sub_1800978E4(a1);
  v3 = 0;
  if ( !sub_1800969CC(a1 + 32) )
    v3 = !sub_1800969CC(a1 + 216);
  sub_1800282BC(v2);
  return v3;
}
