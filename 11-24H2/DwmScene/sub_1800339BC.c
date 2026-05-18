/*
 * XREFs of sub_1800339BC @ 0x1800339BC
 * Callers:
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
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
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     sub_1800331D0 @ 0x1800331D0 (sub_1800331D0.c)
 *     sub_18009537C @ 0x18009537C (sub_18009537C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800339BC(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r9
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h]
  _QWORD v27[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v29[8]; // [rsp+F0h] [rbp-10h] BYREF

  v10 = (_QWORD *)(a1 + 464);
  v11 = unknown_libname_81(&v18, (_QWORD *)(a1 + 464));
  sub_18001EB4C(
    v29,
    v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1050,
    (__int64)"PresentFrame",
    (__int64)"PresentFrame");
  std::string::string(v28, "PresentFrame");
  v12 = sub_180032548(a1, &v20);
  sub_180015274(&v18, v12);
  sub_18002F414(&v22, (__int64)&v18);
  if ( v19 )
    sub_180010644(v19);
  if ( v21 )
    sub_18001060C(v21);
  sub_180011B5C((__int64)v28);
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)*a2 + 216LL))(*a2, a3, a4, a5, a6);
  sub_180030128((__int64)&v22);
  sub_18001EC3C((__int64)v29);
  v13 = unknown_libname_81(&v20, v10);
  sub_18001EB4C(
    v27,
    v13,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1056,
    (__int64)"PresentFrame",
    (__int64)"kSpectreRenderCB_PostPresent");
  std::string::string(v29, "kSpectreRenderCB_PostPresent");
  v14 = sub_180032548(a1, &v25);
  sub_180015274(&v18, v14);
  sub_18002F414(v28, (__int64)&v18);
  if ( v19 )
    sub_180010644(v19);
  if ( v26 )
    sub_18001060C(v26);
  sub_180011B5C((__int64)v29);
  v22 = *(_QWORD *)(a1 + 968);
  v23 = 6;
  sub_180011C8C(&v24);
  sub_18009537C(v22, &v22);
  unknown_libname_81(&v20, a3);
  v15 = unknown_libname_81(&v22, a2);
  sub_1800331D0(a1, 6u, v15, v16);
  sub_180030128((__int64)v28);
  return sub_18001EC3C((__int64)v27);
}
