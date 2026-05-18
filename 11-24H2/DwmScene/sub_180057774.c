/*
 * XREFs of sub_180057774 @ 0x180057774
 * Callers:
 *     sub_180059330 @ 0x180059330 (sub_180059330.c)
 *     sub_18005954C @ 0x18005954C (sub_18005954C.c)
 *     sub_180059750 @ 0x180059750 (sub_180059750.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001CF40 @ 0x18001CF40 (sub_18001CF40.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_180057774(__int64 a1, int a2)
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
      sub_180068668((unsigned int)pExceptionObject, v5, v6, (unsigned int)v8, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    if ( 1 << i == a2 )
      break;
  }
  return (unsigned int)sub_18001CF40((unsigned int *)(a1 + 4 * (i + 70LL))) != 0;
}
