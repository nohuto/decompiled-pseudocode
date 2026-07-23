/*
 * XREFs of RtlpExtendHeap @ 0x18000CB60
 * Callers:
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpFindAndCommitPages @ 0x18000D030 (RtlpFindAndCommitPages.c)
 *     RtlpCoalesceFreeBlocks @ 0x18000EB10 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpInsertFreeBlock @ 0x18000FC70 (RtlpInsertFreeBlock.c)
 *     RtlpLogHeapCommit @ 0x1800235BC (RtlpLogHeapCommit.c)
 *     RtlpInitializeHeapSegment @ 0x180025C40 (RtlpInitializeHeapSegment.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028580 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetHeapProtection @ 0x1800288C0 (RtlpGetHeapProtection.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1800DCC00 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F2038 (RtlpLogHeapExtendEvent.c)
 *     RtlpCoalesceHeap @ 0x180106F80 (RtlpCoalesceHeap.c)
 *     RtlpHeapLogRangeReserve @ 0x180111834 (RtlpHeapLogRangeReserve.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpExtendHeap(unsigned __int64 *BaseAddress, unsigned __int64 a2)
{
  _BYTE *v4; // rdi
  __int64 v5; // rdi
  int v6; // edx
  __int64 result; // rax
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // rcx
  ULONG Protect; // r15d
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
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
  PVOID BaseAddressa; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR v24; // [rsp+A8h] [rbp+48h] BYREF

  v24 = 0LL;
  v21[0] = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  RegionSize = 0LL;
  BaseAddressa = 0LL;
  v4 = 0LL;
  if ( RtlpFindAndCommitPages(BaseAddress, v21) )
  {
    v21[0] >>= 4;
    v5 = RtlpCoalesceFreeBlocks(BaseAddress);
    RtlpInsertFreeBlock(BaseAddress, v5, v21[0]);
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v6 = *(_DWORD *)(v5 + 8) ^ *((_DWORD *)BaseAddress + 34);
      *(_DWORD *)(v5 + 8) = v6;
      if ( HIBYTE(v6) != ((unsigned __int8)v6 ^ (unsigned __int8)(BYTE1(v6) ^ BYTE2(v6))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v5);
    }
    return v5;
  }
  if ( (BaseAddress[14] & 2) == 0 )
    goto LABEL_7;
  v8 = a2 + 0x2000;
  v9 = a2 + 0x2000;
  if ( a2 + 0x2000 <= BaseAddress[20] )
    v9 = BaseAddress[20];
  if ( (*((_BYTE *)BaseAddress + 418) != 2 || !BaseAddress[51]) && v9 >= 0x3F4000 )
    *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
  RegionSize = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( RegionSize >= 0xFD0000 )
    RegionSize = 16580608LL;
  Protect = RtlpGetHeapProtection(BaseAddress);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
  {
    while ( RegionSize != v8 )
    {
      RegionSize >>= 1;
      if ( RegionSize < v8 )
        RegionSize = a2 + 0x2000;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) >= 0 )
        goto LABEL_19;
    }
    ++*((_DWORD *)BaseAddress + 160);
    goto LABEL_7;
  }
LABEL_19:
  v11 = a2 + 4096;
  BaseAddress[20] += RegionSize;
  if ( a2 + 4096 <= BaseAddress[21] )
    v11 = BaseAddress[21];
  v12 = BaseAddress[72] - BaseAddress[84];
  v24 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(v24, v12, BaseAddress, BaseAddress + 47)
    || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &v24, 0x1000u, Protect) < 0
    || !(unsigned __int8)RtlpInitializeHeapSegment(
                           BaseAddress,
                           2,
                           (__int64)BaseAddressa,
                           (char *)BaseAddressa + v24,
                           (__int64)BaseAddressa + RegionSize - 4096) )
  {
    RtlpSecMemFreeVirtualMemory(v13, &BaseAddressa, &RegionSize, 0x8000LL);
LABEL_7:
    if ( *((char *)BaseAddress + 112) >= 0
      || (result = RtlpCoalesceHeap(BaseAddress), (v4 = (_BYTE *)result) == 0LL)
      || *(unsigned __int16 *)(result + 8) < a2 )
    {
      result = 0LL;
      if ( v4 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v4[11] = v4[8] ^ v4[9] ^ v4[10];
          *((_DWORD *)v4 + 2) ^= *((_DWORD *)BaseAddress + 34);
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
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, v24, 4LL);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(
      (int)BaseAddress,
      *((_QWORD *)BaseAddressa + 8),
      v24,
      16 * BaseAddress[24],
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
      (int)BaseAddress,
      *((_QWORD *)BaseAddressa + 8),
      v24,
      16 * BaseAddress[24],
      (HANDLE)*(unsigned __int8 *)v16);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v18 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v18 = 2147353480LL;
  if ( *(_BYTE *)v18 )
    RtlpHeapLogRangeReserve(BaseAddress, BaseAddressa, RegionSize);
  v19 = *((_QWORD *)BaseAddressa + 8);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v20 = *(_DWORD *)(v19 + 8) ^ *((_DWORD *)BaseAddress + 34);
    *(_DWORD *)(v19 + 8) = v20;
    if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v19);
  }
  return *((_QWORD *)BaseAddressa + 8);
}
