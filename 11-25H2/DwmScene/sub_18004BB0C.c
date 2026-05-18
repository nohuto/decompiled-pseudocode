/*
 * XREFs of sub_18004BB0C @ 0x18004BB0C
 * Callers:
 *     sub_180032C74 @ 0x180032C74 (sub_180032C74.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B57C @ 0x18001B57C (sub_18001B57C.c)
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_1800284DC @ 0x1800284DC (sub_1800284DC.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004A808 @ 0x18004A808 (sub_18004A808.c)
 *     sub_18004CCE0 @ 0x18004CCE0 (sub_18004CCE0.c)
 *     sub_18005B0B4 @ 0x18005B0B4 (sub_18005B0B4.c)
 *     sub_18005BCF8 @ 0x18005BCF8 (sub_18005BCF8.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_18004BB0C(__int64 a1, _QWORD *a2)
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
    sub_180038A58(&pExceptionObject, (__int64)v5, v6, (__int64)v33, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  sub_180016F54((__int64)v34, v4 + 24);
  v7 = sub_180016F54((__int64)v33, (__int64)v34);
  sub_18001B85C(a1 + 18592, v26, v7);
  v8 = v27;
  v10 = !sub_18001B920(v9, v27) || v8 == *(_QWORD *)(a1 + 18592);
  sub_180011A5C(v7);
  if ( !v10 )
  {
    v11 = sub_18001B57C(v33, (__int64)"ShaderManager::AddExtension() -- Extension with name '", (__int64)v34);
    v12 = sub_18001B448((__int64)&pExceptionObject, (__int64)v11, (__int64)"' is already installed");
    v13 = std::string::string(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038A58(v37, (__int64)v13, v14, v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v37;
  }
  sub_18005BCF8(*a2, *(_QWORD *)(a1 + 18688), a1, a1 + 18664);
  v15 = *(_QWORD *)sub_18004A808((__int64 *)(a1 + 18592), (__int64)v26, (__int64)v34);
  v16 = *a2;
  v17 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(v15 + 64) = v16;
  v18 = *(_QWORD *)(v15 + 72);
  *(_QWORD *)(v15 + 72) = v17;
  if ( v18 )
    sub_18001050C(v18);
  v19 = sub_180016F54((__int64)v26, (__int64)v34);
  sub_18004CCE0(a1, &pExceptionObject, v19);
  sub_1800346A8(*(_QWORD *)(a1 + 18688), &v30);
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
        sub_1800284DC(v28 + 24, (__int64)v26);
        v23 = unknown_libname_81(v33, &v28);
        sub_18005B0B4(pExceptionObject, v23);
        sub_180010F44((__int64)v26);
      }
      if ( v29 )
        sub_18001050C(v29);
      ++v20;
      v21 = v30;
      v22 = v20;
    }
    while ( v20 < (unsigned __int64)((v31 - v30) >> 4) );
  }
  sub_1800130E0((__int64)&v30);
  if ( v36 )
    sub_18001050C(v36);
  result = sub_180011A5C((__int64)v34);
  v25 = a2[1];
  if ( v25 )
    return sub_18001050C(v25);
  return result;
}
