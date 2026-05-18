/*
 * XREFs of sub_18005B7F4 @ 0x18005B7F4
 * Callers:
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_18008FC10 @ 0x18008FC10 (sub_18008FC10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004C220 @ 0x18004C220 (sub_18004C220.c)
 *     sub_18005C16C @ 0x18005C16C (sub_18005C16C.c)
 *     sub_180079B50 @ 0x180079B50 (sub_180079B50.c)
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005B7F4(__int64 a1)
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
    sub_180038A58(pExceptionObject, (__int64)v2, v3, (__int64)&v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = 0;
  v5 = (_QWORD *)(a1 + 96);
  do
  {
    unknown_libname_81(&v11, &v5[2 * (int)v4]);
    if ( !v11 )
    {
      v6 = sub_18004C220(*(_QWORD *)(a1 + 440), &v15, v4);
      sub_180011010(&v11, v6);
      if ( v16 )
        sub_18001050C(v16);
      sub_180079CCC(v11);
      v7 = unknown_libname_81(&v13, &v11);
      sub_18005C16C(a1, v7);
    }
    if ( v12 )
      sub_18001050C(v12);
    ++v4;
  }
  while ( v4 < 0xA );
  *(_DWORD *)(a1 + 432) = 1;
  for ( i = 0; i < 0xA; ++i )
  {
    v9 = (__int64 *)sub_180079B50(*v5, &v13);
    result = (__int64)sub_180011010((_QWORD *)(a1 + 16 * ((int)i + 16LL)), v9);
    if ( v14 )
      result = sub_18001050C(v14);
    v5 += 2;
  }
  return result;
}
