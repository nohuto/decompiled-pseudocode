/*
 * XREFs of sub_1800489BC @ 0x1800489BC
 * Callers:
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180049B78 @ 0x180049B78 (sub_180049B78.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800489BC(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rcx
  unsigned int v3; // eax
  int v4; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  v2 = (_QWORD *)(a1 + 104);
  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v2[1] - *v2) >> 3) )
  {
    std::string::string(v7, "Out of range");
    v3 = (unsigned int)std::string::string(
                         v6,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_180068508((unsigned int)pExceptionObject, v3, v4, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return *(_BYTE *)(sub_180049B78(v2, a2) + 16);
}
