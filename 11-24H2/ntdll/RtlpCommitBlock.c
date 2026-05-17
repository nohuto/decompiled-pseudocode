/*
 * XREFs of RtlpCommitBlock @ 0x180042A00
 * Callers:
 *     RtlpFreeHeap @ 0x18002D620 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18002EF80 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x18002FC50 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180030A60 (RtlpGrowBlockInPlace.c)
 *     RtlpValidateHeapSegment @ 0x180041A64 (RtlpValidateHeapSegment.c)
 *     RtlpDeCommitFreeBlock @ 0x180042E70 (RtlpDeCommitFreeBlock.c)
 *     RtlpCoalesceHeap @ 0x180044000 (RtlpCoalesceHeap.c)
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 *     RtlZeroHeap @ 0x180143F70 (RtlZeroHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpLogHeapExtendEvent @ 0x180044228 (RtlpLogHeapExtendEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapCommit @ 0x180114118 (RtlpLogHeapCommit.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
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
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v32; // r9
  char *v33; // r8
  unsigned __int64 v34; // rdx
  _OWORD v35[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v36; // [rsp+50h] [rbp-28h]
  unsigned __int64 v37; // [rsp+80h] [rbp+8h] BYREF
  char *v38; // [rsp+88h] [rbp+10h] BYREF

  v2 = (char *)((a2 + 4159) & 0xFFFFFFFFFFFFF000uLL);
  v37 = 0LL;
  v38 = v2;
  if ( v2 == (char *)(a2 + 80) )
  {
    v2 += 4096;
    v38 = v2;
  }
  v5 = *(unsigned __int16 *)(a2 + 8);
  v6 = 0LL;
  v7 = (a2 + 16 * (v5 - 2)) & 0xFFFFFFFFFFFFF000uLL;
  if ( v7 > (unsigned __int64)v2 )
  {
    v6 = v7 - (_QWORD)v2;
    v37 = v7 - (_QWORD)v2;
  }
  v8 = (__int64 *)(a1 + 376);
  if ( dword_1801CC578
    || (v9 = *v8) == 0 && (v9 = qword_1801CDED8, v8 = &qword_1801CDED8, !qword_1801CDED8)
    || v6 + *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664) <= v9 )
  {
    v10 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
    v11 = 64;
    if ( (*(_DWORD *)(a1 + 112) & 0x40000) == 0 )
      v11 = 4;
    memset(v35, 0, sizeof(v35));
    v36 = 0LL;
    if ( !v10
      && ((int)ZwQueryVirtualMemory(-1LL, a1, 0LL, v35, 48LL, 0LL) < 0
       || (BYTE4(v36) & 0x60) == 0
       || *(_QWORD *)&v35[0] != a1) )
    {
      RtlpLogHeapFailure(0, a1, 1LL, DWORD1(v36), 0LL, 0LL);
      v11 = 4;
    }
    v14 = ZwAllocateVirtualMemory(-1LL, &v38, 0LL, &v37, 4096, v11);
    if ( v14 < 0 )
      goto LABEL_27;
    v20 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v12, v15, v16) )
      v21 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v21 = 2147353472LL;
    if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(a1, v38, v37, 8LL);
    *(_QWORD *)(a1 + 664) -= v37;
    --*(_DWORD *)(a1 + 660);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v17, v18, v19) )
      v25 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v25 = 2147353472LL;
    if ( *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v22, v23, v24) )
        v20 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(a1, (_DWORD)v38, v37, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v20);
    }
    v29 = 2147353482LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v22, v23, v24) )
      v30 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v30 = 2147353482LL;
    if ( *(_BYTE *)v30 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v30, v26, v27, v28) )
        v29 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapExtendEvent(a1, (_DWORD)v38, v37, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v29);
    }
    ++*(_DWORD *)(a1 + 624);
    if ( (*(_BYTE *)(a2 + 10) & 4) != 0 )
    {
      v33 = v38;
      v34 = v37 >> 2;
      if ( v37 >> 2 )
      {
        if ( ((unsigned __int8)v38 & 4) == 0 )
          goto LABEL_51;
        *(_DWORD *)v38 = -17891602;
        if ( --v34 )
        {
          v33 += 4;
LABEL_51:
          memset64(v33, 0xFEEEFEEEFEEEFEEEuLL, v34 >> 1);
          if ( (v34 & 1) != 0 )
            *(_DWORD *)&v33[4 * v34 - 4] = -17891602;
        }
      }
    }
    *(_BYTE *)(a2 + 10) &= 0x17u;
    return 1;
  }
  v32 = v8[1];
  if ( v32 )
    RtlpLogHeapFailure(21, a1, 0LL, v32, v6, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664));
  v14 = -1073741523;
LABEL_27:
  ++*(_DWORD *)(a1 + 636);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v14, (const void *)a1, v38, v37);
  return 0;
}
