/*
 * XREFs of sub_18006C76C @ 0x18006C76C
 * Callers:
 *     sub_1800559D0 @ 0x1800559D0 (sub_1800559D0.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800108FC @ 0x1800108FC (sub_1800108FC.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_1800269B8 @ 0x1800269B8 (sub_1800269B8.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_18006C5D0 @ 0x18006C5D0 (sub_18006C5D0.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18006C76C(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rsi
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  int v14[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v15; // [rsp+40h] [rbp-69h] BYREF
  __int64 v16; // [rsp+48h] [rbp-61h]
  _BYTE v17[32]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v18[32]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v19[32]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v20[4]; // [rsp+B0h] [rbp+7h] BYREF

  *(_QWORD *)v14 = a2;
  v5 = a3;
  v6 = (__int64 *)(a1 + 16 * (a3 + 5LL));
  if ( !*v6 )
  {
    sub_1800108FC(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 3648LL), &v15);
    sub_180011110(v6, &v15);
    if ( v16 )
      sub_18001060C(v16);
    v7 = 0LL;
    v7.m128_f32[0] = (float)*(int *)(a1 + 8) / flt_180104C68[v5];
    v8 = 0LL;
    v8.m128_f32[0] = (float)*(int *)(a1 + 12) / flt_180104C68[v5];
    sub_18006C5D0(v14, _mm_unpacklo_ps(v7, v8).m128_i64[0]);
    v9 = sub_1800275D0(v20, (int)flt_180104C68[v5]);
    v10 = sub_18001B678((__int64)v19, (__int64)"ImageProcessing Scaled ", v9);
    sub_18001B5A8((__int64)v18, v10, (__int64)"x");
    sub_180011B5C((__int64)v19);
    sub_180011B5C((__int64)v20);
    v11 = *v6;
    v12 = sub_180017054((__int64)v17, (__int64)v18);
    sub_180027D84(v11, v12);
    sub_1800269B8(*v6, v14[0], v14[1], *(_DWORD *)(a1 + 20), *(_DWORD *)(a1 + 28) & 0xFFFFFFBF, *(_QWORD *)(a1 + 32));
    sub_180011B5C((__int64)v18);
  }
  unknown_libname_81(a2, v6);
  return a2;
}
