/*
 * XREFs of sub_18005B2DC @ 0x18005B2DC
 * Callers:
 *     sub_180017D90 @ 0x180017D90 (sub_180017D90.c)
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 *     sub_18008B790 @ 0x18008B790 (sub_18008B790.c)
 *     sub_180091D54 @ 0x180091D54 (sub_180091D54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18002845C @ 0x18002845C (sub_18002845C.c)
 *     sub_180028A98 @ 0x180028A98 (sub_180028A98.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     sub_180041620 @ 0x180041620 (sub_180041620.c)
 *     sub_180059EB0 @ 0x180059EB0 (sub_180059EB0.c)
 *     sub_18005A27C @ 0x18005A27C (sub_18005A27C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall sub_18005B2DC(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // [rsp+38h] [rbp-61h] BYREF
  volatile signed __int32 *v13; // [rsp+40h] [rbp-59h]
  __int64 v14; // [rsp+48h] [rbp-51h] BYREF
  __int64 v15; // [rsp+50h] [rbp-49h]
  _QWORD v16[5]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v17; // [rsp+80h] [rbp-19h] BYREF
  __int64 v18; // [rsp+88h] [rbp-11h]
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp+7h] BYREF

  v16[4] = a2;
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    std::string::string(
      &v17,
      "ShaderFamily::CreateMaterial() -- materials cannot be created until shader family declaration is complete");
    v4 = std::string::string(
           v16,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v4, v5, (__int64)&v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  unknown_libname_81(&v14, (_QWORD *)(a1 + 128));
  if ( !v14 || *(_DWORD *)(v14 + 1168) != 1 )
  {
    std::string::string(
      &v17,
      "ShaderFamily::CreateMaterial() -- materials cannot be created until valid material layout is specified (non-null and complete)");
    v10 = std::string::string(
            v16,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v10, v11, (__int64)&v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180059EB0(*(_QWORD *)(*(_QWORD *)(a1 + 440) + 18688LL), a2);
  v6 = (_QWORD *)*a2;
  if ( *a2 )
  {
    v7 = sub_18004094C(a1, &v12);
    sub_180041620(v6, v7);
    sub_18002845C((__int64)&v17, a1 + 472);
    sub_180015274(&v12, a2);
    sub_18005A27C((_QWORD *)(a1 + 480), (__int64)v16, &v12);
    if ( v13 )
      sub_180010644(v13);
    sub_180011044((__int64)&v17);
  }
  v8 = (_QWORD *)sub_180011D64(*a2 + 96, &v17);
  sub_180028A98((__int64 *)(*a2 + 216), v8);
  if ( v18 )
    sub_18001060C(v18);
  if ( v15 )
    sub_18001060C(v15);
  return a2;
}
