/*
 * XREFs of VslFlushEntireTb @ 0x14058D068
 * Callers:
 *     HvlFlushTbAllPartitions @ 0x1403AEB30 (HvlFlushTbAllPartitions.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 VslFlushEntireTb()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(3u, 0LL, 0, (__int64)v1);
}
