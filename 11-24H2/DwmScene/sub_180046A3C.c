/*
 * XREFs of sub_180046A3C @ 0x180046A3C
 * Callers:
 *     sub_180013A60 @ 0x180013A60 (sub_180013A60.c)
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 *     sub_180046F10 @ 0x180046F10 (sub_180046F10.c)
 *     sub_180046F80 @ 0x180046F80 (sub_180046F80.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180044DDC @ 0x180044DDC (sub_180044DDC.c)
 *     sub_180046B18 @ 0x180046B18 (sub_180046B18.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

__int64 __fastcall sub_180046A3C(__int64 a1, __int64 a2, char a3, __int64 a4)
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
    sub_180068668((unsigned int)pExceptionObject, v4, v5, (unsigned int)v10, 0);
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
    sub_180044DDC(pExceptionObject, (__int64)v6, v7, (__int64)v9);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  LOBYTE(a4) = a3;
  return sub_180046B18(a1, a2, *(unsigned int *)(a1 + 120), a4);
}
