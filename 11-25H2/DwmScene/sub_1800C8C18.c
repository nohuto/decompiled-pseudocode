/*
 * XREFs of sub_1800C8C18 @ 0x1800C8C18
 * Callers:
 *     sub_1800C84D0 @ 0x1800C84D0 (sub_1800C84D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011424 @ 0x180011424 (sub_180011424.c)
 *     sub_1800114D0 @ 0x1800114D0 (sub_1800114D0.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180015A5C @ 0x180015A5C (sub_180015A5C.c)
 *     sub_180015E64 @ 0x180015E64 (sub_180015E64.c)
 *     sub_180016F24 @ 0x180016F24 (sub_180016F24.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_180051970 @ 0x180051970 (sub_180051970.c)
 *     sub_1800521F8 @ 0x1800521F8 (sub_1800521F8.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800C02D8 @ 0x1800C02D8 (sub_1800C02D8.c)
 *     sub_1800C2144 @ 0x1800C2144 (sub_1800C2144.c)
 *     sub_1800C829C @ 0x1800C829C (sub_1800C829C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800C8C18(__int64 a1, __int64 a2)
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
  v5 = sub_180015E64(v4, &v35);
  sub_180011010((_QWORD *)(a1 + 128), v5);
  if ( v35.m128i_i64[1] )
    sub_18001050C(v35.m128i_i64[1]);
  v6 = a2 + 8;
  v7 = unknown_libname_81(&v35, (_QWORD *)(a1 + 128));
  sub_1800C829C(a2 + 8, (__int64)v7, v8, 4);
  v9 = sub_1800521F8(*(_QWORD *)(a1 + 128), &v35, *(_DWORD *)(a1 + 88));
  sub_180011010((_QWORD *)(a1 + 96), v9);
  if ( v35.m128i_i64[1] )
    sub_18001050C(v35.m128i_i64[1]);
  sub_180011B04(a1 + 72, &v35);
  v11 = v35;
  v45 = v35;
  if ( *(_BYTE *)(a2 + 4) )
  {
    v12 = sub_180015E64(v4, &v35);
    sub_180011010((_QWORD *)(a1 + 144), v12);
    if ( v35.m128i_i64[1] )
      sub_18001050C(v35.m128i_i64[1]);
    sub_180027C70(*(_QWORD *)(a1 + 144), 2, 0);
    v13 = unknown_libname_81(&v35, (_QWORD *)(a1 + 144));
    v15 = 256;
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 5) )
      goto LABEL_29;
    v16 = sub_180015E64(v4, &v35);
    sub_180011010((_QWORD *)(a1 + 192), v16);
    if ( v35.m128i_i64[1] )
      sub_18001050C(v35.m128i_i64[1]);
    sub_180027C70(*(_QWORD *)(a1 + 192), 2, 0);
    v13 = unknown_libname_81(&v35, (_QWORD *)(a1 + 192));
    v15 = 1024;
  }
  sub_1800C829C(a2 + 8, (__int64)v13, v14, v15);
  if ( *(_BYTE *)(a2 + 5) && !*(_QWORD *)(a1 + 192) )
  {
    sub_1800521F8(*(_QWORD *)(a1 + 144), &v35, *(_DWORD *)(a1 + 88));
    memset(v50, 0, sizeof(v50));
    v51 = 0LL;
    v52 = 0;
    v17 = unknown_libname_81(v47, &v35);
    v18 = sub_180016F24(&v36, v17);
    sub_1800C2144(*v18, &v38);
    if ( v37 )
      sub_18001050C(v37);
    v19 = v38;
    (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v38 + 80LL))(v38, v50);
    v44 = 0LL;
    v41 = 47;
    v42 = 4LL;
    v43 = DWORD2(v50[0]);
    v39 = 0LL;
    v40[0] = v11.m128i_i64[0];
    v20 = sub_1800B9A04(v11.m128i_i64[0], &v36);
    v21 = *v20;
    v22 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64 **))(*(_QWORD *)*v20 + 56LL);
    sub_18000E854((__int64 *)&v39);
    LODWORD(v22) = v22(v21, v19, &v41, &v39);
    sub_18000E854(&v36);
    v23 = v40[0];
    sub_1800BB198(v40[0], (int)v22);
    if ( (int)v22 < 0 )
    {
      std::string::string(v47, "Failed to create ShaderResourceView for stencil buffer");
      v24 = std::string::string(
              &v48,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
      sub_180068508(pExceptionObject, (__int64)v24, v25, (__int64)v47, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v26 = sub_180027A8C(a1, (__int64)&v48);
    v27 = (const char *)sub_1800137F8(v26);
    sub_180011424(v39, v27);
    sub_180011A5C((__int64)&v48);
    v28 = sub_180015A5C(v23, &v48);
    v29 = (__int64 *)*v28;
    v47[0] = *v28;
    v30 = v28[1];
    v47[1] = v30;
    *v28 = 0LL;
    v28[1] = 0LL;
    if ( v49 )
      sub_18001050C(v49);
    v40[0] = (__int64)v39;
    sub_1800114D0(v40);
    v36 = v19;
    sub_1800114D0(&v36);
    sub_1800C02D8(v29, &v36, v40, 0x400u);
    v31 = sub_180015E64(v4, &v36);
    sub_180011010((_QWORD *)(a1 + 192), v31);
    if ( v37 )
      sub_18001050C(v37);
    sub_180027C70(*(_QWORD *)(a1 + 192), 2, 0);
    unknown_libname_81(&v36, v47);
    sub_180051970(v32, &v36);
    if ( v37 )
      sub_18001050C(v37);
    if ( v30 )
      sub_18001050C(v30);
    sub_18000E854((__int64 *)&v39);
    sub_18000E854(&v38);
    if ( v35.m128i_i64[1] )
      sub_18001050C(v35.m128i_i64[1]);
  }
LABEL_29:
  v33 = _mm_srli_si128(v11, 8).m128i_u64[0];
  if ( v33 )
    sub_18001050C(v33);
  return sub_180012408(v6, v10);
}
