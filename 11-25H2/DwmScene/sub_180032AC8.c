/*
 * XREFs of sub_180032AC8 @ 0x180032AC8
 * Callers:
 *     sub_18002AF10 @ 0x18002AF10 (sub_18002AF10.c)
 *     sub_180030E44 @ 0x180030E44 (sub_180030E44.c)
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 *     sub_1800350F8 @ 0x1800350F8 (sub_1800350F8.c)
 *     sub_18003AE3C @ 0x18003AE3C (sub_18003AE3C.c)
 *     sub_180040780 @ 0x180040780 (sub_180040780.c)
 *     sub_1800473C0 @ 0x1800473C0 (sub_1800473C0.c)
 *     sub_180049670 @ 0x180049670 (sub_180049670.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_180058260 @ 0x180058260 (sub_180058260.c)
 *     sub_18006D340 @ 0x18006D340 (sub_18006D340.c)
 *     sub_18008BE20 @ 0x18008BE20 (sub_18008BE20.c)
 * Callees:
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180032AC8()
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
  sub_180068508((unsigned int)pExceptionObject, v0, v1, (unsigned int)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
