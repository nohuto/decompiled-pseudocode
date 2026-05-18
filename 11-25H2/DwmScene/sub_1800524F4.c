/*
 * XREFs of sub_1800524F4 @ 0x1800524F4
 * Callers:
 *     sub_180026FD0 @ 0x180026FD0 (sub_180026FD0.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180052440 @ 0x180052440 (sub_180052440.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800524F4(__int64 a1, __int64 a2)
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
    sub_180068508((unsigned int)pExceptionObject, v7, v8, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = v4;
  v5 = *(__int64 **)(a1 + 112);
  v6 = *v5;
  v9 = *v5;
  while ( (__int64 *)v6 != v5 )
  {
    sub_180052440(*(_QWORD *)(v6 + 40), a2);
    result = sub_18001C2C0(&v9);
    v6 = v9;
  }
  return result;
}
