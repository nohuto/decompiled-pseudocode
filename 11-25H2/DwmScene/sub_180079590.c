/*
 * XREFs of sub_180079590 @ 0x180079590
 * Callers:
 *     sub_180042358 @ 0x180042358 (sub_180042358.c)
 *     sub_1800431B4 @ 0x1800431B4 (sub_1800431B4.c)
 *     sub_180043710 @ 0x180043710 (sub_180043710.c)
 *     sub_180043CA4 @ 0x180043CA4 (sub_180043CA4.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180079590(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  _QWORD v10[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-60h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    std::string::string(
      v11,
      "ShaderPropertyLayout::AddProperties() -- properties can only be added during declaration phase before EndDeclaration()");
    v7 = std::string::string(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038A58(pExceptionObject, (__int64)v7, v8, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 )
  {
    v9 = a3;
    do
    {
      sub_18007965C(a1, a2, a4);
      a2 += 64LL;
      --v9;
    }
    while ( v9 );
  }
}
