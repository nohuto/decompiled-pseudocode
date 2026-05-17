/*
 * XREFs of EtwpInitializeCompression @ 0x180115460
 * Callers:
 *     EtwpStartUmLogger @ 0x1800B598C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCompressWorkSpaceSizeXpressLz @ 0x180115500 (RtlCompressWorkSpaceSizeXpressLz.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall EtwpInitializeCompression(__int64 a1)
{
  __int64 Heap; // rax
  int v4; // eax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  v5 = 0;
  RtlCompressWorkSpaceSizeXpressLz(0LL, &v5, &v6);
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v5);
  *(_QWORD *)(a1 + 416) = Heap;
  if ( !Heap )
    return 3221225495LL;
  v4 = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 432) = 2 * v4;
  v7 = (unsigned int)(2 * v4);
  return ZwAllocateVirtualMemory(-1LL, a1 + 424, 0LL, &v7, 4096, 4);
}
