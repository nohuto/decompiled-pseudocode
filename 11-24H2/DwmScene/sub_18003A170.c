/*
 * XREFs of sub_18003A170 @ 0x18003A170
 * Callers:
 *     sub_18003A170 @ 0x18003A170 (sub_18003A170.c)
 *     sub_18003B7CC @ 0x18003B7CC (sub_18003B7CC.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_180039388 @ 0x180039388 (sub_180039388.c)
 *     sub_18003A170 @ 0x18003A170 (sub_18003A170.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

// Hidden C++ exception states: #wind=2
__m128 *__fastcall sub_18003A170(__int64 a1, __m128 *a2)
{
  char v4; // di
  _QWORD *v5; // rax
  __m128 *v6; // rax
  __m128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  _BYTE v13[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  sub_18003BE3C(a1);
  if ( *sub_180012654(a1, &v11) )
  {
    v5 = sub_180012654(a1, &v9);
    v4 = 1;
    v6 = (__m128 *)sub_18003A170(*v5, v13);
  }
  else
  {
    v8 = (__m128)xmmword_1800F8610;
    v6 = &v8;
  }
  v8 = *v6;
  if ( (v4 & 1) != 0 && v10 )
    sub_18001060C(v10);
  if ( v12 )
    sub_18001060C(v12);
  sub_180039388(a2, (__m128 *)(a1 + 156), &v8);
  return a2;
}
