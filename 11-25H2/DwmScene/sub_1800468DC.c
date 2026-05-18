/*
 * XREFs of sub_1800468DC @ 0x1800468DC
 * Callers:
 *     sub_180013960 @ 0x180013960 (sub_180013960.c)
 *     sub_180045B9C @ 0x180045B9C (sub_180045B9C.c)
 *     sub_180046DB0 @ 0x180046DB0 (sub_180046DB0.c)
 *     sub_180046E20 @ 0x180046E20 (sub_180046E20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180044C7C @ 0x180044C7C (sub_180044C7C.c)
 *     sub_1800469B8 @ 0x1800469B8 (sub_1800469B8.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

__int64 __fastcall sub_1800468DC(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v9[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    std::string::string(
      v10,
      "Mesh::SetTangents() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v4 = (unsigned int)std::string::string(
                         v9,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180068508((unsigned int)pExceptionObject, v4, v5, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    std::string::string(
      v9,
      "Mesh::SetTangents() -- tangentArray must be non-null and contain N elements, where N=Mesh::GetVertexCount()");
    v6 = std::string::string(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180044C7C(pExceptionObject, (__int64)v6, v7, (__int64)v9);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  LOBYTE(a4) = a3;
  return sub_1800469B8(a1, a2, *(unsigned int *)(a1 + 120), a4);
}
