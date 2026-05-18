/*
 * XREFs of sub_1800983FC @ 0x1800983FC
 * Callers:
 *     sub_180095F70 @ 0x180095F70 (sub_180095F70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18009595C @ 0x18009595C (sub_18009595C.c)
 *     sub_180096D10 @ 0x180096D10 (sub_180096D10.c)
 *     sub_1800971A4 @ 0x1800971A4 (sub_1800971A4.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800983FC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // rax
  char result; // al
  __int64 v11; // rcx
  _BYTE v12[16]; // [rsp+30h] [rbp-1F8h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-1E8h]
  __int64 v14; // [rsp+48h] [rbp-1E0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-1D0h] BYREF
  _QWORD v16[51]; // [rsp+68h] [rbp-1C0h] BYREF

  v16[50] = a2;
  v13 = a3;
  v5 = (_QWORD *)(a1 + 880);
  unknown_libname_81(&v14, (_QWORD *)(a1 + 896));
  v6 = unknown_libname_81(&v15, a3);
  v9 = sub_1800971A4((__int64)v16, 0, v6, v8, v7);
  sub_180096D10(v5, (__int64)v12, a2, v9);
  sub_18009595C(v16);
  result = sub_180011A5C(a2);
  v11 = a3[1];
  if ( v11 )
    return sub_18001050C(v11);
  return result;
}
