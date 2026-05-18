/*
 * XREFs of sub_18003385C @ 0x18003385C
 * Callers:
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
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
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_1800323E8 @ 0x1800323E8 (sub_1800323E8.c)
 *     sub_180033070 @ 0x180033070 (sub_180033070.c)
 *     sub_18009521C @ 0x18009521C (sub_18009521C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_18003385C(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
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
  sub_18001E9EC(
    v29,
    v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1050,
    (__int64)"PresentFrame",
    (__int64)"PresentFrame");
  std::string::string(v28, "PresentFrame");
  v12 = sub_1800323E8(a1, &v20);
  sub_180015174(&v18, v12);
  sub_18002F2B4(&v22, (__int64)&v18);
  if ( v19 )
    sub_180010544(v19);
  if ( v21 )
    sub_18001050C(v21);
  sub_180011A5C((__int64)v28);
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)*a2 + 216LL))(*a2, a3, a4, a5, a6);
  sub_18002FFC8((__int64)&v22);
  sub_18001EADC((__int64)v29);
  v13 = unknown_libname_81(&v20, v10);
  sub_18001E9EC(
    v27,
    v13,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1056,
    (__int64)"PresentFrame",
    (__int64)"kSpectreRenderCB_PostPresent");
  std::string::string(v29, "kSpectreRenderCB_PostPresent");
  v14 = sub_1800323E8(a1, &v25);
  sub_180015174(&v18, v14);
  sub_18002F2B4(v28, (__int64)&v18);
  if ( v19 )
    sub_180010544(v19);
  if ( v26 )
    sub_18001050C(v26);
  sub_180011A5C((__int64)v29);
  v22 = *(_QWORD *)(a1 + 968);
  v23 = 6;
  sub_180011B8C(&v24);
  sub_18009521C(v22, &v22);
  unknown_libname_81(&v20, a3);
  v15 = unknown_libname_81(&v22, a2);
  sub_180033070(a1, 6u, v15, v16);
  sub_18002FFC8((__int64)v28);
  return sub_18001EADC((__int64)v27);
}
