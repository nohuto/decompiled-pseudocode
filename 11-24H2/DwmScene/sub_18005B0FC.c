/*
 * XREFs of sub_18005B0FC @ 0x18005B0FC
 * Callers:
 *     sub_1800745D0 @ 0x1800745D0 (sub_1800745D0.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076CD0 @ 0x180076CD0 (sub_180076CD0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004AA58 @ 0x18004AA58 (sub_18004AA58.c)
 *     sub_18004AD84 @ 0x18004AD84 (sub_18004AD84.c)
 *     sub_18004BF2C @ 0x18004BF2C (sub_18004BF2C.c)
 *     sub_18004C7A4 @ 0x18004C7A4 (sub_18004C7A4.c)
 *     sub_180059D50 @ 0x180059D50 (sub_180059D50.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005B0FC(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  unsigned int v6; // esi
  __int64 v7; // rbx
  void *v9[2]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    std::string::string(
      v11,
      "ShaderFamily::AddOption() -- Cannot add option after the shader family has ended declaration");
    v4 = std::string::string(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v4, v5, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = sub_18004BF2C(*(_QWORD *)(a1 + 440), a2);
  sub_18004AD84((__int64 *)(a1 + 48), (__int64)v9, a2);
  v7 = *(_QWORD *)(a1 + 440);
  sub_180059D50((__int64 *)v9, (_QWORD *)(a1 + 48));
  *(_QWORD *)(a1 + 64) = sub_18004C7A4(v7, v9);
  *(_DWORD *)(*(_QWORD *)sub_18004AA58((__int64 *)(a1 + 80), (__int64)v9, a2) + 64LL) = v6;
  return v6;
}
