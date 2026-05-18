/*
 * XREFs of sub_180079EB0 @ 0x180079EB0
 * Callers:
 *     sub_18007A864 @ 0x18007A864 (sub_18007A864.c)
 *     sub_18007C138 @ 0x18007C138 (sub_18007C138.c)
 *     sub_18007C1A8 @ 0x18007C1A8 (sub_18007C1A8.c)
 *     sub_18007C204 @ 0x18007C204 (sub_18007C204.c)
 *     sub_18007C274 @ 0x18007C274 (sub_18007C274.c)
 *     sub_18007C2F4 @ 0x18007C2F4 (sub_18007C2F4.c)
 *     sub_18007C380 @ 0x18007C380 (sub_18007C380.c)
 *     sub_18007C3F8 @ 0x18007C3F8 (sub_18007C3F8.c)
 *     sub_18007C7FC @ 0x18007C7FC (sub_18007C7FC.c)
 *     sub_18007C858 @ 0x18007C858 (sub_18007C858.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B57C @ 0x18001B57C (sub_18001B57C.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_180079E74 @ 0x180079E74 (sub_180079E74.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180079EB0(__int64 a1, __int64 a2)
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

  result = sub_180079E74(a1, a2);
  if ( (_WORD)result == 511 )
  {
    v4 = sub_18001B57C(
           v10,
           (__int64)"ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the name \"",
           a2);
    v5 = sub_18001B448((__int64)v11, (__int64)v4, (__int64)"\"");
    v6 = std::string::string(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038A58(pExceptionObject, (__int64)v6, v7, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return result;
}
