/*
 * XREFs of RtlpExtendHeap @ 0x1405E9AF4
 * Callers:
 *     RtlpAllocateHeap @ 0x1405E7EFC (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x1404467BC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405E890C (RtlpCoalesceFreeBlocks.c)
 *     RtlpFindAndCommitPages @ 0x1405E9D48 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1405EA5CC (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1405EA8C0 (RtlpInsertFreeBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405F025C (RtlpAnalyzeHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1406A7770 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlpExtendHeap(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // r9d
  __int64 v12; // rdx
  ULONG_PTR v14[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp+48h] BYREF

  v14[0] = 0LL;
  v17 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = RtlpFindAndCommitPages(a1, &v17);
  if ( v4 )
  {
    v17 >>= 4;
    v5 = RtlpCoalesceFreeBlocks(a1, v4, &v17);
    RtlpInsertFreeBlock(a1, v5, v17);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v5);
    }
    return v5;
  }
  if ( (*(_DWORD *)(a1 + 112) & 2) == 0 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 160);
  v7 = a2 + 0x2000;
  BaseAddress = 0LL;
  v8 = a2 + 0x2000;
  if ( a2 + 0x2000 <= v6 )
    v8 = v6;
  RegionSize = (v8 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( RegionSize >= 0xFD0000 )
    RegionSize = 16580608LL;
  while ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
  {
    if ( RegionSize == v7 )
    {
      ++*(_DWORD *)(a1 + 640);
      return 0LL;
    }
    RegionSize >>= 1;
    if ( RegionSize < v7 )
      RegionSize = a2 + 0x2000;
  }
  v9 = a2 + 4096;
  *(_QWORD *)(a1 + 160) += RegionSize;
  if ( (unsigned __int64)(a2 + 4096) <= *(_QWORD *)(a1 + 168) )
    v9 = *(_QWORD *)(a1 + 168);
  v10 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 672);
  v14[0] = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(v14[0], v10, a1, (unsigned __int64 *)(a1 + 376))
    || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v14, 0x1000u, 4u) < 0
    || !(unsigned __int8)RtlpInitializeHeapSegment(
                           a1,
                           (int)BaseAddress,
                           112,
                           v11,
                           2,
                           (__int64)BaseAddress,
                           (char *)BaseAddress + v14[0],
                           (__int64)BaseAddress + RegionSize - 4096) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  v12 = *((_QWORD *)BaseAddress + 8);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v12);
  }
  return *((_QWORD *)BaseAddress + 8);
}
