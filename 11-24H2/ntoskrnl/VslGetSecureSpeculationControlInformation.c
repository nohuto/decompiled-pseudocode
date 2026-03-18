/*
 * XREFs of VslGetSecureSpeculationControlInformation @ 0x14058D500
 * Callers:
 *     KeQuerySecureSpeculationInformation @ 0x1405BD610 (KeQuerySecureSpeculationInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140456290 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 VslGetSecureSpeculationControlInformation()
{
  _BYTE v1[16]; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v2; // [rsp+30h] [rbp-78h]

  memset_0(v1, 0, 0x68uLL);
  if ( HvlQueryVsmConnection(0LL) )
    VslpEnterIumSecureMode(2u, 258LL, 0, (__int64)v1);
  return v2;
}
