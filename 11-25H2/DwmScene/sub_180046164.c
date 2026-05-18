/*
 * XREFs of sub_180046164 @ 0x180046164
 * Callers:
 *     sub_180013960 @ 0x180013960 (sub_180013960.c)
 *     sub_180045B9C @ 0x180045B9C (sub_180045B9C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180044C7C @ 0x180044C7C (sub_180044C7C.c)
 *     sub_18004623C @ 0x18004623C (sub_18004623C.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180046164(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    std::string::string(
      v8,
      "Mesh::SetColours() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v2 = (unsigned int)std::string::string(
                         v7,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180068508((unsigned int)pExceptionObject, v2, v3, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    std::string::string(
      v7,
      "Mesh::SetColours() -- colorArray must be non-null and contain N elements, where N=Mesh::GetVertexCount()");
    v4 = std::string::string(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180044C7C(pExceptionObject, (__int64)v4, v5, (__int64)v7);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_18004623C(a1, a2, *(unsigned int *)(a1 + 120));
}
