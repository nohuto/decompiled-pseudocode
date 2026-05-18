/*
 * XREFs of sub_1800487F8 @ 0x1800487F8
 * Callers:
 *     sub_1800487D4 @ 0x1800487D4 (sub_1800487D4.c)
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 *     sub_180090770 @ 0x180090770 (sub_180090770.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180049B78 @ 0x180049B78 (sub_180049B78.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800487F8(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  _QWORD *v4; // rcx
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD *v7; // rax
  _QWORD v9[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v4 = (_QWORD *)(a1 + 104);
  if ( a3 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v4[1] - *v4) >> 3) )
  {
    std::string::string(v10, "Out of range");
    v5 = (unsigned int)std::string::string(
                         v9,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_180068508((unsigned int)pExceptionObject, v5, v6, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = (_QWORD *)sub_180049B78(v4, a3);
  unknown_libname_81(a2, v7);
  return a2;
}
