/*
 * XREFs of sub_18003582C @ 0x18003582C
 * Callers:
 *     sub_180035C90 @ 0x180035C90 (sub_180035C90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18001EB4C @ 0x18001EB4C (sub_18001EB4C.c)
 *     sub_18001EC3C @ 0x18001EC3C (sub_18001EC3C.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     sub_180032CBC @ 0x180032CBC (sub_180032CBC.c)
 *     sub_1800331D0 @ 0x1800331D0 (sub_1800331D0.c)
 *     sub_18003FB38 @ 0x18003FB38 (sub_18003FB38.c)
 *     sub_18009537C @ 0x18009537C (sub_18009537C.c)
 *     sub_1800D22B0 @ 0x1800D22B0 (sub_1800D22B0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall sub_18003582C(_QWORD *a1, __int64 *a2)
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

  sub_18002867C((__int64)(a1 + 1), (__int64)v23);
  sub_18002867C(*a2 + 16, (__int64)v22);
  sub_180032CBC(v4, &v14, a2);
  if ( (_QWORD)v14 )
    sub_1800D22B0();
  if ( *((_QWORD *)&v14 + 1) )
    sub_18001060C(*((__int64 *)&v14 + 1));
  v5 = unknown_libname_81(&v15, a1 + 58);
  sub_18001EB4C(
    v26,
    v5,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    750,
    (__int64)"UpdateScene",
    (__int64)"PreUpdateScene");
  std::string::string(v25, "PreUpdateScene");
  v6 = sub_180032548((__int64)a1, &v16);
  sub_180015274(&v14, v6);
  sub_18002F414(&v19, (__int64)&v14);
  if ( *((_QWORD *)&v14 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v14 + 1));
  if ( v17 )
    sub_18001060C(v17);
  sub_180011B5C((__int64)v25);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 96LL))(a1, a2);
  sub_180030128((__int64)&v19);
  sub_18001EC3C((__int64)v26);
  v7 = unknown_libname_81(&v16, a1 + 58);
  sub_18001EB4C(
    v24,
    v7,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    765,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PreSceneUpdate");
  std::string::string(v26, "kSpectreRenderCB_PreSceneUpdate");
  v8 = sub_180032548((__int64)a1, &v19);
  sub_180015274(&v14, v8);
  sub_18002F414(v25, (__int64)&v14);
  if ( *((_QWORD *)&v14 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v14 + 1));
  if ( v20 )
    sub_18001060C(v20);
  sub_180011B5C((__int64)v26);
  v16 = a1[121];
  LODWORD(v17) = 1;
  sub_180011C8C(&v18);
  sub_18009537C(v16, &v16);
  v15 = 0LL;
  v14 = 0LL;
  sub_1800331D0((__int64)a1, 1u, &v14, &v15);
  sub_180030128((__int64)v25);
  sub_18001EC3C((__int64)v24);
  v9 = unknown_libname_81(&v19, a1 + 58);
  sub_18001EB4C(
    v24,
    v9,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    771,
    (__int64)"UpdateScene",
    (__int64)"Update Scene");
  std::string::string(v26, "Update Scene");
  v10 = sub_180032548((__int64)a1, &v16);
  sub_180015274(&v15, v10);
  sub_18002F414(v25, (__int64)&v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v15 + 1));
  if ( v17 )
    sub_18001060C(v17);
  sub_180011B5C((__int64)v26);
  sub_18003FB38(*a2, a1 + 46);
  sub_180030128((__int64)v25);
  sub_18001EC3C((__int64)v24);
  v11 = unknown_libname_81(&v19, a1 + 58);
  sub_18001EB4C(
    v24,
    v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    777,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PostSceneUpdate");
  std::string::string(v26, "kSpectreRenderCB_PostSceneUpdate");
  v12 = sub_180032548((__int64)a1, &v16);
  sub_180015274(&v15, v12);
  sub_18002F414(v25, (__int64)&v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v15 + 1));
  if ( v17 )
    sub_18001060C(v17);
  sub_180011B5C((__int64)v26);
  v19 = a1[121];
  LODWORD(v20) = 2;
  sub_180011C8C(&v21);
  sub_18009537C(v19, &v19);
  v15 = 0LL;
  v14 = 0LL;
  sub_1800331D0((__int64)a1, 2u, &v14, &v15);
  sub_180030128((__int64)v25);
  sub_18001EC3C((__int64)v24);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 104LL))(a1, a2);
  sub_180011044((__int64)v22);
  return sub_180011044((__int64)v23);
}
