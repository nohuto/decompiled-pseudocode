/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x180028580
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18000C530 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendHeap @ 0x18000CB60 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800280C0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1800284AC (RtlpDestroyHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800287E4 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlpDecommitBlock @ 0x180117590 (RtlpDecommitBlock.c)
 *     RtlDebugDestroyHeap @ 0x18011D558 (RtlDebugDestroyHeap.c)
 * Callees:
 *     RtlpCallSecureMemoryCallbacks @ 0x18002866C (RtlpCallSecureMemoryCallbacks.c)
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpSecMemFreeVirtualMemory(__int64 a1, PVOID *a2, ULONG_PTR *a3, ULONG a4)
{
  NTSTATUS v7; // r14d
  ULONG_PTR v8; // rdx
  PVOID v9; // rsi
  __int128 MemoryInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int128 v13; // [rsp+50h] [rbp-18h]

  v7 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4);
  if ( v7 != -1073741755 )
    return v7;
  v8 = *a3;
  v9 = *a2;
  MemoryInformation = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( RtlpSecMemListHead == &RtlpSecMemListHead )
    return v7;
  if ( !v8 )
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           v9,
           MemoryRegionInformation,
           &MemoryInformation,
           0x30uLL,
           0LL) < 0
      || HIDWORD(MemoryInformation) == 0x10000 )
    {
      return v7;
    }
    v8 = v12;
  }
  if ( (unsigned __int8)RtlpCallSecureMemoryCallbacks(v9, v8) )
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4);
  return v7;
}
