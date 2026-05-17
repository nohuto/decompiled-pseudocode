/*
 * XREFs of RtlpInitializeHeapSegment @ 0x18003771C
 * Callers:
 *     RtlpExtendHeap @ 0x180028BE0 (RtlpExtendHeap.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapProtection @ 0x180025250 (RtlpGetHeapProtection.c)
 *     RtlLogStackBackTraceEx @ 0x1800257CC (RtlLogStackBackTraceEx.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180026290 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpCreateUCREntry @ 0x1800290B0 (RtlpCreateUCREntry.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpInsertFreeBlock @ 0x18005A0B0 (RtlpInsertFreeBlock.c)
 *     RtlpLogHeapCommit @ 0x1801170C8 (RtlpLogHeapCommit.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  unsigned __int64 v9; // r15
  __int64 v11; // r14
  unsigned __int64 v12; // r8
  signed __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // r15
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r8
  unsigned __int64 *v22; // rbx
  __int64 *v23; // rax
  __int16 v25; // ax
  __int64 v26; // rdx
  int HeapProtection; // eax
  __int64 v28; // rcx
  __int64 v29[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int NtGlobalFlag; // [rsp+88h] [rbp+48h]

  v29[0] = 0LL;
  v9 = a8;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v11 = a3 + 15;
  v12 = a7;
  v13 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
  a8 = (__int64)(a8 - a6) / 4096;
  v14 = v13 + a2;
  v15 = v13 + a2 + 80;
  if ( v15 >= a7 )
  {
    if ( v15 < v9 )
    {
      v26 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
      v29[0] = (v14 - a7 + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v29[0], v26, a1, (__int64 *)(a1 + 376)) )
      {
        HeapProtection = RtlpGetHeapProtection(a1, 1);
        if ( (int)ZwAllocateVirtualMemory(-1LL, &a7, 0LL, v29, 4096, HeapProtection) >= 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v28 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v28 = 2147353472LL;
          if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a1, a7, v29[0], 3LL);
          v12 = v29[0] + a7;
          a7 += v29[0];
          goto LABEL_3;
        }
      }
      ++*(_DWORD *)(a1 + 632);
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 8) = v13 >> 4;
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  v16 = (__int64)(v9 - v12) / 4096;
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v25 = RtlLogStackBackTraceEx(1u);
    v12 = a7;
    *(_WORD *)(a2 + 88) = v25;
  }
  v17 = a8;
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  *(_DWORD *)(a2 + 56) = v17;
  v18 = (unsigned int)(v17 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v18;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v14;
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a1 + 576) += v18;
  *(_QWORD *)(a1 + 568) += v18;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v14 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v19 = *(_QWORD *)(a2 + 40);
  if ( v19 == a2 )
  {
    LOBYTE(v20) = 0;
  }
  else
  {
    v20 = ((unsigned __int64)v13 >> 16) + 1;
    if ( v20 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v19, v14, a2, 0LL, 0LL);
      v12 = a7;
    }
  }
  *(_BYTE *)(v14 + 14) = v20;
  RtlpCreateUCREntry(a1, a2, (__int64 *)(v12 - 48), (unsigned int)((_DWORD)v16 << 12), v14, v29);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v29[0] )
    RtlpInsertFreeBlock(a1, v14);
  v21 = a1 + 288;
  v22 = (unsigned __int64 *)(a2 + 24);
  v23 = *(__int64 **)(a1 + 296);
  if ( *v23 == a1 + 288 )
  {
    *v22 = v21;
    v22[1] = (unsigned __int64)v23;
    *v23 = (__int64)v22;
    *(_QWORD *)(a1 + 296) = v22;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v21, 0, *v23, 0LL);
  }
  ++*(_DWORD *)(a1 + 600);
  return 1;
}
