/*
 * XREFs of KdpNotSupported @ 0x140B794E4
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpNotSupported(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 8) = -1073741823;
  v2[0] = 56LL;
  v2[1] = a1;
  KdSendPacket(2LL, v2, 0LL, &KdpContext);
  return 0LL;
}
