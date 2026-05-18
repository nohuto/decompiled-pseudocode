/*
 * XREFs of sub_180097A40 @ 0x180097A40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800253E8 @ 0x1800253E8 (sub_1800253E8.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     sub_180096798 @ 0x180096798 (sub_180096798.c)
 *     sub_180096820 @ 0x180096820 (sub_180096820.c)
 *     sub_18009687C @ 0x18009687C (sub_18009687C.c)
 *     sub_1800969CC @ 0x1800969CC (sub_1800969CC.c)
 *     sub_180096A6C @ 0x180096A6C (sub_180096A6C.c)
 *     sub_180096B04 @ 0x180096B04 (sub_180096B04.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180097A40(__int64 a1)
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
  sub_18002811C(a1 + 8);
  if ( *(_DWORD *)(a1 + 16) != 1 )
  {
    std::string::string(&v13, "Attempt to call EndTimeSpan() on a query marker that wasn't a timespan.");
    v3 = std::string::string(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\gpuprof"
           "iler\\gpuprofilerframe.cpp");
    sub_180068668(pExceptionObject, (__int64)v3, v4, (__int64)&v13, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = a1 + 32;
  if ( sub_1800969CC(a1 + 32) )
  {
    v6 = (_QWORD *)sub_180096B04(a1 + 32, &v13);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 72LL))(*v6);
    if ( v14 )
      sub_18001060C(v14);
    v7 = (__int64 *)sub_1800253E8(*(_QWORD *)(a1 + 24), (__int64)v12, 1u);
    v8 = a1 + 216;
    sub_18009687C(v8, v7);
    sub_180096820(v12);
    if ( sub_1800969CC(v8) )
    {
      unknown_libname_81(&v13, (_QWORD *)(v5 + 160));
      v9 = (_QWORD *)sub_180096B04(v5, v11);
      sub_180096A6C(v8, v9, &v13);
    }
    else
    {
      sub_180096798((__int64)v12);
      sub_18009687C(v5, v12);
      sub_180096820(v12);
    }
  }
  return sub_1800282BC(v2);
}
