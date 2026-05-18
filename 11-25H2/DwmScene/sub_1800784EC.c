/*
 * XREFs of sub_1800784EC @ 0x1800784EC
 * Callers:
 *     sub_180078480 @ 0x180078480 (sub_180078480.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_180040728 @ 0x180040728 (sub_180040728.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800784EC(__int64 a1)
{
  __int64 v1; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+28h] [rbp-10h]

  sub_180040728(a1, &v1);
  if ( v1 )
    sub_18003BCDC(v1);
  if ( v2 )
    sub_18001050C(v2);
}
