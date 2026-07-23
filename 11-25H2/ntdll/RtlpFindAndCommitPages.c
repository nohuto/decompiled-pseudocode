/*
 * XREFs of RtlpFindAndCommitPages @ 0x180029360
 * Callers:
 *     RtlpExtendHeap @ 0x180028BE0 (RtlpExtendHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateUCREntry @ 0x1800290B0 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x180029920 (RtlpFindUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x180029C48 (RtlpRemoveUCRBlock.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x18005A8A0 (RtlpHeapHandleError.c)
 *     RtlpLogHeapExtendEvent @ 0x180097F08 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapCommit @ 0x1801170C8 (RtlpLogHeapCommit.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpFindAndCommitPages(unsigned __int64 a1, PSIZE_T RegionSize)
{
  __int64 UCREntry; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbp
  ULONG_PTR v9; // rdx
  ULONG Protect; // r15d
  bool v11; // zf
  __int64 *v12; // rdx
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // r15
  __int64 v17; // rcx
  int v18; // edx
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // r9
  ULONG_PTR v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v28; // rax
  _OWORD MemoryInformation[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v30; // [rsp+50h] [rbp-38h]
  PVOID BaseAddress; // [rsp+90h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1);
  v5 = UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < *RegionSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError(1LL);
  }
  v6 = *(unsigned __int8 *)(v5 - 2);
  v7 = v5 - 16;
  if ( (_BYTE)v6 )
    v8 = (v7 & 0xFFFFFFFFFFFF0000uLL) - (v6 << 16) + 0x10000;
  else
    v8 = a1;
  BaseAddress = *(PVOID *)(v5 + 32);
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    v15 = ((__int64 (__fastcall *)(unsigned __int64, PVOID *, PSIZE_T))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360)))(
            a1,
            &BaseAddress,
            RegionSize);
  }
  else
  {
    v9 = *RegionSize;
    if ( *(_QWORD *)(v5 + 40) - *RegionSize <= 16LL * *(_QWORD *)(a1 + 176)
      && *(_QWORD *)(v5 + 40) < 16 * (unsigned __int64)*(unsigned int *)(a1 + 148) )
    {
      v9 = *(_QWORD *)(v5 + 40);
    }
    Protect = 64;
    *RegionSize = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v11 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
    MemoryInformation[0] = 0LL;
    if ( v11 )
      Protect = 4;
    MemoryInformation[1] = 0LL;
    v30 = 0LL;
    if ( !v11
      && (ZwQueryVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            (PVOID)a1,
            MemoryBasicInformation,
            MemoryInformation,
            0x30uLL,
            0LL) < 0
       || (BYTE4(v30) & 0x60) == 0
       || *(_QWORD *)&MemoryInformation[0] != a1) )
    {
      RtlpLogHeapFailure(0, a1, 1, DWORD1(v30), 0LL, 0LL);
      Protect = 4;
    }
    v12 = (__int64 *)(a1 + 376);
    v13 = *RegionSize;
    if ( !dword_1801CE578
      && ((v14 = *v12) != 0 || (v14 = qword_1801CFED8, v12 = &qword_1801CFED8, qword_1801CFED8))
      && *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664) + v13 > v14 )
    {
      v28 = v12[1];
      if ( v28 )
        RtlpLogHeapFailure(21, a1, 0, v28, v13, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664));
      v15 = -1073741523;
    }
    else
    {
      v15 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, Protect);
    }
    ++*(_DWORD *)(a1 + 624);
  }
  if ( v15 < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  else
  {
    v16 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v17 = 2147353472LL;
    if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(a1, BaseAddress, *RegionSize, 2LL);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v18 = *(_DWORD *)(v7 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v7 + 8) = v18;
      if ( HIBYTE(v18) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE1(v18) ^ BYTE2(v18))) )
        RtlpAnalyzeHeapFailure(a1, v5 - 16);
    }
    *(_BYTE *)(v7 + 10) = 0;
    *(_BYTE *)(v7 + 15) = 0;
    RtlpRemoveUCRBlock(a1, v5);
    --*(_DWORD *)(v8 + 84);
    *(_DWORD *)(v8 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
    *(_QWORD *)(a1 + 576) += *(_QWORD *)(v5 + 40);
    ++*(_DWORD *)(a1 + 608);
    --*(_DWORD *)(a1 + 604);
    v19 = *(_QWORD *)(v5 + 40);
    if ( v19 >= 0xFF000 )
      *(_QWORD *)(a1 + 584) -= v19;
    v20 = *(_QWORD *)(v5 + 40);
    v21 = *RegionSize;
    if ( v20 > *RegionSize || v20 + *(_QWORD *)(v5 + 32) == *(_QWORD *)(v8 + 72) )
    {
      RtlpCreateUCREntry(
        a1,
        v8,
        (__int64 *)(v21 - 48 + *(_QWORD *)(v5 + 32)),
        v20 - v21,
        v5 - 16,
        (__int64 *)RegionSize);
      *RegionSize *= 16LL;
    }
    else
    {
      *RegionSize = v21 + 16LL * *(unsigned __int16 *)(v7 + 8);
    }
    *(_BYTE *)(v7 + 11) = 0;
    v22 = *(_QWORD *)(v8 + 40);
    if ( v22 == v8 )
    {
      LOBYTE(v23) = 0;
    }
    else
    {
      v23 = ((unsigned __int64)(v7 - v8) >> 16) + 1;
      if ( v23 >= 0xFE )
        RtlpLogHeapFailure(3, v22, v7, v8, 0LL, 0LL);
    }
    *(_BYTE *)(v7 + 14) = v23;
    if ( RtlGetCurrentServiceSessionId() )
      v24 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v24 = 2147353472LL;
    if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(a1, v7, *RegionSize, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v16);
    }
    v25 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
      v26 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v26 = 2147353482LL;
    if ( *(_BYTE *)v26 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v25 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapExtendEvent(a1, v7, *RegionSize, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v25);
    }
    return v7;
  }
}
