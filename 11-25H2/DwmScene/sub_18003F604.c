/*
 * XREFs of sub_18003F604 @ 0x18003F604
 * Callers:
 *     sub_180012940 @ 0x180012940 (sub_180012940.c)
 *     sub_180014D20 @ 0x180014D20 (sub_180014D20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18003ECEC @ 0x18003ECEC (sub_18003ECEC.c)
 *     sub_18003F268 @ 0x18003F268 (sub_18003F268.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003F604(__int64 a1, __int64 *a2, __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 *v11; // r11
  __int64 v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 *v16; // rax
  _QWORD *v17; // r8
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+38h] [rbp-61h]
  _QWORD v23[6]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v24; // [rsp+70h] [rbp-29h] BYREF
  __int64 v25; // [rsp+78h] [rbp-21h]
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v23[4] = a2;
  v23[5] = a3;
  if ( !*a2 )
  {
    std::string::string(&v24, "Scene::SetNodeParent() - node must not be null");
    v6 = std::string::string(
           v23,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038A58(pExceptionObject, (__int64)v6, v7, (__int64)&v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*a3 )
  {
    std::string::string(
      &v24,
      "Scene::SetNodeParent() - new parent must not be null  (to remove a node from the scene graph use RemoveNode() instead");
    v8 = std::string::string(
           v23,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038A58(pExceptionObject, (__int64)v8, v9, (__int64)&v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18001258C(*a3, &v24);
  v10 = *(_QWORD *)sub_18001258C(*a2, &v21);
  v12 = *v11;
  if ( v22 )
    sub_18001050C(v22);
  if ( v25 )
    sub_18001050C(v25);
  if ( v10 != v12 )
  {
    std::string::string(&v24, "Scene::SetNodeParent() - both nodes must belong to the same scene");
    v13 = std::string::string(
            v23,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038A58(pExceptionObject, (__int64)v13, v14, (__int64)&v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v15 = unknown_libname_81(&v24, a2);
  sub_18003F268(a1, v15);
  unknown_libname_81(&v24, a3);
  v16 = unknown_libname_81(v23, a2);
  result = sub_18003ECEC(a1, v16, v17);
  v19 = a2[1];
  if ( v19 )
    result = sub_18001050C(v19);
  v20 = a3[1];
  if ( v20 )
    return sub_18001050C(v20);
  return result;
}
