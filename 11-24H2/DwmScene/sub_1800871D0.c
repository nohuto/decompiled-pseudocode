/*
 * XREFs of sub_1800871D0 @ 0x1800871D0
 * Callers:
 *     sub_1800873C8 @ 0x1800873C8 (sub_1800873C8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_18001734C @ 0x18001734C (sub_18001734C.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001B410 @ 0x18001B410 (sub_18001B410.c)
 *     sub_1800371C0 @ 0x1800371C0 (sub_1800371C0.c)
 *     sub_18006A618 @ 0x18006A618 (sub_18006A618.c)
 *     sub_180087030 @ 0x180087030 (sub_180087030.c)
 *     sub_1800870BC @ 0x1800870BC (sub_1800870BC.c)
 *     sub_180087424 @ 0x180087424 (sub_180087424.c)
 *     sub_180087470 @ 0x180087470 (sub_180087470.c)
 *     sub_18008764C @ 0x18008764C (sub_18008764C.c)
 *     sub_180087928 @ 0x180087928 (sub_180087928.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_1800871D0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 (__fastcall ****a4)(_QWORD, __int64))
{
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 (__fastcall ***v18)(_QWORD, __int64); // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+38h] [rbp-C8h]
  _QWORD *v20; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall ****v21)(_QWORD, __int64); // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall ****v23)(_QWORD, __int64); // [rsp+58h] [rbp-A8h]
  _BYTE v24[184]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v25[4]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+138h] [rbp+38h] BYREF

  v20 = a2;
  v21 = a4;
  v19 = 0;
  v8 = sub_18001B1F8(176LL);
  v9 = v8;
  v22 = v8;
  if ( v8 )
  {
    v23 = &v18;
    v10 = *a4;
    *a4 = 0LL;
    v18 = v10;
    v11 = sub_18008764C(v24, a3);
    v8 = sub_180087030(v9, v11, (__int64 *)&v18);
  }
  sub_1800870BC(a2, v8);
  v19 = 1;
  *(_QWORD *)(*a2 + 8LL) = *(_QWORD *)(***(__int64 (__fastcall ****)(_QWORD, _QWORD *))(a1 + 88))(
                                        *(_QWORD *)(a1 + 88),
                                        v25);
  if ( *a3 )
  {
    v12 = unknown_libname_81(v25, a3);
    v13 = (__int64 *)sub_180087424(&v18, v12);
  }
  else
  {
    v14 = a3[2];
    if ( !v14 )
    {
      std::string::string(v25, "Tween options must have either value or property not null");
      sub_18001B410((__int64)pExceptionObject, (__int64)v25, 0);
      throw (Spectre::Utils::SpectreException *)pExceptionObject;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = unknown_libname_81(v25, a3 + 2);
    v13 = (__int64 *)sub_180087470(&v18, v15);
  }
  sub_1800371C0((__int64 *)(*a2 + 32LL), v13);
  sub_18001734C(&v18);
  v25[0] = a1 + 56;
  sub_180011C30(a1 + 56);
  v16 = *(_QWORD **)(a1 + 32);
  if ( v16 == *(_QWORD **)(a1 + 40) )
  {
    sub_18006A618((__int64 *)(a1 + 24), *(_QWORD *)(a1 + 32), a2);
  }
  else
  {
    j_unknown_libname_81(v16, a2);
    *(_QWORD *)(a1 + 32) += 16LL;
  }
  Mtx_unlock((_Mtx_t)(a1 + 56));
  sub_180087928(a4);
  return a2;
}
