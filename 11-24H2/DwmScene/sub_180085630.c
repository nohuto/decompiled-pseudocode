/*
 * XREFs of sub_180085630 @ 0x180085630
 * Callers:
 *     sub_180085A68 @ 0x180085A68 (sub_180085A68.c)
 *     sub_180085C64 @ 0x180085C64 (sub_180085C64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_180015F64 @ 0x180015F64 (sub_180015F64.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 *     sub_180047B20 @ 0x180047B20 (sub_180047B20.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180085630(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _DWORD *v15; // [rsp+58h] [rbp-59h] BYREF
  __int64 v16; // [rsp+60h] [rbp-51h]
  __int64 v17[3]; // [rsp+70h] [rbp-41h] BYREF
  _QWORD v18[4]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v19[4]; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+C8h] [rbp+17h] BYREF

  v2 = sub_180078578(a1);
  sub_180034808(v2, v17);
  v3 = (_QWORD *)v17[0];
  v4 = v17[1];
  while ( v3 != (_QWORD *)v4 )
  {
    unknown_libname_81(&v15, v3);
    if ( v15[61] && !(*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v15 + 96LL))(v15, 1LL) )
    {
      v5 = *(_QWORD *)(a1 + 144);
      if ( !v5 || ((v5 - 1) & v5) != 0 )
      {
        std::string::string(
          v19,
          "ColorTransform::CreateResources() -- volume texture must be power of two below feature level 10.0");
        v7 = std::string::string(
               v18,
               "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
        sub_180047B20(pExceptionObject, (__int64)v7, v8, (__int64)v19);
        throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
      }
    }
    if ( v16 )
      sub_18001060C(v16);
    v3 += 2;
  }
  v9 = sub_180078578(a1);
  v10 = sub_180015F64(v9, &v15);
  v11 = (__int64 *)(a1 + 96);
  sub_180011110((_QWORD *)(a1 + 96), v10);
  if ( v16 )
    sub_18001060C(v16);
  v12 = *v11;
  v13 = std::string::string(v19, "ColorTransform");
  sub_180027D84(v12, (__int64)v13);
  sub_180051B88(
    *v11,
    *(_DWORD *)(a1 + 144),
    *(_DWORD *)(a1 + 144),
    *(_DWORD *)(a1 + 144),
    16,
    0,
    1,
    *(const void **)(a1 + 112),
    (*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112)) & 0xFFFFFFFC,
    0LL);
  return sub_1800131E0((__int64)v17);
}
