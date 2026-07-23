/*
 * XREFs of KdpReadIoSpaceExtended @ 0x140B796E4
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysReadIoSpace @ 0x1405AD15C (KdpSysReadIoSpace.c)
 */

__int64 __fastcall KdpReadIoSpaceExtended(__int64 a1)
{
  __int64 v1; // r9
  int v2; // r8d
  int v3; // edx
  int v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = 0;
  v2 = *(_DWORD *)(a1 + 28);
  v6 = 0LL;
  LOWORD(v6) = 56;
  v5 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 24);
  *((_QWORD *)&v6 + 1) = a1;
  *(_DWORD *)(a1 + 8) = KdpSysReadIoSpace(*(_DWORD *)(a1 + 20), v3, v2, v1, (_BYTE *)(a1 + 40), v5, &v7);
  return KdSendPacket(2LL, &v6, 0LL, &KdpContext);
}
