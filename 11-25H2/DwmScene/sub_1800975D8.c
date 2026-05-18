/*
 * XREFs of sub_1800975D8 @ 0x1800975D8
 * Callers:
 *     sub_180095ADC @ 0x180095ADC (sub_180095ADC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_18001E090 @ 0x18001E090 (sub_18001E090.c)
 *     sub_18009595C @ 0x18009595C (sub_18009595C.c)
 *     sub_180096D10 @ 0x180096D10 (sub_180096D10.c)
 *     sub_1800971A4 @ 0x1800971A4 (sub_1800971A4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800975D8(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v16[51]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v17[32]; // [rsp+200h] [rbp+100h] BYREF

  v16[50] = a2;
  v13[2] = a3;
  sub_18001E090((__int64)v17, a2);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 64LL))(*a3, v17);
  unknown_libname_81(&v14, (_QWORD *)(a1 + 896));
  v6 = unknown_libname_81(&v15, a3);
  v9 = sub_1800971A4((__int64)v16, 1, v6, v8, v7);
  sub_180096D10((_QWORD *)(a1 + 880), (__int64)v13, a2, v9);
  sub_18009595C(v16);
  v10 = v13[0];
  sub_180013128((__int64)v17);
  sub_180011A5C(a2);
  v11 = a3[1];
  if ( v11 )
    sub_18001050C(v11);
  return v10 + 64;
}
