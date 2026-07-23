/*
 * XREFs of IpmiLibReadOneByte @ 0x1406A0C4C
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x1406A11DC (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x1406A132C (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x1406A1550 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpKcsSpinRegister @ 0x1406A173C (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibReadOneByte(__int64 a1, unsigned __int8 a2)
{
  if ( BYTE8(xmmword_140EF9F10) )
    return __inbyte(xmmword_140EF9F60 + a2 * BYTE8(WheaIpmiContext));
  else
    return *(_BYTE *)(xmmword_140EF9F60 + a2 * (unsigned int)BYTE8(WheaIpmiContext));
}
