/*
 * XREFs of sub_1800978E0 @ 0x1800978E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180025288 @ 0x180025288 (sub_180025288.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     sub_180096638 @ 0x180096638 (sub_180096638.c)
 *     sub_1800966C0 @ 0x1800966C0 (sub_1800966C0.c)
 *     sub_18009671C @ 0x18009671C (sub_18009671C.c)
 *     sub_18009686C @ 0x18009686C (sub_18009686C.c)
 *     sub_18009690C @ 0x18009690C (sub_18009690C.c)
 *     sub_1800969A4 @ 0x1800969A4 (sub_1800969A4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800978E0(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  _QWORD v11[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12[22]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+118h] [rbp+10h] BYREF
  __int64 v14; // [rsp+120h] [rbp+18h]
  _QWORD pExceptionObject[7]; // [rsp+138h] [rbp+30h] BYREF

  v2 = a1 + 8;
  sub_180027FBC(a1 + 8);
  if ( *(_DWORD *)(a1 + 16) != 1 )
  {
    std::string::string(&v13, "Attempt to call EndTimeSpan() on a query marker that wasn't a timespan.");
    v3 = std::string::string(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\gpuprof"
           "iler\\gpuprofilerframe.cpp");
    sub_180068508(pExceptionObject, (__int64)v3, v4, (__int64)&v13, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = a1 + 32;
  if ( sub_18009686C(a1 + 32) )
  {
    v6 = (_QWORD *)sub_1800969A4(a1 + 32, &v13);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 72LL))(*v6);
    if ( v14 )
      sub_18001050C(v14);
    v7 = (__int64 *)sub_180025288(*(_QWORD *)(a1 + 24), (__int64)v12, 1u);
    v8 = a1 + 216;
    sub_18009671C(v8, v7);
    sub_1800966C0(v12);
    if ( sub_18009686C(v8) )
    {
      unknown_libname_81(&v13, (_QWORD *)(v5 + 160));
      v9 = (_QWORD *)sub_1800969A4(v5, v11);
      sub_18009690C(v8, v9, &v13);
    }
    else
    {
      sub_180096638((__int64)v12);
      sub_18009671C(v5, v12);
      sub_1800966C0(v12);
    }
  }
  return sub_18002815C(v2);
}
