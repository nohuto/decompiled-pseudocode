/*
 * XREFs of sub_18004F820 @ 0x18004F820
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

void __noreturn sub_18004F820()
{
  unsigned int v0; // eax
  int v1; // r8d
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  std::string::string(v3, "Deprecated code path");
  v0 = (unsigned int)std::string::string(
                       v2,
                       "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\Inc\\Native"
                       "Renderer\\Resources\\VertexLayoutGeneric.h");
  sub_180068668((unsigned int)pExceptionObject, v0, v1, (unsigned int)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
