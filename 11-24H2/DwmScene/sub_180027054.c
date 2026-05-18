/*
 * XREFs of sub_180027054 @ 0x180027054
 * Callers:
 *     sub_1800BEE5C @ 0x1800BEE5C (sub_1800BEE5C.c)
 *     sub_1800BF090 @ 0x1800BF090 (sub_1800BF090.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800525A0 @ 0x1800525A0 (sub_1800525A0.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_180027054(__int64 a1, __int64 a2)
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
    sub_180068668((unsigned int)pExceptionObject, v7, v8, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    result = (_UNKNOWN **)sub_1800525A0(v5, a2);
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
    return (_UNKNOWN **)sub_1800525A0(v6, a2);
  return result;
}
