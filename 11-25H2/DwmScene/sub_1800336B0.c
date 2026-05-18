/*
 * XREFs of sub_1800336B0 @ 0x1800336B0
 * Callers:
 *     sub_180061990 @ 0x180061990 (sub_180061990.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_18001E9EC @ 0x18001E9EC (sub_18001E9EC.c)
 *     sub_18001EADC @ 0x18001EADC (sub_18001EADC.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_1800323E8 @ 0x1800323E8 (sub_1800323E8.c)
 *     sub_180033070 @ 0x180033070 (sub_180033070.c)
 *     sub_180040290 @ 0x180040290 (sub_180040290.c)
 *     sub_18009521C @ 0x18009521C (sub_18009521C.c)
 *     sub_180095F70 @ 0x180095F70 (sub_180095F70.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800336B0(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v25[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v26[4]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = unknown_libname_81(&v16, (_QWORD *)(a1 + 464));
  sub_18001E9EC(
    v25,
    v7,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1511,
    (__int64)"PostRenderScene",
    (__int64)"kSpectreRenderCB_PostRender");
  std::string::string(v26, "kSpectreRenderCB_PostRender");
  v8 = sub_1800323E8(a1, &v21);
  sub_180015174(&v16, v8);
  sub_18002F2B4(v24, (__int64)&v16);
  if ( v17 )
    sub_180010544(v17);
  if ( v22 )
    sub_18001050C(v22);
  sub_180011A5C((__int64)v26);
  v18 = *(_QWORD *)(a1 + 968);
  v19 = 4;
  sub_180011B8C(&v20);
  sub_18009521C(v18, &v18);
  unknown_libname_81(&v23, a4);
  v9 = unknown_libname_81(&v18, a3);
  sub_180033070(a1, 4u, v9, v10);
  sub_18002FFC8((__int64)v24);
  sub_18001EADC((__int64)v25);
  v11 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 184LL))(*a4);
  v12 = *a3;
  sub_1800287EC(v12 + 24, v13);
  result = sub_180040290(v11 + 184);
  if ( (_BYTE)result )
    return sub_180095F70(v11, *(_QWORD *)(v11 + 192), v15, v12 + 272);
  return result;
}
