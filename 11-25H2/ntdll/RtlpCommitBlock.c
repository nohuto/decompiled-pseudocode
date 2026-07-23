/*
 * XREFs of RtlpCommitBlock @ 0x1800966E0
 * Callers:
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180057A50 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x180058720 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180059530 (RtlpGrowBlockInPlace.c)
 *     RtlpValidateHeapSegment @ 0x180095454 (RtlpValidateHeapSegment.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlpCoalesceHeap @ 0x180097CE0 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1801454E0 (RtlZeroHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpLogHeapExtendEvent @ 0x180097F08 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapCommit @ 0x1801170C8 (RtlpLogHeapCommit.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 */

char __fastcall RtlpCommitBlock(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 *v8; // rdi
  unsigned __int64 v9; // rcx
  bool v10; // zf
  ULONG Protect; // edi
  NTSTATUS v12; // edi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v19; // r9
  char *v20; // r8
  ULONG_PTR v21; // rdx
  _OWORD MemoryInformation[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v23; // [rsp+50h] [rbp-28h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF

  v2 = (char *)((a2 + 4159) & 0xFFFFFFFFFFFFF000uLL);
  RegionSize = 0LL;
  BaseAddress = v2;
  if ( v2 == (char *)(a2 + 80) )
  {
    v2 += 4096;
    BaseAddress = v2;
  }
  v5 = *(unsigned __int16 *)(a2 + 8);
  v6 = 0LL;
  v7 = (a2 + 16 * (v5 - 2)) & 0xFFFFFFFFFFFFF000uLL;
  if ( v7 > (unsigned __int64)v2 )
  {
    v6 = v7 - (_QWORD)v2;
    RegionSize = v7 - (_QWORD)v2;
  }
  v8 = (__int64 *)(a1 + 376);
  if ( dword_1801CE578
    || (v9 = *v8) == 0 && (v9 = qword_1801CFED8, v8 = &qword_1801CFED8, !qword_1801CFED8)
    || v6 + *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664) <= v9 )
  {
    v10 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
    Protect = 64;
    if ( (*(_DWORD *)(a1 + 112) & 0x40000) == 0 )
      Protect = 4;
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    v23 = 0LL;
    if ( !v10
      && (ZwQueryVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            (PVOID)a1,
            MemoryBasicInformation,
            MemoryInformation,
            0x30uLL,
            0LL) < 0
       || (BYTE4(v23) & 0x60) == 0
       || *(_QWORD *)&MemoryInformation[0] != a1) )
    {
      RtlpLogHeapFailure(0, a1, 1LL, DWORD1(v23), 0LL, 0LL);
      Protect = 4;
    }
    v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, Protect);
    if ( v12 < 0 )
      goto LABEL_27;
    v13 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v14 = 2147353472LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(a1, BaseAddress, RegionSize, 8LL);
    *(_QWORD *)(a1 + 664) -= RegionSize;
    --*(_DWORD *)(a1 + 660);
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v15 = 2147353472LL;
    if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(
        a1,
        (int)BaseAddress,
        RegionSize,
        16 * *(_QWORD *)(a1 + 192),
        (HANDLE)*(unsigned __int8 *)v13);
    }
    v16 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v17 = 2147353482LL;
    if ( *(_BYTE *)v17 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapExtendEvent(
        a1,
        (int)BaseAddress,
        RegionSize,
        16 * *(_QWORD *)(a1 + 192),
        (HANDLE)*(unsigned __int8 *)v16);
    }
    ++*(_DWORD *)(a1 + 624);
    if ( (*(_BYTE *)(a2 + 10) & 4) != 0 )
    {
      v20 = (char *)BaseAddress;
      v21 = RegionSize >> 2;
      if ( RegionSize >> 2 )
      {
        if ( ((unsigned __int8)BaseAddress & 4) == 0 )
          goto LABEL_51;
        *(_DWORD *)BaseAddress = -17891602;
        if ( --v21 )
        {
          v20 += 4;
LABEL_51:
          memset64(v20, 0xFEEEFEEEFEEEFEEEuLL, v21 >> 1);
          if ( (v21 & 1) != 0 )
            *(_DWORD *)&v20[4 * v21 - 4] = -17891602;
        }
      }
    }
    *(_BYTE *)(a2 + 10) &= 0x17u;
    return 1;
  }
  v19 = v8[1];
  if ( v19 )
    RtlpLogHeapFailure(21, a1, 0LL, v19, v6, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664));
  v12 = -1073741523;
LABEL_27:
  ++*(_DWORD *)(a1 + 636);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
    v12,
    (const void *)a1,
    BaseAddress,
    RegionSize);
  return 0;
}
