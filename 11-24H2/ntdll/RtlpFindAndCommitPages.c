/*
 * XREFs of RtlpFindAndCommitPages @ 0x18000D030
 * Callers:
 *     RtlpExtendHeap @ 0x18000CB60 (RtlpExtendHeap.c)
 * Callees:
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpLogHeapCommit @ 0x1800235BC (RtlpLogHeapCommit.c)
 *     RtlpGetHeapProtection @ 0x1800288C0 (RtlpGetHeapProtection.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpFindUCREntry @ 0x1800DBA60 (RtlpFindUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x1800E311C (RtlpRemoveUCRBlock.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F2038 (RtlpLogHeapExtendEvent.c)
 *     RtlpCreateUCREntry @ 0x1801173C0 (RtlpCreateUCREntry.c)
 *     RtlpReportHeapFailure @ 0x18011D71C (RtlpReportHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall RtlpFindAndCommitPages(_QWORD *BaseAddress, PSIZE_T RegionSize)
{
  _QWORD *UCREntry; // rax
  _QWORD *v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rdi
  NTSTATUS v9; // eax
  __int64 v10; // r8
  ULONG Protect; // eax
  __int64 *v12; // rdx
  __int64 v13; // r10
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v17; // r15
  _DWORD *SharedData; // rcx
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  ULONG_PTR v23; // r9
  ULONG_PTR v24; // rdx
  _QWORD *v25; // rdx
  unsigned __int64 v26; // rbp
  _DWORD *v27; // rcx
  __int64 v28; // rcx
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  _DWORD *v31; // rdx
  __int64 v32; // rdx
  _DWORD *v33; // rdx
  PVOID BaseAddressa; // [rsp+50h] [rbp+8h] BYREF

  UCREntry = (_QWORD *)RtlpFindUCREntry(BaseAddress, *RegionSize);
  v5 = UCREntry;
  if ( UCREntry == BaseAddress + 30 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && UCREntry[5] < *RegionSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    if ( !byte_1801D1908 )
      RtlpReportHeapFailure(1LL);
  }
  v6 = *((unsigned __int8 *)v5 - 2);
  v7 = (unsigned __int64)(v5 - 2);
  if ( (_BYTE)v6 )
    v8 = (_QWORD *)((v7 & 0xFFFFFFFFFFFF0000uLL) - (v6 << 16) + 0x10000);
  else
    v8 = BaseAddress;
  BaseAddressa = (PVOID)v5[4];
  if ( RtlpHeapKey != BaseAddress[45] )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD *, PVOID *, PSIZE_T))(RtlpHeapKey ^ BaseAddress[45]))(
           BaseAddress,
           &BaseAddressa,
           RegionSize);
  }
  else
  {
    v10 = *RegionSize;
    if ( v5[5] - *RegionSize <= 16LL * BaseAddress[22]
      && v5[5] < 16 * (unsigned __int64)*((unsigned int *)BaseAddress + 37) )
    {
      v10 = v5[5];
    }
    *RegionSize = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = RtlpGetHeapProtection(BaseAddress);
    v12 = BaseAddress + 47;
    v13 = *RegionSize;
    if ( !dword_1801CB578
      && ((v14 = *v12) != 0 || (v14 = qword_1801CCED8, v12 = &qword_1801CCED8, qword_1801CCED8))
      && BaseAddress[72] - BaseAddress[84] + v13 > v14 )
    {
      v15 = v12[1];
      if ( v15 )
        RtlpLogHeapFailure(21, (_DWORD)BaseAddress, 0, v15, v13, BaseAddress[72] - BaseAddress[84]);
      v9 = -1073741523;
    }
    else
    {
      v9 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, RegionSize, 0x1000u, Protect);
    }
    ++*((_DWORD *)BaseAddress + 158);
  }
  if ( v9 >= 0 )
  {
    v17 = 2147353472LL;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v19 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v19 = 2147353472LL;
    if ( *(_BYTE *)v19 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(BaseAddress, BaseAddressa, *RegionSize, 2LL);
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v20 = *(_DWORD *)(v7 + 8) ^ *((_DWORD *)BaseAddress + 34);
      *(_DWORD *)(v7 + 8) = v20;
      if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v5 - 2);
    }
    *(_BYTE *)(v7 + 10) = 0;
    *(_BYTE *)(v7 + 15) = 0;
    RtlpRemoveUCRBlock(BaseAddress, v5);
    --*((_DWORD *)v8 + 21);
    *((_DWORD *)v8 + 20) -= v5[5] >> 12;
    v21 = v5[5] + BaseAddress[72];
    ++*((_DWORD *)BaseAddress + 154);
    --*((_DWORD *)BaseAddress + 153);
    BaseAddress[72] = v21;
    v22 = v5[5];
    if ( v22 >= 0xFF000 )
      BaseAddress[73] -= v22;
    v23 = v5[5];
    v24 = *RegionSize;
    if ( v23 > *RegionSize || v23 + v5[4] == v8[9] )
    {
      RtlpCreateUCREntry(
        (_DWORD)BaseAddress,
        (_DWORD)v8,
        v24 - 48 + v5[4],
        v23 - v24,
        (__int64)(v5 - 2),
        (__int64)RegionSize);
      *RegionSize *= 16LL;
    }
    else
    {
      *RegionSize = v24 + 16LL * *(unsigned __int16 *)(v7 + 8);
    }
    *(_BYTE *)(v7 + 11) = 0;
    v25 = (_QWORD *)v8[5];
    if ( v25 == v8 )
    {
      LOBYTE(v26) = 0;
    }
    else
    {
      v26 = ((v7 - (unsigned __int64)v8) >> 16) + 1;
      if ( v26 >= 0xFE )
        RtlpLogHeapFailure(3, (_DWORD)v25, v7, (_DWORD)v8, 0LL, 0LL);
    }
    *(_BYTE *)(v7 + 14) = v26;
    v27 = NtCurrentPeb()->SharedData;
    if ( v27 && *v27 )
      v28 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v28 = 2147353472LL;
    if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v29 = NtCurrentPeb()->SharedData;
      if ( v29 && *v29 )
        v17 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent((int)BaseAddress, v7, *RegionSize, 16 * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v17);
    }
    v30 = 2147353482LL;
    v31 = NtCurrentPeb()->SharedData;
    if ( v31 && *v31 )
      v32 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v32 = 2147353482LL;
    if ( *(_BYTE *)v32 )
    {
      v33 = NtCurrentPeb()->SharedData;
      if ( v33 )
      {
        if ( *v33 )
          v30 = (__int64)NtCurrentPeb()->SharedData + 560;
      }
      RtlpLogHeapExtendEvent((int)BaseAddress, v7, *RegionSize, 16 * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v30);
    }
    return v7;
  }
  else
  {
    ++*((_DWORD *)BaseAddress + 160);
    return 0LL;
  }
}
