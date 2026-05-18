/*
 * XREFs of sub_1800484E0 @ 0x1800484E0
 * Callers:
 *     sub_180048400 @ 0x180048400 (sub_180048400.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_18001406C @ 0x18001406C (sub_18001406C.c)
 *     sub_180028A98 @ 0x180028A98 (sub_180028A98.c)
 *     sub_180047604 @ 0x180047604 (sub_180047604.c)
 *     sub_180047B20 @ 0x180047B20 (sub_180047B20.c)
 *     sub_1800784B0 @ 0x1800784B0 (sub_1800784B0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800484E0(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19; // [rsp+40h] [rbp-59h]
  _QWORD *v20; // [rsp+48h] [rbp-51h]
  _QWORD v21[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v22[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v20 = a2;
  v6 = unknown_libname_81(&v18, a2);
  sub_1800784B0(a1, v6);
  sub_18001406C(&v18, a2);
  if ( (*a3 & 8) != 0 )
  {
    std::string::string(
      v22,
      "MeshInstance::CloneInternal() -- material cloning not yet supported (reserved for future use)");
    v7 = std::string::string(
           v21,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_180047B20(pExceptionObject, (__int64)v7, v8, (__int64)v22);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  v9 = v18;
  if ( v18 + 104 != a1 + 104 )
    sub_180047604(
      (__int64 *)(v18 + 104),
      *(_QWORD *)(a1 + 104),
      0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3));
  if ( (*a3 & 4) != 0 )
  {
    std::string::string(
      v21,
      "MeshInstance::CloneInternal() -- mesh cloning not yet supported (reserved for future use)");
    v10 = std::string::string(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_180047B20(pExceptionObject, (__int64)v10, v11, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_18001254C((__int64 *)(v9 + 88), (_QWORD *)(a1 + 88));
  if ( (*a3 & 0x10) != 0 )
  {
    std::string::string(
      v21,
      "MeshInstance::CloneInternal() -- skinning controller cloning not yet supported (reserved for future use)");
    v12 = std::string::string(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_180047B20(pExceptionObject, (__int64)v12, v13, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_180028A98((__int64 *)(v9 + 136), (_QWORD *)(a1 + 136));
  if ( (*a3 & 0x20) != 0 )
  {
    std::string::string(
      v21,
      "MeshInstance::CloneInternal() -- morph controller cloning not yet supported (reserved for future use)");
    v14 = std::string::string(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_180047B20(pExceptionObject, (__int64)v14, v15, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_180028A98((__int64 *)(v9 + 152), (_QWORD *)(a1 + 152));
  *(_BYTE *)(v9 + 168) = *(_BYTE *)(a1 + 168);
  *(_DWORD *)(v9 + 172) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(v9 + 176) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(v9 + 180) = *(_DWORD *)(a1 + 180);
  result = *(unsigned int *)(a1 + 184);
  *(_DWORD *)(v9 + 184) = result;
  if ( v19 )
    result = sub_18001060C(v19);
  v17 = a2[1];
  if ( v17 )
    return sub_18001060C(v17);
  return result;
}
