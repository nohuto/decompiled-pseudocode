/*
 * XREFs of sub_18005C0B0 @ 0x18005C0B0
 * Callers:
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005C0B0(__int64 a1, int a2, char a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 result; // rax
  _QWORD v8[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v9[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( a2 == -1 )
  {
    std::string::string(v9, "ShaderFamily::SetOption() -- The invalid option cannot be set.");
    v4 = std::string::string(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = (1LL << a2) & *(_QWORD *)(a1 + 64);
  result = *(_QWORD *)(a1 + 72);
  if ( a3 )
  {
    result |= v6;
    *(_QWORD *)(a1 + 72) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = result & ~v6;
  }
  return result;
}
