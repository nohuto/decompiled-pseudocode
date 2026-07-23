/*
 * XREFs of VslVerifyPage @ 0x14058BA20
 * Callers:
 *     CcBcbProfiler @ 0x1405055A0 (CcBcbProfiler.c)
 *     sub_1406FA130 @ 0x1406FA130 (sub_1406FA130.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslVerifyPage(__int64 a1, int a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  int v7; // [rsp+30h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  v6 = a1;
  v7 = (a2 & 1) != 0;
  if ( a2 >= 0 )
    return VslpEnterIumSecureMode(2u, 0x105u, 0, (__int64)v5);
  v7 = ((a2 & 1) != 0) | 2;
  if ( a1 )
    return VslpEnterIumSecureMode(2u, 0x105u, 0, (__int64)v5);
  else
    return 0LL;
}
