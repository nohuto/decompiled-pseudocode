/*
 * XREFs of RtlpFreeHeap @ 0x1800560F0
 * Callers:
 *     RtlpFreeNTHeapInternal @ 0x180054850 (RtlpFreeNTHeapInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x1800010D4 (RtlpLogHeapFreeEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180011684 (RtlpHeapLogRangeRelease.c)
 *     RtlpUpdateTagEntry @ 0x1800255D8 (RtlpUpdateTagEntry.c)
 *     RtlLogStackBackTraceEx @ 0x1800257CC (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapAddListEntry @ 0x180038080 (RtlpHeapAddListEntry.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlTryEnterCriticalSection @ 0x180057970 (RtlTryEnterCriticalSection.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180058550 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpInsertFreeBlock @ 0x18005A0B0 (RtlpInsertFreeBlock.c)
 *     RtlpBreakPointHeap @ 0x18005A8C0 (RtlpBreakPointHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlDebugFreeHeap @ 0x18009517C (RtlDebugFreeHeap.c)
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlpLogHeapContractEvent @ 0x18009B2A8 (RtlpLogHeapContractEvent.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpFindEntry @ 0x1800BD830 (RtlpFindEntry.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800DB6E0 (RtlpUpdateHeapWatermarks.c)
 *     RtlCompareMemoryUlong @ 0x180167520 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpFreeHeap(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v5; // r13
  int v6; // edi
  int v7; // r8d
  _DWORD *SharedData; // rcx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rsi
  char v12; // al
  int v13; // edx
  unsigned __int64 v14; // rdx
  __int64 *i; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // al
  unsigned __int64 v21; // rax
  int v22; // edx
  _WORD *v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdi
  char v28; // al
  int v29; // edx
  __int64 v30; // r14
  __int64 *v31; // r15
  __int64 v32; // rax
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  char v37; // al
  unsigned __int64 v38; // r15
  _QWORD **v39; // rax
  __int64 *v40; // rdi
  unsigned __int64 v41; // rcx
  SIZE_T v42; // r14
  SIZE_T v43; // r15
  unsigned int v44; // r12d
  __int64 v45; // r13
  _QWORD *v46; // r14
  _QWORD *v47; // r8
  _QWORD *v48; // rax
  int v49; // edx
  __int16 v50; // si
  __int64 v51; // r10
  int v52; // edx
  __int16 v53; // si
  __int64 v54; // r8
  unsigned int v55; // r9d
  unsigned int *v56; // r10
  unsigned int v57; // edx
  int v58; // ecx
  __int64 v59; // r8
  int v60; // eax
  unsigned __int16 v61; // cx
  _QWORD *v62; // r15
  __int64 *v63; // rax
  __int64 *v64; // rdi
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned int v67; // edx
  int v68; // r8d
  unsigned int v69; // r14d
  __int64 v70; // r12
  __int64 v71; // r13
  _DWORD *v72; // rdi
  unsigned int v73; // ecx
  unsigned int v74; // eax
  int v75; // ecx
  __int16 v76; // si
  int v77; // edx
  __int64 v78; // r8
  __int64 v79; // r14
  __int64 *v80; // r15
  __int64 v81; // rax
  __int64 v82; // r9
  __int64 **v83; // rdx
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // r9
  _QWORD *v86; // r12
  int v87; // edx
  __int16 v88; // si
  char v89; // al
  SIZE_T v90; // rsi
  SIZE_T v91; // r14
  __int64 v92; // r9
  struct _TEB *v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 *v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // r9
  __int64 v99; // rdi
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rdi
  __int64 v103; // rcx
  int v104; // edx
  unsigned __int16 v105; // dx
  __int64 v106; // r14
  __int64 v107; // r8
  unsigned __int16 v108; // dx
  unsigned __int64 v109; // r14
  _DWORD *v110; // r8
  unsigned __int64 v111; // rdx
  _QWORD **v112; // rdi
  _QWORD *Entry; // r8
  _QWORD *v114; // rdi
  __int64 *v115; // rax
  __int64 v116; // rdx
  unsigned __int64 v117; // rcx
  unsigned __int64 v118; // r8
  __int64 v119; // r9
  int v120; // eax
  unsigned __int16 v121; // cx
  int v122; // edx
  unsigned int v123; // r8d
  unsigned int v124; // eax
  unsigned int v125; // edx
  _DWORD *v126; // rcx
  unsigned int v127; // eax
  unsigned __int64 v129; // rcx
  _DWORD *v130; // rdi
  char v131; // [rsp+40h] [rbp-198h]
  __int16 updated; // [rsp+44h] [rbp-194h]
  unsigned __int64 v133; // [rsp+48h] [rbp-190h] BYREF
  char v134; // [rsp+50h] [rbp-188h]
  char v135; // [rsp+51h] [rbp-187h]
  char v136; // [rsp+58h] [rbp-180h]
  int v137[2]; // [rsp+60h] [rbp-178h]
  unsigned __int16 v138; // [rsp+68h] [rbp-170h]
  unsigned __int16 v139; // [rsp+6Ah] [rbp-16Eh]
  unsigned int v140; // [rsp+6Ch] [rbp-16Ch]
  unsigned int v141; // [rsp+70h] [rbp-168h]
  __int16 v142; // [rsp+74h] [rbp-164h]
  int v143; // [rsp+78h] [rbp-160h]
  int v144[2]; // [rsp+80h] [rbp-158h]
  __int64 j; // [rsp+88h] [rbp-150h]
  unsigned __int64 v146; // [rsp+90h] [rbp-148h] BYREF
  SIZE_T v147; // [rsp+98h] [rbp-140h]
  unsigned int *v148; // [rsp+A0h] [rbp-138h]
  __int64 v149; // [rsp+A8h] [rbp-130h]
  unsigned __int64 v150; // [rsp+B0h] [rbp-128h]
  unsigned __int64 v151; // [rsp+B8h] [rbp-120h]
  __int64 v152; // [rsp+C0h] [rbp-118h]
  __int64 v153; // [rsp+C8h] [rbp-110h]
  unsigned __int64 v154; // [rsp+D0h] [rbp-108h]
  SIZE_T v155; // [rsp+D8h] [rbp-100h]
  unsigned __int64 v156; // [rsp+F0h] [rbp-E8h]
  unsigned int v157; // [rsp+F8h] [rbp-E0h]
  int v158; // [rsp+FCh] [rbp-DCh]
  int v159; // [rsp+100h] [rbp-D8h]
  int v160; // [rsp+104h] [rbp-D4h]
  int v161; // [rsp+108h] [rbp-D0h]
  unsigned int NtGlobalFlag; // [rsp+10Ch] [rbp-CCh]
  __int64 v163; // [rsp+110h] [rbp-C8h]
  __int64 v164; // [rsp+118h] [rbp-C0h]
  __int64 v165; // [rsp+120h] [rbp-B8h]
  __int64 v166; // [rsp+128h] [rbp-B0h]
  unsigned __int64 v167; // [rsp+130h] [rbp-A8h]
  __int128 v168; // [rsp+138h] [rbp-A0h]
  __int64 v169; // [rsp+148h] [rbp-90h]
  int v170; // [rsp+158h] [rbp-80h]
  int v171; // [rsp+168h] [rbp-70h]
  int v172; // [rsp+178h] [rbp-60h]
  int v173; // [rsp+188h] [rbp-50h]
  int v174; // [rsp+198h] [rbp-40h]
  int v175; // [rsp+1A8h] [rbp-30h]
  __int64 v176; // [rsp+1F0h] [rbp+18h]

  v176 = a3;
  v5 = 1;
  v133 = 0LL;
  v131 = 0;
  v153 = 0LL;
  v141 = 1;
  *(_QWORD *)v137 = 0LL;
  *(_QWORD *)v144 = 0LL;
  v146 = 0LL;
  v143 = 0;
  v152 = 0LL;
  updated = 0;
  v163 = 0LL;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0LL, 0LL, 0LL);
    return 0LL;
  }
  v6 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v6 & 0x7D010F60) != 0 )
  {
    v5 = 0;
    v7 = 4;
    if ( (v6 & 0x61000000) != 0 && (v6 & 0x10000000) == 0 )
      return RtlDebugFreeHeap(a1);
  }
  else
  {
    v7 = 3;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    v9 = 2147353472LL;
  }
  else
  {
    v9 = 2147353472LL;
    v10 = 2147353472LL;
  }
  if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v11 = v176;
    if ( ((*(_BYTE *)(v176 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
      RtlpLogHeapFreeEvent(a1, a4, v7);
  }
  else
  {
    v11 = v176;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v122 = *(_DWORD *)(v11 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v11 + 8) = v122;
      if ( *(_BYTE *)(v11 + 11) != ((unsigned __int8)v122 ^ (unsigned __int8)(BYTE1(v122) ^ BYTE2(v122))) )
        RtlpAnalyzeHeapFailure(a1, v11);
    }
    goto LABEL_26;
  }
  if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    ++*(_DWORD *)(a1 + 616);
  }
  else
  {
    if ( byte_1801D4988 )
    {
      v134 = 0;
      v12 = 0;
      goto LABEL_12;
    }
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v73 = *(_DWORD *)(a1 + 616) + 1;
    *(_DWORD *)(a1 + 616) = v73;
    v74 = *(_DWORD *)(a1 + 620) + 1;
    *(_DWORD *)(a1 + 620) = v74;
    if ( *(_BYTE *)(a1 + 418) != 2 )
    {
      if ( v73 < v74 )
      {
        *(_QWORD *)(a1 + 616) = 0LL;
        v73 = 0;
        v74 = 0;
      }
      if ( v74 >= v73 >> 4 )
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
    }
  }
  v134 = 1;
  v12 = 1;
LABEL_12:
  if ( !v12 )
  {
    v93 = NtCurrentTeb();
    v93->LastStatusValue = -1073741420;
    v93->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741420);
    v141 = 0;
    goto LABEL_283;
  }
  v131 = 1;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v13 = *(_DWORD *)(v11 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v11 + 8) = v13;
    if ( *(_BYTE *)(v11 + 11) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
      RtlpAnalyzeHeapFailure(a1, v11);
  }
  v14 = *(unsigned __int16 *)(v11 + 8);
  for ( i = *(__int64 **)(a1 + 312); ; i = (__int64 *)*i )
  {
    v16 = *((unsigned int *)i + 2);
    if ( v14 < v16 )
    {
      v17 = *(unsigned __int16 *)(v11 + 8);
      goto LABEL_21;
    }
    if ( !*i )
      break;
  }
  v17 = (unsigned int)(v16 - 1);
LABEL_21:
  if ( v17 < v16 && v14 == v17 )
  {
    v18 = v14 - *((unsigned int *)i + 6);
    v19 = 2 * v18;
    if ( !*((_DWORD *)i + 3) )
      v19 = v18;
    v153 = i[6] + 8 * v19;
  }
  else
  {
    v153 = 0LL;
  }
LABEL_26:
  v20 = *(_BYTE *)(v11 + 10);
  if ( (v20 & 8) != 0 )
    *(_BYTE *)(v11 + 10) = v20 & 0xF7;
  if ( *(_BYTE *)(v11 + 15) == 4 )
  {
    v94 = v11 - 48;
    *(_QWORD *)v137 = v94;
    *(_QWORD *)v144 = *(_QWORD *)(v94 + 32);
    v146 = v94 & 0xFFFFFFFFFFFF0000uLL;
    *(_QWORD *)(a1 + 592) -= *(_QWORD *)v144;
    v95 = *(_QWORD *)v94;
    v96 = *(__int64 **)(v94 + 8);
    v97 = *v96;
    v98 = *(_QWORD *)(*(_QWORD *)v94 + 8LL);
    if ( *v96 == v98 && v97 == v94 )
    {
      *v96 = v95;
      *(_QWORD *)(v95 + 8) = v96;
    }
    else
    {
      RtlpLogHeapFailure(13, 0LL, v94, v98, v97, 0LL);
    }
    if ( !v5 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
        RtlpUpdateTagEntry(a1, *(_WORD *)(v94 + 18), *(_QWORD *)(v94 + 32) >> 4, 0LL, 3);
    }
    if ( v131 )
    {
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v131 = 0;
    }
    v99 = *(_QWORD *)(*(_QWORD *)v137 + 40LL);
    v152 = v99;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v100 = (__int64)NtCurrentPeb()->SharedData + 558;
      v99 = v152;
    }
    else
    {
      v100 = 2147353480LL;
    }
    if ( *(_BYTE *)v100 )
      RtlpHeapLogRangeRelease(a1, v146, v99);
    v133 = 0LL;
    v143 = RtlpSecMemFreeVirtualMemory(v100, &v146, &v133, 0x8000LL);
    if ( RtlGetCurrentServiceSessionId() )
      v101 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v101 = 2147353472LL;
    if ( *(_BYTE *)v101 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapContractEvent(a1, v137[0], v144[0], 16 * *(_QWORD *)(a1 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v9);
    }
    v102 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
      v103 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v103 = 2147353482LL;
    if ( *(_BYTE *)v103 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v102 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapContractEvent(
        a1,
        v137[0],
        v144[0],
        16 * *(_QWORD *)(a1 + 192),
        0,
        0LL,
        (HANDLE)*(unsigned __int8 *)v102);
    }
    v167 = v133 >> 4;
    goto LABEL_283;
  }
  v21 = *(unsigned __int16 *)(v11 + 8);
  if ( (unsigned __int16)v21 < *(_WORD *)(a1 + 432) )
  {
    v22 = 1 << (*(_WORD *)(v11 + 8) & 7);
    v11 = v176;
    if ( ((unsigned __int8)v22 & *(_BYTE *)((v21 >> 3) + a1 + 434)) == 0 )
    {
      v23 = (_WORD *)(*(_QWORD *)(a1 + 424) + 2LL * *(unsigned __int16 *)(v176 + 8));
      if ( *v23 > 1u )
        --*v23;
    }
  }
  if ( !v5 )
  {
    v157 = NtCurrentPeb()->NtGlobalFlag;
    v11 = v176;
    if ( (v157 & 0x800) != 0 )
    {
      v107 = *(unsigned __int16 *)(v176 + 8);
      if ( (*(_BYTE *)(v176 + 10) & 2) != 0 )
      {
        v163 = v176 + 16LL * *(unsigned __int16 *)(v176 + 8) - 16;
        v108 = *(_WORD *)(v163 + 2);
      }
      else
      {
        v108 = *(unsigned __int8 *)(v176 + 11);
      }
      updated = RtlpUpdateTagEntry(a1, v108, v107, 0LL, 2);
    }
  }
  v24 = *(unsigned __int16 *)(v11 + 8);
  v133 = v24;
  v167 = v24;
  if ( *(char *)(a1 + 112) >= 0 )
  {
    v136 = 0;
    v164 = v11;
    v25 = 16 * (*(unsigned __int16 *)(v11 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140));
    v26 = v11 - v25;
    if ( v11 - v25 != v11
      && ((*(_BYTE *)(v26 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v77 = *(_DWORD *)(v26 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v26 + 8) = v77;
        if ( HIBYTE(v77) != ((unsigned __int8)v77 ^ (unsigned __int8)(BYTE1(v77) ^ BYTE2(v77))) )
          RtlpAnalyzeHeapFailure(a1, v26);
      }
      v78 = v26 + 16;
      v79 = *(_QWORD *)(v26 + 16);
      v80 = *(__int64 **)(v26 + 24);
      v81 = *v80;
      v82 = *(_QWORD *)(v79 + 8);
      if ( *v80 == v26 + 16 && v81 == v82 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v26 + 8);
        v83 = *(__int64 ***)(a1 + 312);
        if ( v83 )
        {
          v154 = 0LL;
          v84 = *(unsigned __int16 *)(v26 + 8);
          while ( 1 )
          {
            v85 = *((unsigned int *)v83 + 2);
            if ( v84 < v85 )
              break;
            if ( !*v83 )
            {
              v84 = (unsigned int)(v85 - 1);
              break;
            }
            v83 = (__int64 **)*v83;
          }
          v154 = v84;
          LOBYTE(v78) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v83, v78, v26 + 16, v84, *(unsigned __int16 *)(v26 + 8));
        }
        *v80 = v79;
        *(_QWORD *)(v79 + 8) = v80;
        if ( (*(_BYTE *)(v26 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
        {
          v89 = *(_BYTE *)(v26 + 10);
          if ( (v89 & 4) != 0 )
          {
            v155 = 0LL;
            v90 = 16LL * *(unsigned __int16 *)(v26 + 8) - 32;
            v155 = v90;
            if ( (v89 & 2) != 0 && v90 > 4 )
            {
              v90 -= 4LL;
              v155 = v90;
            }
            v91 = RtlCompareMemoryUlong((PVOID)(v26 + 32), v90, 0xFEEEFEEE);
            if ( v91 != v90 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v26,
                (const void *)(v91 + v26 + 32));
              RtlpBreakPointHeap();
            }
          }
          *(_BYTE *)(v26 + 10) = 0;
          *(_BYTE *)(v26 + 15) = 0;
          v11 = v26;
          v164 = v26;
          v133 += *(unsigned __int16 *)(v26 + 8);
          *(_WORD *)(v26 + 8) = v133;
          *(_WORD *)(v26 + 16 * v133 + 12) = *(_WORD *)(a1 + 140) ^ v133;
        }
        else
        {
          LOBYTE(v119) = 1;
          RtlpDeCommitFreeBlock(a1, v26, *(unsigned __int16 *)(v26 + 8), v119);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v78, v82, v81, 0LL);
      }
      v24 = v133;
    }
    v27 = v11 + 16 * v24;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v168 = 0LL;
      DWORD2(v168) = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v27 + 8);
      if ( BYTE11(v168) != (BYTE8(v168) ^ (unsigned __int8)(BYTE9(v168) ^ BYTE10(v168))) )
      {
        v135 = 0;
        v28 = 0;
        v24 = v133;
        goto LABEL_40;
      }
      v24 = v133;
    }
    v135 = 1;
    v28 = 1;
LABEL_40:
    if ( v28 )
      goto LABEL_43;
    RtlpLogHeapFailure(3, a1, v27, 0LL, 0LL, 0LL);
    while ( 1 )
    {
      v24 = v133;
LABEL_43:
      if ( ((*(_BYTE *)(v27 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
        break;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v29 = *(_DWORD *)(v27 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v27 + 8) = v29;
        if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE2(v29) ^ BYTE1(v29))) )
          RtlpAnalyzeHeapFailure(a1, v27);
      }
      v30 = *(_QWORD *)(v27 + 16);
      v31 = *(__int64 **)(v27 + 24);
      v32 = *v31;
      v33 = *(_QWORD *)(v30 + 8);
      if ( *v31 == v27 + 16 && v32 == v33 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v27 + 8);
        v34 = *(_QWORD *)(a1 + 312);
        if ( v34 )
        {
          v156 = 0LL;
          v35 = *(unsigned __int16 *)(v27 + 8);
          while ( 1 )
          {
            v36 = *(unsigned int *)(v34 + 8);
            if ( v35 < v36 )
              break;
            v24 = *(_QWORD *)v34;
            if ( !*(_QWORD *)v34 )
            {
              v35 = (unsigned int)(v36 - 1);
              break;
            }
            v34 = *(_QWORD *)v34;
          }
          v156 = v35;
          LOBYTE(v24) = 1;
          RtlpHeapRemoveListEntry(a1, v34, v24, v27 + 16, v35, *(unsigned __int16 *)(v27 + 8));
        }
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        if ( (*(_BYTE *)(v27 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
        {
          v37 = *(_BYTE *)(v27 + 10);
          if ( (v37 & 4) != 0 )
          {
            v147 = 0LL;
            v42 = 16LL * *(unsigned __int16 *)(v27 + 8) - 32;
            v147 = v42;
            if ( (v37 & 2) != 0 && v42 > 4 )
            {
              v42 -= 4LL;
              v147 = v42;
            }
            v43 = RtlCompareMemoryUlong((PVOID)(v27 + 32), v42, 0xFEEEFEEE);
            if ( v43 != v42 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v27,
                (const void *)(v43 + v27 + 32));
              if ( NtCurrentPeb()->BeingDebugged )
              {
                RtlpHeapInvalidBadAddress = v27;
                __debugbreak();
                RtlpHeapInvalidBreakPoint = 0;
              }
            }
          }
          *(_BYTE *)(v11 + 10) = 0;
          *(_BYTE *)(v11 + 15) = 0;
          v133 += *(unsigned __int16 *)(v27 + 8);
          *(_WORD *)(v11 + 8) = v133;
          *(_WORD *)(v11 + 16 * v133 + 12) = *(_WORD *)(a1 + 140) ^ v133;
          v24 = v133;
          break;
        }
        LOBYTE(v92) = 1;
        RtlpDeCommitFreeBlock(a1, v27, *(unsigned __int16 *)(v27 + 8), v92);
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v27 + 16, v33, v32, 0LL);
      }
    }
    v176 = v11;
  }
  if ( v24 >= *(_QWORD *)(a1 + 176) && v24 + *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 184) )
  {
    RtlpDeCommitFreeBlock(a1, v11, v24, 0LL);
    goto LABEL_283;
  }
  if ( v24 + *(_QWORD *)(a1 + 192) <= *(_QWORD *)(a1 + 184)
    || v24 < 0x100
    || *(_WORD *)(a1 + 140) != *(_WORD *)(v11 + 12) )
  {
    if ( v24 > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v11);
      v72 = (_DWORD *)(a1 + 124);
LABEL_132:
      if ( updated )
      {
        if ( *v72 )
        {
          v104 = *(_DWORD *)(v11 + 8) ^ *(_DWORD *)(a1 + 136);
          *(_DWORD *)(v11 + 8) = v104;
          if ( *(_BYTE *)(v11 + 11) != ((unsigned __int8)v104 ^ (unsigned __int8)(BYTE1(v104) ^ BYTE2(v104))) )
            RtlpAnalyzeHeapFailure(a1, v11);
        }
        *(_BYTE *)(v11 + 10) |= 2u;
        v105 = *(_WORD *)(v11 + 8);
        v106 = 16LL * v105 + v11;
        if ( *v72 )
        {
          *(_BYTE *)(v11 + 11) = v105 ^ *(_BYTE *)(v11 + 10) ^ HIBYTE(v105);
          *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        *(_WORD *)(v106 - 4) = updated;
        *(_WORD *)(v106 - 2) = 0;
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
        {
          v142 = RtlLogStackBackTraceEx(1u);
          *(_WORD *)(v106 - 2) = v142;
        }
      }
      goto LABEL_283;
    }
    if ( v5 )
    {
      v38 = (unsigned __int16)v24;
      v169 = (unsigned __int16)v24;
      *(_BYTE *)(v11 + 10) = 0;
      *(_BYTE *)(v11 + 15) = 0;
      v39 = (_QWORD **)(a1 + 336);
      v40 = *(__int64 **)(a1 + 312);
      if ( !v40 )
      {
        v46 = *v39;
        goto LABEL_107;
      }
      j = 0LL;
      while ( 1 )
      {
        v41 = *((unsigned int *)v40 + 2);
        if ( (unsigned __int16)v24 < v41 )
        {
          j = (unsigned __int16)v24;
          v44 = (unsigned __int16)v24;
          goto LABEL_85;
        }
        if ( !*v40 )
          break;
        v40 = (__int64 *)*v40;
      }
      v44 = v41 - 1;
      for ( j = (unsigned int)(v41 - 1); ; j = v44 )
      {
LABEL_85:
        v45 = v44 - *((_DWORD *)v40 + 6);
        v46 = 0LL;
        v47 = (_QWORD *)v40[4];
        *(_QWORD *)v137 = v47;
        v48 = (_QWORD *)v47[1];
        if ( v47 == v48 )
        {
          v46 = v47;
        }
        else
        {
          v49 = *((_DWORD *)v48 - 2);
          v170 = v49;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v49 ^= *(_DWORD *)(a1 + 136);
            v50 = v49;
            v170 = v49;
            if ( HIBYTE(v49) != ((unsigned __int8)v49 ^ (unsigned __int8)(BYTE1(v49) ^ BYTE2(v49))) )
            {
              RtlpLogHeapFailure(3, a1, (__int64)(v48 - 2), 0LL, 0LL, 0LL);
              LOWORD(v49) = v50;
              v47 = *(_QWORD **)v137;
            }
          }
          v158 = v38 - (unsigned __int16)v49;
          if ( v158 > 0 )
          {
            v46 = v47;
          }
          else
          {
            v51 = *v47;
            v52 = *(_DWORD *)(*v47 - 8LL);
            v171 = v52;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v52 ^= *(_DWORD *)(a1 + 136);
              v53 = v52;
              v171 = v52;
              if ( HIBYTE(v52) != ((unsigned __int8)v52 ^ (unsigned __int8)(BYTE1(v52) ^ BYTE2(v52))) )
              {
                RtlpLogHeapFailure(3, a1, v51 - 16, 0LL, 0LL, 0LL);
                LOWORD(v52) = v53;
                v47 = *(_QWORD **)v137;
              }
            }
            v159 = v38 - (unsigned __int16)v52;
            if ( v159 <= 0 )
            {
              v46 = (_QWORD *)*v47;
            }
            else if ( !*v40 && v44 == *((_DWORD *)v40 + 2) - 1 )
            {
              if ( *((_DWORD *)v40 + 3) )
                v45 = (unsigned int)(2 * v45);
              v86 = *(_QWORD **)(v40[6] + 8 * v45);
              while ( v47 != v86 )
              {
                v87 = *((_DWORD *)v86 - 2);
                v172 = v87;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v87 ^= *(_DWORD *)(a1 + 136);
                  v88 = v87;
                  v172 = v87;
                  if ( HIBYTE(v87) != ((unsigned __int8)v87 ^ (unsigned __int8)(BYTE1(v87) ^ BYTE2(v87))) )
                  {
                    RtlpLogHeapFailure(3, a1, (__int64)(v86 - 2), 0LL, 0LL, 0LL);
                    LOWORD(v87) = v88;
                  }
                }
                v160 = v38 - (unsigned __int16)v87;
                if ( v160 <= 0 )
                {
                  v46 = v86;
                  break;
                }
                v86 = (_QWORD *)*v86;
                v47 = *(_QWORD **)v137;
              }
            }
            else
            {
              v148 = 0LL;
              v54 = (unsigned int)v45 >> 5;
              v140 = (unsigned int)v45 >> 5;
              v55 = ((unsigned int)(*((_DWORD *)v40 + 2) - *((_DWORD *)v40 + 6)) >> 5) - 1;
              v56 = (unsigned int *)(v40[5] + 4 * v54);
              v148 = v56;
              v57 = *v56 & (-1 << (v45 & 0x1F));
              while ( !v57 )
              {
                if ( (unsigned int)v54 > v55 )
                {
                  v46 = 0LL;
                  goto LABEL_104;
                }
                v148 = ++v56;
                v57 = *v56;
                LODWORD(v54) = v54 + 1;
                v140 = v54;
              }
              if ( (_WORD)v57 )
              {
                if ( (_BYTE)v57 )
                  v58 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v57];
                else
                  v58 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v57)] + 8;
              }
              else if ( (v57 & 0xFF0000) != 0 )
              {
                v58 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v57)] + 16;
              }
              else
              {
                v58 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v57 >> 24] + 24;
              }
              v59 = (unsigned int)(v58 + 32 * v54);
              v140 = v59;
              if ( *((_DWORD *)v40 + 3) )
                v59 = (unsigned int)(2 * v59);
              v46 = *(_QWORD **)(v40[6] + 8 * v59);
            }
          }
LABEL_104:
          v11 = v176;
        }
        if ( v46 )
          break;
        v40 = (__int64 *)*v40;
        v44 = *((_DWORD *)v40 + 6);
      }
      while ( 1 )
      {
        v39 = (_QWORD **)(a1 + 336);
LABEL_107:
        if ( v39 == v46 )
          break;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v60 = *((_DWORD *)v46 - 2);
          v173 = v60;
          if ( (v60 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v60 ^= *(_DWORD *)(a1 + 136);
            v173 = v60;
          }
          v61 = v60;
          v138 = v60;
          v11 = v176;
        }
        else
        {
          v138 = *((_WORD *)v46 - 4);
          v61 = v138;
        }
        if ( v38 <= v61 )
          break;
        v46 = (_QWORD *)*v46;
      }
      v62 = (_QWORD *)(v11 + 16);
      v63 = (__int64 *)v46[1];
      if ( (_QWORD *)*v63 == v46 )
      {
        *v62 = v46;
        *(_QWORD *)(v11 + 24) = v63;
        *v63 = (__int64)v62;
        v46[1] = v62;
      }
      else
      {
        RtlpLogHeapFailure(13, 0LL, (__int64)v46, 0LL, *v63, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v11 + 8);
      v64 = *(__int64 **)(a1 + 312);
      if ( v64 )
      {
        v149 = 0LL;
        v65 = *(unsigned __int16 *)(v11 + 8);
        while ( 1 )
        {
          v66 = *((unsigned int *)v64 + 2);
          if ( v65 < v66 )
          {
            v149 = *(unsigned __int16 *)(v11 + 8);
            v67 = v66 - 1;
            goto LABEL_122;
          }
          if ( !*v64 )
            break;
          v64 = (__int64 *)*v64;
        }
        v67 = v66 - 1;
        v149 = v67;
        LODWORD(v65) = v67;
LABEL_122:
        v68 = *(unsigned __int16 *)(v11 + 8);
        v165 = *(unsigned __int16 *)(v11 + 8);
        v69 = v65 - *((_DWORD *)v64 + 6);
        v70 = 2 * v69;
        if ( !*((_DWORD *)v64 + 3) )
          v70 = v69;
        ++*((_DWORD *)v64 + 4);
        v71 = *(_QWORD *)(v64[6] + 8 * v70);
        if ( (_DWORD)v65 == v67 )
          ++*((_DWORD *)v64 + 5);
        if ( !v71 )
          goto LABEL_127;
        v75 = *(_DWORD *)(v71 - 8);
        v174 = v75;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v75 ^= *(_DWORD *)(a1 + 136);
          v76 = v75;
          v174 = v75;
          if ( HIBYTE(v75) != ((unsigned __int8)v75 ^ (unsigned __int8)(BYTE1(v75) ^ BYTE2(v75))) )
          {
            RtlpLogHeapFailure(3, a1, v71 - 16, 0LL, 0LL, 0LL);
            LOWORD(v75) = v76;
            v68 = v165;
          }
        }
        v161 = v68 - (unsigned __int16)v75;
        v11 = v176;
        if ( v161 <= 0 )
LABEL_127:
          *(_QWORD *)(v64[6] + 8 * v70) = v62;
        if ( !v71 )
          *(_DWORD *)(v64[5] + 4LL * (v69 >> 5)) |= 1 << (v69 & 0x1F);
      }
LABEL_130:
      v72 = (_DWORD *)(a1 + 124);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
        *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_132;
    }
    v109 = (unsigned __int16)v24;
    *(_BYTE *)(v11 + 10) &= 0xF0u;
    *(_BYTE *)(v11 + 15) = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_247:
      v112 = (_QWORD **)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v109);
      else
        Entry = *v112;
      while ( v112 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v120 = *((_DWORD *)Entry - 2);
          v175 = v120;
          v121 = v120;
          if ( (v120 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v120 ^= *(_DWORD *)(a1 + 136);
            v121 = v120;
            v175 = v120;
          }
          v139 = v120;
          v11 = v176;
        }
        else
        {
          v139 = *((_WORD *)Entry - 4);
          v121 = v139;
        }
        if ( v109 <= v121 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v114 = (_QWORD *)(v11 + 16);
      v115 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v115 == Entry )
      {
        *v114 = Entry;
        *(_QWORD *)(v11 + 24) = v115;
        *v115 = (__int64)v114;
        Entry[1] = v114;
      }
      else
      {
        RtlpLogHeapFailure(13, 0LL, (__int64)Entry, 0LL, *v115, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v11 + 8);
      v116 = *(_QWORD *)(a1 + 312);
      if ( v116 )
      {
        v151 = 0LL;
        v117 = *(unsigned __int16 *)(v11 + 8);
        while ( 1 )
        {
          v118 = *(unsigned int *)(v116 + 8);
          if ( v117 < v118 )
            break;
          if ( !*(_QWORD *)v116 )
          {
            v117 = (unsigned int)(v118 - 1);
            break;
          }
          v116 = *(_QWORD *)v116;
        }
        v151 = v117;
        RtlpHeapAddListEntry(a1, v116, 1, v11 + 16, v117, *(unsigned __int16 *)(v11 + 8));
      }
      goto LABEL_130;
    }
    v110 = (_DWORD *)(v11 + 32);
    v166 = v11 + 32;
    v111 = (16 * (unsigned __int64)(unsigned int)v109 - 32) >> 2;
    v150 = v111;
    if ( v111 )
    {
      if ( ((unsigned __int8)v110 & 4) == 0 )
        goto LABEL_244;
      *v110 = -17891602;
      v150 = --v111;
      if ( v111 )
      {
        v110 = (_DWORD *)(v11 + 36);
        v166 = v11 + 36;
LABEL_244:
        memset64(v110, 0xFEEEFEEEFEEEFEEEuLL, v111 >> 1);
        if ( (v111 & 1) != 0 )
          v110[v111 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v11 + 10) |= 4u;
    goto LABEL_247;
  }
  RtlpDeCommitFreeBlock(a1, v11, v24, 0LL);
LABEL_283:
  v123 = 256;
  if ( v131 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      v124 = *(_DWORD *)(a1 + 640) + 1;
      *(_DWORD *)(a1 + 640) = v124;
      v125 = *(_DWORD *)(a1 + 648);
      if ( v124 > v125 )
      {
        *(_DWORD *)(a1 + 640) = 0;
        v129 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v129 > *(_QWORD *)(a1 + 672) )
          *(_QWORD *)(a1 + 672) = v129;
        *(_QWORD *)(a1 + 680) = v129;
      }
      v126 = (_DWORD *)(a1 + 652);
      v127 = *(_DWORD *)(a1 + 652) + 1;
      *(_DWORD *)(a1 + 652) = v127;
      if ( v127 >= 0x1000 )
      {
        v130 = (_DWORD *)(a1 + 652);
        if ( *(_BYTE *)(a1 + 418) != 2 || (v130 = (_DWORD *)(a1 + 652), *(_DWORD *)(a1 + 656) <= 0x10u) )
          v123 = 16;
        if ( *(_DWORD *)(a1 + 644) > v123 && v125 < 0x10000 )
        {
          *(_DWORD *)(a1 + 648) = 2 * v125;
          v126 = v130;
        }
        *(_DWORD *)(a1 + 644) = 0;
        *v126 = 0;
      }
    }
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return v141;
}
