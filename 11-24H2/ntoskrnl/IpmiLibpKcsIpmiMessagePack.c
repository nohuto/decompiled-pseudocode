/*
 * XREFs of IpmiLibpKcsIpmiMessagePack @ 0x1406A18B4
 * Callers:
 *     IpmiLibpKcsRequestAndReceive @ 0x1406A14A4 (IpmiLibpKcsRequestAndReceive.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall IpmiLibpKcsIpmiMessagePack(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 result; // rax

  v2 = *(_WORD *)(a2 + 1) + 2;
  *a1 = v2;
  if ( v2 > 0x122u )
    return 3221225495LL;
  memmove((char *)a1 + 5, (const void *)(a2 + 3), v2);
  result = 0LL;
  a1[1] = 290;
  return result;
}
