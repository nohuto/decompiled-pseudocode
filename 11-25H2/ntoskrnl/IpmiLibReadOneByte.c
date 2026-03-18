/*
 * XREFs of IpmiLibReadOneByte @ 0x1406947A8
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x140694D38 (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x140694E88 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x1406950A8 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpKcsSpinRegister @ 0x140695294 (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibReadOneByte(__int64 a1, unsigned __int8 a2)
{
  if ( BYTE8(xmmword_140EF9890) )
    return __inbyte(xmmword_140EF98E0 + a2 * BYTE8(WheaIpmiContext));
  else
    return *(_BYTE *)(xmmword_140EF98E0 + a2 * (unsigned int)BYTE8(WheaIpmiContext));
}
