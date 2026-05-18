/*
 * XREFs of sub_18007864C @ 0x18007864C
 * Callers:
 *     sub_1800785E0 @ 0x1800785E0 (sub_1800785E0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_180040888 @ 0x180040888 (sub_180040888.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18007864C(__int64 a1)
{
  __int64 v1; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+28h] [rbp-10h]

  sub_180040888(a1, &v1);
  if ( v1 )
    sub_18003BE3C(v1);
  if ( v2 )
    sub_18001060C(v2);
}
