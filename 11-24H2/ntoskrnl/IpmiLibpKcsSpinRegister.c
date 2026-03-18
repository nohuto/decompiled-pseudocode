/*
 * XREFs of IpmiLibpKcsSpinRegister @ 0x1406A0634
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x1406A00D8 (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x1406A0228 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x1406A0448 (IpmiLibpKcsSendRequestToBMC.c)
 * Callees:
 *     IpmiLibReadOneByte @ 0x14069FB48 (IpmiLibReadOneByte.c)
 *     IpmiLibpDelay @ 0x14069FF94 (IpmiLibpDelay.c)
 *     IpmiLibpGetTimeout @ 0x14069FFDC (IpmiLibpGetTimeout.c)
 *     IpmiLibpTimeAfter @ 0x1406A06F4 (IpmiLibpTimeAfter.c)
 */

__int64 __fastcall IpmiLibpKcsSpinRegister(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // ebp
  int v5; // r14d
  int v6; // esi
  __int64 v7; // rcx
  LONGLONG Timeout; // rdi
  unsigned __int8 OneByte; // al
  __int64 v10; // rcx
  __int64 v12; // rcx
  LARGE_INTEGER v13; // rcx
  ULONG v14; // edx

  v3 = dword_140EF9C48;
  v5 = 0;
  v6 = a3;
  Timeout = IpmiLibpGetTimeout(a1, dword_140EF9C44);
  while ( 1 )
  {
    ++v5;
    OneByte = IpmiLibReadOneByte(v7, 1u);
    if ( v6 == 1 )
    {
      if ( (OneByte & 1) != 0 )
        return 0LL;
    }
    else
    {
      if ( v6 != 2 )
        return 3221225485LL;
      if ( (OneByte & 2) == 0 )
        return 0LL;
    }
    if ( (unsigned __int8)IpmiLibpTimeAfter(v10, a2) || (unsigned __int8)IpmiLibpTimeAfter(v12, Timeout) )
      break;
    if ( v3 < 0x32 && v5 == 40 )
      v3 += 100;
    v14 = dword_140EF9C4C;
    if ( v3 < dword_140EF9C4C )
      v14 = v3;
    IpmiLibpDelay(v13, v14);
  }
  return 258LL;
}
