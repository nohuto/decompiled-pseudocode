/*
 * XREFs of sub_180048B1C @ 0x180048B1C
 * Callers:
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180049CD8 @ 0x180049CD8 (sub_180049CD8.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180048B1C(__int64 a1, unsigned __int64 a2)
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
    sub_180068668((unsigned int)pExceptionObject, v3, v4, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return *(_BYTE *)(sub_180049CD8(v2, a2) + 16);
}
