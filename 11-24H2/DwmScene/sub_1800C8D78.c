/*
 * XREFs of sub_1800C8D78 @ 0x1800C8D78
 * Callers:
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011524 @ 0x180011524 (sub_180011524.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_180015B5C @ 0x180015B5C (sub_180015B5C.c)
 *     sub_180015F64 @ 0x180015F64 (sub_180015F64.c)
 *     sub_180017024 @ 0x180017024 (sub_180017024.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180051AD0 @ 0x180051AD0 (sub_180051AD0.c)
 *     sub_180052358 @ 0x180052358 (sub_180052358.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C22A4 @ 0x1800C22A4 (sub_1800C22A4.c)
 *     sub_1800C83FC @ 0x1800C83FC (sub_1800C83FC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800C8D78(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 *v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // rax
  int v8; // r8d
  __int64 *v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm6
  __int64 *v12; // rax
  _QWORD *v13; // rax
  int v14; // r8d
  int v15; // r9d
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(__int64, __int64, int *, __int64 **); // rdi
  __int64 v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  const char *v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rax
  __int64 v32; // r9
  __int64 v33; // rcx
  __m128i v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h]
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+74h] [rbp-8Ch]
  int v43; // [rsp+7Ch] [rbp-84h]
  __int64 v44; // [rsp+80h] [rbp-80h]
  __m128i v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  _QWORD v47[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-30h]
  _OWORD v50[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+110h] [rbp+10h]
  _QWORD pExceptionObject[7]; // [rsp+118h] [rbp+18h] BYREF

  v46 = a2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v5 = sub_180015F64(v4, &v35);
  sub_180011110((_QWORD *)(a1 + 128), v5);
  if ( v35.m128i_i64[1] )
    sub_18001060C(v35.m128i_i64[1]);
  v6 = a2 + 8;
  v7 = unknown_libname_81(&v35, (_QWORD *)(a1 + 128));
  sub_1800C83FC(a2 + 8, (__int64)v7, v8, 4);
  v9 = sub_180052358(*(_QWORD *)(a1 + 128), &v35, *(_DWORD *)(a1 + 88));
  sub_180011110((_QWORD *)(a1 + 96), v9);
  if ( v35.m128i_i64[1] )
    sub_18001060C(v35.m128i_i64[1]);
  sub_180011C04(a1 + 72, &v35);
  v11 = v35;
  v45 = v35;
  if ( *(_BYTE *)(a2 + 4) )
  {
    v12 = sub_180015F64(v4, &v35);
    sub_180011110((_QWORD *)(a1 + 144), v12);
    if ( v35.m128i_i64[1] )
      sub_18001060C(v35.m128i_i64[1]);
    sub_180027DD0(*(_QWORD *)(a1 + 144), 2, 0);
    v13 = unknown_libname_81(&v35, (_QWORD *)(a1 + 144));
    v15 = 256;
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 5) )
      goto LABEL_29;
    v16 = sub_180015F64(v4, &v35);
    sub_180011110((_QWORD *)(a1 + 192), v16);
    if ( v35.m128i_i64[1] )
      sub_18001060C(v35.m128i_i64[1]);
    sub_180027DD0(*(_QWORD *)(a1 + 192), 2, 0);
    v13 = unknown_libname_81(&v35, (_QWORD *)(a1 + 192));
    v15 = 1024;
  }
  sub_1800C83FC(a2 + 8, (__int64)v13, v14, v15);
  if ( *(_BYTE *)(a2 + 5) && !*(_QWORD *)(a1 + 192) )
  {
    sub_180052358(*(_QWORD *)(a1 + 144), &v35, *(_DWORD *)(a1 + 88));
    memset(v50, 0, sizeof(v50));
    v51 = 0LL;
    v52 = 0;
    v17 = unknown_libname_81(v47, &v35);
    v18 = sub_180017024(&v36, v17);
    sub_1800C22A4(*v18, &v38);
    if ( v37 )
      sub_18001060C(v37);
    v19 = v38;
    (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v38 + 80LL))(v38, v50);
    v44 = 0LL;
    v41 = 47;
    v42 = 4LL;
    v43 = DWORD2(v50[0]);
    v39 = 0LL;
    v40[0] = v11.m128i_i64[0];
    v20 = sub_1800B9B64(v11.m128i_i64[0], &v36);
    v21 = *v20;
    v22 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64 **))(*(_QWORD *)*v20 + 56LL);
    sub_18000E954((__int64 *)&v39);
    LODWORD(v22) = v22(v21, v19, &v41, &v39);
    sub_18000E954(&v36);
    v23 = v40[0];
    sub_1800BB2F8(v40[0], (int)v22);
    if ( (int)v22 < 0 )
    {
      std::string::string(v47, "Failed to create ShaderResourceView for stencil buffer");
      v24 = std::string::string(
              &v48,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
      sub_180068668(pExceptionObject, (__int64)v24, v25, (__int64)v47, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v26 = sub_180027BEC(a1, (__int64)&v48);
    v27 = (const char *)sub_1800138F8(v26);
    sub_180011524(v39, v27);
    sub_180011B5C((__int64)&v48);
    v28 = sub_180015B5C(v23, &v48);
    v29 = (__int64 *)*v28;
    v47[0] = *v28;
    v30 = v28[1];
    v47[1] = v30;
    *v28 = 0LL;
    v28[1] = 0LL;
    if ( v49 )
      sub_18001060C(v49);
    v40[0] = (__int64)v39;
    sub_1800115D0(v40);
    v36 = v19;
    sub_1800115D0(&v36);
    sub_1800C0438(v29, &v36, v40, 0x400u);
    v31 = sub_180015F64(v4, &v36);
    sub_180011110((_QWORD *)(a1 + 192), v31);
    if ( v37 )
      sub_18001060C(v37);
    sub_180027DD0(*(_QWORD *)(a1 + 192), 2, 0);
    unknown_libname_81(&v36, v47);
    sub_180051AD0(v32, &v36);
    if ( v37 )
      sub_18001060C(v37);
    if ( v30 )
      sub_18001060C(v30);
    sub_18000E954((__int64 *)&v39);
    sub_18000E954(&v38);
    if ( v35.m128i_i64[1] )
      sub_18001060C(v35.m128i_i64[1]);
  }
LABEL_29:
  v33 = _mm_srli_si128(v11, 8).m128i_u64[0];
  if ( v33 )
    sub_18001060C(v33);
  return sub_180012508(v6, v10);
}
