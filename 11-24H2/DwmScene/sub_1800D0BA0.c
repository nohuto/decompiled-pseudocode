/*
 * XREFs of sub_1800D0BA0 @ 0x1800D0BA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_1800CE554 @ 0x1800CE554 (sub_1800CE554.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D0BA0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rax
  _BYTE v10[32]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v11; // [rsp+48h] [rbp-40h]

  v11 = a3;
  v8 = sub_180012444((__int64)v10, a3);
  LODWORD(a1) = sub_1800CE554(a1, a2, v8, a4);
  sub_180013228(a3);
  return (unsigned int)a1;
}
