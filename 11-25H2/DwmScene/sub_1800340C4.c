/*
 * XREFs of sub_1800340C4 @ 0x1800340C4
 * Callers:
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_18001E9EC @ 0x18001E9EC (sub_18001E9EC.c)
 *     sub_18001EADC @ 0x18001EADC (sub_18001EADC.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_1800323E8 @ 0x1800323E8 (sub_1800323E8.c)
 *     sub_180033070 @ 0x180033070 (sub_180033070.c)
 *     sub_18007B9B0 @ 0x18007B9B0 (sub_18007B9B0.c)
 *     sub_18009521C @ 0x18009521C (sub_18009521C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_1800340C4(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
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
  sub_18001E9EC(
    v41,
    v9,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1017,
    (__int64)"RenderContent",
    (__int64)"RenderContent");
  std::string::string(v43, "RenderContent");
  v10 = sub_1800323E8((__int64)a1, &v35);
  sub_180015174(&v28, v10);
  sub_18002F2B4(v40, (__int64)&v28);
  if ( v29 )
    sub_180010544(v29);
  if ( v36 )
    sub_18001050C(v36);
  sub_180011A5C((__int64)v43);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 376LL))(*a4, v37);
  sub_180011B04(v11, &v28);
  if ( v38 )
    sub_180010544(v38);
  if ( v28 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28) )
  {
    v12 = unknown_libname_81(&v23, v8);
    sub_18001E9EC(
      v39,
      v12,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1025,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_PreRender");
    std::string::string(v42, "kSpectreRenderCB_PreRender");
    v13 = sub_1800323E8((__int64)a1, &v32);
    sub_180015174(&v23, v13);
    sub_18002F2B4(v34, (__int64)&v23);
    if ( v24 )
      sub_180010544(v24);
    if ( v33 )
      sub_18001050C(v33);
    sub_180011A5C((__int64)v42);
    v25 = a1[121];
    v26 = 3;
    sub_180011B8C(&v27);
    sub_18009521C(v25, &v25);
    unknown_libname_81(&v30, a4);
    v14 = unknown_libname_81(&v25, &v28);
    sub_180033070((__int64)a1, 3u, v14, v15);
    sub_18002FFC8((__int64)v34);
    sub_18001EADC((__int64)v39);
    v16 = unknown_libname_81(&v25, v8);
    sub_18001E9EC(
      v39,
      v16,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1030,
      (__int64)"RenderContent",
      (__int64)"RenderScene");
    std::string::string(v42, "RenderScene");
    v17 = sub_1800323E8((__int64)a1, &v30);
    sub_180015174(&v23, v17);
    sub_18002F2B4(v34, (__int64)&v23);
    if ( v24 )
      sub_180010544(v24);
    if ( v31 )
      sub_18001050C(v31);
    sub_180011A5C((__int64)v42);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64 *, _QWORD *))(*a1 + 128LL))(a1, a2, a3, &v28, a4);
    sub_18002FFC8((__int64)v34);
    sub_18001EADC((__int64)v39);
    v18 = unknown_libname_81(&v25, v8);
    sub_18001E9EC(
      v39,
      v18,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1036,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_EndFrame");
    std::string::string(v42, "kSpectreRenderCB_EndFrame");
    v19 = sub_1800323E8((__int64)a1, &v30);
    sub_180015174(&v23, v19);
    sub_18002F2B4(v34, (__int64)&v23);
    if ( v24 )
      sub_180010544(v24);
    if ( v31 )
      sub_18001050C(v31);
    sub_180011A5C((__int64)v42);
    v25 = a1[121];
    v26 = 5;
    sub_180011B8C(&v27);
    sub_18009521C(v25, &v25);
    unknown_libname_81(&v25, a4);
    v20 = unknown_libname_81(&v32, &v28);
    sub_180033070((__int64)a1, 5u, v20, v21);
    sub_18002FFC8((__int64)v34);
    sub_18001EADC((__int64)v39);
  }
  if ( v29 )
    sub_18001050C((__int64)v29);
  sub_18007B9B0(*(_QWORD *)(a1[64] + 18648LL));
  sub_18002FFC8((__int64)v40);
  return sub_18001EADC((__int64)v41);
}
