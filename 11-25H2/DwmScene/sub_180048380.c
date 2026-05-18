/*
 * XREFs of sub_180048380 @ 0x180048380
 * Callers:
 *     sub_1800482A0 @ 0x1800482A0 (sub_1800482A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180013F6C @ 0x180013F6C (sub_180013F6C.c)
 *     sub_180028938 @ 0x180028938 (sub_180028938.c)
 *     sub_1800474A4 @ 0x1800474A4 (sub_1800474A4.c)
 *     sub_1800479C0 @ 0x1800479C0 (sub_1800479C0.c)
 *     sub_180078350 @ 0x180078350 (sub_180078350.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180048380(__int64 a1, _QWORD *a2, _BYTE *a3)
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
  sub_180078350(a1, v6);
  sub_180013F6C(&v18, a2);
  if ( (*a3 & 8) != 0 )
  {
    std::string::string(
      v22,
      "MeshInstance::CloneInternal() -- material cloning not yet supported (reserved for future use)");
    v7 = std::string::string(
           v21,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_1800479C0(pExceptionObject, (__int64)v7, v8, (__int64)v22);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  v9 = v18;
  if ( v18 + 104 != a1 + 104 )
    sub_1800474A4(
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
    sub_1800479C0(pExceptionObject, (__int64)v10, v11, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_18001244C((__int64 *)(v9 + 88), (_QWORD *)(a1 + 88));
  if ( (*a3 & 0x10) != 0 )
  {
    std::string::string(
      v21,
      "MeshInstance::CloneInternal() -- skinning controller cloning not yet supported (reserved for future use)");
    v12 = std::string::string(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_1800479C0(pExceptionObject, (__int64)v12, v13, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_180028938((__int64 *)(v9 + 136), (_QWORD *)(a1 + 136));
  if ( (*a3 & 0x20) != 0 )
  {
    std::string::string(
      v21,
      "MeshInstance::CloneInternal() -- morph controller cloning not yet supported (reserved for future use)");
    v14 = std::string::string(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_1800479C0(pExceptionObject, (__int64)v14, v15, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_180028938((__int64 *)(v9 + 152), (_QWORD *)(a1 + 152));
  *(_BYTE *)(v9 + 168) = *(_BYTE *)(a1 + 168);
  *(_DWORD *)(v9 + 172) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(v9 + 176) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(v9 + 180) = *(_DWORD *)(a1 + 180);
  result = *(unsigned int *)(a1 + 184);
  *(_DWORD *)(v9 + 184) = result;
  if ( v19 )
    result = sub_18001050C(v19);
  v17 = a2[1];
  if ( v17 )
    return sub_18001050C(v17);
  return result;
}
