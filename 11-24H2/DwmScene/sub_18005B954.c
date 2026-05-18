/*
 * XREFs of sub_18005B954 @ 0x18005B954
 * Callers:
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_18008FD70 @ 0x18008FD70 (sub_18008FD70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004C380 @ 0x18004C380 (sub_18004C380.c)
 *     sub_18005C2CC @ 0x18005C2CC (sub_18005C2CC.c)
 *     sub_180079CB0 @ 0x180079CB0 (sub_180079CB0.c)
 *     sub_180079E2C @ 0x180079E2C (sub_180079E2C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005B954(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  __int64 *v6; // rax
  _QWORD *v7; // rax
  unsigned int i; // ebx
  __int64 *v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+38h] [rbp-49h] BYREF
  __int64 v12; // [rsp+40h] [rbp-41h]
  __int64 v13; // [rsp+50h] [rbp-31h] BYREF
  __int64 v14; // [rsp+58h] [rbp-29h]
  __int64 v15; // [rsp+70h] [rbp-11h] BYREF
  __int64 v16; // [rsp+78h] [rbp-9h]
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp+Fh] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    std::string::string(&v15, "ShaderFamily::EndDeclaration() -- this function must only be called once.");
    v2 = std::string::string(
           &v13,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v2, v3, (__int64)&v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = 0;
  v5 = (_QWORD *)(a1 + 96);
  do
  {
    unknown_libname_81(&v11, &v5[2 * (int)v4]);
    if ( !v11 )
    {
      v6 = sub_18004C380(*(_QWORD *)(a1 + 440), &v15, v4);
      sub_180011110(&v11, v6);
      if ( v16 )
        sub_18001060C(v16);
      sub_180079E2C(v11);
      v7 = unknown_libname_81(&v13, &v11);
      sub_18005C2CC(a1, v7);
    }
    if ( v12 )
      sub_18001060C(v12);
    ++v4;
  }
  while ( v4 < 0xA );
  *(_DWORD *)(a1 + 432) = 1;
  for ( i = 0; i < 0xA; ++i )
  {
    v9 = (__int64 *)sub_180079CB0(*v5, &v13);
    result = (__int64)sub_180011110((_QWORD *)(a1 + 16 * ((int)i + 16LL)), v9);
    if ( v14 )
      result = sub_18001060C(v14);
    v5 += 2;
  }
  return result;
}
