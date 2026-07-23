/*
 * XREFs of RtlpGetHeapProtection @ 0x1800288C0
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18000C530 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendHeap @ 0x18000CB60 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000D030 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180010480 (RtlpCommitBlock.c)
 *     RtlpInitializeHeapSegment @ 0x180025C40 (RtlpInitializeHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800287E4 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1800A0AC0 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpExtendLowFragHeapSegment @ 0x1800E8614 (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpGetHeapProtection(_DWORD *BaseAddress, int a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  _OWORD MemoryInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+50h] [rbp-18h]

  v2 = 64;
  v3 = BaseAddress[28] & 0x40000;
  if ( !v3 )
    v2 = 4;
  if ( a2 )
  {
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    v7 = 0LL;
    if ( v3 )
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BaseAddress,
             MemoryBasicInformation,
             MemoryInformation,
             0x30uLL,
             0LL) < 0
        || (BYTE4(v7) & 0x60) == 0
        || *(_DWORD **)&MemoryInformation[0] != BaseAddress )
      {
        RtlpLogHeapFailure(0, (_DWORD)BaseAddress, 1, DWORD1(v7), 0LL, 0LL);
        return 4;
      }
    }
  }
  return v2;
}
