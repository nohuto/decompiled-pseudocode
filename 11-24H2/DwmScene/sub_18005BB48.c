/*
 * XREFs of sub_18005BB48 @ 0x18005BB48
 * Callers:
 *     sub_1800413CC @ 0x1800413CC (sub_1800413CC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010CFC @ 0x180010CFC (sub_180010CFC.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004A874 @ 0x18004A874 (sub_18004A874.c)
 *     sub_18005A60C @ 0x18005A60C (sub_18005A60C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18005BB48(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rsi
  __int64 v8; // r11
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *i; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  _QWORD *v14; // r8
  _QWORD *v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v19; // [rsp+30h] [rbp-79h] BYREF
  int v20; // [rsp+38h] [rbp-71h] BYREF
  __int128 v21; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v23; // [rsp+68h] [rbp-41h]
  _QWORD v24[4]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-11h] BYREF

  v19 = (unsigned __int64)a2;
  v20 = a4;
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    std::string::string(
      v24,
      "ShaderFamily::GetPipeline() -- shader family declaration must be complete before pipelines can be accessed");
    v5 = std::string::string(
           v22,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v5, v6, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v19 = *(_QWORD *)(a1 + 64) & a3;
  v7 = (__int64 *)(*(_QWORD *)sub_18005A60C((_QWORD *)(a1 + 416), (__int64)v24, &v20) + 56LL);
  sub_180010CFC(v7, v22, &v19);
  if ( *(_BYTE *)(v23 + 25) || v19 < *(_QWORD *)(v23 + 32) || v23 == *v7 )
  {
    v10 = *(_QWORD **)(v8 + 40);
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      v12 = i + 2;
      v13 = i[2];
      v14 = *(_QWORD **)(v13 + 24);
      v15 = *(_QWORD **)(v13 + 32);
      if ( v14 == v15 )
      {
LABEL_16:
        v16 = sub_18004A874(v7, (__int64)&v21, &v19);
        sub_18001254C((__int64 *)(*(_QWORD *)v16 + 40LL), v12);
        v9 = v12;
        goto LABEL_7;
      }
      while ( v14 != v15 )
      {
        if ( (v19 & *v14) == *v14 && (v19 & v14[1]) == 0 )
          goto LABEL_16;
        v14 += 2;
      }
    }
    v21 = 0LL;
    v17 = sub_18004A874(v7, (__int64)v22, &v19);
    sub_180011110((_QWORD *)(*(_QWORD *)v17 + 40LL), (__int64 *)&v21);
    if ( *((_QWORD *)&v21 + 1) )
      sub_18001060C(*((__int64 *)&v21 + 1));
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v9 = (_QWORD *)(v23 + 40);
LABEL_7:
    unknown_libname_81(a2, v9);
  }
  return a2;
}
