/*
 * XREFs of sub_18004C644 @ 0x18004C644
 * Callers:
 *     sub_18005AF9C @ 0x18005AF9C (sub_18005AF9C.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_180073F3C @ 0x180073F3C (sub_180073F3C.c)
 *     sub_180074540 @ 0x180074540 (sub_180074540.c)
 *     sub_180074660 @ 0x180074660 (sub_180074660.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_180083420 @ 0x180083420 (sub_180083420.c)
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 *     sub_18008FEF0 @ 0x18008FEF0 (sub_18008FEF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B57C @ 0x18001B57C (sub_18001B57C.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004C4C4 @ 0x18004C4C4 (sub_18004C4C4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18004C644(__int64 a1, void **a2)
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
    v7 = sub_18004C4C4(a1, v5 + 32);
    if ( v7 == -1 )
    {
      v8 = sub_18001B57C(
             v16,
             (__int64)"ShaderManager::GetOptionGroup() -- option group contains a non-registered option name '",
             v6);
      v9 = sub_18001B448((__int64)v17, (__int64)v8, (__int64)"'. ShaderManager::AddOption() must be called first.");
      v10 = std::string::string(
              v14,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
      sub_180038A58(pExceptionObject, (__int64)v10, v11, v9, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    _bittestandset64(&v4, v7);
    sub_18001C2C0(v13);
    v5 = v13[0];
  }
  sub_18004A4F4(a2, (__int64)a2);
  return v4;
}
