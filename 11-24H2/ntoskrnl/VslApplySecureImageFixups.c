/*
 * XREFs of VslApplySecureImageFixups @ 0x1403A9B74
 * Callers:
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslApplySecureImageFixups(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+28h] [rbp-80h]
  __int64 v10; // [rsp+30h] [rbp-78h]
  __int64 v11; // [rsp+38h] [rbp-70h]

  v3 = a2;
  memset_0(v8, 0, 0x68uLL);
  v9 = a1;
  v10 = v3;
  v11 = a3;
  LOBYTE(v6) = 2;
  return VslpEnterIumSecureMode(v6, 45LL, 0LL, v8);
}
