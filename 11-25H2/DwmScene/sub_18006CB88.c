/*
 * XREFs of sub_18006CB88 @ 0x18006CB88
 * Callers:
 *     sub_18006C790 @ 0x18006C790 (sub_18006C790.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18003717C @ 0x18003717C (sub_18003717C.c)
 *     sub_180096C0C @ 0x180096C0C (sub_180096C0C.c)
 *     sub_180096CBC @ 0x180096CBC (sub_180096CBC.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD **__fastcall sub_18006CB88(__int64 a1, _QWORD **a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rbx
  _QWORD **v8; // [rsp+20h] [rbp-29h] BYREF
  __int64 v9; // [rsp+28h] [rbp-21h]
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  __int64 v11; // [rsp+40h] [rbp-9h]
  __int64 v12; // [rsp+48h] [rbp-1h] BYREF
  __int64 v13; // [rsp+50h] [rbp+7h]
  _BYTE v14[16]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v15[4]; // [rsp+68h] [rbp+1Fh] BYREF

  v8 = a2;
  v6 = *a4;
  sub_1800287EC(*a4 + 24, (__int64)a2);
  unknown_libname_81(&v8, (_QWORD *)(v6 + 272));
  std::string::string(v15, "IPM_ResolveMultisampledInput");
  sub_180096C0C(v14, &v8, v15);
  sub_180011A5C((__int64)v15);
  sub_1800254DC(*(_QWORD *)(a1 + 456), &v12);
  unknown_libname_81(&v10, (_QWORD *)(a1 + 64));
  sub_18003717C(v8, (__int64)&v10, (__int64)&v12);
  unknown_libname_81(a2, (_QWORD *)(a1 + 64));
  if ( v11 )
    sub_18001050C(v11);
  if ( v13 )
    sub_18001050C(v13);
  sub_180096CBC(v14);
  if ( v9 )
    sub_18001050C(v9);
  return a2;
}
