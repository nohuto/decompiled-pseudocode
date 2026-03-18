/*
 * XREFs of IpmiLibReadOneByte @ 0x14069FB48
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x1406A00D8 (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x1406A0228 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x1406A0448 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpKcsSpinRegister @ 0x1406A0634 (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibReadOneByte(__int64 a1, unsigned __int8 a2)
{
  if ( BYTE8(xmmword_140EF9C10) )
    return __inbyte(xmmword_140EF9C60 + a2 * BYTE8(WheaIpmiContext));
  else
    return *(_BYTE *)(xmmword_140EF9C60 + a2 * (unsigned int)BYTE8(WheaIpmiContext));
}
