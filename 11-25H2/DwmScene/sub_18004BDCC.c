/*
 * XREFs of sub_18004BDCC @ 0x18004BDCC
 * Callers:
 *     sub_18005AF9C @ 0x18005AF9C (sub_18005AF9C.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004A8F8 @ 0x18004A8F8 (sub_18004A8F8.c)
 *     sub_18004C4C4 @ 0x18004C4C4 (sub_18004C4C4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004BDCC(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _BYTE v10[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp+7h] BYREF

  if ( !*(_QWORD *)(a2 + 16) )
  {
    std::string::string(v12, "ShaderManager::AddOption() -- shader option name cannot be empty");
    v4 = std::string::string(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LODWORD(v6) = sub_18004C4C4(a1, a2);
  if ( (_DWORD)v6 == -1 )
  {
    v6 = *(int *)(a1 + 2080);
    if ( (int)v6 >= 64 )
    {
      std::string::string(
        v11,
        "ShaderManager::AddOption() -- option could not be added because the maximum number of options has been reached");
      v8 = std::string::string(
             v12,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
      sub_180038A58(pExceptionObject, (__int64)v8, v9, (__int64)v11, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 2080) = v6 + 1;
    *(_DWORD *)(*(_QWORD *)sub_18004A8F8((__int64 *)(a1 + 16), (__int64)v10, a2) + 64LL) = v6;
    sub_1800132F4(a1 + 32 * (v6 + 1), a2);
  }
  return (unsigned int)v6;
}
