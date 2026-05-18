/*
 * XREFs of sub_18003F3C8 @ 0x18003F3C8
 * Callers:
 *     sub_180012A40 @ 0x180012A40 (sub_180012A40.c)
 *     sub_180014CA0 @ 0x180014CA0 (sub_180014CA0.c)
 *     sub_180014E20 @ 0x180014E20 (sub_180014E20.c)
 *     sub_18003F764 @ 0x18003F764 (sub_18003F764.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 *     sub_18003EAFC @ 0x18003EAFC (sub_18003EAFC.c)
 *     sub_18003ECF8 @ 0x18003ECF8 (sub_18003ECF8.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18003F3C8(__int64 a1, _QWORD *a2)
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
    sub_180038BB8(pExceptionObject, (__int64)v4, v5, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = unknown_libname_81(&v19, a2);
  sub_18003EAFC(a1, &v20, v6);
  v7 = v20;
  if ( !v20 )
  {
    std::string::string(v25, "Scene::RemoveNode() - node is not in any layer");
    v8 = std::string::string(
           v26,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v8, v9, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v10 = (__int64 **)sub_18003ECF8(v20, &v23);
  v12 = (__int64 *)*a2;
  v13 = *v10;
  if ( v24 )
    sub_18001060C(v24);
  if ( v12 == v13 )
  {
    std::string::string(
      v25,
      "Scene::RemoveNode() - the root node of a layer is for internal use by the system and must not be removed");
    v14 = std::string::string(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v14, v15, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18002894C(a1 + 16, v11);
  for ( i = (volatile __int32 *)(v7 + 76); _InterlockedExchange(i, 1); i = (volatile __int32 *)(v7 + 76) )
    ;
  v19 = 0LL;
  sub_18003B094((__int64 *)*a2, (__int64 *)&v19);
  result = v7 + 76;
  *(_DWORD *)(v7 + 76) = 0;
  if ( v21 )
    result = sub_18001060C(v21);
  v18 = a2[1];
  if ( v18 )
    return sub_18001060C(v18);
  return result;
}
