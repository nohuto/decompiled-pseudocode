/*
 * XREFs of PsRundownVsmEnclave @ 0x14077B5C8
 * Callers:
 *     MiCanDeleteEnclave @ 0x140680754 (MiCanDeleteEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PsRundownVsmEnclave(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  memset_0(v3, 0, 0x68uLL);
  v4 = *(_QWORD *)(a1 + 24);
  return VslpEnterIumSecureMode(2u, 52LL, 0, (__int64)v3);
}
