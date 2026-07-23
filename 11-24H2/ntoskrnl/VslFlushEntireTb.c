/*
 * XREFs of VslFlushEntireTb @ 0x14058A358
 * Callers:
 *     HvlFlushTbAllPartitions @ 0x14039D340 (HvlFlushTbAllPartitions.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 VslFlushEntireTb()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(3u, 0, 0, (__int64)v1);
}
