/*
 * XREFs of sub_18003DBF8 @ 0x18003DBF8
 * Callers:
 *     sub_180014880 @ 0x180014880 (sub_180014880.c)
 *     sub_180017BA0 @ 0x180017BA0 (sub_180017BA0.c)
 *     sub_180039580 @ 0x180039580 (sub_180039580.c)
 *     sub_18003DD54 @ 0x18003DD54 (sub_18003DD54.c)
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18003DAF0 @ 0x18003DAF0 (sub_18003DAF0.c)
 *     sub_18003E99C @ 0x18003E99C (sub_18003E99C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003DBF8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
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
    sub_180038A58(pExceptionObject, (__int64)v8, v9, (__int64)&v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*a4 )
  {
    std::string::string(&v18, "Scene::AddNode() -- A non-null parent must be specified.");
    v10 = std::string::string(
            v17,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038A58(pExceptionObject, (__int64)v10, v11, (__int64)&v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v12 = unknown_libname_81(v17, a4);
  sub_18003E99C(a1, &v18, v12);
  v13 = unknown_libname_81(v16, &v18);
  sub_18003DAF0(a1, a2, v5, *(_QWORD *)(*a4 + 368LL), v13);
  if ( v19 )
    sub_18001050C(v19);
  v14 = a4[1];
  if ( v14 )
    sub_18001050C(v14);
  return a2;
}
