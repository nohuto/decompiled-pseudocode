/*
 * XREFs of VslMakeCodeCatalog @ 0x14058F170
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslMakeCodeCatalog(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  v6 = *a1;
  v7 = a2;
  result = VslpEnterIumSecureMode(2u, 24LL, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a1 = v7;
  return result;
}
