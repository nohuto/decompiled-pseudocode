/*
 * XREFs of sub_18006C520 @ 0x18006C520
 * Callers:
 *     sub_180055870 @ 0x180055870 (sub_180055870.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_18006CC9C @ 0x18006CC9C (sub_18006CC9C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180023410 @ 0x180023410 (sub_180023410.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_18006C470 @ 0x18006C470 (sub_18006C470.c)
 */

_QWORD *__fastcall sub_18006C520(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbp
  __int64 **v6; // rdi
  __int64 *v7; // rax
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  _QWORD *v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v3 = a3;
  v6 = (__int64 **)(a1 + 16 * (a3 + 11LL));
  if ( !*v6 )
  {
    v7 = sub_180023410(*(__int64 **)(*(_QWORD *)(a1 + 32) + 3648LL), &v11);
    sub_180011010(v6, v7);
    if ( v12 )
      sub_18001050C(v12);
    v8 = 0LL;
    v9 = 0LL;
    v8.m128_f32[0] = (float)*(int *)(a1 + 8) / flt_180103C68[v3];
    v9.m128_f32[0] = (float)*(int *)(a1 + 12) / flt_180103C68[v3];
    sub_18006C470((int *)&v13, _mm_unpacklo_ps(v8, v9).m128_i64[0]);
    sub_180068E10(*v6, (unsigned int)v13, HIDWORD(v13), 1u, 0, *(_QWORD *)(a1 + 32));
  }
  unknown_libname_81(a2, v6);
  return a2;
}
