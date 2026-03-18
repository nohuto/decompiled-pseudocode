/*
 * XREFs of IpmiLibWriteOneByte @ 0x14069FB88
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x1406A00D8 (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x1406A0228 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x1406A0448 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpHandleReadInterrupt @ 0x1406A0864 (IpmiLibpHandleReadInterrupt.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibWriteOneByte(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 result; // al
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( BYTE8(xmmword_140EF9C10) )
  {
    result = a3;
    __outbyte(xmmword_140EF9C60 + a2 * BYTE8(WheaIpmiContext), a3);
  }
  else
  {
    result = xmmword_140EF9C60;
    *(_BYTE *)(BYTE8(WheaIpmiContext) * (unsigned int)a2 + (_QWORD)xmmword_140EF9C60) = a3;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}
