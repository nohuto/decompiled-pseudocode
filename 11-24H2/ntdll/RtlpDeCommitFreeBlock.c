/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x180042E70
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
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18002FA80 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpCollectFreeBlocks @ 0x180031150 (RtlpCollectFreeBlocks.c)
 *     RtlpInsertFreeBlock @ 0x1800315E0 (RtlpInsertFreeBlock.c)
 *     RtlpHeapHandleError @ 0x180031DD0 (RtlpHeapHandleError.c)
 *     RtlpBreakPointHeap @ 0x180031DF0 (RtlpBreakPointHeap.c)
 *     RtlpCommitBlock @ 0x180042A00 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180042E70 (RtlpDeCommitFreeBlock.c)
 *     RtlpLogHeapContractEvent @ 0x1800475C8 (RtlpLogHeapContractEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18008FA40 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInsertUCRBlock @ 0x18009FB50 (RtlpInsertUCRBlock.c)
 *     RtlpCreateUCREntry @ 0x1800A0100 (RtlpCreateUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x1800A0C98 (RtlpRemoveUCRBlock.c)
 *     RtlpLogHeapDecommit @ 0x1800E4560 (RtlpLogHeapDecommit.c)
 *     RtlCompareMemoryUlong @ 0x180165F90 (RtlCompareMemoryUlong.c)
 */

void __fastcall RtlpDeCommitFreeBlock(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // rax
  char v5; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
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
  unsigned __int64 v27; // r14
  __int64 v28; // r12
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
  unsigned __int64 v39; // r14
  __int64 v40; // r12
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // r13
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  _QWORD *v48; // rdx
  __int64 v49; // r8
  _QWORD *v50; // r12
  int v51; // edx
  __int64 v52; // rcx
  unsigned __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rsi
  __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rax
  _BYTE *v66; // rsi
  __int64 v67; // rdi
  unsigned __int64 v68; // rdi
  bool v69; // cc
  __int64 v70; // rdx
  unsigned __int64 v71; // rdi
  unsigned __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdi
  __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  __int64 v84; // r12
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rcx
  _BYTE *v90; // rsi
  __int64 v91; // rdi
  unsigned __int64 v92; // rdi
  __int64 v93; // rdx
  unsigned __int64 v94; // rdi
  unsigned __int64 v95; // r8
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdi
  __int64 v108; // rcx
  __int64 v109; // r9
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rax
  __int64 v113; // rax
  bool v114; // zf
  __int64 v115; // rax
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v118; // [rsp+48h] [rbp-28h] BYREF
  __int64 v119; // [rsp+50h] [rbp-20h]
  __int64 v120; // [rsp+58h] [rbp-18h]
  unsigned __int64 v121; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v122; // [rsp+68h] [rbp-8h]
  char v123; // [rsp+B0h] [rbp+40h]
  unsigned __int64 v124; // [rsp+C0h] [rbp+50h] BYREF

  v124 = a3;
  v4 = *(_QWORD *)(a1 + 360);
  v5 = 0;
  v118 = 0LL;
  v7 = a3;
  v117 = 0LL;
  v121 = 0LL;
  v120 = 0LL;
  v123 = 0;
  if ( RtlpHeapKey != v4 )
    goto LABEL_31;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 660);
      v110 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
      v114 = v110 == a2 + 80;
      v111 = v110 + 4096;
      if ( !v114 )
        v111 = v110;
      v112 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
      if ( v112 > v111 )
        *(_QWORD *)(a1 + 664) -= v112 - v111;
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
  v119 = a2;
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
    v122 = v30;
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
        v30 = v122;
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
          v40 = RtlCompareMemoryUlong(v13 + 32, v39, 4277075694LL);
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
            v7 = v124;
          }
        }
        v11 = v13;
        v7 += *(unsigned __int16 *)(v13 + 8);
        *(_BYTE *)(v13 + 10) = 0;
        *(_BYTE *)(v13 + 15) = 0;
        *(_WORD *)(v13 + 8) = v7;
        v38 = *(_WORD *)(a1 + 140) ^ v7;
        v119 = v13;
        v124 = v7;
        *(_WORD *)(v13 + 16 * v7 + 12) = v38;
      }
      else
      {
        LOBYTE(v109) = 1;
        RtlpDeCommitFreeBlock(a1, v13, *(unsigned __int16 *)(v13 + 8), v109);
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
    v7 = v124;
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
    v122 = v17;
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
        v17 = v122;
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
          v28 = RtlCompareMemoryUlong(v14 + 32, v27, 4277075694LL);
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
            v7 = v124;
          }
          v11 = v119;
        }
        *(_BYTE *)(v11 + 10) = 0;
        *(_BYTE *)(v11 + 15) = 0;
        v7 += *(unsigned __int16 *)(v14 + 8);
        *(_WORD *)(v11 + 8) = v7;
        v25 = *(_WORD *)(a1 + 140) ^ v7;
        v124 = v7;
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
    RtlpRemoveUCRBlock(a1, v44 + 16);
    v120 = *(_QWORD *)(v44 + 48);
    v115 = *(_QWORD *)(v44 + 56);
    --*(_DWORD *)(v43 + 84);
    v119 = v115;
    *(_DWORD *)(v43 + 80) -= *(_QWORD *)(v44 + 56) >> 12;
    *(_QWORD *)(a1 + 576) += *(_QWORD *)(v44 + 56);
    --*(_DWORD *)(a1 + 604);
    v116 = *(_QWORD *)(v44 + 56);
    if ( v116 >= 0xFF000 )
      *(_QWORD *)(a1 + 584) -= v116;
    v5 = 1;
    v7 += (*(_QWORD *)(v44 + 56) >> 4) + 64LL;
    v123 = 1;
    v124 = v7;
  }
  else
  {
    v119 = 0LL;
  }
  if ( *(_WORD *)(a1 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_73;
  v118 = v11;
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
    v5 = v123;
LABEL_73:
    v45 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    v118 = v45;
    if ( v45 == v11 + 80 )
    {
      v45 += 4096LL;
      v118 = v45;
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
    v83 = v47 - v45;
    v84 = 2147353472LL;
    v117 = v83;
    if ( a4 || *(_BYTE *)(v44 + 15) == 3 )
    {
      if ( !v83 )
      {
LABEL_133:
        if ( !v123 )
        {
          v90 = (_BYTE *)(v118 + v117);
          v91 = 16 * v7;
          *(_WORD *)(v118 + v117 + 12) = *(_WORD *)(a1 + 140);
          if ( v91 + v11 == v117 + v118 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v90[11] = v90[8] ^ v90[9] ^ v90[10];
              *((_DWORD *)v90 + 2) ^= *(_DWORD *)(a1 + 136);
            }
          }
          else
          {
            v90[15] = 0;
            v90[10] = 0;
            v92 = (v11 + v91 - v117 - v118) >> 4;
            v69 = RtlpHeapErrorHandlerThreshold < 1;
            *((_WORD *)v90 + 4) = v92;
            if ( !v69 && (unsigned __int16)v92 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("(LONG)FreeEntry->Size > 1");
              RtlpHeapHandleError();
            }
            v90[11] = 0;
            v93 = *(_QWORD *)(v43 + 40);
            if ( v93 == v43 )
            {
              LOBYTE(v94) = 0;
            }
            else
            {
              v94 = ((unsigned __int64)&v90[-v43] >> 16) + 1;
              if ( v94 >= 0xFE )
                RtlpLogHeapFailure(3, v93, (__int64)v90, v43, 0LL, 0LL);
            }
            v95 = *((unsigned __int16 *)v90 + 4);
            v90[14] = v94;
            RtlpInsertFreeBlock(a1, (unsigned __int64)v90, v95);
          }
        }
        RtlpCreateUCREntry(a1, v43, v118 - 48, v117, v11, (__int64)&v121);
        RtlpInsertFreeBlock(a1, v11, v121);
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v97, v96, v98, v99) )
          v103 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v103 = 2147353472LL;
        if ( *(_BYTE *)v103 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v103, v100, v101, v102) )
            v84 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(a1, v118, v117, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v84);
        }
        v107 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v103, v100, v101, v102) )
          v108 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v108 = 2147353482LL;
        if ( *(_BYTE *)v108 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v108, v104, v105, v106) )
            v107 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapContractEvent(a1, v118, v117, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v107);
        }
        return;
      }
    }
    else
    {
      if ( !v83 )
        goto LABEL_79;
      if ( v83 < *(_QWORD *)(a1 + 176) )
      {
        RtlpInsertFreeBlock(a1, v11, v7);
        return;
      }
    }
    ++*(_DWORD *)(a1 + 612);
    if ( (int)RtlpSecMemFreeVirtualMemory(v83, &v118, &v117, 0x4000LL) >= 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v86, v85, v87, v88) )
      {
        v7 = v124;
        v89 = (__int64)NtCurrentPeb()->SharedData + 550;
      }
      else
      {
        v89 = 2147353472LL;
      }
      if ( *(_BYTE *)v89 )
      {
        if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(a1, v118, v117, 6LL);
        v7 = v124;
      }
      goto LABEL_133;
    }
    ++*(_DWORD *)(a1 + 628);
    v114 = v123 == 0;
LABEL_195:
    if ( !v114 )
    {
      RtlpCreateUCREntry(a1, v43, v120 - 48, v119, v11, (__int64)&v124);
      RtlpInsertFreeBlock(a1, v11, v124);
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
    RtlpHeapHandleError();
    v49 = v118;
    v51 = RtlpHeapErrorHandlerThreshold;
    v7 = v124;
  }
  v52 = 16 * v7;
  if ( !v123 )
    v52 -= 32LL;
  v53 = ((v11 + v52) & 0xFFFFFFFFFFFFF000uLL) - v49;
  v117 = v53;
  if ( !v53 )
  {
    if ( v51 < 1 || !v123 )
      goto LABEL_79;
    if ( !NtCurrentPeb()->Ldr )
    {
LABEL_165:
      DbgPrint("HEAP: ");
LABEL_167:
      DbgPrint("(!TrailingUCR)");
      RtlpHeapHandleError();
      v7 = v124;
      goto LABEL_79;
    }
LABEL_166:
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    goto LABEL_167;
  }
  if ( (int)RtlpSecMemFreeVirtualMemory(v53, &v118, &v117, 0x4000LL) < 0 )
  {
    ++*(_DWORD *)(a1 + 628);
    v114 = v123 == 0;
    goto LABEL_195;
  }
  v58 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v55, v54, v56, v57) )
  {
    v7 = v124;
    v59 = (__int64)NtCurrentPeb()->SharedData + 550;
  }
  else
  {
    v59 = 2147353472LL;
  }
  if ( *(_BYTE *)v59 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapDecommit(a1, v118, v117, 5LL);
    v7 = v124;
  }
  ++*(_DWORD *)(a1 + 612);
  v60 = v50[5];
  if ( v60 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) -= v60;
  RtlpRemoveUCRBlock(a1, v50);
  v50[5] += v117;
  RtlpInsertUCRBlock(a1, v50);
  *(_DWORD *)(v43 + 80) += v117 >> 12;
  *(_QWORD *)(a1 + 576) -= v117;
  v65 = v50[5];
  if ( v65 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) += v65;
  if ( !v123 )
  {
    v66 = (_BYTE *)(v118 + v117);
    v67 = 16 * v7;
    *(_WORD *)(v118 + v117 + 12) = *(_WORD *)(a1 + 140);
    v62 = v117 + v118;
    v61 = v67 + v11;
    if ( v67 + v11 == v117 + v118 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v66[11] = v66[8] ^ v66[9] ^ v66[10];
        *((_DWORD *)v66 + 2) ^= *(_DWORD *)(a1 + 136);
      }
    }
    else
    {
      v66[15] = 0;
      v66[10] = 0;
      v68 = (v67 - v117) >> 4;
      v69 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v66 + 4) = v68;
      if ( !v69 && (unsigned __int16)v68 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError();
      }
      v66[11] = 0;
      v70 = *(_QWORD *)(v43 + 40);
      if ( v70 == v43 )
      {
        LOBYTE(v71) = 0;
      }
      else
      {
        v71 = ((unsigned __int64)&v66[-v43] >> 16) + 1;
        if ( v71 >= 0xFE )
          RtlpLogHeapFailure(3, v70, (__int64)v66, v43, 0LL, 0LL);
      }
      v72 = *((unsigned __int16 *)v66 + 4);
      v66[14] = v71;
      RtlpInsertFreeBlock(a1, (unsigned __int64)v66, v72);
    }
    v58 = 2147353472LL;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v62, v61, v63, v64) )
    v76 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v76 = 2147353472LL;
  if ( *(_BYTE *)v76 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v76, v73, v74, v75) )
      v58 = (__int64)NtCurrentPeb()->SharedData + 550;
    v113 = *(unsigned __int8 *)v58;
    v77 = v119;
    RtlpLogHeapContractEvent(a1, v118, v117, 16 * *(_QWORD *)(a1 + 192), v123, v119, v113);
  }
  else
  {
    v77 = v119;
  }
  v81 = 2147353482LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v76, v73, v74, v75) )
    v82 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v82 = 2147353482LL;
  if ( *(_BYTE *)v82 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v82, v78, v79, v80) )
      v81 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapContractEvent(a1, v118, v117, 16 * *(_QWORD *)(a1 + 192), v123, v77, *(unsigned __int8 *)v81);
  }
}
