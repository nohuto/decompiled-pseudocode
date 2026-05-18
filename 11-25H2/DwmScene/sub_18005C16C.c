/*
 * XREFs of sub_18005C16C @ 0x18005C16C
 * Callers:
 *     sub_180042358 @ 0x180042358 (sub_180042358.c)
 *     sub_1800431B4 @ 0x1800431B4 (sub_1800431B4.c)
 *     sub_180043710 @ 0x180043710 (sub_180043710.c)
 *     sub_180043C14 @ 0x180043C14 (sub_180043C14.c)
 *     sub_180043CA4 @ 0x180043CA4 (sub_180043CA4.c)
 *     sub_18005B7F4 @ 0x18005B7F4 (sub_18005B7F4.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001D620 @ 0x18001D620 (sub_18001D620.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004D2A8 @ 0x18004D2A8 (sub_18004D2A8.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_18005C16C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  unsigned int v6; // esi
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD v13[4]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v14[4]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v16[32]; // [rsp+B8h] [rbp+1Fh] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    std::string::string(
      v14,
      "ShaderFamily::SetPropertyLayout() -- Cannot set property layout after the shader family has ended declaration");
    v4 = std::string::string(
           v13,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)v14, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = *(_DWORD *)(*a2 + 48LL);
  sub_18001244C((__int64 *)(a1 + 16LL * v6 + 96), a2);
  v7 = *a2;
  if ( !*(_QWORD *)(*a2 + 32LL) )
  {
    v8 = sub_18004D2A8(pExceptionObject, v6);
    v9 = sub_18001B448((__int64)v16, (__int64)v8, (__int64)" (");
    v10 = sub_18001D620((__int64)v14, v9, a1 + 16);
    sub_18001B448((__int64)v13, v10, (__int64)")");
    sub_180011A5C((__int64)v14);
    sub_180011A5C((__int64)v16);
    sub_180011A5C((__int64)pExceptionObject);
    sub_1800132F4(*a2 + 16LL, (__int64)v13);
    LOBYTE(v7) = sub_180011A5C((__int64)v13);
  }
  v11 = a2[1];
  if ( v11 )
    LOBYTE(v7) = sub_18001050C(v11);
  return v7;
}
