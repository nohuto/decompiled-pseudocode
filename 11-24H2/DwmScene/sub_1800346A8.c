/*
 * XREFs of sub_1800346A8 @ 0x1800346A8
 * Callers:
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18001EB4C @ 0x18001EB4C (sub_18001EB4C.c)
 *     sub_18001EC3C @ 0x18001EC3C (sub_18001EC3C.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 *     sub_18005360C @ 0x18005360C (sub_18005360C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800346A8(__int64 a1)
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
  sub_18001EB4C(
    v14,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    898,
    (__int64)"RenderDisplays",
    (__int64)"RenderDisplays");
  std::string::string(v15, "RenderDisplays");
  v3 = sub_180032548(a1, &v11);
  sub_180015274(&v9, v3);
  sub_18002F414(v13, (__int64)&v9);
  if ( v10 )
    sub_180010644(v10);
  if ( v12 )
    sub_18001060C(v12);
  sub_180011B5C((__int64)v15);
  v4 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    v6 = i[2];
    v7 = (struct _Mtx_internal_imp_t *)(v6 + 128);
    sub_180011C30(v6 + 128);
    LODWORD(v6) = *(_DWORD *)(v6 + 32);
    Mtx_unlock(v7);
    if ( (_DWORD)v6 == 1 )
      sub_18005360C(i[2]);
  }
  sub_180033280(a1);
  sub_180030128((__int64)v13);
  return sub_18001EC3C((__int64)v14);
}
