/*
 * XREFs of sub_18007A010 @ 0x18007A010
 * Callers:
 *     sub_18007A9C4 @ 0x18007A9C4 (sub_18007A9C4.c)
 *     sub_18007C298 @ 0x18007C298 (sub_18007C298.c)
 *     sub_18007C308 @ 0x18007C308 (sub_18007C308.c)
 *     sub_18007C364 @ 0x18007C364 (sub_18007C364.c)
 *     sub_18007C3D4 @ 0x18007C3D4 (sub_18007C3D4.c)
 *     sub_18007C454 @ 0x18007C454 (sub_18007C454.c)
 *     sub_18007C4E0 @ 0x18007C4E0 (sub_18007C4E0.c)
 *     sub_18007C558 @ 0x18007C558 (sub_18007C558.c)
 *     sub_18007C95C @ 0x18007C95C (sub_18007C95C.c)
 *     sub_18007C9B8 @ 0x18007C9B8 (sub_18007C9B8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B6DC @ 0x18001B6DC (sub_18001B6DC.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_180079FD4 @ 0x180079FD4 (sub_180079FD4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007A010(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  __int64 v10[4]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+B0h] [rbp-38h] BYREF

  result = sub_180079FD4(a1, a2);
  if ( (_WORD)result == 511 )
  {
    v4 = sub_18001B6DC(
           v10,
           (__int64)"ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the name \"",
           a2);
    v5 = sub_18001B5A8((__int64)v11, (__int64)v4, (__int64)"\"");
    v6 = std::string::string(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v6, v7, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return result;
}
