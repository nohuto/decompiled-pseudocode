/*
 * XREFs of KdpReadVirtualMemory @ 0x140B799E8
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140B7CACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReadVirtualMemory(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  void *v6; // rcx
  int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(unsigned int *)(a1 + 24);
  v9 = 0LL;
  if ( v3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v3) = KdTransportMaxPacketSize - 56;
  v6 = *(void **)(a1 + 16);
  if ( (unsigned int)v3 > (unsigned __int16)a2[1] )
    LODWORD(v3) = (unsigned __int16)a2[1];
  LODWORD(v10) = v3;
  *(_DWORD *)(a1 + 8) = KdpCopyMemoryChunks(v6, 4, (__int64)&v10);
  v7 = v10;
  *a2 = v10;
  *(_DWORD *)(a1 + 28) = v7;
  LOWORD(v9) = 56;
  *((_QWORD *)&v9 + 1) = a1;
  return KdSendPacket(2LL, &v9, a2, &KdpContext);
}
