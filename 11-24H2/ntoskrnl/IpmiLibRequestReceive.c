/*
 * XREFs of IpmiLibRequestReceive @ 0x1406A1070
 * Callers:
 *     IpmiLibAddSelRecord @ 0x1406A0F0C (IpmiLibAddSelRecord.c)
 * Callees:
 *     IpmiLibpKcsRequestAndReceive @ 0x1406A14A4 (IpmiLibpKcsRequestAndReceive.c)
 */

__int64 IpmiLibRequestReceive()
{
  if ( DWORD1(WheaIpmiContext) == 1 )
    return IpmiLibpKcsRequestAndReceive();
  else
    return 3221225659LL;
}
