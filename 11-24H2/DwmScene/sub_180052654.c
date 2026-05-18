/*
 * XREFs of sub_180052654 @ 0x180052654
 * Callers:
 *     sub_180027130 @ 0x180027130 (sub_180027130.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_1800525A0 @ 0x1800525A0 (sub_1800525A0.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180052654(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  int v4; // xmm0_4
  __int64 *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // r8d
  __int64 v9; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = (__int64 *)&retaddr;
  v9 = a2;
  if ( *(float *)&a2 < 0.0 || (v4 = HIDWORD(v9), *((float *)&v9 + 1) < 0.0) )
  {
    std::string::string(v11, "Attempted to set an active size with a negative component");
    v7 = (unsigned int)std::string::string(
                         v10,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\texture.cpp");
    sub_180068668((unsigned int)pExceptionObject, v7, v8, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = v4;
  v5 = *(__int64 **)(a1 + 112);
  v6 = *v5;
  v9 = *v5;
  while ( (__int64 *)v6 != v5 )
  {
    sub_1800525A0(*(_QWORD *)(v6 + 40), a2);
    result = sub_18001C420(&v9);
    v6 = v9;
  }
  return result;
}
