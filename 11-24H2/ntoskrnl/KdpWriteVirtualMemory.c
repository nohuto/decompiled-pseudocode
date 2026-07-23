/*
 * XREFs of KdpWriteVirtualMemory @ 0x140B7ABA0
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140B7CACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpWriteVirtualMemory(__int64 a1)
{
  __int64 v1; // rax
  void *v3; // rcx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1 + 28;
  v3 = *(void **)(a1 + 16);
  v5[0] = 0LL;
  *(_DWORD *)(a1 + 8) = KdpCopyMemoryChunks(v3, 5, v1);
  v5[1] = a1;
  LOWORD(v5[0]) = 56;
  return KdSendPacket(2LL, v5, 0LL, &KdpContext);
}
