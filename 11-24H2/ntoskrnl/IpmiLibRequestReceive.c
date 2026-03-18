/*
 * XREFs of IpmiLibRequestReceive @ 0x14069FF6C
 * Callers:
 *     IpmiLibAddSelRecord @ 0x14069FE08 (IpmiLibAddSelRecord.c)
 * Callees:
 *     IpmiLibpKcsRequestAndReceive @ 0x1406A03A0 (IpmiLibpKcsRequestAndReceive.c)
 */

__int64 IpmiLibRequestReceive()
{
  if ( DWORD1(WheaIpmiContext) == 1 )
    return IpmiLibpKcsRequestAndReceive();
  else
    return 3221225659LL;
}
