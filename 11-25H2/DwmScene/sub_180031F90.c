/*
 * XREFs of sub_180031F90 @ 0x180031F90
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
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_180030E44 @ 0x180030E44 (sub_180030E44.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_1800323E8 @ 0x1800323E8 (sub_1800323E8.c)
 *     sub_1800324D4 @ 0x1800324D4 (sub_1800324D4.c)
 *     sub_180032570 @ 0x180032570 (sub_180032570.c)
 *     sub_180032AC8 @ 0x180032AC8 (sub_180032AC8.c)
 *     sub_180033C94 @ 0x180033C94 (sub_180033C94.c)
 *     sub_180033EE4 @ 0x180033EE4 (sub_180033EE4.c)
 *     sub_180034548 @ 0x180034548 (sub_180034548.c)
 *     sub_1800350F8 @ 0x1800350F8 (sub_1800350F8.c)
 *     sub_1800355DC @ 0x1800355DC (sub_1800355DC.c)
 *     sub_180035EC8 @ 0x180035EC8 (sub_180035EC8.c)
 *     sub_18003606C @ 0x18003606C (sub_18003606C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180031F90(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp-59h] BYREF
  volatile signed __int32 *v12; // [rsp+48h] [rbp-51h]
  _BYTE v13[8]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v14; // [rsp+58h] [rbp-41h]
  __int64 v15[4]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v16[8]; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v17[4]; // [rsp+C0h] [rbp+27h] BYREF

  sub_1800287EC((__int64)(a1 + 1), a2);
  sub_18003606C(a1);
  sub_180030E44((__int64)a1);
  v3 = unknown_libname_81(&v11, a1 + 58);
  sub_18001E9EC(
    v16,
    v3,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    819,
    (__int64)"FrameTick",
    (__int64)"FrameTick");
  std::string::string(v17, "FrameTick");
  v4 = (_QWORD *)sub_1800323E8(a1, v13);
  sub_180015174(&v11, v4);
  sub_18002F2B4(v15, (__int64)&v11);
  if ( v12 )
    sub_180010544(v12);
  if ( v14 )
    sub_18001050C(v14);
  sub_180011A5C((__int64)v17);
  sub_180033C94(a1);
  if ( (unsigned int)sub_180032570(a1) > 1 )
  {
    sub_1800324D4(a1, &v11, 1LL);
    v6 = v11;
    if ( v11 )
    {
      v7 = sub_1800323A0(a1, 1LL);
      v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 72LL))(v7, &unk_1801C45E8, 1LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 224LL))(v6, v8);
    }
    if ( v12 )
      sub_18001050C((__int64)v12);
    sub_180035EC8(a1);
    sub_1800350F8(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
    v9 = sub_1800323A0(a1, 1LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801C4608, 0LL) )
      sub_180032AC8(v10);
    sub_180034548(a1);
    sub_180033EE4(a1);
    sub_18002FFC8((__int64)v15);
    sub_18001EADC((__int64)v16);
    return sub_1800355DC(a1);
  }
  else
  {
    sub_18002FFC8((__int64)v15);
    return sub_18001EADC((__int64)v16);
  }
}
