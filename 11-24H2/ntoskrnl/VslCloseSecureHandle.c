/*
 * XREFs of VslCloseSecureHandle @ 0x1404B1B10
 * Callers:
 *     KeUnsecureProcess @ 0x1405B8510 (KeUnsecureProcess.c)
 *     PsDereferenceVsmEnclave @ 0x140A2C23C (PsDereferenceVsmEnclave.c)
 *     VslCreateEnclave @ 0x140A850B4 (VslCreateEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslCloseSecureHandle(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  memset_0(v3, 0, 0x68uLL);
  v4 = a1;
  return VslpEnterIumSecureMode(2u, 31LL, 0, (__int64)v3);
}
