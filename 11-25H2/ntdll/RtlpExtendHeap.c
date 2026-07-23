/*
 * XREFs of RtlpExtendHeap @ 0x180028BE0
 * Callers:
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapProtection @ 0x180025250 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180026290 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpFindAndCommitPages @ 0x180029360 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x18003771C (RtlpInitializeHeapSegment.c)
 *     RtlpCoalesceFreeBlocks @ 0x180057A50 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     RtlpInsertFreeBlock @ 0x18005A0B0 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceHeap @ 0x180097CE0 (RtlpCoalesceHeap.c)
 *     RtlpLogHeapExtendEvent @ 0x180097F08 (RtlpLogHeapExtendEvent.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1801170C8 (RtlpLogHeapCommit.c)
 *     RtlpHeapLogRangeReserve @ 0x1801197F0 (RtlpHeapLogRangeReserve.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rdi
  __int64 v5; // rdi
  int v6; // edx
  __int64 result; // rax
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // rcx
  ULONG Protect; // r15d
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  ULONG_PTR v21[2]; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR v24; // [rsp+A8h] [rbp+48h] BYREF

  v24 = 0LL;
  v21[0] = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  RegionSize = 0LL;
  BaseAddress = 0LL;
  v4 = 0LL;
  if ( RtlpFindAndCommitPages(a1, v21) )
  {
    v21[0] >>= 4;
    v5 = RtlpCoalesceFreeBlocks(a1);
    RtlpInsertFreeBlock(a1, v5);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v6 = *(_DWORD *)(v5 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v5 + 8) = v6;
      if ( HIBYTE(v6) != ((unsigned __int8)v6 ^ (unsigned __int8)(BYTE1(v6) ^ BYTE2(v6))) )
        RtlpAnalyzeHeapFailure(a1, v5);
    }
    return v5;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_7;
  v8 = a2 + 0x2000;
  v9 = a2 + 0x2000;
  if ( a2 + 0x2000 <= *(_QWORD *)(a1 + 160) )
    v9 = *(_QWORD *)(a1 + 160);
  if ( (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408)) && v9 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  RegionSize = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( RegionSize >= 0xFD0000 )
    RegionSize = 16580608LL;
  Protect = RtlpGetHeapProtection((_DWORD *)a1, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
  {
    while ( RegionSize != v8 )
    {
      RegionSize >>= 1;
      if ( RegionSize < v8 )
        RegionSize = a2 + 0x2000;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) >= 0 )
        goto LABEL_19;
    }
    ++*(_DWORD *)(a1 + 632);
    goto LABEL_7;
  }
LABEL_19:
  v11 = a2 + 4096;
  *(_QWORD *)(a1 + 160) += RegionSize;
  if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
    v11 = *(_QWORD *)(a1 + 168);
  v12 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v24 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(v24, v12, a1, (__int64 *)(a1 + 376))
    || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v24, 0x1000u, Protect) < 0
    || !(unsigned __int8)RtlpInitializeHeapSegment(
                           (PVOID)a1,
                           2,
                           (__int64)BaseAddress,
                           (char *)BaseAddress + v24,
                           (__int64)BaseAddress + RegionSize - 4096) )
  {
    RtlpSecMemFreeVirtualMemory(v13, &BaseAddress, &RegionSize, 0x8000LL);
LABEL_7:
    if ( *(char *)(a1 + 112) >= 0
      || (result = RtlpCoalesceHeap(a1), (v4 = (_BYTE *)result) == 0LL)
      || *(unsigned __int16 *)(result + 8) < a2 )
    {
      result = 0LL;
      if ( v4 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v4[11] = v4[8] ^ v4[9] ^ v4[10];
          *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
        }
      }
    }
    return result;
  }
  v14 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v15 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v15 = 2147353472LL;
  if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapCommit(a1, BaseAddress, v24, 4LL);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(
      a1,
      *((_QWORD *)BaseAddress + 8),
      v24,
      16 * *(_QWORD *)(a1 + 192),
      (HANDLE)*(unsigned __int8 *)v14);
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
      *((_QWORD *)BaseAddress + 8),
      v24,
      16 * *(_QWORD *)(a1 + 192),
      (HANDLE)*(unsigned __int8 *)v16);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v18 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v18 = 2147353480LL;
  if ( *(_BYTE *)v18 )
    RtlpHeapLogRangeReserve(a1, BaseAddress, RegionSize);
  v19 = *((_QWORD *)BaseAddress + 8);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v20 = *(_DWORD *)(v19 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v19 + 8) = v20;
    if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
      RtlpAnalyzeHeapFailure(a1, v19);
  }
  return *((_QWORD *)BaseAddress + 8);
}
