/*
 * XREFs of sub_1800BF090 @ 0x1800BF090
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011524 @ 0x180011524 (sub_180011524.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_180017024 @ 0x180017024 (sub_180017024.c)
 *     sub_180027054 @ 0x180027054 (sub_180027054.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800BD870 @ 0x1800BD870 (sub_1800BD870.c)
 *     sub_1800BED4C @ 0x1800BED4C (sub_1800BED4C.c)
 *     sub_1800BF624 @ 0x1800BF624 (sub_1800BF624.c)
 *     sub_1800C22A4 @ 0x1800C22A4 (sub_1800C22A4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800BF090(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v7; // r15d
  int v8; // r12d
  __int64 *v9; // rax
  __int64 *v10; // rax
  bool v11; // di
  int v12; // edx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *, __int64); // rdi
  int v15; // eax
  __int64 v16; // rax
  const char *v17; // rax
  __m128 v18; // xmm2
  __m128 v19; // xmm0
  __int64 result; // rax
  __int64 v21; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v22; // [rsp+38h] [rbp-99h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-91h] BYREF
  __int64 v24; // [rsp+50h] [rbp-81h] BYREF
  __int64 v25; // [rsp+58h] [rbp-79h]
  __int64 v26; // [rsp+60h] [rbp-71h] BYREF
  __int64 v27; // [rsp+68h] [rbp-69h]
  _DWORD v28[3]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v29; // [rsp+7Ch] [rbp-55h]
  __int64 v30; // [rsp+88h] [rbp-49h] BYREF
  __int64 v31; // [rsp+90h] [rbp-41h]
  __int128 v32; // [rsp+98h] [rbp-39h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-29h]
  __int64 v34; // [rsp+B8h] [rbp-19h]
  int v35; // [rsp+C0h] [rbp-11h]
  _BYTE v36[32]; // [rsp+C8h] [rbp-9h] BYREF

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  sub_1800BF624(a1, v7, v8, a4, a5);
  sub_180011C04(a1 + 72, &v30);
  v9 = unknown_libname_81(&v24, &v30);
  sub_1800BED4C(&v26, v9);
  sub_1800B9B64(v26, &v21);
  v10 = unknown_libname_81(v23, (_QWORD *)(a1 + 96));
  sub_180017024(&v24, v10);
  sub_1800C22A4(v24, v23);
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v23[0] + 80LL))(v23[0], &v32);
  v11 = DWORD1(v33) > 1;
  v29 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v12 = 2;
  else
    v12 = (a5 & 8) != 0;
  v28[0] = sub_1800BD870(a4, v12);
  v28[1] = v11 ? 6 : 4;
  v28[2] = 0;
  sub_1800C22A4(v24, &v22);
  v13 = v21;
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)v21 + 72LL);
  sub_18000E954((__int64 *)(a1 + 128));
  v15 = v14(v13, v22, v28, a1 + 128);
  sub_1800BB2F8(v26, v15);
  v16 = sub_180027BEC(a1, (__int64)v36);
  v17 = (const char *)sub_1800138F8(v16);
  sub_180011524(*(__int64 **)(a1 + 128), v17);
  sub_180011B5C((__int64)v36);
  v18 = 0LL;
  v18.m128_f32[0] = (float)v8;
  v19 = 0LL;
  v19.m128_f32[0] = (float)v7;
  sub_180027054(a1, _mm_unpacklo_ps(v19, v18).m128_i64[0]);
  sub_18000E954(&v22);
  sub_18000E954(v23);
  if ( v25 )
    sub_18001060C(v25);
  result = sub_18000E954(&v21);
  if ( v27 )
    result = sub_18001060C(v27);
  if ( v31 )
    return sub_18001060C(v31);
  return result;
}
