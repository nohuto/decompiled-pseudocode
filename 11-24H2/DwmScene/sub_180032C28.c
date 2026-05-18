/*
 * XREFs of sub_180032C28 @ 0x180032C28
 * Callers:
 *     sub_18002B070 @ 0x18002B070 (sub_18002B070.c)
 *     sub_180030FA4 @ 0x180030FA4 (sub_180030FA4.c)
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 *     sub_180035258 @ 0x180035258 (sub_180035258.c)
 *     sub_18003AF9C @ 0x18003AF9C (sub_18003AF9C.c)
 *     sub_1800408E0 @ 0x1800408E0 (sub_1800408E0.c)
 *     sub_180047520 @ 0x180047520 (sub_180047520.c)
 *     sub_1800497D0 @ 0x1800497D0 (sub_1800497D0.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_1800583C0 @ 0x1800583C0 (sub_1800583C0.c)
 *     sub_18006D4A0 @ 0x18006D4A0 (sub_18006D4A0.c)
 *     sub_18008BF80 @ 0x18008BF80 (sub_18008BF80.c)
 * Callees:
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180032C28()
{
  unsigned int v0; // eax
  int v1; // r8d
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  std::string::string(v3, "SymbolManager not supported.");
  v0 = (unsigned int)std::string::string(
                       v2,
                       "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp");
  sub_180068668((unsigned int)pExceptionObject, v0, v1, (unsigned int)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
