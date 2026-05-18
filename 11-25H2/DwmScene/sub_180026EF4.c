/*
 * XREFs of sub_180026EF4 @ 0x180026EF4
 * Callers:
 *     sub_1800BECFC @ 0x1800BECFC (sub_1800BECFC.c)
 *     sub_1800BEF30 @ 0x1800BEF30 (sub_1800BEF30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180052440 @ 0x180052440 (sub_180052440.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_180026EF4(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v9[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    std::string::string(v10, "Attempted to set an active size with a negative component");
    v7 = (unsigned int)std::string::string(
                         v9,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\rendertarget.cpp");
    sub_180068508((unsigned int)pExceptionObject, v7, v8, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    result = (_UNKNOWN **)sub_180052440(v5, a2);
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
    return (_UNKNOWN **)sub_180052440(v6, a2);
  return result;
}
