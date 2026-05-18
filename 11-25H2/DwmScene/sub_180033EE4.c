/*
 * XREFs of sub_180033EE4 @ 0x180033EE4
 * Callers:
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_18001E9EC @ 0x18001E9EC (sub_18001E9EC.c)
 *     sub_18001EADC @ 0x18001EADC (sub_18001EADC.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18002F278 @ 0x18002F278 (sub_18002F278.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_1800323E8 @ 0x1800323E8 (sub_1800323E8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_180033EE4(_QWORD *a1)
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
  sub_18001E9EC(
    v14,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1719,
    (__int64)"RemoveInvalidDevices",
    (__int64)"RemoveInvalidDevices");
  std::string::string(v15, "RemoveInvalidDevices");
  v3 = sub_1800323E8((__int64)a1, &v9);
  sub_180015174(&v7, v3);
  sub_18002F2B4(v13, (__int64)&v7);
  if ( v8 )
    sub_180010544(v8);
  if ( v10 )
    sub_18001050C(v10);
  sub_180011A5C((__int64)v15);
  sub_18002851C((__int64)(a1 + 14), (__int64)v12);
  sub_18002F278(v11, (__int64)(a1 + 11));
  v4 = (_QWORD *)v11[0];
  v5 = v11[1];
  while ( v4 != (_QWORD *)v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4) )
    {
      sub_18001C99C(&stru_1801B8288, 3);
      sub_18001C99C(&stru_1801B8288, 3);
      sub_18002851C(*v4 + 24LL, (__int64)&v9);
      sub_18003178C(a1, v4);
      sub_18001C99C(&stru_1801B8288, 3);
      sub_180010F44((__int64)&v9);
    }
    v4 += 2;
  }
  sub_1800130E0((__int64)v11);
  sub_180010F44((__int64)v12);
  sub_18002FFC8((__int64)v13);
  return sub_18001EADC((__int64)v14);
}
