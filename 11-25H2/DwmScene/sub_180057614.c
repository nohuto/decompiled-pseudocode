/*
 * XREFs of sub_180057614 @ 0x180057614
 * Callers:
 *     sub_1800591D0 @ 0x1800591D0 (sub_1800591D0.c)
 *     sub_1800593EC @ 0x1800593EC (sub_1800593EC.c)
 *     sub_1800595F0 @ 0x1800595F0 (sub_1800595F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001CDE0 @ 0x18001CDE0 (sub_18001CDE0.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_180057614(__int64 a1, int a2)
{
  unsigned int i; // ecx
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( i >= 3 )
    {
      std::string::string(v8, "Invalid matrix stage");
      v5 = (unsigned int)std::string::string(
                           v7,
                           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                           "engine\\camera.cpp");
      sub_180068508((unsigned int)pExceptionObject, v5, v6, (unsigned int)v8, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    if ( 1 << i == a2 )
      break;
  }
  return (unsigned int)sub_18001CDE0((unsigned int *)(a1 + 4 * (i + 70LL))) != 0;
}
