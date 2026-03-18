/*
 * XREFs of IpmiLibpKcsRequestAndReceive @ 0x140695000
 * Callers:
 *     IpmiLibRequestReceive @ 0x140694BCC (IpmiLibRequestReceive.c)
 * Callees:
 *     IpmiLibpGetTimeout @ 0x140694C3C (IpmiLibpGetTimeout.c)
 *     IpmiLibpKcsBmcTransact @ 0x140694C90 (IpmiLibpKcsBmcTransact.c)
 *     IpmiLibKcsIpmiMessageUnpack @ 0x140695394 (IpmiLibKcsIpmiMessageUnpack.c)
 *     IpmiLibpKcsIpmiMessagePack @ 0x14069540C (IpmiLibpKcsIpmiMessagePack.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall IpmiLibpKcsRequestAndReceive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  LONGLONG Timeout; // rbx
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int16 v9[296]; // [rsp+20h] [rbp-268h] BYREF

  memset_0(v9, 0, 0x24AuLL);
  Timeout = IpmiLibpGetTimeout(v5, dword_140EF98C0);
  result = IpmiLibpKcsIpmiMessagePack(v9, a2);
  if ( (int)result >= 0 )
  {
    result = IpmiLibpKcsBmcTransact(v8, v9, Timeout);
    if ( (int)result >= 0 )
      return IpmiLibKcsIpmiMessageUnpack(a3, v9);
  }
  return result;
}
