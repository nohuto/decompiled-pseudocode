/*
 * XREFs of IpmiLibRequestReceive @ 0x140694BCC
 * Callers:
 *     IpmiLibAddSelRecord @ 0x140694A68 (IpmiLibAddSelRecord.c)
 * Callees:
 *     IpmiLibpKcsRequestAndReceive @ 0x140695000 (IpmiLibpKcsRequestAndReceive.c)
 */

__int64 IpmiLibRequestReceive()
{
  if ( DWORD1(WheaIpmiContext) == 1 )
    return IpmiLibpKcsRequestAndReceive();
  else
    return 3221225659LL;
}
