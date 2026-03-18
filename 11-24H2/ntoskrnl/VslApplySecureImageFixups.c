/*
 * XREFs of VslApplySecureImageFixups @ 0x140266300
 * Callers:
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslApplySecureImageFixups(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]

  v3 = a2;
  memset_0(v7, 0, 0x68uLL);
  v8 = a1;
  v9 = v3;
  v10 = a3;
  return VslpEnterIumSecureMode(2u, 45LL, 0, (__int64)v7);
}
