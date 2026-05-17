/*
 * XREFs of RtlpGetHeapProtection @ 0x18009C570
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180095D9C (RtlpLowFragHeapFlushCaches.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18009D0A4 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18009D204 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpExtendHeap @ 0x18009FC30 (RtlpExtendHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1800A88DC (RtlpInitializeHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x1800A93BC (RtlpCreateLowFragHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpGetHeapProtection(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  _OWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+50h] [rbp-18h]

  v2 = 64;
  v3 = *(_DWORD *)(a1 + 112) & 0x40000;
  if ( !v3 )
    v2 = 4;
  if ( a2 )
  {
    memset(v6, 0, sizeof(v6));
    v7 = 0LL;
    if ( v3 )
    {
      if ( (int)ZwQueryVirtualMemory(-1LL, a1, 0LL, v6, 48LL, 0LL) < 0
        || (BYTE4(v7) & 0x60) == 0
        || *(_QWORD *)&v6[0] != a1 )
      {
        RtlpLogHeapFailure(0, a1, 1LL, DWORD1(v7), 0LL, 0LL);
        return 4;
      }
    }
  }
  return v2;
}
