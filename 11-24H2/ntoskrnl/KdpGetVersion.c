/*
 * XREFs of KdpGetVersion @ 0x140B79470
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpGetVersion(__int64 a1)
{
  __int128 v1; // xmm1
  __int64 v2; // xmm0_8
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = xmmword_140E0AA38;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = 12614;
  v4[0] = 56LL;
  v4[1] = a1;
  *(_OWORD *)(a1 + 16) = KdVersionBlock;
  v2 = qword_140E0AA48;
  *(_OWORD *)(a1 + 32) = v1;
  *(_QWORD *)(a1 + 48) = v2;
  return KdSendPacket(2LL, v4, 0LL, &KdpContext);
}
