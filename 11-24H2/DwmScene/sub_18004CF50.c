/*
 * XREFs of sub_18004CF50 @ 0x18004CF50
 * Callers:
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B6DC @ 0x18001B6DC (sub_18001B6DC.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004D690 @ 0x18004D690 (sub_18004D690.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18004CF50(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbx
  __int64 *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v11[5]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v13[4]; // [rsp+98h] [rbp-50h] BYREF
  _BYTE v14[32]; // [rsp+B8h] [rbp-30h] BYREF

  v11[4] = a2;
  v3 = (_QWORD *)(a1 + 18576);
  sub_18004D690(a1 + 18576, &v10, a2);
  if ( v10 == *v3 )
  {
    v6 = sub_18001B6DC(v13, (__int64)"ShaderManager::GetShaderProgram() -- shader program for name '", a2);
    v7 = sub_18001B5A8((__int64)v14, (__int64)v6, (__int64)"' does not exist");
    v8 = std::string::string(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v8, v9, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = v10 + 64;
  sub_180011B5C(a2);
  return v4;
}
