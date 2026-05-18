/*
 * XREFs of sub_18003F268 @ 0x18003F268
 * Callers:
 *     sub_180012940 @ 0x180012940 (sub_180012940.c)
 *     sub_180014BA0 @ 0x180014BA0 (sub_180014BA0.c)
 *     sub_180014D20 @ 0x180014D20 (sub_180014D20.c)
 *     sub_18003F604 @ 0x18003F604 (sub_18003F604.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18003AF34 @ 0x18003AF34 (sub_18003AF34.c)
 *     sub_18003E99C @ 0x18003E99C (sub_18003E99C.c)
 *     sub_18003EB98 @ 0x18003EB98 (sub_18003EB98.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18003F268(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 **v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // r14
  __int64 *v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // r8
  volatile __int32 *i; // rax
  __int64 result; // rax
  __int64 v18; // rcx
  __int128 v19; // [rsp+38h] [rbp-81h] BYREF
  __int64 v20; // [rsp+48h] [rbp-71h] BYREF
  __int64 v21; // [rsp+50h] [rbp-69h]
  _QWORD *v22; // [rsp+58h] [rbp-61h]
  __int64 v23; // [rsp+60h] [rbp-59h] BYREF
  __int64 v24; // [rsp+68h] [rbp-51h]
  _QWORD v25[4]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v26[4]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B0h] [rbp-9h] BYREF

  v22 = a2;
  if ( !*a2 )
  {
    std::string::string(v26, "Scene::RemoveNode() - node must not be null");
    v4 = std::string::string(
           v25,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = unknown_libname_81(&v19, a2);
  sub_18003E99C(a1, &v20, v6);
  v7 = v20;
  if ( !v20 )
  {
    std::string::string(v25, "Scene::RemoveNode() - node is not in any layer");
    v8 = std::string::string(
           v26,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038A58(pExceptionObject, (__int64)v8, v9, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v10 = (__int64 **)sub_18003EB98(v20, &v23);
  v12 = (__int64 *)*a2;
  v13 = *v10;
  if ( v24 )
    sub_18001050C(v24);
  if ( v12 == v13 )
  {
    std::string::string(
      v25,
      "Scene::RemoveNode() - the root node of a layer is for internal use by the system and must not be removed");
    v14 = std::string::string(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038A58(pExceptionObject, (__int64)v14, v15, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800287EC(a1 + 16, v11);
  for ( i = (volatile __int32 *)(v7 + 76); _InterlockedExchange(i, 1); i = (volatile __int32 *)(v7 + 76) )
    ;
  v19 = 0LL;
  sub_18003AF34((__int64 *)*a2, (__int64 *)&v19);
  result = v7 + 76;
  *(_DWORD *)(v7 + 76) = 0;
  if ( v21 )
    result = sub_18001050C(v21);
  v18 = a2[1];
  if ( v18 )
    return sub_18001050C(v18);
  return result;
}
