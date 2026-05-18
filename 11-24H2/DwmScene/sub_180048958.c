/*
 * XREFs of sub_180048958 @ 0x180048958
 * Callers:
 *     sub_180048934 @ 0x180048934 (sub_180048934.c)
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 *     sub_1800908D0 @ 0x1800908D0 (sub_1800908D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180049CD8 @ 0x180049CD8 (sub_180049CD8.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180048958(__int64 a1, _QWORD *a2, unsigned __int64 a3)
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
    sub_180068668((unsigned int)pExceptionObject, v5, v6, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = (_QWORD *)sub_180049CD8(v4, a3);
  unknown_libname_81(a2, v7);
  return a2;
}
