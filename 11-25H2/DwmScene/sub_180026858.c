/*
 * XREFs of sub_180026858 @ 0x180026858
 * Callers:
 *     sub_180026710 @ 0x180026710 (sub_180026710.c)
 *     sub_18006BDB0 @ 0x18006BDB0 (sub_18006BDB0.c)
 *     sub_18006C60C @ 0x18006C60C (sub_18006C60C.c)
 *     sub_1800844A0 @ 0x1800844A0 (sub_1800844A0.c)
 *     sub_180089370 @ 0x180089370 (sub_180089370.c)
 *     sub_18008B8C0 @ 0x18008B8C0 (sub_18008B8C0.c)
 *     sub_1800925E0 @ 0x1800925E0 (sub_1800925E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_180013818 @ 0x180013818 (sub_180013818.c)
 *     sub_180015E64 @ 0x180015E64 (sub_180015E64.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_180026B60 @ 0x180026B60 (sub_180026B60.c)
 *     sub_180026FD0 @ 0x180026FD0 (sub_180026FD0.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180026858(__int64 a1, int a2, int a3, char a4, int a5, __int64 a6)
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
  v10 = sub_180015E64(v9, &v37);
  v11 = (_QWORD *)(a1 + 136);
  sub_180011010((_QWORD *)(a1 + 136), v10);
  if ( v38 )
    sub_18001050C(v38);
  sub_180027A8C(a1, v41);
  if ( !v42 )
    sub_180013818((__int64)v41, "RenderTargetD3D11", 0x11uLL);
  v12 = *v11;
  v13 = sub_180016F54((__int64)v40, (__int64)v41);
  sub_180027C24(v12, v13);
  sub_180027C70(*v11, 1LL, 0LL);
  sub_180027C70(*v11, (unsigned int)(v14 + 2), v14);
  sub_180027C70(*v11, (unsigned int)(v15 + 4), v15);
  sub_180027C70(*v11, (unsigned int)(v16 + 8), v16);
  v39 = a5 & 0xFFFFFF7C | 3;
  sub_180051A28(*v11, v7, v8, 0, a4, 0, a5 & 0x7C | 3, 0LL, 0, 0LL);
  if ( (a5 & 0x80u) != 0 )
  {
    v17 = (_QWORD *)(a1 + 152);
    if ( !*(_QWORD *)(a1 + 152) )
    {
      v18 = sub_180015E64(v9, &v37);
      sub_180011010((_QWORD *)(a1 + 152), v18);
      if ( v38 )
        sub_18001050C(v38);
    }
    v19 = *v17;
    v20 = sub_18001B4B0(v40, (__int64)v41, (__int64)" (staging)");
    sub_180027C24(v19, v20);
    sub_180027C70(*v17, 1LL, 0LL);
    sub_180027C70(*v17, (unsigned int)(v21 + 2), v21);
    sub_180027C70(*v17, (unsigned int)(v22 + 4), v22);
    sub_180027C70(*v17, (unsigned int)(v23 + 8), v23);
    sub_180051A28(*v17, v7, v8, 0, a4, 3, v39 & 0x7C | 0x80, v24 & v33, v24 & v34, v24 & v35);
  }
  v25 = 0LL;
  v25.m128_f32[0] = (float)v8;
  v26 = 0LL;
  v26.m128_f32[0] = (float)v7;
  sub_180026FD0(a1, _mm_unpacklo_ps(v26, v25).m128_u64[0]);
  if ( a6 )
  {
    LOBYTE(v27) = 1;
    sub_180027C70(a1, 1LL, v27);
  }
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    if ( a6 )
    {
      sub_180026B60(a1, a6);
      sub_180027C70(a1, 2LL, 0LL);
      sub_180027C70(v29, (unsigned int)(v28 + 4), v28);
    }
    else
    {
      sub_1800346A8(v9, v40);
      v30 = (_QWORD *)v40[0];
      v31 = v40[1];
      while ( v30 != (_QWORD *)v31 )
      {
        unknown_libname_81(&v37, v30);
        sub_180026B60(a1, v37);
        if ( v38 )
          sub_18001050C(v38);
        v30 += 2;
      }
      sub_1800130E0((__int64)v40);
    }
  }
  return sub_180011A5C((__int64)v41);
}
