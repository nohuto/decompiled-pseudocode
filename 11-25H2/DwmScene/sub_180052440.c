/*
 * XREFs of sub_180052440 @ 0x180052440
 * Callers:
 *     sub_180026EF4 @ 0x180026EF4 (sub_180026EF4.c)
 *     sub_1800524F4 @ 0x1800524F4 (sub_1800524F4.c)
 *     sub_1800C0350 @ 0x1800C0350 (sub_1800C0350.c)
 *     sub_1800C234C @ 0x1800C234C (sub_1800C234C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180052440(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    std::string::string(v5, "Attempted to set an active size with a negative component");
    v2 = (unsigned int)std::string::string(
                         v4,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\texture.cpp");
    sub_180068508((unsigned int)pExceptionObject, v2, v3, (unsigned int)v5, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_QWORD *)(a1 + 152) = a2;
}
