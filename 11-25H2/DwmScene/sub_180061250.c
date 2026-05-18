/*
 * XREFs of sub_180061250 @ 0x180061250
 * Callers:
 *     sub_18005CC1C @ 0x18005CC1C (sub_18005CC1C.c)
 *     sub_18005CD4C @ 0x18005CD4C (sub_18005CD4C.c)
 *     sub_18005CE7C @ 0x18005CE7C (sub_18005CE7C.c)
 *     sub_18005CFAC @ 0x18005CFAC (sub_18005CFAC.c)
 *     sub_18005D0DC @ 0x18005D0DC (sub_18005D0DC.c)
 *     sub_18005D20C @ 0x18005D20C (sub_18005D20C.c)
 *     sub_180060070 @ 0x180060070 (sub_180060070.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_18003E680 @ 0x18003E680 (sub_18003E680.c)
 *     sub_18003E8A8 @ 0x18003E8A8 (sub_18003E8A8.c)
 *     sub_18003E8CC @ 0x18003E8CC (sub_18003E8CC.c)
 *     sub_18003E99C @ 0x18003E99C (sub_18003E99C.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_180061250(__int64 a1, _QWORD *a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v8; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+28h] [rbp-81h]
  __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  __int64 v21; // [rsp+48h] [rbp-61h]
  _QWORD *v22; // [rsp+50h] [rbp-59h]
  __int64 v23; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v24[4]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v25[32]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v26[32]; // [rsp+A8h] [rbp-1h] BYREF

  v22 = a4;
  sub_180028730(a1 + 16);
  v8 = unknown_libname_81(&v23, a4);
  v9 = unknown_libname_81(v24, v8);
  v10 = sub_18003E99C(a1, &v20, v9);
  sub_18003E8A8(*v10, (__int64)v26);
  if ( v21 )
    sub_18001050C(v21);
  v11 = v8[1];
  if ( v11 )
    sub_18001050C(v11);
  v12 = *a3;
  v13 = *(_QWORD *)(*a4 + 368LL);
  v19 = sub_180012344((__int64)v25, (__int64)v26);
  v14 = sub_180012344((__int64)v24, v19);
  v15 = sub_18003E8CC(v12, &v20, v14);
  sub_18003E680(v12, a2, v15, v13);
  sub_180013128(v19);
  sub_180013128((__int64)v26);
  v16 = a3[1];
  if ( v16 )
    sub_18001050C(v16);
  v17 = a4[1];
  if ( v17 )
    sub_18001050C(v17);
  return a2;
}
