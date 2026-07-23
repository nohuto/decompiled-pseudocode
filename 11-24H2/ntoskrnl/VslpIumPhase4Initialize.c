/*
 * XREFs of VslpIumPhase4Initialize @ 0x14058BC00
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PoDisableSleepStates @ 0x14074AFA0 (PoDisableSleepStates.c)
 *     VslpIumInitializeTelemetry @ 0x140C1BCAC (VslpIumInitializeTelemetry.c)
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
    result = VslpEnterIumSecureMode(2u, 1u, 0, (__int64)v2);
    if ( (int)result < 0 )
      KeBugCheckEx(0x6Fu, (int)result, 3uLL, 0LL, 0LL);
    if ( v3 < 0 )
      return PoDisableSleepStates(1LL, 8LL, v1);
  }
  return result;
}
