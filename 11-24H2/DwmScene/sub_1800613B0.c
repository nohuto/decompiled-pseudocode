/*
 * XREFs of sub_1800613B0 @ 0x1800613B0
 * Callers:
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     sub_18005CEAC @ 0x18005CEAC (sub_18005CEAC.c)
 *     sub_18005CFDC @ 0x18005CFDC (sub_18005CFDC.c)
 *     sub_18005D10C @ 0x18005D10C (sub_18005D10C.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_18005D36C @ 0x18005D36C (sub_18005D36C.c)
 *     sub_1800601D0 @ 0x1800601D0 (sub_1800601D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18003E7E0 @ 0x18003E7E0 (sub_18003E7E0.c)
 *     sub_18003EA08 @ 0x18003EA08 (sub_18003EA08.c)
 *     sub_18003EA2C @ 0x18003EA2C (sub_18003EA2C.c)
 *     sub_18003EAFC @ 0x18003EAFC (sub_18003EAFC.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_1800613B0(__int64 a1, _QWORD *a2, __int64 *a3, _QWORD *a4)
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
  sub_180028890(a1 + 16);
  v8 = unknown_libname_81(&v23, a4);
  v9 = unknown_libname_81(v24, v8);
  v10 = sub_18003EAFC(a1, &v20, v9);
  sub_18003EA08(*v10, (__int64)v26);
  if ( v21 )
    sub_18001060C(v21);
  v11 = v8[1];
  if ( v11 )
    sub_18001060C(v11);
  v12 = *a3;
  v13 = *(_QWORD *)(*a4 + 368LL);
  v19 = sub_180012444((__int64)v25, (__int64)v26);
  v14 = sub_180012444((__int64)v24, v19);
  v15 = sub_18003EA2C(v12, &v20, v14);
  sub_18003E7E0(v12, a2, v15, v13);
  sub_180013228(v19);
  sub_180013228((__int64)v26);
  v16 = a3[1];
  if ( v16 )
    sub_18001060C(v16);
  v17 = a4[1];
  if ( v17 )
    sub_18001060C(v17);
  return a2;
}
