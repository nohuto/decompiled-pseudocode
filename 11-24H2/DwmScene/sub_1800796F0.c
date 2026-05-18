/*
 * XREFs of sub_1800796F0 @ 0x1800796F0
 * Callers:
 *     sub_1800424B8 @ 0x1800424B8 (sub_1800424B8.c)
 *     sub_180043314 @ 0x180043314 (sub_180043314.c)
 *     sub_180043870 @ 0x180043870 (sub_180043870.c)
 *     sub_180043E04 @ 0x180043E04 (sub_180043E04.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077074 @ 0x180077074 (sub_180077074.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800796F0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
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
    sub_180038BB8(pExceptionObject, (__int64)v7, v8, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 )
  {
    v9 = a3;
    do
    {
      sub_1800797BC(a1, a2, a4);
      a2 += 64LL;
      --v9;
    }
    while ( v9 );
  }
}
