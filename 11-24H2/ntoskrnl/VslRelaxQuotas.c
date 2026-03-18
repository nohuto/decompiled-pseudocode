/*
 * XREFs of VslRelaxQuotas @ 0x140710214
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140456290 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 VslRelaxQuotas()
{
  char v0; // cl
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v2, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( (_BYTE)KdDebuggerEnabled == v0 )
    return 3221226324LL;
  return VslpEnterIumSecureMode(2u, 56LL, 0, (__int64)v2);
}
