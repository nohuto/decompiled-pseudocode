/*
 * XREFs of sub_18002FF48 @ 0x18002FF48
 * Callers:
 *     sub_1800362E0 @ 0x1800362E0 (sub_1800362E0.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18002C43C @ 0x18002C43C (sub_18002C43C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002FF48(__int64 *a1)
{
  __int64 v2; // rcx

  sub_18000B2D4((__int64)(a1 + 7), 24LL, 10LL, (void (__fastcall *)(__int64))sub_1800172F0);
  v2 = a1[4];
  if ( v2 )
  {
    sub_18002C43C(v2, a1[5]);
    sub_180010134((void *)a1[4], 8 * ((a1[6] - a1[4]) >> 3));
    a1[4] = 0LL;
    a1[5] = 0LL;
    a1[6] = 0LL;
  }
  return sub_1800D25C4(a1);
}
