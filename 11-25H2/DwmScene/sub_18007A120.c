/*
 * XREFs of sub_18007A120 @ 0x18007A120
 * Callers:
 *     sub_1800416B4 @ 0x1800416B4 (sub_1800416B4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007A120(__int64 a1, unsigned __int16 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v9[4]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v10[32]; // [rsp+B0h] [rbp-38h] BYREF

  if ( *(_WORD *)(a1 + 2LL * a2 + 128) == 0xFFFF )
  {
    v2 = sub_180027470(v9, a2);
    v3 = sub_18001B518(
           (__int64)v10,
           (__int64)"ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the specified ID ",
           v2);
    v4 = std::string::string(
           v7,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038A58(pExceptionObject, (__int64)v4, v5, v3, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 56) + 56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
}
