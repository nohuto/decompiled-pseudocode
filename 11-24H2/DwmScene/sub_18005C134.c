/*
 * XREFs of sub_18005C134 @ 0x18005C134
 * Callers:
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 *     sub_18006323C @ 0x18006323C (sub_18006323C.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B6DC @ 0x18001B6DC (sub_18001B6DC.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18005BAC8 @ 0x18005BAC8 (sub_18005BAC8.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005C134(__int64 a1, __int64 a2, char a3)
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

  v6 = sub_18005BAC8(a1);
  if ( v6 == -1 )
  {
    v8 = sub_18001B6DC(v15, (__int64)"ShaderFamily::SetOption() -- The option '", a2);
    v9 = sub_18001B5A8((__int64)v16, (__int64)v8, (__int64)"' cannot be set.");
    v10 = std::string::string(
            v13,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v10, v11, v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOBYTE(v7) = a3;
  return sub_18005C210(a1, v6, v7);
}
