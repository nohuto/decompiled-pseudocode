/*
 * XREFs of KdpReadIoSpace @ 0x140B79668
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysReadIoSpace @ 0x1405AD15C (KdpSysReadIoSpace.c)
 */

__int64 __fastcall KdpReadIoSpace(__int64 a1)
{
  __int64 v1; // r9
  int v3; // [rsp+28h] [rbp-30h]
  __int128 v4; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 28) = 0;
  v4 = 0LL;
  LOWORD(v4) = 56;
  v3 = *(_DWORD *)(a1 + 24);
  *((_QWORD *)&v4 + 1) = a1;
  *(_DWORD *)(a1 + 8) = KdpSysReadIoSpace(1, 0, 1, v1, (_BYTE *)(a1 + 28), v3, &v5);
  return KdSendPacket(2LL, &v4, 0LL, &KdpContext);
}
