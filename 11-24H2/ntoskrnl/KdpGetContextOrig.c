/*
 * XREFs of KdpGetContextOrig @ 0x140B79404
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     KdpGetContext @ 0x140B792F8 (KdpGetContext.c)
 */

__int64 __fastcall KdpGetContextOrig(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = 56LL;
  v6[1] = a1;
  KdpGetContext(a1, a2, a3);
  if ( !*(_DWORD *)(a1 + 8) )
    KdpContextSent = 1;
  return KdSendPacket(2LL, v6, a2, &KdpContext);
}
