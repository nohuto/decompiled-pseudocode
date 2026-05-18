/*
 * XREFs of sub_18006C60C @ 0x18006C60C
 * Callers:
 *     sub_180055870 @ 0x180055870 (sub_180055870.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800107FC @ 0x1800107FC (sub_1800107FC.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_18006C470 @ 0x18006C470 (sub_18006C470.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18006C60C(__int64 a1, _QWORD *a2, int a3)
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
    sub_1800107FC(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 3648LL), &v15);
    sub_180011010(v6, &v15);
    if ( v16 )
      sub_18001050C(v16);
    v7 = 0LL;
    v7.m128_f32[0] = (float)*(int *)(a1 + 8) / flt_180103C68[v5];
    v8 = 0LL;
    v8.m128_f32[0] = (float)*(int *)(a1 + 12) / flt_180103C68[v5];
    sub_18006C470(v14, _mm_unpacklo_ps(v7, v8).m128_i64[0]);
    v9 = sub_180027470(v20, (int)flt_180103C68[v5]);
    v10 = sub_18001B518((__int64)v19, (__int64)"ImageProcessing Scaled ", v9);
    sub_18001B448((__int64)v18, v10, (__int64)"x");
    sub_180011A5C((__int64)v19);
    sub_180011A5C((__int64)v20);
    v11 = *v6;
    v12 = sub_180016F54((__int64)v17, (__int64)v18);
    sub_180027C24(v11, v12);
    sub_180026858(*v6, v14[0], v14[1], *(_DWORD *)(a1 + 20), *(_DWORD *)(a1 + 28) & 0xFFFFFFBF, *(_QWORD *)(a1 + 32));
    sub_180011A5C((__int64)v18);
  }
  unknown_libname_81(a2, v6);
  return a2;
}
