/*
 * XREFs of sub_180046C08 @ 0x180046C08
 * Callers:
 *     sub_180013A60 @ 0x180013A60 (sub_180013A60.c)
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 *     sub_180082D38 @ 0x180082D38 (sub_180082D38.c)
 *     sub_180082EF0 @ 0x180082EF0 (sub_180082EF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180044DDC @ 0x180044DDC (sub_180044DDC.c)
 *     sub_180046CE0 @ 0x180046CE0 (sub_180046CE0.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

__int64 __fastcall sub_180046C08(__int64 a1, __int64 a2)
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
      "Mesh::SetUV0() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v2 = (unsigned int)std::string::string(
                         v7,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180068668((unsigned int)pExceptionObject, v2, v3, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    std::string::string(
      v7,
      "Mesh::SetUV0() -- uvArray must be non-null and contain N elements, where N=Mesh::GetVertexCount()");
    v4 = std::string::string(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180044DDC(pExceptionObject, (__int64)v4, v5, (__int64)v7);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_180046CE0(a1, a2, *(unsigned int *)(a1 + 120));
}
