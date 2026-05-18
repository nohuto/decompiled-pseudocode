/*
 * XREFs of sub_18005B5DC @ 0x18005B5DC
 * Callers:
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18005A3A4 @ 0x18005A3A4 (sub_18005A3A4.c)
 *     sub_18005B4F8 @ 0x18005B4F8 (sub_18005B4F8.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_18005B5DC(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rax
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v19; // [rsp+40h] [rbp-C0h]
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h]
  _QWORD v22[5]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v23[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-48h] BYREF

  v6 = a4;
  v19 = a1;
  v22[4] = a3;
  if ( (a4 & a6) != 0 )
  {
    std::string::string(
      v23,
      "ShaderFamily::CreatePipelines() -- Combination basis options must not be part of required or excluded set");
    v16 = std::string::string(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v16, v17, (__int64)v23, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v9 = 0LL;
  do
  {
    v10 = sub_18005B4F8(a1, &v20, v9 | v6, a6 & ~v9, 0);
    v11 = a2[1];
    if ( v11 == a2[2] )
      sub_18005A3A4(a2, v11, v10);
    else
      sub_180010BE8((__int64)a2, v10);
    if ( v21 )
      sub_18001060C(v21);
    v12 = *(_QWORD *)(a2[1] - 16);
    v13 = std::string::string(v23, byte_1800F7C80);
    v14 = sub_180017054((__int64)v22, a3);
    sub_18007E5A4(v12, v14, v9, v13);
    v9 = a6 & ((~a6 | v9) + 1);
    v6 = a4;
    a1 = v19;
  }
  while ( v9 );
  sub_180011B5C(a3);
  return a2;
}
