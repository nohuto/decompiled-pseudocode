/*
 * XREFs of KdpCheckLowMemory @ 0x140B790B0
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysCheckLowMemory @ 0x140B7A4F0 (KdpSysCheckLowMemory.c)
 */

__int64 __fastcall KdpCheckLowMemory(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[0] = 56LL;
  v2[1] = a1;
  *(_DWORD *)(a1 + 8) = KdpSysCheckLowMemory(4LL);
  return KdSendPacket(2LL, v2, 0LL, &KdpContext);
}
