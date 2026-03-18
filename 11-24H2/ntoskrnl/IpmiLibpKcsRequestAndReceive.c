/*
 * XREFs of IpmiLibpKcsRequestAndReceive @ 0x1406A03A0
 * Callers:
 *     IpmiLibRequestReceive @ 0x14069FF6C (IpmiLibRequestReceive.c)
 * Callees:
 *     IpmiLibpGetTimeout @ 0x14069FFDC (IpmiLibpGetTimeout.c)
 *     IpmiLibpKcsBmcTransact @ 0x1406A0030 (IpmiLibpKcsBmcTransact.c)
 *     IpmiLibKcsIpmiMessageUnpack @ 0x1406A0734 (IpmiLibKcsIpmiMessageUnpack.c)
 *     IpmiLibpKcsIpmiMessagePack @ 0x1406A07AC (IpmiLibpKcsIpmiMessagePack.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall IpmiLibpKcsRequestAndReceive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  LONGLONG Timeout; // rbx
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int16 v9[296]; // [rsp+20h] [rbp-268h] BYREF

  memset_0(v9, 0, 0x24AuLL);
  Timeout = IpmiLibpGetTimeout(v5, dword_140EF9C40);
  result = IpmiLibpKcsIpmiMessagePack(v9, a2);
  if ( (int)result >= 0 )
  {
    result = IpmiLibpKcsBmcTransact(v8, v9, Timeout);
    if ( (int)result >= 0 )
      return IpmiLibKcsIpmiMessageUnpack(a3, v9);
  }
  return result;
}
