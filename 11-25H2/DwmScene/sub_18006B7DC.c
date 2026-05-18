/*
 * XREFs of sub_18006B7DC @ 0x18006B7DC
 * Callers:
 *     sub_18006C790 @ 0x18006C790 (sub_18006C790.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18004C518 @ 0x18004C518 (sub_18004C518.c)
 *     sub_18004C574 @ 0x18004C574 (sub_18004C574.c)
 *     sub_18006B6D0 @ 0x18006B6D0 (sub_18006B6D0.c)
 *     sub_18007BE88 @ 0x18007BE88 (sub_18007BE88.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18006B7DC(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rdi
  unsigned __int16 v10; // bx
  _QWORD *v11; // rax
  __int64 *v12; // rax
  _QWORD *v13; // rax
  void (__fastcall *v14)(__int64, _QWORD *); // r8
  __int64 v15; // r10
  _QWORD *v16; // rax
  __int64 *v17; // rax
  __int64 v19; // [rsp+30h] [rbp-41h] BYREF
  __int64 v20; // [rsp+38h] [rbp-39h]
  _QWORD *v21; // [rsp+48h] [rbp-29h]
  __int64 v22; // [rsp+50h] [rbp-21h] BYREF
  __int64 v23; // [rsp+58h] [rbp-19h]

  v21 = a5;
  if ( byte_1801C3E30 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*a3 + 3648) + 512LL);
    std::string::string(&v22, "Global/PlanarReflection");
    v10 = sub_18004C518(v9, (__int64)&v22);
    sub_180011A5C((__int64)&v22);
    v11 = (_QWORD *)sub_18004C574(v9, &v22);
    v12 = (__int64 *)sub_18007BE88(*v11, &v19, v10);
    sub_180011010(a5, v12);
    if ( v20 )
      sub_18001050C(v20);
    if ( v23 )
      sub_18001050C(v23);
  }
  v13 = unknown_libname_81(&v22, a3);
  v14(v15, v13);
  v16 = unknown_libname_81(&v22, a5);
  v17 = sub_18006B6D0(a1, &v19, *a3, a4, v16);
  sub_180011010(a5, v17);
  if ( v20 )
    sub_18001050C(v20);
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *a5;
  a2[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  return a2;
}
