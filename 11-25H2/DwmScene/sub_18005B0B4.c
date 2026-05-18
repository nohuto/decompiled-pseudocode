/*
 * XREFs of sub_18005B0B4 @ 0x18005B0B4
 * Callers:
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_18004BB0C @ 0x18004BB0C (sub_18004BB0C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18005B0B4(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD v7[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  sub_1800287EC(*a2 + 24LL, (__int64)a2);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    std::string::string(
      v8,
      "ShaderFamily::AttachDevice() -- The family must have finished declaration before attaching a device");
    v4 = std::string::string(
           v7,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = a2[1];
  if ( v6 )
    sub_18001050C(v6);
}
