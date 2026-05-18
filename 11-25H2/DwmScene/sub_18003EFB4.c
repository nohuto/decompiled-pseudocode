/*
 * XREFs of sub_18003EFB4 @ 0x18003EFB4
 * Callers:
 *     sub_180014510 @ 0x180014510 (sub_180014510.c)
 *     sub_180014C20 @ 0x180014C20 (sub_180014C20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_18003E8CC @ 0x18003E8CC (sub_18003E8CC.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18003EFB4(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+28h] [rbp-40h]
  _BYTE v8[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v9 = a2;
  v4 = sub_180012344((__int64)v8, a2);
  *(_BYTE *)(*sub_18003E8CC(a1, &v6, v4) + 72LL) = 1;
  if ( v7 )
    sub_18001050C(v7);
  return sub_180013128(a2);
}
