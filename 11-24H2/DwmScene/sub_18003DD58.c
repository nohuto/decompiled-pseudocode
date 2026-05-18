/*
 * XREFs of sub_18003DD58 @ 0x18003DD58
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180017C60 @ 0x180017C60 (sub_180017C60.c)
 *     sub_1800396E0 @ 0x1800396E0 (sub_1800396E0.c)
 *     sub_18003DEB4 @ 0x18003DEB4 (sub_18003DEB4.c)
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18003DC50 @ 0x18003DC50 (sub_18003DC50.c)
 *     sub_18003EAFC @ 0x18003EAFC (sub_18003EAFC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003DD58(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // esi
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD v16[4]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v18; // [rsp+70h] [rbp-29h] BYREF
  __int64 v19; // [rsp+78h] [rbp-21h]
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v5 = a3;
  v16[3] = a4;
  if ( !a3 )
  {
    std::string::string(&v18, "Scene::AddNode() -- Unique ID zero is reserved for root-level layer nodes.");
    v8 = std::string::string(
           v17,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v8, v9, (__int64)&v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*a4 )
  {
    std::string::string(&v18, "Scene::AddNode() -- A non-null parent must be specified.");
    v10 = std::string::string(
            v17,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v10, v11, (__int64)&v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v12 = unknown_libname_81(v17, a4);
  sub_18003EAFC(a1, &v18, v12);
  v13 = unknown_libname_81(v16, &v18);
  sub_18003DC50(a1, a2, v5, *(_QWORD *)(*a4 + 368LL), v13);
  if ( v19 )
    sub_18001060C(v19);
  v14 = a4[1];
  if ( v14 )
    sub_18001060C(v14);
  return a2;
}
