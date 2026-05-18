/*
 * XREFs of sub_180034044 @ 0x180034044
 * Callers:
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_18001EB4C @ 0x18001EB4C (sub_18001EB4C.c)
 *     sub_18001EC3C @ 0x18001EC3C (sub_18001EC3C.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18002F3D8 @ 0x18002F3D8 (sub_18002F3D8.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_180034044(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v8; // [rsp+50h] [rbp-B8h]
  __int64 v9; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A8h]
  __int64 v11[3]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v12[16]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v13[3]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v14[8]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v15[4]; // [rsp+E8h] [rbp-20h] BYREF

  v2 = unknown_libname_81(&v7, a1 + 58);
  sub_18001EB4C(
    v14,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1719,
    (__int64)"RemoveInvalidDevices",
    (__int64)"RemoveInvalidDevices");
  std::string::string(v15, "RemoveInvalidDevices");
  v3 = sub_180032548((__int64)a1, &v9);
  sub_180015274(&v7, v3);
  sub_18002F414(v13, (__int64)&v7);
  if ( v8 )
    sub_180010644(v8);
  if ( v10 )
    sub_18001060C(v10);
  sub_180011B5C((__int64)v15);
  sub_18002867C((__int64)(a1 + 14), (__int64)v12);
  sub_18002F3D8(v11, (__int64)(a1 + 11));
  v4 = (_QWORD *)v11[0];
  v5 = v11[1];
  while ( v4 != (_QWORD *)v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4) )
    {
      sub_18001CAFC(&stru_1801B9288, 3);
      sub_18001CAFC(&stru_1801B9288, 3);
      sub_18002867C(*v4 + 24LL, (__int64)&v9);
      sub_1800318EC(a1, v4);
      sub_18001CAFC(&stru_1801B9288, 3);
      sub_180011044((__int64)&v9);
    }
    v4 += 2;
  }
  sub_1800131E0((__int64)v11);
  sub_180011044((__int64)v12);
  sub_180030128((__int64)v13);
  return sub_18001EC3C((__int64)v14);
}
