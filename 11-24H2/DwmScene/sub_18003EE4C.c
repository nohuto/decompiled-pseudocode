/*
 * XREFs of sub_18003EE4C @ 0x18003EE4C
 * Callers:
 *     sub_18003F764 @ 0x18003F764 (sub_18003F764.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 *     sub_18003EAFC @ 0x18003EAFC (sub_18003EAFC.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18003EE4C(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  volatile __int32 *v18; // rax
  __int64 v19; // rsi
  __int64 *v20; // rax
  __int64 *v21; // r8
  __int64 result; // rax
  __int64 *v23; // rax
  __int64 *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  volatile __int32 *v27; // [rsp+30h] [rbp-D0h]
  __int128 v28; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v30[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 *v35; // [rsp+88h] [rbp-78h]
  _QWORD *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h]
  _QWORD v41[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v42[4]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+F8h] [rbp-8h] BYREF

  v35 = a2;
  v36 = a3;
  if ( !*a2 )
  {
    std::string::string(v42, "Scene::InsertNode() - node must not be null");
    v6 = std::string::string(
           v41,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v6, v7, (__int64)v42, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*a3 )
  {
    std::string::string(
      v41,
      "Scene::InsertNode() - new parent must not be null (to remove a node from the scene graph use RemoveNode() instead");
    v8 = std::string::string(
           v42,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v8, v9, (__int64)v41, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v10 = *(_QWORD *)sub_18001268C(*a2, &v37);
  if ( v38 )
    sub_18001060C(v38);
  if ( v10 )
  {
    std::string::string(
      v41,
      "Scene::InsertNode() - node must not be already attached to a scene (to insert this node into the parents scene use"
      " RemoveNode() first");
    v11 = std::string::string(
            v42,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v11, v12, (__int64)v41, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v13 = unknown_libname_81(v29, a2);
  sub_18003EAFC(a1, &v33, v13);
  v14 = unknown_libname_81(v30, a3);
  sub_18003EAFC(a1, &v31, v14);
  if ( v33 )
  {
    std::string::string(v41, "Scene::InsertNode() - the node must not already be in a layer.");
    v16 = std::string::string(
            v42,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v16, v17, (__int64)v41, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18002894C(a1 + 16, v15);
  if ( v31 )
  {
    v18 = (volatile __int32 *)(v31 + 76);
    v27 = (volatile __int32 *)(v31 + 76);
    while ( _InterlockedExchange(v18, 1) )
      v18 = v27;
    v19 = *sub_180012654(*a2, &v39);
    if ( v40 )
      sub_18001060C(v40);
    if ( v19 )
    {
      v28 = 0LL;
      sub_18003B094((__int64 *)*a2, (__int64 *)&v28);
    }
    v20 = unknown_libname_81(v30, a3);
    sub_18003B094(v21, v20);
    result = (__int64)v27;
    *v27 = 0;
  }
  else
  {
    v23 = unknown_libname_81(v29, a3);
    result = sub_18003B094(v24, v23);
  }
  if ( v32 )
    result = sub_18001060C(v32);
  if ( v34 )
    result = sub_18001060C(v34);
  v25 = a2[1];
  if ( v25 )
    result = sub_18001060C(v25);
  v26 = a3[1];
  if ( v26 )
    return sub_18001060C(v26);
  return result;
}
