/*
 * XREFs of sub_180087070 @ 0x180087070
 * Callers:
 *     sub_180087268 @ 0x180087268 (sub_180087268.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_18001724C @ 0x18001724C (sub_18001724C.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001B2B0 @ 0x18001B2B0 (sub_18001B2B0.c)
 *     sub_180037060 @ 0x180037060 (sub_180037060.c)
 *     sub_18006A4B8 @ 0x18006A4B8 (sub_18006A4B8.c)
 *     sub_180086ED0 @ 0x180086ED0 (sub_180086ED0.c)
 *     sub_180086F5C @ 0x180086F5C (sub_180086F5C.c)
 *     sub_1800872C4 @ 0x1800872C4 (sub_1800872C4.c)
 *     sub_180087310 @ 0x180087310 (sub_180087310.c)
 *     sub_1800874EC @ 0x1800874EC (sub_1800874EC.c)
 *     sub_1800877C8 @ 0x1800877C8 (sub_1800877C8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_180087070(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 (__fastcall ****a4)(_QWORD, __int64))
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
  v8 = sub_18001B098(176LL);
  v9 = v8;
  v22 = v8;
  if ( v8 )
  {
    v23 = &v18;
    v10 = *a4;
    *a4 = 0LL;
    v18 = v10;
    v11 = sub_1800874EC(v24, a3);
    v8 = sub_180086ED0(v9, v11, (__int64 *)&v18);
  }
  sub_180086F5C(a2, v8);
  v19 = 1;
  *(_QWORD *)(*a2 + 8LL) = *(_QWORD *)(***(__int64 (__fastcall ****)(_QWORD, _QWORD *))(a1 + 88))(
                                        *(_QWORD *)(a1 + 88),
                                        v25);
  if ( *a3 )
  {
    v12 = unknown_libname_81(v25, a3);
    v13 = (__int64 *)sub_1800872C4(&v18, v12);
  }
  else
  {
    v14 = a3[2];
    if ( !v14 )
    {
      std::string::string(v25, "Tween options must have either value or property not null");
      sub_18001B2B0((__int64)pExceptionObject, (__int64)v25, 0);
      throw (Spectre::Utils::SpectreException *)pExceptionObject;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = unknown_libname_81(v25, a3 + 2);
    v13 = (__int64 *)sub_180087310(&v18, v15);
  }
  sub_180037060((__int64 *)(*a2 + 32LL), v13);
  sub_18001724C(&v18);
  v25[0] = a1 + 56;
  sub_180011B30(a1 + 56);
  v16 = *(_QWORD **)(a1 + 32);
  if ( v16 == *(_QWORD **)(a1 + 40) )
  {
    sub_18006A4B8((__int64 *)(a1 + 24), *(_QWORD *)(a1 + 32), a2);
  }
  else
  {
    j_unknown_libname_81(v16, a2);
    *(_QWORD *)(a1 + 32) += 16LL;
  }
  Mtx_unlock((_Mtx_t)(a1 + 56));
  sub_1800877C8(a4);
  return a2;
}
