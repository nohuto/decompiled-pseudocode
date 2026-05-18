/*
 * XREFs of sub_18002BDDC @ 0x18002BDDC
 * Callers:
 *     sub_18002BCB4 @ 0x18002BCB4 (sub_18002BCB4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_18002BD18 @ 0x18002BD18 (sub_18002BD18.c)
 *     sub_18003E8CC @ 0x18003E8CC (sub_18003E8CC.c)
 *     sub_18003EB98 @ 0x18003EB98 (sub_18003EB98.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18002BDDC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  _BYTE v11[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-28h]

  v13 = a3;
  v6 = sub_180012344((__int64)v11, a3);
  sub_18003E8CC(a1, &v9, v6);
  v7 = (_QWORD *)sub_18003EB98(v9, v11);
  sub_18002BD18(a1, a2, v7);
  if ( v12 )
    sub_18001050C(v12);
  if ( v10 )
    sub_18001050C(v10);
  return sub_180013128(a3);
}
