/*
 * XREFs of sub_18005C210 @ 0x18005C210
 * Callers:
 *     sub_18005C134 @ 0x18005C134 (sub_18005C134.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005C210(__int64 a1, int a2, char a3)
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
    sub_180038BB8(pExceptionObject, (__int64)v4, v5, (__int64)v9, 0);
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
