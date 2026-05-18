/*
 * XREFs of sub_1800356CC @ 0x1800356CC
 * Callers:
 *     sub_180035B30 @ 0x180035B30 (sub_180035B30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_18001E9EC @ 0x18001E9EC (sub_18001E9EC.c)
 *     sub_18001EADC @ 0x18001EADC (sub_18001EADC.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_1800323E8 @ 0x1800323E8 (sub_1800323E8.c)
 *     sub_180032B5C @ 0x180032B5C (sub_180032B5C.c)
 *     sub_180033070 @ 0x180033070 (sub_180033070.c)
 *     sub_18003F9D8 @ 0x18003F9D8 (sub_18003F9D8.c)
 *     sub_18009521C @ 0x18009521C (sub_18009521C.c)
 *     sub_1800D2150 @ 0x1800D2150 (sub_1800D2150.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall sub_1800356CC(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v22[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v24[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v26[8]; // [rsp+110h] [rbp+10h] BYREF

  sub_18002851C((__int64)(a1 + 1), (__int64)v23);
  sub_18002851C(*a2 + 16, (__int64)v22);
  sub_180032B5C(v4, &v14, a2);
  if ( (_QWORD)v14 )
    sub_1800D2150();
  if ( *((_QWORD *)&v14 + 1) )
    sub_18001050C(*((__int64 *)&v14 + 1));
  v5 = unknown_libname_81(&v15, a1 + 58);
  sub_18001E9EC(
    v26,
    v5,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    750,
    (__int64)"UpdateScene",
    (__int64)"PreUpdateScene");
  std::string::string(v25, "PreUpdateScene");
  v6 = sub_1800323E8((__int64)a1, &v16);
  sub_180015174(&v14, v6);
  sub_18002F2B4(&v19, (__int64)&v14);
  if ( *((_QWORD *)&v14 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v14 + 1));
  if ( v17 )
    sub_18001050C(v17);
  sub_180011A5C((__int64)v25);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 96LL))(a1, a2);
  sub_18002FFC8((__int64)&v19);
  sub_18001EADC((__int64)v26);
  v7 = unknown_libname_81(&v16, a1 + 58);
  sub_18001E9EC(
    v24,
    v7,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    765,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PreSceneUpdate");
  std::string::string(v26, "kSpectreRenderCB_PreSceneUpdate");
  v8 = sub_1800323E8((__int64)a1, &v19);
  sub_180015174(&v14, v8);
  sub_18002F2B4(v25, (__int64)&v14);
  if ( *((_QWORD *)&v14 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v14 + 1));
  if ( v20 )
    sub_18001050C(v20);
  sub_180011A5C((__int64)v26);
  v16 = a1[121];
  LODWORD(v17) = 1;
  sub_180011B8C(&v18);
  sub_18009521C(v16, &v16);
  v15 = 0LL;
  v14 = 0LL;
  sub_180033070((__int64)a1, 1u, &v14, &v15);
  sub_18002FFC8((__int64)v25);
  sub_18001EADC((__int64)v24);
  v9 = unknown_libname_81(&v19, a1 + 58);
  sub_18001E9EC(
    v24,
    v9,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    771,
    (__int64)"UpdateScene",
    (__int64)"Update Scene");
  std::string::string(v26, "Update Scene");
  v10 = sub_1800323E8((__int64)a1, &v16);
  sub_180015174(&v15, v10);
  sub_18002F2B4(v25, (__int64)&v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v15 + 1));
  if ( v17 )
    sub_18001050C(v17);
  sub_180011A5C((__int64)v26);
  sub_18003F9D8(*a2, a1 + 46);
  sub_18002FFC8((__int64)v25);
  sub_18001EADC((__int64)v24);
  v11 = unknown_libname_81(&v19, a1 + 58);
  sub_18001E9EC(
    v24,
    v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    777,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PostSceneUpdate");
  std::string::string(v26, "kSpectreRenderCB_PostSceneUpdate");
  v12 = sub_1800323E8((__int64)a1, &v16);
  sub_180015174(&v15, v12);
  sub_18002F2B4(v25, (__int64)&v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v15 + 1));
  if ( v17 )
    sub_18001050C(v17);
  sub_180011A5C((__int64)v26);
  v19 = a1[121];
  LODWORD(v20) = 2;
  sub_180011B8C(&v21);
  sub_18009521C(v19, &v19);
  v15 = 0LL;
  v14 = 0LL;
  sub_180033070((__int64)a1, 2u, &v14, &v15);
  sub_18002FFC8((__int64)v25);
  sub_18001EADC((__int64)v24);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 104LL))(a1, a2);
  sub_180010F44((__int64)v22);
  return sub_180010F44((__int64)v23);
}
