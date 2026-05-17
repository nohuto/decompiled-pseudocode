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
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // edx
  __int64 result; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  int HeapProtection; // r15d
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r8d
  _QWORD v23[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp+38h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v26; // [rsp+A8h] [rbp+48h] BYREF

  v26 = 0LL;
  v23[0] = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v24 = 0LL;
  v25 = 0LL;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(a1, v23);
  if ( v5 )
  {
    v23[0] >>= 4;
    v6 = RtlpCoalesceFreeBlocks(a1, v5, v23, 0LL);
    RtlpInsertFreeBlock(a1, v6);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v7 = *(_DWORD *)(v6 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v6 + 8) = v7;
      if ( HIBYTE(v7) != ((unsigned __int8)v7 ^ (unsigned __int8)(BYTE1(v7) ^ BYTE2(v7))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    return v6;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_7;
  v9 = a2 + 0x2000;
  v10 = a2 + 0x2000;
  if ( a2 + 0x2000 <= *(_QWORD *)(a1 + 160) )
    v10 = *(_QWORD *)(a1 + 160);
  if ( (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408)) && v10 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  v24 = (v10 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v24 >= 0xFD0000 )
    v24 = 16580608LL;
  HeapProtection = RtlpGetHeapProtection(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v25, 0LL, &v24, 0x2000, HeapProtection) < 0 )
  {
    while ( v24 != v9 )
    {
      v24 >>= 1;
      if ( v24 < v9 )
        v24 = a2 + 0x2000;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v25, 0LL, &v24, 0x2000, HeapProtection) >= 0 )
        goto LABEL_19;
    }
    ++*(_DWORD *)(a1 + 632);
    goto LABEL_7;
  }
LABEL_19:
  v12 = a2 + 4096;
  *(_QWORD *)(a1 + 160) += v24;
  if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
    v12 = *(_QWORD *)(a1 + 168);
  v13 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v26 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(v26, v13, a1, (__int64 *)(a1 + 376))
    || (int)ZwAllocateVirtualMemory(-1LL, &v25, 0LL, &v26, 4096, HeapProtection) < 0
    || !(unsigned __int8)RtlpInitializeHeapSegment(a1, v25, 112, v15, 2, v25, v25 + v26, v25 + v24 - 4096) )
  {
    RtlpSecMemFreeVirtualMemory(v14, &v25, &v24, 0x8000LL);
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
  v16 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v17 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v17 = 2147353472LL;
  if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapCommit(a1, v25, v26, 4LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v16 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v25 + 64), v26, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v16);
  }
  v18 = 2147353482LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v19 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v19 = 2147353482LL;
  if ( *(_BYTE *)v19 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v18 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v25 + 64), v26, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v18);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v20 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v20 = 2147353480LL;
  if ( *(_BYTE *)v20 )
    RtlpHeapLogRangeReserve(a1, v25, v24);
  v21 = *(_QWORD *)(v25 + 64);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v22 = *(_DWORD *)(v21 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v21 + 8) = v22;
    if ( HIBYTE(v22) != ((unsigned __int8)v22 ^ (unsigned __int8)(BYTE1(v22) ^ BYTE2(v22))) )
      RtlpAnalyzeHeapFailure(a1, v21);
  }
  return *(_QWORD *)(v25 + 64);
}
