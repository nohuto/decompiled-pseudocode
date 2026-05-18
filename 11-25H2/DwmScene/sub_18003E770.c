/*
 * XREFs of sub_18003E770 @ 0x18003E770
 * Callers:
 *     sub_180015E84 @ 0x180015E84 (sub_180015E84.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18003C9BC @ 0x18003C9BC (sub_18003C9BC.c)
 *     sub_18003E8CC @ 0x18003E8CC (sub_18003E8CC.c)
 *     sub_18003EB98 @ 0x18003EB98 (sub_18003EB98.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18003E770(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  _BYTE v11[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-28h]

  v13 = a3;
  sub_1800287EC(a1 + 16, a2);
  v6 = sub_180012344((__int64)v11, a3);
  sub_18003E8CC(a1, &v9, v6);
  v7 = (__int64 *)sub_18003EB98(v9, v11);
  sub_18003C9BC(a2, v7);
  if ( v12 )
    sub_18001050C(v12);
  if ( v10 )
    sub_18001050C(v10);
  return sub_180013128(a3);
}
