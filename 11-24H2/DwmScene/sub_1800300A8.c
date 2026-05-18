/*
 * XREFs of sub_1800300A8 @ 0x1800300A8
 * Callers:
 *     sub_180036440 @ 0x180036440 (sub_180036440.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18002C59C @ 0x18002C59C (sub_18002C59C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800300A8(__int64 *a1)
{
  __int64 v2; // rcx

  sub_18000B6A4((__int64)(a1 + 7), 24LL, 10LL, (void (__fastcall *)(__int64))sub_1800173F0);
  v2 = a1[4];
  if ( v2 )
  {
    sub_18002C59C(v2, a1[5]);
    sub_180010234((void *)a1[4], 8 * ((a1[6] - a1[4]) >> 3));
    a1[4] = 0LL;
    a1[5] = 0LL;
    a1[6] = 0LL;
  }
  return sub_1800D2724(a1);
}
