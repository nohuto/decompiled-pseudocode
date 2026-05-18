/*
 * XREFs of sub_1800819E0 @ 0x1800819E0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

void __noreturn sub_1800819E0()
{
  _QWORD *v0; // rax
  __int64 v1; // r8
  _QWORD v2[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v3[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  std::string::string(v3, "Deprecated code path");
  v0 = std::string::string(
         v2,
         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\renderstategeneric.cpp");
  sub_180068508(pExceptionObject, (__int64)v0, v1, (__int64)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
