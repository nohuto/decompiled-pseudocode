/*
 * XREFs of sub_18005BFD4 @ 0x18005BFD4
 * Callers:
 *     sub_180061D60 @ 0x180061D60 (sub_180061D60.c)
 *     sub_1800630DC @ 0x1800630DC (sub_1800630DC.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B57C @ 0x18001B57C (sub_18001B57C.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18005B968 @ 0x18005B968 (sub_18005B968.c)
 *     sub_18005C0B0 @ 0x18005C0B0 (sub_18005C0B0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005BFD4(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD v13[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  __int64 v15[4]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+B0h] [rbp-38h] BYREF

  v6 = sub_18005B968(a1);
  if ( v6 == -1 )
  {
    v8 = sub_18001B57C(v15, (__int64)"ShaderFamily::SetOption() -- The option '", a2);
    v9 = sub_18001B448((__int64)v16, (__int64)v8, (__int64)"' cannot be set.");
    v10 = std::string::string(
            v13,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038A58(pExceptionObject, (__int64)v10, v11, v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOBYTE(v7) = a3;
  return sub_18005C0B0(a1, v6, v7);
}
