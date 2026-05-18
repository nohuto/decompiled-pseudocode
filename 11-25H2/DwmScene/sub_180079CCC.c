/*
 * XREFs of sub_180079CCC @ 0x180079CCC
 * Callers:
 *     sub_180042358 @ 0x180042358 (sub_180042358.c)
 *     sub_1800431B4 @ 0x1800431B4 (sub_1800431B4.c)
 *     sub_180043710 @ 0x180043710 (sub_180043710.c)
 *     sub_180043C14 @ 0x180043C14 (sub_180043C14.c)
 *     sub_180043CA4 @ 0x180043CA4 (sub_180043CA4.c)
 *     sub_18004D35C @ 0x18004D35C (sub_18004D35C.c)
 *     sub_18005B7F4 @ 0x18005B7F4 (sub_18005B7F4.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 *     sub_18007BB24 @ 0x18007BB24 (sub_18007BB24.c)
 *     sub_1800DA962 @ 0x1800DA962 (sub_1800DA962.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004C574 @ 0x18004C574 (sub_18004C574.c)
 *     sub_180079AD8 @ 0x180079AD8 (sub_180079AD8.c)
 *     sub_18007A234 @ 0x18007A234 (sub_18007A234.c)
 *     sub_18007A2D4 @ 0x18007A2D4 (sub_18007A2D4.c)
 *     sub_18007BE64 @ 0x18007BE64 (sub_18007BE64.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180079CCC(__int64 a1)
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
    sub_180038A58(pExceptionObject, (__int64)v2, v3, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 1242) = *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 64);
  sub_18007A234(a1, 16LL);
  sub_180079AD8(a1);
  result = sub_18007A234(a1, 0LL);
  *(_DWORD *)(a1 + 1168) = 1;
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v5 = (_QWORD *)sub_18004C574(*(_QWORD *)(a1 + 1152), &v8);
    v6 = sub_18007BE64(*v5, v7);
    result = sub_18007A2D4(a1, v6);
    if ( v9 )
      return sub_18001050C(v9);
  }
  return result;
}
