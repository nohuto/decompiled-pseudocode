/*
 * XREFs of sub_180033DF4 @ 0x180033DF4
 * Callers:
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 * Callees:
 *     sub_180010BA8 @ 0x180010BA8 (sub_180010BA8.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18002D740 @ 0x18002D740 (sub_18002D740.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180033DF4(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002867C((__int64)(a1 + 101), (__int64)v5);
  sub_18002D740(a1 + 111, a1[112], a1[108], (a1[109] - a1[108]) >> 4);
  v2 = a1[108];
  v3 = a1[109];
  if ( v2 != v3 )
  {
    sub_180010BA8(v2, v3);
    a1[109] = a1[108];
  }
  return sub_180011044((__int64)v5);
}
