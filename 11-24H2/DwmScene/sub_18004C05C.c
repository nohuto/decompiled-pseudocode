/*
 * XREFs of sub_18004C05C @ 0x18004C05C
 * Callers:
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004AB4C @ 0x18004AB4C (sub_18004AB4C.c)
 *     sub_18004C678 @ 0x18004C678 (sub_18004C678.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004C05C(__int64 a1, __int64 a2)
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
    std::string::string(v12, "ShaderManager::RegisterShaderProperty() -- shader property name cannot be empty");
    v4 = std::string::string(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v4, v5, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOWORD(v6) = sub_18004C678();
  if ( (_WORD)v6 == 511 )
  {
    v6 = *(int *)(a1 + 18488);
    if ( (int)v6 >= 512 )
    {
      std::string::string(
        v11,
        "ShaderManager::RegisterProperty() -- property could not be registered because the maximum number of properties has been reached");
      v8 = std::string::string(
             v12,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
      sub_180038BB8(pExceptionObject, (__int64)v8, v9, (__int64)v11, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 18488) = v6 + 1;
    *(_WORD *)(*(_QWORD *)sub_18004AB4C((__int64 *)(a1 + 2088), (__int64)v10, a2) + 64LL) = v6;
    sub_1800133F4(a1 + 32 * v6 + 2104, a2);
  }
  return (unsigned __int16)v6;
}
