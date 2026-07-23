/*
 * XREFs of RtlpCommitBlock @ 0x180010480
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x18000D610 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x18000DD00 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18000EB10 (RtlpCoalesceFreeBlocks.c)
 *     RtlpValidateHeapSegment @ 0x1800222F8 (RtlpValidateHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x180106F80 (RtlpCoalesceHeap.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     RtlZeroHeap @ 0x180142320 (RtlZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpLogHeapCommit @ 0x1800235BC (RtlpLogHeapCommit.c)
 *     RtlpGetHeapProtection @ 0x1800288C0 (RtlpGetHeapProtection.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F2038 (RtlpLogHeapExtendEvent.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 */

char __fastcall RtlpCommitBlock(__int64 *BaseAddress, __int64 a2)
{
  __int64 v3; // r8
  char *v4; // rcx
  unsigned __int64 v6; // rax
  __int64 *v7; // r9
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  ULONG Protect; // eax
  __int64 v12; // rbx
  _DWORD *SharedData; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  __int64 v20; // rdx
  _DWORD *v21; // rdx
  char *v22; // r8
  ULONG_PTR v23; // rdx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddressa; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = (char *)((a2 + 4159) & 0xFFFFFFFFFFFFF000uLL);
  RegionSize = 0LL;
  BaseAddressa = v4;
  if ( v4 == (char *)(a2 + 80) )
  {
    v4 += 4096;
    BaseAddressa = v4;
  }
  v6 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
  if ( v6 > (unsigned __int64)v4 )
  {
    v3 = v6 - (_QWORD)v4;
    RegionSize = v6 - (_QWORD)v4;
  }
  v7 = BaseAddress + 47;
  if ( !dword_1801CB578 )
  {
    v8 = *v7;
    if ( *v7 || (v8 = qword_1801CCED8, v7 = &qword_1801CCED8, qword_1801CCED8) )
    {
      if ( v3 + BaseAddress[72] - BaseAddress[84] > v8 )
      {
        v9 = v7[1];
        if ( v9 )
          RtlpLogHeapFailure(21, (_DWORD)BaseAddress, 0, v9, v3, BaseAddress[72] - BaseAddress[84]);
        v10 = -1073741523;
        goto LABEL_12;
      }
    }
  }
  Protect = RtlpGetHeapProtection(BaseAddress);
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
  if ( v10 >= 0 )
  {
    v12 = 2147353472LL;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v14 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v14 = 2147353472LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(BaseAddress, BaseAddressa, RegionSize, 8LL);
    --*((_DWORD *)BaseAddress + 167);
    BaseAddress[84] -= RegionSize;
    v15 = NtCurrentPeb()->SharedData;
    if ( v15 && *v15 )
      v16 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v16 = 2147353472LL;
    if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v17 = NtCurrentPeb()->SharedData;
      if ( v17 && *v17 )
        v12 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(
        (int)BaseAddress,
        (int)BaseAddressa,
        RegionSize,
        16 * BaseAddress[24],
        (HANDLE)*(unsigned __int8 *)v12);
    }
    v18 = 2147353482LL;
    v19 = NtCurrentPeb()->SharedData;
    if ( v19 && *v19 )
      v20 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v20 = 2147353482LL;
    if ( *(_BYTE *)v20 )
    {
      v21 = NtCurrentPeb()->SharedData;
      if ( v21 && *v21 )
        v18 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapExtendEvent(
        (int)BaseAddress,
        (int)BaseAddressa,
        RegionSize,
        16 * BaseAddress[24],
        (HANDLE)*(unsigned __int8 *)v18);
    }
    ++*((_DWORD *)BaseAddress + 158);
    if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
      goto LABEL_48;
    v22 = (char *)BaseAddressa;
    v23 = RegionSize >> 2;
    if ( !(RegionSize >> 2) )
      goto LABEL_48;
    if ( ((unsigned __int8)BaseAddressa & 4) != 0 )
    {
      *(_DWORD *)BaseAddressa = -17891602;
      if ( !--v23 )
      {
LABEL_48:
        *(_BYTE *)(a2 + 10) &= 0x17u;
        return 1;
      }
      v22 += 4;
    }
    memset64(v22, 0xFEEEFEEEFEEEFEEEuLL, v23 >> 1);
    if ( (v23 & 1) != 0 )
      *(_DWORD *)&v22[4 * v23 - 4] = -17891602;
    goto LABEL_48;
  }
LABEL_12:
  ++*((_DWORD *)BaseAddress + 161);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
    v10,
    BaseAddress,
    BaseAddressa,
    RegionSize);
  return 0;
}
