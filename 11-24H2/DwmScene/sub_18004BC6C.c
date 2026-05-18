/*
 * XREFs of sub_18004BC6C @ 0x18004BC6C
 * Callers:
 *     sub_180032DD4 @ 0x180032DD4 (sub_180032DD4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B6DC @ 0x18001B6DC (sub_18001B6DC.c)
 *     sub_18001B9BC @ 0x18001B9BC (sub_18001B9BC.c)
 *     sub_18001BA80 @ 0x18001BA80 (sub_18001BA80.c)
 *     sub_18002863C @ 0x18002863C (sub_18002863C.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004A968 @ 0x18004A968 (sub_18004A968.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 *     sub_18005B214 @ 0x18005B214 (sub_18005B214.c)
 *     sub_18005BE58 @ 0x18005BE58 (sub_18005BE58.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_18004BC6C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  bool v10; // di
  __int64 *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  char result; // al
  __int64 v25; // rcx
  __int64 *v26[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h]
  _QWORD *v32; // [rsp+80h] [rbp-80h]
  __int64 v33[4]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v34[32]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 pExceptionObject; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-30h]
  _QWORD v37[7]; // [rsp+100h] [rbp+0h] BYREF

  v32 = a2;
  v4 = *a2;
  if ( !v4 )
  {
    std::string::string(v33, "ShaderManager::AddExtension() -- Extension passed to function cannot be null");
    v5 = std::string::string(
           v26,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038BB8(&pExceptionObject, (__int64)v5, v6, (__int64)v33, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  sub_180017054((__int64)v34, v4 + 24);
  v7 = sub_180017054((__int64)v33, (__int64)v34);
  sub_18001B9BC(a1 + 18592, v26, v7);
  v8 = v27;
  v10 = !sub_18001BA80(v9, v27) || v8 == *(_QWORD *)(a1 + 18592);
  sub_180011B5C(v7);
  if ( !v10 )
  {
    v11 = sub_18001B6DC(v33, (__int64)"ShaderManager::AddExtension() -- Extension with name '", (__int64)v34);
    v12 = sub_18001B5A8((__int64)&pExceptionObject, (__int64)v11, (__int64)"' is already installed");
    v13 = std::string::string(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038BB8(v37, (__int64)v13, v14, v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v37;
  }
  sub_18005BE58(*a2, *(_QWORD *)(a1 + 18688), a1, a1 + 18664);
  v15 = *(_QWORD *)sub_18004A968((__int64 *)(a1 + 18592), (__int64)v26, (__int64)v34);
  v16 = *a2;
  v17 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(v15 + 64) = v16;
  v18 = *(_QWORD *)(v15 + 72);
  *(_QWORD *)(v15 + 72) = v17;
  if ( v18 )
    sub_18001060C(v18);
  v19 = sub_180017054((__int64)v26, (__int64)v34);
  sub_18004CE40(a1, &pExceptionObject, v19);
  sub_180034808(*(_QWORD *)(a1 + 18688), &v30);
  v20 = 0;
  v21 = v30;
  if ( (v31 - v30) >> 4 )
  {
    v22 = 0LL;
    do
    {
      unknown_libname_81(&v28, (_QWORD *)(v21 + 16 * v22));
      if ( *(_DWORD *)(v28 + 244) )
      {
        sub_18002863C(v28 + 24, (__int64)v26);
        v23 = unknown_libname_81(v33, &v28);
        sub_18005B214(pExceptionObject, v23);
        sub_180011044((__int64)v26);
      }
      if ( v29 )
        sub_18001060C(v29);
      ++v20;
      v21 = v30;
      v22 = v20;
    }
    while ( v20 < (unsigned __int64)((v31 - v30) >> 4) );
  }
  sub_1800131E0((__int64)&v30);
  if ( v36 )
    sub_18001060C(v36);
  result = sub_180011B5C((__int64)v34);
  v25 = a2[1];
  if ( v25 )
    return sub_18001060C(v25);
  return result;
}
