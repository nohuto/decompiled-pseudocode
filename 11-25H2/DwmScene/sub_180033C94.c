/*
 * XREFs of sub_180033C94 @ 0x180033C94
 * Callers:
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 * Callees:
 *     sub_180010AA8 @ 0x180010AA8 (sub_180010AA8.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18002D5E0 @ 0x18002D5E0 (sub_18002D5E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180033C94(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002851C((__int64)(a1 + 101), (__int64)v5);
  sub_18002D5E0(a1 + 111, a1[112], a1[108], (a1[109] - a1[108]) >> 4);
  v2 = a1[108];
  v3 = a1[109];
  if ( v2 != v3 )
  {
    sub_180010AA8(v2, v3);
    a1[109] = a1[108];
  }
  return sub_180010F44((__int64)v5);
}
