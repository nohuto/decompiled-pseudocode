/*
 * XREFs of sub_18004C828 @ 0x18004C828
 * Callers:
 *     sub_18007BE88 @ 0x18007BE88 (sub_18007BE88.c)
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 *     sub_18007C464 @ 0x18007C464 (sub_18007C464.c)
 *     sub_18007C664 @ 0x18007C664 (sub_18007C664.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18004C828(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD v10[4]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v12[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v13[32]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v14[32]; // [rsp+D8h] [rbp-30h] BYREF

  if ( a3 == 511 || a3 >= *(int *)(a1 + 18488) )
  {
    v5 = sub_180027470(v12, a3);
    v6 = sub_18001B518((__int64)v13, (__int64)"ShaderManager::GetPropertyName() -- property id ", v5);
    v7 = sub_18001B448((__int64)v14, v6, (__int64)" is not registered");
    v8 = std::string::string(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038A58(pExceptionObject, (__int64)v8, v9, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180016F54(a2, a1 + 2104 + 32LL * a3);
  return a2;
}
