/*
 * XREFs of VslpIumPhase4Initialize @ 0x14058EBE0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PoDisableSleepStates @ 0x14074CC70 (PoDisableSleepStates.c)
 *     VslpIumInitializeTelemetry @ 0x140C19C74 (VslpIumInitializeTelemetry.c)
 */

__int64 VslpIumPhase4Initialize()
{
  __int64 result; // rax
  _BYTE v1[16]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v2[16]; // [rsp+40h] [rbp-88h] BYREF
  int v3; // [rsp+50h] [rbp-78h]

  memset_0(v2, 0, 0x68uLL);
  result = VslpIumInitializeTelemetry();
  if ( VslVsmEnabled )
  {
    result = VslpEnterIumSecureMode(2u, 1LL, 0, (__int64)v2);
    if ( (int)result < 0 )
      KeBugCheckEx(0x6Fu, (int)result, 3uLL, 0LL, 0LL);
    if ( v3 < 0 )
      return PoDisableSleepStates(1LL, 8LL, v1);
  }
  return result;
}
