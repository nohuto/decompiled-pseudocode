/*
 * XREFs of sub_18008B3F0 @ 0x18008B3F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001120C @ 0x18001120C (sub_18001120C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180041A88 @ 0x180041A88 (sub_180041A88.c)
 *     sub_180041B20 @ 0x180041B20 (sub_180041B20.c)
 *     sub_180041B48 @ 0x180041B48 (sub_180041B48.c)
 *     sub_180048934 @ 0x180048934 (sub_180048934.c)
 *     sub_1800498E0 @ 0x1800498E0 (sub_1800498E0.c)
 *     sub_1800588F0 @ 0x1800588F0 (sub_1800588F0.c)
 *     sub_180058A5C @ 0x180058A5C (sub_180058A5C.c)
 *     sub_18007C558 @ 0x18007C558 (sub_18007C558.c)
 *     sub_18007C758 @ 0x18007C758 (sub_18007C758.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008B3F0(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int128 *a5)
{
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // r15
  _QWORD *v10; // rax
  __int64 v11; // r8
  int v12; // r8d
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdi
  void (__fastcall *v17)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 v18; // rax
  __m128 v19; // xmm0
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rax
  int v23; // ebx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __m128i v26; // xmm1
  __int64 v27; // rdi
  void (__fastcall *v28)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 v29; // rax
  _DWORD *v30; // rax
  __int64 result; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int128 v34; // [rsp+38h] [rbp-61h] BYREF
  __int64 v35; // [rsp+48h] [rbp-51h]
  __int64 v36; // [rsp+50h] [rbp-49h]
  __int128 *v37; // [rsp+58h] [rbp-41h]
  __int64 v38; // [rsp+60h] [rbp-39h]
  _QWORD v39[4]; // [rsp+68h] [rbp-31h] BYREF

  v36 = a3;
  v35 = a2;
  v37 = a4;
  v38 = (__int64)a5;
  v7 = unknown_libname_81(&v34, (_QWORD *)(a1 + 232));
  sub_180058A5C(v8, v7);
  v34 = 0LL;
  sub_1800588F0(*(_QWORD *)(a1 + 24), (__int64 *)&v34);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v9 = (__int64 *)(a1 + 72);
  v10 = unknown_libname_81(&v34, (_QWORD *)(a1 + 248));
  sub_1800498E0(v11, v10);
  sub_180041B20(*(_QWORD *)(a1 + 248), -1LL, 0);
  sub_180041B48(*(_QWORD *)(a1 + 248), 0, v12, v12 + 2);
  v13 = *(_QWORD *)(a1 + 200);
  v34 = *a5;
  *(_QWORD *)a5 = 0LL;
  *((_QWORD *)a5 + 1) = 0LL;
  sub_18007C558(v13, (__int64)&unk_1801C8F38, &v34);
  v14 = unknown_libname_81(&v34, (_QWORD *)(a1 + 40));
  sub_18007C758(v15, (__int64)&unk_1801C8F38, v14);
  v16 = *(_QWORD *)(a1 + 24);
  v17 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v16 + 208LL);
  std::string::string(v39, "Bloom Phase 1");
  v18 = sub_180011D64(v35 + 8, &v34);
  v17(v16, v18, v36, a1 + 72, v39);
  if ( *((_QWORD *)&v34 + 1) )
    sub_18001060C(*((__int64 *)&v34 + 1));
  sub_180011B5C((__int64)v39);
  v19 = (__m128)*(unsigned int *)(a1 + 280);
  v19.m128_f32[0] = sub_18001120C(v19.m128_f32[0], 0.0, 1.0);
  v20 = *(_QWORD *)(a1 + 200);
  v34 = *a4;
  *(_QWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 1) = 0LL;
  sub_18007C558(v20, (__int64)&unk_1801C8F38, &v34);
  sub_180041A88(*(_QWORD *)(a1 + 248), (__int64)&unk_1801C9198, 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v21 = v35;
  v22 = sub_180032500(*(_QWORD *)(v35 + 3648), 1);
  v23 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v22 + 72LL))(v22, &unk_1801C6A38, 14LL);
  v24 = (__int64 *)sub_180048934(*v9, (__int64)&v34);
  sub_180041B48(*v24, v23, 0, 2);
  if ( *((_QWORD *)&v34 + 1) )
    sub_18001060C(*((__int64 *)&v34 + 1));
  v25 = *v9;
  v26 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), (__m128)xmmword_1800F8660);
  *(_QWORD *)&v34 = v26.m128i_i64[0];
  v26.m128i_i64[0] = _mm_srli_si128(v26, 8).m128i_u64[0];
  *((_QWORD *)&v34 + 1) = v26.m128i_i64[0];
  *(_QWORD *)(v25 + 172) = v34;
  *(_DWORD *)(v25 + 180) = v26.m128i_i32[0];
  *(_DWORD *)(v25 + 184) = HIDWORD(v34);
  v27 = *(_QWORD *)(a1 + 24);
  v28 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v27 + 208LL);
  std::string::string(v39, "Bloom Scene Overlay");
  v29 = sub_180011D64(v21 + 8, &v34);
  v28(v27, v29, v36, a1 + 72, v39);
  if ( *((_QWORD *)&v34 + 1) )
    sub_18001060C(*((__int64 *)&v34 + 1));
  sub_180011B5C((__int64)v39);
  v30 = (_DWORD *)*v9;
  v30[43] = 1065353216;
  v30[44] = 1065353216;
  v30[45] = 1065353216;
  v30[46] = 1065353216;
  v34 = 0LL;
  result = sub_18007C558(*(_QWORD *)(a1 + 200), (__int64)&unk_1801C8F38, &v34);
  v32 = *((_QWORD *)a4 + 1);
  if ( v32 )
    result = sub_18001060C(v32);
  v33 = *((_QWORD *)a5 + 1);
  if ( v33 )
    return sub_18001060C(v33);
  return result;
}
