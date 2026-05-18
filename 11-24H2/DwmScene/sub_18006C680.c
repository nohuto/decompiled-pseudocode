/*
 * XREFs of sub_18006C680 @ 0x18006C680
 * Callers:
 *     sub_1800559D0 @ 0x1800559D0 (sub_1800559D0.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_18006CDFC @ 0x18006CDFC (sub_18006CDFC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180023570 @ 0x180023570 (sub_180023570.c)
 *     sub_180068F70 @ 0x180068F70 (sub_180068F70.c)
 *     sub_18006C5D0 @ 0x18006C5D0 (sub_18006C5D0.c)
 */

_QWORD *__fastcall sub_18006C680(__int64 a1, _QWORD *a2, int a3)
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
    v7 = sub_180023570(*(__int64 **)(*(_QWORD *)(a1 + 32) + 3648LL), &v11);
    sub_180011110(v6, v7);
    if ( v12 )
      sub_18001060C(v12);
    v8 = 0LL;
    v9 = 0LL;
    v8.m128_f32[0] = (float)*(int *)(a1 + 8) / flt_180104C68[v3];
    v9.m128_f32[0] = (float)*(int *)(a1 + 12) / flt_180104C68[v3];
    sub_18006C5D0((int *)&v13, _mm_unpacklo_ps(v8, v9).m128_i64[0]);
    sub_180068F70(*v6, (unsigned int)v13, HIDWORD(v13), 1u, 0, *(_QWORD *)(a1 + 32));
  }
  unknown_libname_81(a2, v6);
  return a2;
}
