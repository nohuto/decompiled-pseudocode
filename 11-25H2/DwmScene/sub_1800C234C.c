/*
 * XREFs of sub_1800C234C @ 0x1800C234C
 * Callers:
 *     sub_1800C02D8 @ 0x1800C02D8 (sub_1800C02D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_83 @ 0x180017548 (unknown_libname_83.c)
 *     sub_180051390 @ 0x180051390 (sub_180051390.c)
 *     sub_1800514AC @ 0x1800514AC (sub_1800514AC.c)
 *     sub_18005224C @ 0x18005224C (sub_18005224C.c)
 *     sub_180052350 @ 0x180052350 (sub_180052350.c)
 *     sub_180052420 @ 0x180052420 (sub_180052420.c)
 *     sub_180052440 @ 0x180052440 (sub_180052440.c)
 *     sub_18008274C @ 0x18008274C (sub_18008274C.c)
 *     sub_1800BF6E0 @ 0x1800BF6E0 (sub_1800BF6E0.c)
 *     sub_1800BF75C @ 0x1800BF75C (sub_1800BF75C.c)
 *     sub_1800BF86C @ 0x1800BF86C (sub_1800BF86C.c)
 *     sub_1800C1260 @ 0x1800C1260 (sub_1800C1260.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800C234C(__int64 a1, unsigned int a2)
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
    v11 = (void ***)sub_1800BF75C((__int64)&v18, a2, v12, SDWORD1(v20), (__int64)&v19);
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a1 + 176);
  if ( v7 )
  {
    LODWORD(v21) = 0;
    v19 = 0LL;
    v20 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 80LL))(v7, &v19);
    v11 = (void ***)sub_1800BF86C((__int64)&v18, a2, SDWORD2(v19), v10, (__int64)&v19);
LABEL_10:
    v8 = (_QWORD *)(a1 + 112);
    sub_1800BF6E0((void ***)(a1 + 112), v11);
    sub_180051390(&v18);
    goto LABEL_11;
  }
  v8 = (_QWORD *)(a1 + 112);
  v9 = *(void ***)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( v9 )
    sub_1800514AC(0LL, v9);
LABEL_11:
  if ( v5 )
    sub_1800C1260((_QWORD *)a1);
  v13 = 0;
  if ( *v8 && *(_QWORD *)*v8 )
  {
    v2 = sub_180052420(a1);
    v13 = sub_180052350(a1);
    v14 = sub_18005224C(a1);
  }
  else
  {
    v14 = 0;
  }
  v15 = sub_18008274C(&v19, v14);
  unknown_libname_83((_OWORD *)(a1 + 120), (__int64)v15);
  sub_180011A5C((__int64)&v19);
  v16 = 0LL;
  v17 = 0LL;
  v16.m128_f32[0] = (float)v2;
  v17.m128_f32[0] = (float)v13;
  sub_180052440(a1, _mm_unpacklo_ps(v16, v17).m128_i64[0]);
}
