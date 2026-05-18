/*
 * XREFs of sub_180061AF0 @ 0x180061AF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18001EB4C @ 0x18001EB4C (sub_18001EB4C.c)
 *     sub_18001EC3C @ 0x18001EC3C (sub_18001EC3C.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 *     sub_18005F5A0 @ 0x18005F5A0 (sub_18005F5A0.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180061AF0(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
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
  sub_18001EB4C(
    v16,
    v8,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\viewerengine.cpp",
    1484,
    (__int64)"PostRenderScene",
    (__int64)"PostRenderScene");
  std::string::string(v17, "PostRenderScene");
  v9 = sub_180032548(a1, &v13);
  sub_180015274(&v11, v9);
  sub_18002F414(v15, (__int64)&v11);
  if ( v12 )
    sub_180010644(v12);
  if ( v14 )
    sub_18001060C(v14);
  sub_180011B5C((__int64)v17);
  sub_180033810(a1, a2, a3, a4);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 280LL))(*a4) )
  {
    sub_180065E60(a1, a3, a4, a2);
    sub_18005F5A0(a1, a2, a3, a4);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 128LL))(*a3);
  sub_180030128((__int64)v15);
  return sub_18001EC3C((__int64)v16);
}
