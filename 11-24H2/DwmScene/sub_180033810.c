/*
 * XREFs of sub_180033810 @ 0x180033810
 * Callers:
 *     sub_180061AF0 @ 0x180061AF0 (sub_180061AF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18001EB4C @ 0x18001EB4C (sub_18001EB4C.c)
 *     sub_18001EC3C @ 0x18001EC3C (sub_18001EC3C.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     sub_1800331D0 @ 0x1800331D0 (sub_1800331D0.c)
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 *     sub_18009537C @ 0x18009537C (sub_18009537C.c)
 *     sub_1800960D0 @ 0x1800960D0 (sub_1800960D0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180033810(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
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
  sub_18001EB4C(
    v25,
    v7,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1511,
    (__int64)"PostRenderScene",
    (__int64)"kSpectreRenderCB_PostRender");
  std::string::string(v26, "kSpectreRenderCB_PostRender");
  v8 = sub_180032548(a1, &v21);
  sub_180015274(&v16, v8);
  sub_18002F414(v24, (__int64)&v16);
  if ( v17 )
    sub_180010644(v17);
  if ( v22 )
    sub_18001060C(v22);
  sub_180011B5C((__int64)v26);
  v18 = *(_QWORD *)(a1 + 968);
  v19 = 4;
  sub_180011C8C(&v20);
  sub_18009537C(v18, &v18);
  unknown_libname_81(&v23, a4);
  v9 = unknown_libname_81(&v18, a3);
  sub_1800331D0(a1, 4u, v9, v10);
  sub_180030128((__int64)v24);
  sub_18001EC3C((__int64)v25);
  v11 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 184LL))(*a4);
  v12 = *a3;
  sub_18002894C(v12 + 24, v13);
  result = sub_1800403F0(v11 + 184);
  if ( (_BYTE)result )
    return sub_1800960D0(v11, *(_QWORD *)(v11 + 192), v15, v12 + 272);
  return result;
}
