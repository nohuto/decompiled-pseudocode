/*
 * XREFs of sub_18005AF9C @ 0x18005AF9C
 * Callers:
 *     sub_180074470 @ 0x180074470 (sub_180074470.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_180076B70 @ 0x180076B70 (sub_180076B70.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004A8F8 @ 0x18004A8F8 (sub_18004A8F8.c)
 *     sub_18004AC24 @ 0x18004AC24 (sub_18004AC24.c)
 *     sub_18004BDCC @ 0x18004BDCC (sub_18004BDCC.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_180059BF0 @ 0x180059BF0 (sub_180059BF0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005AF9C(__int64 a1, __int64 a2)
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
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = sub_18004BDCC(*(_QWORD *)(a1 + 440), a2);
  sub_18004AC24((__int64 *)(a1 + 48), (__int64)v9, a2);
  v7 = *(_QWORD *)(a1 + 440);
  sub_180059BF0((__int64 *)v9, (_QWORD *)(a1 + 48));
  *(_QWORD *)(a1 + 64) = sub_18004C644(v7, v9);
  *(_DWORD *)(*(_QWORD *)sub_18004A8F8((__int64 *)(a1 + 80), (__int64)v9, a2) + 64LL) = v6;
  return v6;
}
