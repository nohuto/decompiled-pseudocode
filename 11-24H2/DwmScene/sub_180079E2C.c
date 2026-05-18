/*
 * XREFs of sub_180079E2C @ 0x180079E2C
 * Callers:
 *     sub_1800424B8 @ 0x1800424B8 (sub_1800424B8.c)
 *     sub_180043314 @ 0x180043314 (sub_180043314.c)
 *     sub_180043870 @ 0x180043870 (sub_180043870.c)
 *     sub_180043D74 @ 0x180043D74 (sub_180043D74.c)
 *     sub_180043E04 @ 0x180043E04 (sub_180043E04.c)
 *     sub_18004D4BC @ 0x18004D4BC (sub_18004D4BC.c)
 *     sub_18005B954 @ 0x18005B954 (sub_18005B954.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077074 @ 0x180077074 (sub_180077074.c)
 *     sub_18007BC84 @ 0x18007BC84 (sub_18007BC84.c)
 *     sub_1800DAAC2 @ 0x1800DAAC2 (sub_1800DAAC2.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004C6D4 @ 0x18004C6D4 (sub_18004C6D4.c)
 *     sub_180079C38 @ 0x180079C38 (sub_180079C38.c)
 *     sub_18007A394 @ 0x18007A394 (sub_18007A394.c)
 *     sub_18007A434 @ 0x18007A434 (sub_18007A434.c)
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180079E2C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  _BYTE v7[16]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v8; // [rsp+40h] [rbp-88h] BYREF
  __int64 v9; // [rsp+48h] [rbp-80h]
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    std::string::string(v10, "ShaderPropertyLayout::EndDeclaration() -- this function must only be called once");
    v2 = std::string::string(
           &v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v2, v3, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 1242) = *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 64);
  sub_18007A394(a1, 16LL);
  sub_180079C38(a1);
  result = sub_18007A394(a1, 0LL);
  *(_DWORD *)(a1 + 1168) = 1;
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v5 = (_QWORD *)sub_18004C6D4(*(_QWORD *)(a1 + 1152), &v8);
    v6 = sub_18007BFC4(*v5, v7);
    result = sub_18007A434(a1, v6);
    if ( v9 )
      return sub_18001060C(v9);
  }
  return result;
}
