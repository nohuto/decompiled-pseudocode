/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x180096B50
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
 *     RtlpInsertUCRBlock @ 0x180028B00 (RtlpInsertUCRBlock.c)
 *     RtlpCreateUCREntry @ 0x1800290B0 (RtlpCreateUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x180029C48 (RtlpRemoveUCRBlock.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180058550 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpCollectFreeBlocks @ 0x180059C20 (RtlpCollectFreeBlocks.c)
 *     RtlpInsertFreeBlock @ 0x18005A0B0 (RtlpInsertFreeBlock.c)
 *     RtlpHeapHandleError @ 0x18005A8A0 (RtlpHeapHandleError.c)
 *     RtlpBreakPointHeap @ 0x18005A8C0 (RtlpBreakPointHeap.c)
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlpLogHeapContractEvent @ 0x18009B2A8 (RtlpLogHeapContractEvent.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapDecommit @ 0x1800E1620 (RtlpLogHeapDecommit.c)
 *     RtlCompareMemoryUlong @ 0x180167520 (RtlCompareMemoryUlong.c)
 */

void __fastcall RtlpDeCommitFreeBlock(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // rax
  char v5; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  int v15; // edx
  int v16; // edx
  __int64 *v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  char v24; // al
  __int16 v25; // cx
  unsigned __int64 v26; // rdi
  SIZE_T v27; // r14
  SIZE_T v28; // r12
  int v29; // edx
  __int64 *v30; // rcx
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // r9
  unsigned int v36; // r9d
  char v37; // al
  __int16 v38; // cx
  SIZE_T v39; // r14
  SIZE_T v40; // r12
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // r13
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  _QWORD *v48; // rdx
  unsigned __int64 v49; // r8
  __int64 *v50; // r12
  int v51; // edx
  __int64 v52; // rcx
  unsigned __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rax
  _BYTE *v58; // rsi
  __int64 v59; // rdi
  unsigned __int64 v60; // rdi
  bool v61; // cc
  __int64 v62; // rdx
  unsigned __int64 v63; // rdi
  unsigned __int64 v64; // r8
  __int64 v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  __int64 v70; // r12
  __int64 v71; // rcx
  _BYTE *v72; // rsi
  __int64 v73; // rdi
  unsigned __int64 v74; // rdi
  __int64 v75; // rdx
  unsigned __int64 v76; // rdi
  unsigned __int64 v77; // r8
  __int64 v78; // rcx
  __int64 v79; // rdi
  __int64 v80; // rcx
  __int64 v81; // r9
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rax
  void *TraceHandle; // rax
  bool v86; // zf
  __int64 v87; // rax
  unsigned __int64 v88; // rax
  int v89[2]; // [rsp+40h] [rbp-30h] BYREF
  int v90[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v91; // [rsp+50h] [rbp-20h]
  __int64 v92; // [rsp+58h] [rbp-18h]
  unsigned __int64 v93; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v94; // [rsp+68h] [rbp-8h]
  char v95; // [rsp+B0h] [rbp+40h]
  unsigned __int64 v96; // [rsp+C0h] [rbp+50h] BYREF

  v96 = a3;
  v4 = *(_QWORD *)(a1 + 360);
  v5 = 0;
  *(_QWORD *)v90 = 0LL;
  v7 = a3;
  *(_QWORD *)v89 = 0LL;
  v93 = 0LL;
  v92 = 0LL;
  v95 = 0;
  if ( RtlpHeapKey != v4 )
    goto LABEL_31;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 660);
      v82 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
      v86 = v82 == a2 + 80;
      v83 = v82 + 4096;
      if ( !v86 )
        v83 = v82;
      v84 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
      if ( v84 > v83 )
        *(_QWORD *)(a1 + 664) -= v84 - v83;
    }
    v11 = a2;
    goto LABEL_68;
  }
  if ( a3 < *(_QWORD *)(a1 + 176)
    || (v10 = a3 + *(_QWORD *)(a1 + 192), v10 < *(_QWORD *)(a1 + 184))
    || v10 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 688) + 4) )
  {
LABEL_31:
    RtlpInsertFreeBlock(a1, a2, a3);
    return;
  }
  v11 = a2;
  v12 = *(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  v91 = a2;
  v12 *= 16LL;
  v13 = a2 - v12;
  if ( a2 - v12 != a2
    && ((*(_BYTE *)(v13 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v29 = *(_DWORD *)(v13 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v13 + 8) = v29;
      if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE1(v29) ^ BYTE2(v29))) )
        RtlpAnalyzeHeapFailure(a1, v13);
    }
    v30 = *(__int64 **)(v13 + 24);
    v31 = *(_QWORD *)(v13 + 16);
    v94 = v30;
    v32 = *v30;
    v33 = *(_QWORD *)(v31 + 8);
    if ( *v30 == v13 + 16 && v32 == v33 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v13 + 8);
      v34 = *(_QWORD *)(a1 + 312);
      if ( v34 )
      {
        while ( 1 )
        {
          v35 = *(unsigned int *)(v34 + 8);
          if ( *(unsigned __int16 *)(v13 + 8) < v35 )
          {
            v36 = *(unsigned __int16 *)(v13 + 8);
            goto LABEL_52;
          }
          if ( !*(_QWORD *)v34 )
            break;
          v34 = *(_QWORD *)v34;
        }
        v36 = v35 - 1;
LABEL_52:
        RtlpHeapRemoveListEntry(a1, v34, 1, (__int64 *)(v13 + 16), v36, *(unsigned __int16 *)(v13 + 8));
        v30 = v94;
      }
      *v30 = v31;
      *(_QWORD *)(v31 + 8) = v30;
      if ( (*(_BYTE *)(v13 + 10) & 8) == 0 || RtlpCommitBlock(a1, v13) )
      {
        v37 = *(_BYTE *)(v13 + 10);
        if ( (v37 & 4) != 0 )
        {
          v39 = 16LL * *(unsigned __int16 *)(v13 + 8) - 32;
          if ( (v37 & 2) != 0 && v39 > 4 )
            v39 = 16LL * *(unsigned __int16 *)(v13 + 8) - 36;
          v40 = RtlCompareMemoryUlong((PVOID)(v13 + 32), v39, 0xFEEEFEEE);
          if ( v40 != v39 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v13,
              (const void *)(v40 + v13 + 32));
            RtlpBreakPointHeap();
            v7 = v96;
          }
        }
        v11 = v13;
        v7 += *(unsigned __int16 *)(v13 + 8);
        *(_BYTE *)(v13 + 10) = 0;
        *(_BYTE *)(v13 + 15) = 0;
        *(_WORD *)(v13 + 8) = v7;
        v38 = *(_WORD *)(a1 + 140) ^ v7;
        v91 = v13;
        v96 = v7;
        *(_WORD *)(v13 + 16 * v7 + 12) = v38;
      }
      else
      {
        LOBYTE(v81) = 1;
        RtlpDeCommitFreeBlock(a1, v13, *(unsigned __int16 *)(v13 + 8), v81);
      }
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v13 + 16, v33, v32, 0LL);
    }
  }
  v14 = v11 + 16 * v7;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v15 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v14 + 8);
    if ( HIBYTE(v15) != ((unsigned __int8)v15 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v14 + 8)) >> 8) ^ BYTE2(v15))) )
      RtlpLogHeapFailure(3, a1, v11 + 16 * v7, 0LL, 0LL, 0LL);
    v7 = v96;
  }
  while ( ((*(_BYTE *)(v14 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v16 = *(_DWORD *)(v14 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v14 + 8) = v16;
      if ( HIBYTE(v16) != ((unsigned __int8)v16 ^ (unsigned __int8)(BYTE1(v16) ^ BYTE2(v16))) )
        RtlpAnalyzeHeapFailure(a1, v14);
    }
    v17 = *(__int64 **)(v14 + 24);
    v18 = *(_QWORD *)(v14 + 16);
    v94 = v17;
    v19 = *v17;
    v20 = *(_QWORD *)(v18 + 8);
    if ( *v17 == v14 + 16 && v19 == v20 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v14 + 8);
      v21 = *(_QWORD *)(a1 + 312);
      if ( v21 )
      {
        v22 = *(unsigned __int16 *)(v14 + 8);
        while ( 1 )
        {
          v23 = *(unsigned int *)(v21 + 8);
          if ( v22 < v23 )
            break;
          if ( !*(_QWORD *)v21 )
          {
            LODWORD(v22) = v23 - 1;
            break;
          }
          v21 = *(_QWORD *)v21;
        }
        RtlpHeapRemoveListEntry(a1, v21, 1, (__int64 *)(v14 + 16), v22, *(unsigned __int16 *)(v14 + 8));
        v17 = v94;
      }
      *v17 = v18;
      *(_QWORD *)(v18 + 8) = v17;
      if ( (*(_BYTE *)(v14 + 10) & 8) == 0 || RtlpCommitBlock(a1, v14) )
      {
        v24 = *(_BYTE *)(v14 + 10);
        if ( (v24 & 4) != 0 )
        {
          v27 = 16LL * *(unsigned __int16 *)(v14 + 8) - 32;
          if ( (v24 & 2) != 0 && v27 > 4 )
            v27 = 16LL * *(unsigned __int16 *)(v14 + 8) - 36;
          v28 = RtlCompareMemoryUlong((PVOID)(v14 + 32), v27, 0xFEEEFEEE);
          if ( v28 != v27 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v14,
              (const void *)(v28 + v14 + 32));
            RtlpBreakPointHeap();
            v7 = v96;
          }
          v11 = v91;
        }
        *(_BYTE *)(v11 + 10) = 0;
        *(_BYTE *)(v11 + 15) = 0;
        v7 += *(unsigned __int16 *)(v14 + 8);
        *(_WORD *)(v11 + 8) = v7;
        v25 = *(_WORD *)(a1 + 140) ^ v7;
        v96 = v7;
        *(_WORD *)(v11 + 16 * v7 + 12) = v25;
        break;
      }
      LOBYTE(v41) = 1;
      RtlpDeCommitFreeBlock(a1, v14, *(unsigned __int16 *)(v14 + 8), v41);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v14 + 16, v20, v19, 0LL);
    }
  }
  if ( v7 - 257 <= 0xFDFF )
  {
    RtlpInsertFreeBlock(a1, v11, v7);
    v26 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
    if ( v26 < *(_QWORD *)(a1 + 672) - (*(_QWORD *)(a1 + 672) >> 4)
      && v26 > *(_QWORD *)(a1 + 680) - (*(_QWORD *)(a1 + 680) >> 2) )
    {
      RtlpCollectFreeBlocks(a1);
      *(_QWORD *)(a1 + 680) = v26;
      *(_QWORD *)(a1 + 672) = v26;
    }
    return;
  }
  v5 = 0;
LABEL_68:
  v42 = *(unsigned __int8 *)(a2 + 14);
  if ( (_BYTE)v42 )
    v43 = (a2 & 0xFFFFFFFFFFFF0000uLL) - (v42 << 16) + 0x10000;
  else
    v43 = a1;
  v44 = v11 + 16 * v7;
  if ( *(_BYTE *)(v44 + 15) == 3 )
  {
    RtlpRemoveUCRBlock(a1, (__int64 *)(v44 + 16));
    v92 = *(_QWORD *)(v44 + 48);
    v87 = *(_QWORD *)(v44 + 56);
    --*(_DWORD *)(v43 + 84);
    v91 = v87;
    *(_DWORD *)(v43 + 80) -= *(_QWORD *)(v44 + 56) >> 12;
    *(_QWORD *)(a1 + 576) += *(_QWORD *)(v44 + 56);
    --*(_DWORD *)(a1 + 604);
    v88 = *(_QWORD *)(v44 + 56);
    if ( v88 >= 0xFF000 )
      *(_QWORD *)(a1 + 584) -= v88;
    v5 = 1;
    v7 += (*(_QWORD *)(v44 + 56) >> 4) + 64LL;
    v95 = 1;
    v96 = v7;
  }
  else
  {
    v91 = 0LL;
  }
  if ( *(_WORD *)(a1 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_73;
  *(_QWORD *)v90 = v11;
  v48 = *(_QWORD **)(v43 + 96);
  v49 = v11;
  while ( (_QWORD *)(v43 + 96) != v48 )
  {
    v50 = v48 - 2;
    if ( v48[2] + v48[3] == v11 )
      goto LABEL_89;
    v48 = (_QWORD *)*v48;
  }
  v50 = 0LL;
LABEL_89:
  if ( a4 && !v50 )
  {
    v5 = v95;
LABEL_73:
    v45 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v90 = v45;
    if ( v45 == v11 + 80 )
    {
      v45 += 4096LL;
      *(_QWORD *)v90 = v45;
    }
    v46 = 16 * v7;
    if ( !v5 )
      v46 -= 32LL;
    v47 = (v11 + v46) & 0xFFFFFFFFFFFFF000uLL;
    if ( v47 < v45 )
    {
      if ( RtlpHeapErrorHandlerThreshold < 1 || !v5 )
        goto LABEL_79;
      if ( !NtCurrentPeb()->Ldr )
        goto LABEL_165;
      goto LABEL_166;
    }
    v69 = v47 - v45;
    v70 = 2147353472LL;
    *(_QWORD *)v89 = v69;
    if ( a4 || *(_BYTE *)(v44 + 15) == 3 )
    {
      if ( !v69 )
      {
LABEL_133:
        if ( !v95 )
        {
          v72 = (_BYTE *)(*(_QWORD *)v90 + *(_QWORD *)v89);
          v73 = 16 * v7;
          *(_WORD *)(*(_QWORD *)v90 + *(_QWORD *)v89 + 12LL) = *(_WORD *)(a1 + 140);
          if ( v73 + v11 == *(_QWORD *)v89 + *(_QWORD *)v90 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v72[11] = v72[8] ^ v72[9] ^ v72[10];
              *((_DWORD *)v72 + 2) ^= *(_DWORD *)(a1 + 136);
            }
          }
          else
          {
            v72[15] = 0;
            v72[10] = 0;
            v74 = (v11 + v73 - *(_QWORD *)v89 - *(_QWORD *)v90) >> 4;
            v61 = RtlpHeapErrorHandlerThreshold < 1;
            *((_WORD *)v72 + 4) = v74;
            if ( !v61 && (unsigned __int16)v74 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("(LONG)FreeEntry->Size > 1");
              RtlpHeapHandleError(1LL);
            }
            v72[11] = 0;
            v75 = *(_QWORD *)(v43 + 40);
            if ( v75 == v43 )
            {
              LOBYTE(v76) = 0;
            }
            else
            {
              v76 = ((unsigned __int64)&v72[-v43] >> 16) + 1;
              if ( v76 >= 0xFE )
                RtlpLogHeapFailure(3, v75, (__int64)v72, v43, 0LL, 0LL);
            }
            v77 = *((unsigned __int16 *)v72 + 4);
            v72[14] = v76;
            RtlpInsertFreeBlock(a1, (unsigned __int64)v72, v77);
          }
        }
        RtlpCreateUCREntry(a1, v43, (__int64 *)(*(_QWORD *)v90 - 48LL), *(__int64 *)v89, v11, (__int64 *)&v93);
        RtlpInsertFreeBlock(a1, v11, v93);
        if ( RtlGetCurrentServiceSessionId() )
          v78 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v78 = 2147353472LL;
        if ( *(_BYTE *)v78 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v70 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(
            a1,
            v90[0],
            v89[0],
            16 * *(_QWORD *)(a1 + 192),
            0,
            0LL,
            (HANDLE)*(unsigned __int8 *)v70);
        }
        v79 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v80 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v80 = 2147353482LL;
        if ( *(_BYTE *)v80 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v79 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapContractEvent(
            a1,
            v90[0],
            v89[0],
            16 * *(_QWORD *)(a1 + 192),
            0,
            0LL,
            (HANDLE)*(unsigned __int8 *)v79);
        }
        return;
      }
    }
    else
    {
      if ( !v69 )
        goto LABEL_79;
      if ( v69 < *(_QWORD *)(a1 + 176) )
      {
        RtlpInsertFreeBlock(a1, v11, v7);
        return;
      }
    }
    ++*(_DWORD *)(a1 + 612);
    if ( (int)RtlpSecMemFreeVirtualMemory(v69, v90, v89, 0x4000LL) >= 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
      {
        v7 = v96;
        v71 = (__int64)NtCurrentPeb()->SharedData + 550;
      }
      else
      {
        v71 = 2147353472LL;
      }
      if ( *(_BYTE *)v71 )
      {
        if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(a1, *(_QWORD *)v90, *(_QWORD *)v89, 6LL);
        v7 = v96;
      }
      goto LABEL_133;
    }
    ++*(_DWORD *)(a1 + 628);
    v86 = v95 == 0;
LABEL_195:
    if ( !v86 )
    {
      RtlpCreateUCREntry(a1, v43, (__int64 *)(v92 - 48), v91, v11, (__int64 *)&v96);
      RtlpInsertFreeBlock(a1, v11, v96);
      return;
    }
LABEL_79:
    RtlpInsertFreeBlock(a1, v11, v7);
    return;
  }
  v51 = RtlpHeapErrorHandlerThreshold;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v50 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v11);
    else
      DbgPrint("HEAP: ", (unsigned int)RtlpHeapErrorHandlerThreshold, v11);
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError(1LL);
    v49 = *(_QWORD *)v90;
    v51 = RtlpHeapErrorHandlerThreshold;
    v7 = v96;
  }
  v52 = 16 * v7;
  if ( !v95 )
    v52 -= 32LL;
  v53 = ((v11 + v52) & 0xFFFFFFFFFFFFF000uLL) - v49;
  *(_QWORD *)v89 = v53;
  if ( !v53 )
  {
    if ( v51 < 1 || !v95 )
      goto LABEL_79;
    if ( !NtCurrentPeb()->Ldr )
    {
LABEL_165:
      DbgPrint("HEAP: ");
LABEL_167:
      DbgPrint("(!TrailingUCR)");
      RtlpHeapHandleError(1LL);
      v7 = v96;
      goto LABEL_79;
    }
LABEL_166:
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    goto LABEL_167;
  }
  if ( (int)RtlpSecMemFreeVirtualMemory(v53, v90, v89, 0x4000LL) < 0 )
  {
    ++*(_DWORD *)(a1 + 628);
    v86 = v95 == 0;
    goto LABEL_195;
  }
  v54 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v7 = v96;
    v55 = (__int64)NtCurrentPeb()->SharedData + 550;
  }
  else
  {
    v55 = 2147353472LL;
  }
  if ( *(_BYTE *)v55 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapDecommit(a1, *(_QWORD *)v90, *(_QWORD *)v89, 5LL);
    v7 = v96;
  }
  ++*(_DWORD *)(a1 + 612);
  v56 = v50[5];
  if ( v56 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) -= v56;
  RtlpRemoveUCRBlock(a1, v50);
  v50[5] += *(_QWORD *)v89;
  RtlpInsertUCRBlock(a1, v50);
  *(_DWORD *)(v43 + 80) += *(_QWORD *)v89 >> 12;
  *(_QWORD *)(a1 + 576) -= *(_QWORD *)v89;
  v57 = v50[5];
  if ( v57 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) += v57;
  if ( !v95 )
  {
    v58 = (_BYTE *)(*(_QWORD *)v90 + *(_QWORD *)v89);
    v59 = 16 * v7;
    *(_WORD *)(*(_QWORD *)v90 + *(_QWORD *)v89 + 12LL) = *(_WORD *)(a1 + 140);
    if ( v59 + v11 == *(_QWORD *)v89 + *(_QWORD *)v90 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v58[11] = v58[8] ^ v58[9] ^ v58[10];
        *((_DWORD *)v58 + 2) ^= *(_DWORD *)(a1 + 136);
      }
    }
    else
    {
      v58[15] = 0;
      v58[10] = 0;
      v60 = (unsigned __int64)(v59 - *(_QWORD *)v89) >> 4;
      v61 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v58 + 4) = v60;
      if ( !v61 && (unsigned __int16)v60 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError(1LL);
      }
      v58[11] = 0;
      v62 = *(_QWORD *)(v43 + 40);
      if ( v62 == v43 )
      {
        LOBYTE(v63) = 0;
      }
      else
      {
        v63 = ((unsigned __int64)&v58[-v43] >> 16) + 1;
        if ( v63 >= 0xFE )
          RtlpLogHeapFailure(3, v62, (__int64)v58, v43, 0LL, 0LL);
      }
      v64 = *((unsigned __int16 *)v58 + 4);
      v58[14] = v63;
      RtlpInsertFreeBlock(a1, (unsigned __int64)v58, v64);
    }
    v54 = 2147353472LL;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v65 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v65 = 2147353472LL;
  if ( *(_BYTE *)v65 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v54 = (__int64)NtCurrentPeb()->SharedData + 550;
    TraceHandle = (void *)*(unsigned __int8 *)v54;
    v66 = v91;
    RtlpLogHeapContractEvent(a1, v90[0], v89[0], 16 * *(_QWORD *)(a1 + 192), v95, v91, TraceHandle);
  }
  else
  {
    v66 = v91;
  }
  v67 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v68 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v68 = 2147353482LL;
  if ( *(_BYTE *)v68 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v67 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapContractEvent(a1, v90[0], v89[0], 16 * *(_QWORD *)(a1 + 192), v95, v66, (HANDLE)*(unsigned __int8 *)v67);
  }
}
