/*
 * XREFs of sub_18004C7A4 @ 0x18004C7A4
 * Callers:
 *     sub_18005B0FC @ 0x18005B0FC (sub_18005B0FC.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_18007409C @ 0x18007409C (sub_18007409C.c)
 *     sub_1800746A0 @ 0x1800746A0 (sub_1800746A0.c)
 *     sub_1800747C0 @ 0x1800747C0 (sub_1800747C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_180083580 @ 0x180083580 (sub_180083580.c)
 *     sub_18008DF4C @ 0x18008DF4C (sub_18008DF4C.c)
 *     sub_180090050 @ 0x180090050 (sub_180090050.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B6DC @ 0x18001B6DC (sub_18001B6DC.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004A654 @ 0x18004A654 (sub_18004A654.c)
 *     sub_18004C624 @ 0x18004C624 (sub_18004C624.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18004C7A4(__int64 a1, void **a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v13[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v16[4]; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v17[32]; // [rsp+B8h] [rbp-40h] BYREF

  v13[1] = (__int64)a2;
  v4 = 0LL;
  v5 = *(_QWORD *)*a2;
  v13[0] = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = v5 + 32;
    v7 = sub_18004C624(a1, v5 + 32);
    if ( v7 == -1 )
    {
      v8 = sub_18001B6DC(
             v16,
             (__int64)"ShaderManager::GetOptionGroup() -- option group contains a non-registered option name '",
             v6);
      v9 = sub_18001B5A8((__int64)v17, (__int64)v8, (__int64)"'. ShaderManager::AddOption() must be called first.");
      v10 = std::string::string(
              v14,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
      sub_180038BB8(pExceptionObject, (__int64)v10, v11, v9, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    _bittestandset64(&v4, v7);
    sub_18001C420(v13);
    v5 = v13[0];
  }
  sub_18004A654(a2, (__int64)a2);
  return v4;
}
