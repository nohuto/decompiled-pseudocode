/*
 * XREFs of sub_1800790A4 @ 0x1800790A4
 * Callers:
 *     sub_180043CA4 @ 0x180043CA4 (sub_180043CA4.c)
 *     sub_18007A544 @ 0x18007A544 (sub_18007A544.c)
 *     sub_18007A7FC @ 0x18007A7FC (sub_18007A7FC.c)
 *     sub_18007A830 @ 0x18007A830 (sub_18007A830.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800790A4(__int64 a1, unsigned __int16 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v9[4]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v12[7]; // [rsp+B0h] [rbp+17h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    std::string::string(
      v9,
      "ShaderPropertyLayout::SetPropertyDefault() -- cannot set property defaults after calling ShaderPropertyLayout::EndDeclaration()");
    v2 = std::string::string(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038A58(pExceptionObject, (__int64)v2, v3, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_WORD *)(a1 + 2LL * a2 + 128) == 0xFFFF )
  {
    v4 = sub_180027470(v10, a2);
    v5 = sub_18001B518(
           (__int64)pExceptionObject,
           (__int64)"ShaderPropertyLayout::SetPropertyDefault() -- property layout does not have a property with the specified ID ",
           v4);
    v6 = std::string::string(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038A58(v12, (__int64)v6, v7, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v12;
  }
  return *(_QWORD *)(a1 + 80)
       + 4LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128) + *(_QWORD *)(a1 + 56) + 40);
}
