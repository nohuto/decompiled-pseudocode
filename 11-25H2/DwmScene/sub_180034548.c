/*
 * XREFs of sub_180034548 @ 0x180034548
 * Callers:
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_18001E9EC @ 0x18001E9EC (sub_18001E9EC.c)
 *     sub_18001EADC @ 0x18001EADC (sub_18001EADC.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_1800323E8 @ 0x1800323E8 (sub_1800323E8.c)
 *     sub_180033120 @ 0x180033120 (sub_180033120.c)
 *     sub_1800534AC @ 0x1800534AC (sub_1800534AC.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180034548(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  _QWORD *i; // rdi
  __int64 v6; // r14
  struct _Mtx_internal_imp_t *v7; // rbx
  __int64 v9; // [rsp+48h] [rbp-69h] BYREF
  volatile signed __int32 *v10; // [rsp+50h] [rbp-61h]
  __int64 v11; // [rsp+58h] [rbp-59h] BYREF
  __int64 v12; // [rsp+60h] [rbp-51h]
  __int64 v13[4]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v14[8]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v15[4]; // [rsp+C8h] [rbp+17h] BYREF

  v2 = unknown_libname_81(&v9, (_QWORD *)(a1 + 464));
  sub_18001E9EC(
    v14,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    898,
    (__int64)"RenderDisplays",
    (__int64)"RenderDisplays");
  std::string::string(v15, "RenderDisplays");
  v3 = sub_1800323E8(a1, &v11);
  sub_180015174(&v9, v3);
  sub_18002F2B4(v13, (__int64)&v9);
  if ( v10 )
    sub_180010544(v10);
  if ( v12 )
    sub_18001050C(v12);
  sub_180011A5C((__int64)v15);
  v4 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    v6 = i[2];
    v7 = (struct _Mtx_internal_imp_t *)(v6 + 128);
    sub_180011B30(v6 + 128);
    LODWORD(v6) = *(_DWORD *)(v6 + 32);
    Mtx_unlock(v7);
    if ( (_DWORD)v6 == 1 )
      sub_1800534AC(i[2]);
  }
  sub_180033120(a1);
  sub_18002FFC8((__int64)v13);
  return sub_18001EADC((__int64)v14);
}
