/*
 * XREFs of sub_1800464F4 @ 0x1800464F4
 * Callers:
 *     sub_180045B9C @ 0x180045B9C (sub_180045B9C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180044C7C @ 0x180044C7C (sub_180044C7C.c)
 *     sub_1800465D4 @ 0x1800465D4 (sub_1800465D4.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800464F4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  int v4; // r8d
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v9[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    std::string::string(
      v9,
      "Mesh::SetJointData() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v3 = (unsigned int)std::string::string(
                         v8,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180068508((unsigned int)pExceptionObject, v3, v4, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 || !a3 )
  {
    std::string::string(
      v8,
      "Mesh::SetJointData() -- jointWeightArray and jointIndexArray must be non-null and contain N elements, where N=Mesh"
      "::GetVertexCount()");
    v6 = std::string::string(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180044C7C(pExceptionObject, (__int64)v6, v7, (__int64)v8);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_1800465D4(a1, a2, a3, *(unsigned int *)(a1 + 120));
}
