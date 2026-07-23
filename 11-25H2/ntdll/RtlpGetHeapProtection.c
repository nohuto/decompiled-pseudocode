/*
 * XREFs of RtlpGetHeapProtection @ 0x180025250
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18000129C (RtlpLowFragHeapFlushCaches.c)
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180026054 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800261B4 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpExtendHeap @ 0x180028BE0 (RtlpExtendHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18003771C (RtlpInitializeHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x1800381FC (RtlpCreateLowFragHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
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
