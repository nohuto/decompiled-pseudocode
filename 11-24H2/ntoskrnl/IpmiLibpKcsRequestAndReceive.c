/*
 * XREFs of IpmiLibpKcsRequestAndReceive @ 0x1406A14A4
 * Callers:
 *     IpmiLibRequestReceive @ 0x1406A1070 (IpmiLibRequestReceive.c)
 * Callees:
 *     IpmiLibpGetTimeout @ 0x1406A10E0 (IpmiLibpGetTimeout.c)
 *     IpmiLibpKcsBmcTransact @ 0x1406A1134 (IpmiLibpKcsBmcTransact.c)
 *     IpmiLibKcsIpmiMessageUnpack @ 0x1406A183C (IpmiLibKcsIpmiMessageUnpack.c)
 *     IpmiLibpKcsIpmiMessagePack @ 0x1406A18B4 (IpmiLibpKcsIpmiMessagePack.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IpmiLibpKcsRequestAndReceive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  LONGLONG Timeout; // rbx
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int16 v9[296]; // [rsp+20h] [rbp-268h] BYREF

  memset_0(v9, 0, 0x24AuLL);
  Timeout = IpmiLibpGetTimeout(v5, dword_140EF9F40);
  result = IpmiLibpKcsIpmiMessagePack(v9, a2);
  if ( (int)result >= 0 )
  {
    result = IpmiLibpKcsBmcTransact(v8, v9, Timeout);
    if ( (int)result >= 0 && (_DWORD)result != 258 )
      return IpmiLibKcsIpmiMessageUnpack(a3, v9);
  }
  return result;
}
