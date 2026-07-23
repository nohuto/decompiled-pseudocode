/*
 * XREFs of VslGetSecurePciEnabled @ 0x14058A770
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x140584060 (HvlGetEnlightenmentInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14044B190 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char VslGetSecurePciEnabled()
{
  _BYTE v1[16]; // [rsp+20h] [rbp-88h] BYREF
  int v2; // [rsp+30h] [rbp-78h]

  memset_0(v1, 0, 0x68uLL);
  if ( HvlQueryVsmConnection(0LL) && (v2 = 1, (int)VslpEnterIumSecureMode(2u, 0x10Bu, 0, (__int64)v1) >= 0) )
    return v2 & 1;
  else
    return 0;
}
