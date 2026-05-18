/*
 * XREFs of sub_18005C2CC @ 0x18005C2CC
 * Callers:
 *     sub_1800424B8 @ 0x1800424B8 (sub_1800424B8.c)
 *     sub_180043314 @ 0x180043314 (sub_180043314.c)
 *     sub_180043870 @ 0x180043870 (sub_180043870.c)
 *     sub_180043D74 @ 0x180043D74 (sub_180043D74.c)
 *     sub_180043E04 @ 0x180043E04 (sub_180043E04.c)
 *     sub_18005B954 @ 0x18005B954 (sub_18005B954.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077074 @ 0x180077074 (sub_180077074.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001D780 @ 0x18001D780 (sub_18001D780.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004D408 @ 0x18004D408 (sub_18004D408.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_18005C2CC(__int64 a1, _QWORD *a2)
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
    sub_180038BB8(pExceptionObject, (__int64)v4, v5, (__int64)v14, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = *(_DWORD *)(*a2 + 48LL);
  sub_18001254C((__int64 *)(a1 + 16LL * v6 + 96), a2);
  v7 = *a2;
  if ( !*(_QWORD *)(*a2 + 32LL) )
  {
    v8 = sub_18004D408(pExceptionObject, v6);
    v9 = sub_18001B5A8((__int64)v16, (__int64)v8, (__int64)" (");
    v10 = sub_18001D780((__int64)v14, v9, a1 + 16);
    sub_18001B5A8((__int64)v13, v10, (__int64)")");
    sub_180011B5C((__int64)v14);
    sub_180011B5C((__int64)v16);
    sub_180011B5C((__int64)pExceptionObject);
    sub_1800133F4(*a2 + 16LL, (__int64)v13);
    LOBYTE(v7) = sub_180011B5C((__int64)v13);
  }
  v11 = a2[1];
  if ( v11 )
    LOBYTE(v7) = sub_18001060C(v11);
  return v7;
}
