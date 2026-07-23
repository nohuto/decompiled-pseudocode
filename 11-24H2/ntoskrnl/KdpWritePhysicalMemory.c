/*
 * XREFs of KdpWritePhysicalMemory @ 0x140B7AB00
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140B7CACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpWritePhysicalMemory(__int64 a1)
{
  _DWORD *v2; // rcx
  int v3; // r9d
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 56LL;
  v5[1] = a1;
  v2 = (_DWORD *)(a1 + 28);
  v3 = 7;
  switch ( *v2 )
  {
    case 1:
      v3 = 15;
      break;
    case 2:
      v3 = 23;
      break;
    case 3:
      v3 = 39;
      break;
  }
  *(_DWORD *)(a1 + 8) = KdpCopyMemoryChunks(*(void **)(a1 + 16), v3, (__int64)v2);
  return KdSendPacket(2LL, v5, 0LL, &KdpContext);
}
