/*
 * XREFs of sub_1800C24AC @ 0x1800C24AC
 * Callers:
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_83 @ 0x180017608 (unknown_libname_83.c)
 *     sub_1800514F0 @ 0x1800514F0 (sub_1800514F0.c)
 *     sub_18005160C @ 0x18005160C (sub_18005160C.c)
 *     sub_1800523AC @ 0x1800523AC (sub_1800523AC.c)
 *     sub_1800524B0 @ 0x1800524B0 (sub_1800524B0.c)
 *     sub_180052580 @ 0x180052580 (sub_180052580.c)
 *     sub_1800525A0 @ 0x1800525A0 (sub_1800525A0.c)
 *     sub_1800828AC @ 0x1800828AC (sub_1800828AC.c)
 *     sub_1800BF840 @ 0x1800BF840 (sub_1800BF840.c)
 *     sub_1800BF8BC @ 0x1800BF8BC (sub_1800BF8BC.c)
 *     sub_1800BF9CC @ 0x1800BF9CC (sub_1800BF9CC.c)
 *     sub_1800C13C0 @ 0x1800C13C0 (sub_1800C13C0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800C24AC(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  char v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  void **v9; // rdx
  int v10; // r9d
  void ***v11; // rax
  int v12; // r8d
  int v13; // r14d
  int v14; // edx
  _QWORD *v15; // rax
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  __int128 v20; // [rsp+48h] [rbp-28h]
  __int64 v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]

  v2 = 0;
  if ( *(_QWORD *)(a1 + 160) || (v5 = 1, (a2 & 1) == 0) )
    v5 = 0;
  v6 = *(_QWORD *)(a1 + 168);
  if ( v6 )
  {
    v21 = 0LL;
    v22 = 0;
    v19 = 0LL;
    v20 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 80LL))(v6, &v19);
    v11 = (void ***)sub_1800BF8BC((__int64)&v18, a2, v12, SDWORD1(v20), (__int64)&v19);
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a1 + 176);
  if ( v7 )
  {
    LODWORD(v21) = 0;
    v19 = 0LL;
    v20 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 80LL))(v7, &v19);
    v11 = (void ***)sub_1800BF9CC((__int64)&v18, a2, SDWORD2(v19), v10, (__int64)&v19);
LABEL_10:
    v8 = (_QWORD *)(a1 + 112);
    sub_1800BF840((void ***)(a1 + 112), v11);
    sub_1800514F0(&v18);
    goto LABEL_11;
  }
  v8 = (_QWORD *)(a1 + 112);
  v9 = *(void ***)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( v9 )
    sub_18005160C(0LL, v9);
LABEL_11:
  if ( v5 )
    sub_1800C13C0((_QWORD *)a1);
  v13 = 0;
  if ( *v8 && *(_QWORD *)*v8 )
  {
    v2 = sub_180052580(a1);
    v13 = sub_1800524B0(a1);
    v14 = sub_1800523AC(a1);
  }
  else
  {
    v14 = 0;
  }
  v15 = sub_1800828AC(&v19, v14);
  unknown_libname_83((_OWORD *)(a1 + 120), (__int64)v15);
  sub_180011B5C((__int64)&v19);
  v16 = 0LL;
  v17 = 0LL;
  v16.m128_f32[0] = (float)v2;
  v17.m128_f32[0] = (float)v13;
  sub_1800525A0(a1, _mm_unpacklo_ps(v16, v17).m128_i64[0]);
}
