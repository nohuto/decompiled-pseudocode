/*
 * XREFs of sub_180061990 @ 0x180061990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_18001E9EC @ 0x18001E9EC (sub_18001E9EC.c)
 *     sub_18001EADC @ 0x18001EADC (sub_18001EADC.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_1800323E8 @ 0x1800323E8 (sub_1800323E8.c)
 *     sub_1800336B0 @ 0x1800336B0 (sub_1800336B0.c)
 *     sub_18005F440 @ 0x18005F440 (sub_18005F440.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180061990(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v11; // [rsp+40h] [rbp-89h] BYREF
  volatile signed __int32 *v12; // [rsp+48h] [rbp-81h]
  __int64 v13; // [rsp+50h] [rbp-79h] BYREF
  __int64 v14; // [rsp+58h] [rbp-71h]
  __int64 v15[4]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v16[8]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v17[4]; // [rsp+C0h] [rbp-9h] BYREF

  v8 = unknown_libname_81(&v11, (_QWORD *)(a1 + 464));
  sub_18001E9EC(
    v16,
    v8,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\viewerengine.cpp",
    1484,
    (__int64)"PostRenderScene",
    (__int64)"PostRenderScene");
  std::string::string(v17, "PostRenderScene");
  v9 = sub_1800323E8(a1, &v13);
  sub_180015174(&v11, v9);
  sub_18002F2B4(v15, (__int64)&v11);
  if ( v12 )
    sub_180010544(v12);
  if ( v14 )
    sub_18001050C(v14);
  sub_180011A5C((__int64)v17);
  sub_1800336B0(a1, a2, a3, a4);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 280LL))(*a4) )
  {
    sub_180065D00(a1, a3, a4, a2);
    sub_18005F440(a1, a2, a3, a4);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 128LL))(*a3);
  sub_18002FFC8((__int64)v15);
  return sub_18001EADC((__int64)v16);
}
