/*
 * XREFs of sub_180046654 @ 0x180046654
 * Callers:
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180044DDC @ 0x180044DDC (sub_180044DDC.c)
 *     sub_180046734 @ 0x180046734 (sub_180046734.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180046654(__int64 a1, __int64 a2, __int64 a3)
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
    sub_180068668((unsigned int)pExceptionObject, v3, v4, (unsigned int)v9, 0);
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
    sub_180044DDC(pExceptionObject, (__int64)v6, v7, (__int64)v8);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_180046734(a1, a2, a3, *(unsigned int *)(a1 + 120));
}
