/*
 * XREFs of sub_180034224 @ 0x180034224
 * Callers:
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18001EB4C @ 0x18001EB4C (sub_18001EB4C.c)
 *     sub_18001EC3C @ 0x18001EC3C (sub_18001EC3C.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     sub_1800331D0 @ 0x1800331D0 (sub_1800331D0.c)
 *     sub_18007BB10 @ 0x18007BB10 (sub_18007BB10.c)
 *     sub_18009537C @ 0x18009537C (sub_18009537C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_180034224(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r9
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-48h]
  _BYTE v37[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v38; // [rsp+C8h] [rbp-38h]
  _QWORD v39[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v40[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v41[8]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v42[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v43[4]; // [rsp+190h] [rbp+90h] BYREF

  v8 = a1 + 58;
  v9 = unknown_libname_81(&v28, a1 + 58);
  sub_18001EB4C(
    v41,
    v9,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1017,
    (__int64)"RenderContent",
    (__int64)"RenderContent");
  std::string::string(v43, "RenderContent");
  v10 = sub_180032548((__int64)a1, &v35);
  sub_180015274(&v28, v10);
  sub_18002F414(v40, (__int64)&v28);
  if ( v29 )
    sub_180010644(v29);
  if ( v36 )
    sub_18001060C(v36);
  sub_180011B5C((__int64)v43);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 376LL))(*a4, v37);
  sub_180011C04(v11, &v28);
  if ( v38 )
    sub_180010644(v38);
  if ( v28 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28) )
  {
    v12 = unknown_libname_81(&v23, v8);
    sub_18001EB4C(
      v39,
      v12,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1025,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_PreRender");
    std::string::string(v42, "kSpectreRenderCB_PreRender");
    v13 = sub_180032548((__int64)a1, &v32);
    sub_180015274(&v23, v13);
    sub_18002F414(v34, (__int64)&v23);
    if ( v24 )
      sub_180010644(v24);
    if ( v33 )
      sub_18001060C(v33);
    sub_180011B5C((__int64)v42);
    v25 = a1[121];
    v26 = 3;
    sub_180011C8C(&v27);
    sub_18009537C(v25, &v25);
    unknown_libname_81(&v30, a4);
    v14 = unknown_libname_81(&v25, &v28);
    sub_1800331D0((__int64)a1, 3u, v14, v15);
    sub_180030128((__int64)v34);
    sub_18001EC3C((__int64)v39);
    v16 = unknown_libname_81(&v25, v8);
    sub_18001EB4C(
      v39,
      v16,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1030,
      (__int64)"RenderContent",
      (__int64)"RenderScene");
    std::string::string(v42, "RenderScene");
    v17 = sub_180032548((__int64)a1, &v30);
    sub_180015274(&v23, v17);
    sub_18002F414(v34, (__int64)&v23);
    if ( v24 )
      sub_180010644(v24);
    if ( v31 )
      sub_18001060C(v31);
    sub_180011B5C((__int64)v42);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64 *, _QWORD *))(*a1 + 128LL))(a1, a2, a3, &v28, a4);
    sub_180030128((__int64)v34);
    sub_18001EC3C((__int64)v39);
    v18 = unknown_libname_81(&v25, v8);
    sub_18001EB4C(
      v39,
      v18,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1036,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_EndFrame");
    std::string::string(v42, "kSpectreRenderCB_EndFrame");
    v19 = sub_180032548((__int64)a1, &v30);
    sub_180015274(&v23, v19);
    sub_18002F414(v34, (__int64)&v23);
    if ( v24 )
      sub_180010644(v24);
    if ( v31 )
      sub_18001060C(v31);
    sub_180011B5C((__int64)v42);
    v25 = a1[121];
    v26 = 5;
    sub_180011C8C(&v27);
    sub_18009537C(v25, &v25);
    unknown_libname_81(&v25, a4);
    v20 = unknown_libname_81(&v32, &v28);
    sub_1800331D0((__int64)a1, 5u, v20, v21);
    sub_180030128((__int64)v34);
    sub_18001EC3C((__int64)v39);
  }
  if ( v29 )
    sub_18001060C((__int64)v29);
  sub_18007BB10(*(_QWORD *)(a1[64] + 18648LL));
  sub_180030128((__int64)v40);
  return sub_18001EC3C((__int64)v41);
}
