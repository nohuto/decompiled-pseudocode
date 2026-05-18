/*
 * XREFs of sub_1800269B8 @ 0x1800269B8
 * Callers:
 *     sub_180026870 @ 0x180026870 (sub_180026870.c)
 *     sub_18006BF10 @ 0x18006BF10 (sub_18006BF10.c)
 *     sub_18006C76C @ 0x18006C76C (sub_18006C76C.c)
 *     sub_180084600 @ 0x180084600 (sub_180084600.c)
 *     sub_1800894D0 @ 0x1800894D0 (sub_1800894D0.c)
 *     sub_18008BA20 @ 0x18008BA20 (sub_18008BA20.c)
 *     sub_180092740 @ 0x180092740 (sub_180092740.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_180013918 @ 0x180013918 (sub_180013918.c)
 *     sub_180015F64 @ 0x180015F64 (sub_180015F64.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_180026CC0 @ 0x180026CC0 (sub_180026CC0.c)
 *     sub_180027130 @ 0x180027130 (sub_180027130.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800269B8(__int64 a1, int a2, int a3, char a4, int a5, __int64 a6)
{
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // r15
  __int64 *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  _QWORD *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __m128 v25; // xmm2
  __m128 v26; // xmm0
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  __int64 v31; // rsi
  __int64 v33; // [rsp+38h] [rbp-71h]
  int v34; // [rsp+40h] [rbp-69h]
  __int64 v35; // [rsp+48h] [rbp-61h]
  __int64 v37; // [rsp+58h] [rbp-51h] BYREF
  __int64 v38; // [rsp+60h] [rbp-49h]
  unsigned int v39; // [rsp+68h] [rbp-41h]
  __int64 v40[4]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v41[16]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-9h]

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  *(_DWORD *)(a1 + 112) = a5;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v10 = sub_180015F64(v9, &v37);
  v11 = (_QWORD *)(a1 + 136);
  sub_180011110((_QWORD *)(a1 + 136), v10);
  if ( v38 )
    sub_18001060C(v38);
  sub_180027BEC(a1, v41);
  if ( !v42 )
    sub_180013918((__int64)v41, "RenderTargetD3D11", 0x11uLL);
  v12 = *v11;
  v13 = sub_180017054((__int64)v40, (__int64)v41);
  sub_180027D84(v12, v13);
  sub_180027DD0(*v11, 1LL, 0LL);
  sub_180027DD0(*v11, (unsigned int)(v14 + 2), v14);
  sub_180027DD0(*v11, (unsigned int)(v15 + 4), v15);
  sub_180027DD0(*v11, (unsigned int)(v16 + 8), v16);
  v39 = a5 & 0xFFFFFF7C | 3;
  sub_180051B88(*v11, v7, v8, 0, a4, 0, a5 & 0x7C | 3, 0LL, 0, 0LL);
  if ( (a5 & 0x80u) != 0 )
  {
    v17 = (_QWORD *)(a1 + 152);
    if ( !*(_QWORD *)(a1 + 152) )
    {
      v18 = sub_180015F64(v9, &v37);
      sub_180011110((_QWORD *)(a1 + 152), v18);
      if ( v38 )
        sub_18001060C(v38);
    }
    v19 = *v17;
    v20 = sub_18001B610(v40, (__int64)v41, (__int64)" (staging)");
    sub_180027D84(v19, v20);
    sub_180027DD0(*v17, 1LL, 0LL);
    sub_180027DD0(*v17, (unsigned int)(v21 + 2), v21);
    sub_180027DD0(*v17, (unsigned int)(v22 + 4), v22);
    sub_180027DD0(*v17, (unsigned int)(v23 + 8), v23);
    sub_180051B88(*v17, v7, v8, 0, a4, 3, v39 & 0x7C | 0x80, v24 & v33, v24 & v34, v24 & v35);
  }
  v25 = 0LL;
  v25.m128_f32[0] = (float)v8;
  v26 = 0LL;
  v26.m128_f32[0] = (float)v7;
  sub_180027130(a1, _mm_unpacklo_ps(v26, v25).m128_u64[0]);
  if ( a6 )
  {
    LOBYTE(v27) = 1;
    sub_180027DD0(a1, 1LL, v27);
  }
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    if ( a6 )
    {
      sub_180026CC0(a1, a6);
      sub_180027DD0(a1, 2LL, 0LL);
      sub_180027DD0(v29, (unsigned int)(v28 + 4), v28);
    }
    else
    {
      sub_180034808(v9, v40);
      v30 = (_QWORD *)v40[0];
      v31 = v40[1];
      while ( v30 != (_QWORD *)v31 )
      {
        unknown_libname_81(&v37, v30);
        sub_180026CC0(a1, v37);
        if ( v38 )
          sub_18001060C(v38);
        v30 += 2;
      }
      sub_1800131E0((__int64)v40);
    }
  }
  return sub_180011B5C((__int64)v41);
}
