/*
 * XREFs of sub_18004C988 @ 0x18004C988
 * Callers:
 *     sub_18007BFE8 @ 0x18007BFE8 (sub_18007BFE8.c)
 *     sub_18007C124 @ 0x18007C124 (sub_18007C124.c)
 *     sub_18007C5C4 @ 0x18007C5C4 (sub_18007C5C4.c)
 *     sub_18007C7C4 @ 0x18007C7C4 (sub_18007C7C4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18004C988(__int64 a1, __int64 a2, unsigned __int16 a3)
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
    v5 = sub_1800275D0(v12, a3);
    v6 = sub_18001B678((__int64)v13, (__int64)"ShaderManager::GetPropertyName() -- property id ", v5);
    v7 = sub_18001B5A8((__int64)v14, v6, (__int64)" is not registered");
    v8 = std::string::string(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v8, v9, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180017054(a2, a1 + 2104 + 32LL * a3);
  return a2;
}
