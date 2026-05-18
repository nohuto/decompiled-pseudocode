/*
 * XREFs of sub_18005B17C @ 0x18005B17C
 * Callers:
 *     sub_180017CD0 @ 0x180017CD0 (sub_180017CD0.c)
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 *     sub_18008B630 @ 0x18008B630 (sub_18008B630.c)
 *     sub_180091BF4 @ 0x180091BF4 (sub_180091BF4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_1800282FC @ 0x1800282FC (sub_1800282FC.c)
 *     sub_180028938 @ 0x180028938 (sub_180028938.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_1800414C0 @ 0x1800414C0 (sub_1800414C0.c)
 *     sub_180059D50 @ 0x180059D50 (sub_180059D50.c)
 *     sub_18005A11C @ 0x18005A11C (sub_18005A11C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall sub_18005B17C(__int64 a1, __int64 *a2)
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
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)&v17, 0);
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
    sub_180038A58(pExceptionObject, (__int64)v10, v11, (__int64)&v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180059D50(*(_QWORD *)(*(_QWORD *)(a1 + 440) + 18688LL), a2);
  v6 = (_QWORD *)*a2;
  if ( *a2 )
  {
    v7 = sub_1800407EC(a1, &v12);
    sub_1800414C0(v6, v7);
    sub_1800282FC((__int64)&v17, a1 + 472);
    sub_180015174(&v12, a2);
    sub_18005A11C((_QWORD *)(a1 + 480), (__int64)v16, &v12);
    if ( v13 )
      sub_180010544(v13);
    sub_180010F44((__int64)&v17);
  }
  v8 = (_QWORD *)sub_180011C64(*a2 + 96, &v17);
  sub_180028938((__int64 *)(*a2 + 216), v8);
  if ( v18 )
    sub_18001050C(v18);
  if ( v15 )
    sub_18001050C(v15);
  return a2;
}
