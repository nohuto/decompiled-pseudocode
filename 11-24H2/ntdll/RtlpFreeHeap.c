/*
 * XREFs of RtlpFreeHeap @ 0x18002D620
 * Callers:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlTryEnterCriticalSection @ 0x18002EEA0 (RtlTryEnterCriticalSection.c)
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18002FA80 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpInsertFreeBlock @ 0x1800315E0 (RtlpInsertFreeBlock.c)
 *     RtlpBreakPointHeap @ 0x180031DF0 (RtlpBreakPointHeap.c)
 *     RtlDebugFreeHeap @ 0x18004178C (RtlDebugFreeHeap.c)
 *     RtlpCommitBlock @ 0x180042A00 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180042E70 (RtlpDeCommitFreeBlock.c)
 *     RtlpLogHeapContractEvent @ 0x1800475C8 (RtlpLogHeapContractEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180055A44 (RtlpHeapLogRangeRelease.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18008FA40 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapFreeEvent @ 0x180095BD4 (RtlpLogHeapFreeEvent.c)
 *     RtlpUpdateTagEntry @ 0x18009C630 (RtlpUpdateTagEntry.c)
 *     RtlLogStackBackTraceEx @ 0x18009C824 (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapAddListEntry @ 0x1800A9240 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x1800B7440 (RtlpFindEntry.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800DC170 (RtlpUpdateHeapWatermarks.c)
 *     RtlCompareMemoryUlong @ 0x180165F90 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpFreeHeap(unsigned __int16 *Src, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  char v5; // r13
  int v6; // edi
  __int64 v7; // r8
  _DWORD *SharedData; // rcx
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int16 *v11; // rsi
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
  unsigned __int64 Entry; // r8
  unsigned __int64 v25; // rcx
  unsigned __int16 *v26; // rdi
  __int64 v27; // rdi
  char v28; // al
  int v29; // edx
  __int64 v30; // r14
  __int64 *v31; // r15
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  char v36; // al
  unsigned __int64 v37; // r15
  _QWORD **v38; // rax
  __int64 *v39; // rdi
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // r14
  __int64 v42; // r15
  unsigned int v43; // r12d
  __int64 v44; // r13
  _QWORD *v45; // r14
  __int64 v46; // rax
  int v47; // edx
  __int16 v48; // si
  _QWORD *v49; // r10
  int v50; // edx
  __int16 v51; // si
  unsigned int *v52; // r10
  unsigned int v53; // edx
  int v54; // ecx
  int v55; // eax
  unsigned __int16 v56; // cx
  _QWORD *v57; // r15
  __int64 *v58; // rax
  __int64 *v59; // rdi
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned int v62; // edx
  unsigned int v63; // r14d
  __int64 v64; // r12
  __int64 v65; // r13
  _DWORD *v66; // rdi
  unsigned int v67; // ecx
  unsigned int v68; // eax
  int v69; // ecx
  __int16 v70; // si
  int v71; // edx
  __int64 v72; // r8
  __int64 v73; // r14
  __int64 *v74; // r15
  __int64 v75; // rax
  __int64 **v76; // rdx
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // r9
  _QWORD *v79; // r12
  int v80; // edx
  __int16 v81; // si
  char v82; // al
  unsigned __int64 v83; // rsi
  __int64 v84; // r14
  struct _TEB *v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 *v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // r9
  __int64 v91; // rdi
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdi
  __int64 v105; // rcx
  int v106; // edx
  __int64 v107; // rdx
  unsigned __int16 *v108; // r14
  int v109; // r8d
  int v110; // edx
  unsigned __int64 v111; // r14
  _DWORD *v112; // r8
  unsigned __int64 v113; // rdx
  unsigned __int64 *v114; // rdi
  unsigned __int64 *v115; // rdi
  __int64 *v116; // rax
  __int64 **v117; // rdx
  unsigned __int64 v118; // rcx
  unsigned __int64 v119; // r8
  int v120; // eax
  unsigned __int16 v121; // cx
  int v122; // edx
  unsigned int v123; // r8d
  unsigned int v124; // eax
  unsigned int v125; // edx
  _DWORD *v126; // rcx
  unsigned int v127; // eax
  unsigned __int64 v129; // rcx
  char *v130; // rdi
  char v131; // [rsp+40h] [rbp-198h]
  unsigned __int16 updated; // [rsp+44h] [rbp-194h]
  unsigned __int64 v133; // [rsp+48h] [rbp-190h] BYREF
  char v134; // [rsp+50h] [rbp-188h]
  char v135; // [rsp+51h] [rbp-187h]
  char v136; // [rsp+58h] [rbp-180h]
  unsigned __int64 v137; // [rsp+60h] [rbp-178h]
  unsigned __int16 v138; // [rsp+68h] [rbp-170h]
  unsigned __int16 v139; // [rsp+6Ah] [rbp-16Eh]
  unsigned int v140; // [rsp+6Ch] [rbp-16Ch]
  unsigned int v141; // [rsp+70h] [rbp-168h]
  unsigned __int16 v142; // [rsp+74h] [rbp-164h]
  int v143; // [rsp+78h] [rbp-160h]
  __int64 v144; // [rsp+80h] [rbp-158h]
  __int64 j; // [rsp+88h] [rbp-150h]
  unsigned __int64 v146; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int64 v147; // [rsp+98h] [rbp-140h]
  unsigned int *v148; // [rsp+A0h] [rbp-138h]
  __int64 v149; // [rsp+A8h] [rbp-130h]
  unsigned __int64 v150; // [rsp+B0h] [rbp-128h]
  unsigned __int64 v151; // [rsp+B8h] [rbp-120h]
  __int64 v152; // [rsp+C0h] [rbp-118h]
  __int64 v153; // [rsp+C8h] [rbp-110h]
  unsigned __int64 v154; // [rsp+D0h] [rbp-108h]
  unsigned __int64 v155; // [rsp+D8h] [rbp-100h]
  unsigned __int64 v156; // [rsp+F0h] [rbp-E8h]
  unsigned int v157; // [rsp+F8h] [rbp-E0h]
  int v158; // [rsp+FCh] [rbp-DCh]
  int v159; // [rsp+100h] [rbp-D8h]
  int v160; // [rsp+104h] [rbp-D4h]
  int v161; // [rsp+108h] [rbp-D0h]
  unsigned int NtGlobalFlag; // [rsp+10Ch] [rbp-CCh]
  char *v163; // [rsp+110h] [rbp-C8h]
  unsigned __int16 *v164; // [rsp+118h] [rbp-C0h]
  unsigned __int64 v165; // [rsp+120h] [rbp-B8h]
  unsigned __int16 *v166; // [rsp+128h] [rbp-B0h]
  unsigned __int64 v167; // [rsp+130h] [rbp-A8h]
  __int128 v168; // [rsp+138h] [rbp-A0h]
  __int64 v169; // [rsp+148h] [rbp-90h]
  int v170; // [rsp+158h] [rbp-80h]
  int v171; // [rsp+168h] [rbp-70h]
  int v172; // [rsp+178h] [rbp-60h]
  int v173; // [rsp+188h] [rbp-50h]
  int v174; // [rsp+198h] [rbp-40h]
  int v175; // [rsp+1A8h] [rbp-30h]
  unsigned __int16 *v176; // [rsp+1F0h] [rbp+18h]

  v176 = a3;
  v5 = 1;
  v133 = 0LL;
  v131 = 0;
  v153 = 0LL;
  v141 = 1;
  v137 = 0LL;
  v144 = 0LL;
  v146 = 0LL;
  v143 = 0;
  v152 = 0LL;
  updated = 0;
  v163 = 0LL;
  if ( Src == a3 )
  {
    RtlpLogHeapFailure(9, (__int64)Src, (__int64)a3, 0LL, 0LL, 0LL);
    return 0LL;
  }
  v6 = *((_DWORD *)Src + 29) | a2;
  if ( (v6 & 0x7D010F60) != 0 )
  {
    v5 = 0;
    v7 = 4LL;
    if ( (v6 & 0x61000000) != 0 && (v6 & 0x10000000) == 0 )
      return RtlDebugFreeHeap(Src);
  }
  else
  {
    v7 = 3LL;
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
    if ( ((*((_BYTE *)v176 + 10) ^ (unsigned __int8)(Src[69] & (*((_DWORD *)Src + 31) >> 17))) & 8) == 0 )
      RtlpLogHeapFreeEvent(Src, a4, v7);
  }
  else
  {
    v11 = v176;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      v122 = *((_DWORD *)v11 + 2) ^ *((_DWORD *)Src + 34);
      *((_DWORD *)v11 + 2) = v122;
      if ( *((_BYTE *)v11 + 11) != ((unsigned __int8)v122 ^ (unsigned __int8)(BYTE1(v122) ^ BYTE2(v122))) )
        RtlpAnalyzeHeapFailure(Src, v11);
    }
    goto LABEL_26;
  }
  if ( (unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)Src + 44), a2, v7) )
  {
    ++*((_DWORD *)Src + 154);
  }
  else
  {
    if ( byte_1801D2908 )
    {
      v134 = 0;
      v12 = 0;
      goto LABEL_12;
    }
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v67 = *((_DWORD *)Src + 154) + 1;
    *((_DWORD *)Src + 154) = v67;
    v68 = *((_DWORD *)Src + 155) + 1;
    *((_DWORD *)Src + 155) = v68;
    if ( *((_BYTE *)Src + 418) != 2 )
    {
      if ( v67 < v68 )
      {
        *((_QWORD *)Src + 77) = 0LL;
        v67 = 0;
        v68 = 0;
      }
      if ( v68 >= v67 >> 4 )
        *((_DWORD *)Src + 30) |= 0x20000000u;
    }
  }
  v134 = 1;
  v12 = 1;
LABEL_12:
  if ( !v12 )
  {
    v85 = NtCurrentTeb();
    v85->LastStatusValue = -1073741420;
    v85->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225876LL);
    v141 = 0;
    goto LABEL_283;
  }
  v131 = 1;
  if ( *((_DWORD *)Src + 31) )
  {
    v13 = *((_DWORD *)v11 + 2) ^ *((_DWORD *)Src + 34);
    *((_DWORD *)v11 + 2) = v13;
    if ( *((_BYTE *)v11 + 11) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
      RtlpAnalyzeHeapFailure(Src, v11);
  }
  v14 = v11[4];
  for ( i = (__int64 *)*((_QWORD *)Src + 39); ; i = (__int64 *)*i )
  {
    v16 = *((unsigned int *)i + 2);
    if ( v14 < v16 )
    {
      v17 = v11[4];
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
  v20 = *((_BYTE *)v11 + 10);
  if ( (v20 & 8) != 0 )
    *((_BYTE *)v11 + 10) = v20 & 0xF7;
  if ( *((_BYTE *)v11 + 15) == 4 )
  {
    v86 = (__int64)(v11 - 24);
    v137 = v86;
    v144 = *(_QWORD *)(v86 + 32);
    v146 = v86 & 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)Src + 74) -= v144;
    v87 = *(_QWORD *)v86;
    v88 = *(__int64 **)(v86 + 8);
    v89 = *v88;
    v90 = *(_QWORD *)(*(_QWORD *)v86 + 8LL);
    if ( *v88 == v90 && v89 == v86 )
    {
      *v88 = v87;
      *(_QWORD *)(v87 + 8) = v88;
    }
    else
    {
      RtlpLogHeapFailure(13, 0LL, v86, v90, v89, 0LL);
    }
    if ( !v5 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      v88 = (__int64 *)NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
        RtlpUpdateTagEntry((_DWORD)Src, *(unsigned __int16 *)(v86 + 18), *(_QWORD *)(v86 + 32) >> 4, 0, 3);
    }
    if ( v131 )
    {
      RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      v131 = 0;
    }
    v91 = *(_QWORD *)(v137 + 40);
    v152 = v91;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v88, v89, v7, v90) )
    {
      v92 = (__int64)NtCurrentPeb()->SharedData + 558;
      v91 = v152;
    }
    else
    {
      v92 = 2147353480LL;
    }
    if ( *(_BYTE *)v92 )
      RtlpHeapLogRangeRelease(Src, v146, v91);
    v133 = 0LL;
    v143 = RtlpSecMemFreeVirtualMemory(v92, &v146, &v133, 0x8000LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v94, v93, v95, v96) )
      v100 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v100 = 2147353472LL;
    if ( *(_BYTE *)v100 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v100, v97, v98, v99) )
        v9 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapContractEvent((_DWORD)Src, v137, v144, 16 * *((_QWORD *)Src + 24), 0, 0LL, *(unsigned __int8 *)v9);
    }
    v104 = 2147353482LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v100, v97, v98, v99) )
      v105 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v105 = 2147353482LL;
    if ( *(_BYTE *)v105 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v105, v101, v102, v103) )
        v104 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapContractEvent((_DWORD)Src, v137, v144, 16 * *((_QWORD *)Src + 24), 0, 0LL, *(unsigned __int8 *)v104);
    }
    v167 = v133 >> 4;
    goto LABEL_283;
  }
  v21 = v11[4];
  if ( (unsigned __int16)v21 < Src[216] )
  {
    v22 = 1 << (v11[4] & 7);
    v11 = v176;
    if ( ((unsigned __int8)v22 & *((_BYTE *)Src + (v21 >> 3) + 434)) == 0 )
    {
      v23 = (_WORD *)(*((_QWORD *)Src + 53) + 2LL * v176[4]);
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
      v109 = v176[4];
      if ( (v176[5] & 2) != 0 )
      {
        v163 = (char *)&v176[8 * v176[4] - 8];
        v110 = *((unsigned __int16 *)v163 + 1);
      }
      else
      {
        v110 = *((unsigned __int8 *)v176 + 11);
      }
      updated = RtlpUpdateTagEntry((_DWORD)Src, v110, v109, 0, 2);
    }
  }
  Entry = v11[4];
  v133 = Entry;
  v167 = Entry;
  if ( *((char *)Src + 112) >= 0 )
  {
    v136 = 0;
    v164 = v11;
    v25 = 16 * (v11[6] ^ (unsigned __int64)Src[70]);
    v26 = &v11[v25 / 0xFFFFFFFFFFFFFFFEuLL];
    if ( &v11[v25 / 0xFFFFFFFFFFFFFFFEuLL] != v11
      && ((*((_BYTE *)v26 + 10) ^ (unsigned __int8)(Src[69] & (*((_DWORD *)Src + 31) >> 20))) & 1) == 0 )
    {
      if ( *((_DWORD *)Src + 31) )
      {
        v71 = *((_DWORD *)v26 + 2) ^ *((_DWORD *)Src + 34);
        *((_DWORD *)v26 + 2) = v71;
        if ( HIBYTE(v71) != ((unsigned __int8)v71 ^ (unsigned __int8)(BYTE1(v71) ^ BYTE2(v71))) )
          RtlpAnalyzeHeapFailure(Src, v26);
      }
      v72 = (__int64)(v26 + 8);
      v73 = *((_QWORD *)v26 + 2);
      v74 = (__int64 *)*((_QWORD *)v26 + 3);
      v75 = *v74;
      a4 = *(_QWORD *)(v73 + 8);
      if ( (unsigned __int16 *)*v74 == v26 + 8 && v75 == a4 )
      {
        *((_QWORD *)Src + 24) -= v26[4];
        v76 = (__int64 **)*((_QWORD *)Src + 39);
        if ( v76 )
        {
          v154 = 0LL;
          v77 = v26[4];
          while ( 1 )
          {
            v78 = *((unsigned int *)v76 + 2);
            if ( v77 < v78 )
              break;
            if ( !*v76 )
            {
              v77 = (unsigned int)(v78 - 1);
              break;
            }
            v76 = (__int64 **)*v76;
          }
          v154 = v77;
          LOBYTE(v72) = 1;
          RtlpHeapRemoveListEntry((_DWORD)Src, (_DWORD)v76, v72, (_DWORD)v26 + 16, v77, v26[4]);
        }
        *v74 = v73;
        *(_QWORD *)(v73 + 8) = v74;
        if ( (v26[5] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(Src, v26) )
        {
          v82 = *((_BYTE *)v26 + 10);
          if ( (v82 & 4) != 0 )
          {
            v155 = 0LL;
            v83 = 16LL * v26[4] - 32;
            v155 = v83;
            if ( (v82 & 2) != 0 && v83 > 4 )
            {
              v83 -= 4LL;
              v155 = v83;
            }
            v84 = RtlCompareMemoryUlong(v26 + 16, v83, 4277075694LL);
            if ( v84 != v83 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v26, (char *)v26 + v84 + 32);
              RtlpBreakPointHeap();
            }
          }
          *((_BYTE *)v26 + 10) = 0;
          *((_BYTE *)v26 + 15) = 0;
          v11 = v26;
          v164 = v26;
          v133 += v26[4];
          v26[4] = v133;
          v26[8 * v133 + 6] = Src[70] ^ v133;
        }
        else
        {
          LOBYTE(a4) = 1;
          RtlpDeCommitFreeBlock(Src, v26, v26[4], a4);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, (__int64)Src, v72, a4, v75, 0LL);
      }
      Entry = v133;
    }
    v27 = (__int64)&v11[8 * Entry];
    if ( *((_DWORD *)Src + 31) )
    {
      v168 = 0LL;
      DWORD2(v168) = *((_DWORD *)Src + 34) ^ *(_DWORD *)(v27 + 8);
      if ( BYTE11(v168) != (BYTE8(v168) ^ (unsigned __int8)(BYTE9(v168) ^ BYTE10(v168))) )
      {
        v135 = 0;
        v28 = 0;
        Entry = v133;
        goto LABEL_40;
      }
      Entry = v133;
    }
    v135 = 1;
    v28 = 1;
LABEL_40:
    if ( v28 )
      goto LABEL_43;
    RtlpLogHeapFailure(3, (__int64)Src, v27, 0LL, 0LL, 0LL);
    while ( 1 )
    {
      Entry = v133;
LABEL_43:
      if ( ((*(_BYTE *)(v27 + 10) ^ (unsigned __int8)(Src[69] & (*((_DWORD *)Src + 31) >> 20))) & 1) != 0 )
        break;
      if ( *((_DWORD *)Src + 31) )
      {
        v29 = *(_DWORD *)(v27 + 8) ^ *((_DWORD *)Src + 34);
        *(_DWORD *)(v27 + 8) = v29;
        if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE2(v29) ^ BYTE1(v29))) )
          RtlpAnalyzeHeapFailure(Src, v27);
      }
      v30 = *(_QWORD *)(v27 + 16);
      v31 = *(__int64 **)(v27 + 24);
      v32 = *v31;
      a4 = *(_QWORD *)(v30 + 8);
      if ( *v31 == v27 + 16 && v32 == a4 )
      {
        *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v27 + 8);
        v33 = *((_QWORD *)Src + 39);
        if ( v33 )
        {
          v156 = 0LL;
          v34 = *(unsigned __int16 *)(v27 + 8);
          while ( 1 )
          {
            v35 = *(unsigned int *)(v33 + 8);
            if ( v34 < v35 )
              break;
            Entry = *(_QWORD *)v33;
            if ( !*(_QWORD *)v33 )
            {
              v34 = (unsigned int)(v35 - 1);
              break;
            }
            v33 = *(_QWORD *)v33;
          }
          v156 = v34;
          LOBYTE(Entry) = 1;
          RtlpHeapRemoveListEntry((_DWORD)Src, v33, Entry, v27 + 16, v34, *(unsigned __int16 *)(v27 + 8));
        }
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        if ( (*(_BYTE *)(v27 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(Src, v27) )
        {
          v36 = *(_BYTE *)(v27 + 10);
          if ( (v36 & 4) != 0 )
          {
            v147 = 0LL;
            v41 = 16LL * *(unsigned __int16 *)(v27 + 8) - 32;
            v147 = v41;
            if ( (v36 & 2) != 0 && v41 > 4 )
            {
              v41 -= 4LL;
              v147 = v41;
            }
            v42 = RtlCompareMemoryUlong(v27 + 32, v41, 4277075694LL);
            if ( v42 != v41 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v27,
                (const void *)(v42 + v27 + 32));
              if ( NtCurrentPeb()->BeingDebugged )
              {
                RtlpHeapInvalidBadAddress = v27;
                __debugbreak();
                RtlpHeapInvalidBreakPoint = 0;
              }
            }
          }
          *((_BYTE *)v11 + 10) = 0;
          *((_BYTE *)v11 + 15) = 0;
          v133 += *(unsigned __int16 *)(v27 + 8);
          v11[4] = v133;
          v11[8 * v133 + 6] = Src[70] ^ v133;
          Entry = v133;
          break;
        }
        LOBYTE(a4) = 1;
        RtlpDeCommitFreeBlock(Src, v27, *(unsigned __int16 *)(v27 + 8), a4);
      }
      else
      {
        RtlpLogHeapFailure(13, (__int64)Src, v27 + 16, a4, v32, 0LL);
      }
    }
    v176 = v11;
  }
  if ( Entry >= *((_QWORD *)Src + 22) && Entry + *((_QWORD *)Src + 24) >= *((_QWORD *)Src + 23) )
  {
    RtlpDeCommitFreeBlock(Src, v11, Entry, 0LL);
    goto LABEL_283;
  }
  if ( Entry + *((_QWORD *)Src + 24) <= *((_QWORD *)Src + 23) || Entry < 0x100 || Src[70] != v11[6] )
  {
    if ( Entry > 0xFF00 )
    {
      RtlpInsertFreeBlock(Src, v11);
      v66 = Src + 62;
LABEL_132:
      if ( updated )
      {
        if ( *v66 )
        {
          v106 = *((_DWORD *)v11 + 2) ^ *((_DWORD *)Src + 34);
          *((_DWORD *)v11 + 2) = v106;
          if ( *((_BYTE *)v11 + 11) != ((unsigned __int8)v106 ^ (unsigned __int8)(BYTE1(v106) ^ BYTE2(v106))) )
            RtlpAnalyzeHeapFailure(Src, v11);
        }
        *((_BYTE *)v11 + 10) |= 2u;
        v107 = v11[4];
        v108 = &v11[8 * v107];
        if ( *v66 )
        {
          *((_BYTE *)v11 + 11) = v107 ^ *((_BYTE *)v11 + 10) ^ BYTE1(v107);
          *((_DWORD *)v11 + 2) ^= *((_DWORD *)Src + 34);
        }
        *(v108 - 2) = updated;
        *(v108 - 1) = 0;
        if ( (*((_DWORD *)Src + 28) & 0x8000000) != 0 )
        {
          v142 = RtlLogStackBackTraceEx(1LL, v107, Entry, a4);
          *(v108 - 1) = v142;
        }
      }
      goto LABEL_283;
    }
    if ( v5 )
    {
      v37 = (unsigned __int16)Entry;
      v169 = (unsigned __int16)Entry;
      *((_BYTE *)v11 + 10) = 0;
      *((_BYTE *)v11 + 15) = 0;
      v38 = (_QWORD **)(Src + 168);
      v39 = (__int64 *)*((_QWORD *)Src + 39);
      if ( !v39 )
      {
        v45 = *v38;
        goto LABEL_107;
      }
      j = 0LL;
      while ( 1 )
      {
        v40 = *((unsigned int *)v39 + 2);
        if ( (unsigned __int16)Entry < v40 )
        {
          j = (unsigned __int16)Entry;
          v43 = (unsigned __int16)Entry;
          goto LABEL_85;
        }
        if ( !*v39 )
          break;
        v39 = (__int64 *)*v39;
      }
      v43 = v40 - 1;
      for ( j = (unsigned int)(v40 - 1); ; j = v43 )
      {
LABEL_85:
        v44 = v43 - *((_DWORD *)v39 + 6);
        v45 = 0LL;
        Entry = v39[4];
        v137 = Entry;
        v46 = *(_QWORD *)(Entry + 8);
        if ( Entry == v46 )
        {
          v45 = (_QWORD *)Entry;
        }
        else
        {
          v47 = *(_DWORD *)(v46 - 16 + 8);
          v170 = v47;
          if ( *((_DWORD *)Src + 31) )
          {
            v47 ^= *((_DWORD *)Src + 34);
            v48 = v47;
            v170 = v47;
            if ( HIBYTE(v47) != ((unsigned __int8)v47 ^ (unsigned __int8)(BYTE1(v47) ^ BYTE2(v47))) )
            {
              RtlpLogHeapFailure(3, (__int64)Src, v46 - 16, 0LL, 0LL, 0LL);
              LOWORD(v47) = v48;
              Entry = v137;
            }
          }
          v158 = v37 - (unsigned __int16)v47;
          if ( v158 > 0 )
          {
            v45 = (_QWORD *)Entry;
          }
          else
          {
            v49 = *(_QWORD **)Entry;
            v50 = *(_DWORD *)(*(_QWORD *)Entry - 8LL);
            v171 = v50;
            if ( *((_DWORD *)Src + 31) )
            {
              v50 ^= *((_DWORD *)Src + 34);
              v51 = v50;
              v171 = v50;
              if ( HIBYTE(v50) != ((unsigned __int8)v50 ^ (unsigned __int8)(BYTE1(v50) ^ BYTE2(v50))) )
              {
                RtlpLogHeapFailure(3, (__int64)Src, (__int64)(v49 - 2), 0LL, 0LL, 0LL);
                LOWORD(v50) = v51;
                Entry = v137;
              }
            }
            v159 = v37 - (unsigned __int16)v50;
            if ( v159 <= 0 )
            {
              v45 = *(_QWORD **)Entry;
            }
            else if ( !*v39 && v43 == *((_DWORD *)v39 + 2) - 1 )
            {
              if ( *((_DWORD *)v39 + 3) )
                v44 = (unsigned int)(2 * v44);
              v79 = *(_QWORD **)(v39[6] + 8 * v44);
              while ( (_QWORD *)Entry != v79 )
              {
                Entry = (unsigned __int64)(v79 - 2);
                v80 = *((_DWORD *)v79 - 2);
                v172 = v80;
                if ( *((_DWORD *)Src + 31) )
                {
                  v80 ^= *((_DWORD *)Src + 34);
                  v81 = v80;
                  v172 = v80;
                  if ( HIBYTE(v80) != ((unsigned __int8)v80 ^ (unsigned __int8)(BYTE1(v80) ^ BYTE2(v80))) )
                  {
                    RtlpLogHeapFailure(3, (__int64)Src, Entry, 0LL, 0LL, 0LL);
                    LOWORD(v80) = v81;
                  }
                }
                v160 = v37 - (unsigned __int16)v80;
                if ( v160 <= 0 )
                {
                  v45 = v79;
                  break;
                }
                v79 = (_QWORD *)*v79;
                Entry = v137;
              }
            }
            else
            {
              v148 = 0LL;
              Entry = (unsigned int)v44 >> 5;
              v140 = (unsigned int)v44 >> 5;
              a4 = ((unsigned int)(*((_DWORD *)v39 + 2) - *((_DWORD *)v39 + 6)) >> 5) - 1;
              v52 = (unsigned int *)(v39[5] + 4 * Entry);
              v148 = v52;
              v53 = *v52 & (-1 << (v44 & 0x1F));
              while ( !v53 )
              {
                if ( (unsigned int)Entry > (unsigned int)a4 )
                {
                  v45 = 0LL;
                  goto LABEL_104;
                }
                v148 = ++v52;
                v53 = *v52;
                Entry = (unsigned int)(Entry + 1);
                v140 = Entry;
              }
              if ( (_WORD)v53 )
              {
                if ( (_BYTE)v53 )
                  v54 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v53];
                else
                  v54 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v53)] + 8;
              }
              else if ( (v53 & 0xFF0000) != 0 )
              {
                v54 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v53)] + 16;
              }
              else
              {
                v54 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v53 >> 24] + 24;
              }
              Entry = (unsigned int)(v54 + 32 * Entry);
              v140 = Entry;
              if ( *((_DWORD *)v39 + 3) )
                Entry = (unsigned int)(2 * Entry);
              v45 = *(_QWORD **)(v39[6] + 8 * Entry);
            }
          }
LABEL_104:
          v11 = v176;
        }
        if ( v45 )
          break;
        v39 = (__int64 *)*v39;
        v43 = *((_DWORD *)v39 + 6);
      }
      while ( 1 )
      {
        v38 = (_QWORD **)(Src + 168);
LABEL_107:
        if ( v38 == v45 )
          break;
        if ( *((_DWORD *)Src + 31) )
        {
          v55 = *((_DWORD *)v45 - 2);
          v173 = v55;
          if ( (v55 & *((_DWORD *)Src + 31)) != 0 )
          {
            v55 ^= *((_DWORD *)Src + 34);
            v173 = v55;
          }
          v56 = v55;
          v138 = v55;
          v11 = v176;
        }
        else
        {
          v138 = *((_WORD *)v45 - 4);
          v56 = v138;
        }
        if ( v37 <= v56 )
          break;
        v45 = (_QWORD *)*v45;
      }
      v57 = v11 + 8;
      v58 = (__int64 *)v45[1];
      if ( (_QWORD *)*v58 == v45 )
      {
        *v57 = v45;
        *((_QWORD *)v11 + 3) = v58;
        *v58 = (__int64)v57;
        v45[1] = v57;
      }
      else
      {
        RtlpLogHeapFailure(13, 0LL, (__int64)v45, 0LL, *v58, 0LL);
      }
      *((_QWORD *)Src + 24) += v11[4];
      v59 = (__int64 *)*((_QWORD *)Src + 39);
      if ( v59 )
      {
        v149 = 0LL;
        v60 = v11[4];
        while ( 1 )
        {
          v61 = *((unsigned int *)v59 + 2);
          if ( v60 < v61 )
          {
            v149 = v11[4];
            v62 = v61 - 1;
            goto LABEL_122;
          }
          if ( !*v59 )
            break;
          v59 = (__int64 *)*v59;
        }
        v62 = v61 - 1;
        v149 = v62;
        LODWORD(v60) = v62;
LABEL_122:
        Entry = v11[4];
        v165 = Entry;
        v63 = v60 - *((_DWORD *)v59 + 6);
        v64 = 2 * v63;
        if ( !*((_DWORD *)v59 + 3) )
          v64 = v63;
        ++*((_DWORD *)v59 + 4);
        v65 = *(_QWORD *)(v59[6] + 8 * v64);
        if ( (_DWORD)v60 == v62 )
          ++*((_DWORD *)v59 + 5);
        if ( !v65 )
          goto LABEL_127;
        v69 = *(_DWORD *)(v65 - 8);
        v174 = v69;
        if ( *((_DWORD *)Src + 31) )
        {
          v69 ^= *((_DWORD *)Src + 34);
          v70 = v69;
          v174 = v69;
          if ( HIBYTE(v69) != ((unsigned __int8)v69 ^ (unsigned __int8)(BYTE1(v69) ^ BYTE2(v69))) )
          {
            RtlpLogHeapFailure(3, (__int64)Src, v65 - 16, 0LL, 0LL, 0LL);
            LOWORD(v69) = v70;
            LODWORD(Entry) = v165;
          }
        }
        Entry = (unsigned int)Entry - (unsigned __int16)v69;
        v161 = Entry;
        v11 = v176;
        if ( (int)Entry <= 0 )
LABEL_127:
          *(_QWORD *)(v59[6] + 8 * v64) = v57;
        if ( !v65 )
          *(_DWORD *)(v59[5] + 4LL * (v63 >> 5)) |= 1 << (v63 & 0x1F);
      }
LABEL_130:
      v66 = Src + 62;
      if ( *((_DWORD *)Src + 31) )
      {
        *((_BYTE *)v11 + 11) = *((_BYTE *)v11 + 8) ^ *((_BYTE *)v11 + 9) ^ *((_BYTE *)v11 + 10);
        *((_DWORD *)v11 + 2) ^= *((_DWORD *)Src + 34);
      }
      goto LABEL_132;
    }
    v111 = (unsigned __int16)Entry;
    *((_BYTE *)v11 + 10) &= 0xF0u;
    *((_BYTE *)v11 + 15) = 0;
    if ( (Src[56] & 0x40) == 0 )
    {
LABEL_247:
      v114 = (unsigned __int64 *)(Src + 168);
      if ( *((_QWORD *)Src + 39) )
        Entry = RtlpFindEntry(Src, v111);
      else
        Entry = *v114;
      while ( v114 != (unsigned __int64 *)Entry )
      {
        if ( *((_DWORD *)Src + 31) )
        {
          v120 = *(_DWORD *)(Entry - 8);
          v175 = v120;
          v121 = v120;
          if ( (v120 & *((_DWORD *)Src + 31)) != 0 )
          {
            v120 ^= *((_DWORD *)Src + 34);
            v121 = v120;
            v175 = v120;
          }
          v139 = v120;
          v11 = v176;
        }
        else
        {
          v139 = *(_WORD *)(Entry - 8);
          v121 = v139;
        }
        if ( v111 <= v121 )
          break;
        Entry = *(_QWORD *)Entry;
      }
      v115 = (unsigned __int64 *)(v11 + 8);
      v116 = *(__int64 **)(Entry + 8);
      if ( *v116 == Entry )
      {
        *v115 = Entry;
        *((_QWORD *)v11 + 3) = v116;
        *v116 = (__int64)v115;
        *(_QWORD *)(Entry + 8) = v115;
      }
      else
      {
        RtlpLogHeapFailure(13, 0LL, Entry, 0LL, *v116, 0LL);
      }
      *((_QWORD *)Src + 24) += v11[4];
      v117 = (__int64 **)*((_QWORD *)Src + 39);
      if ( v117 )
      {
        v151 = 0LL;
        v118 = v11[4];
        while ( 1 )
        {
          v119 = *((unsigned int *)v117 + 2);
          if ( v118 < v119 )
            break;
          if ( !*v117 )
          {
            v118 = (unsigned int)(v119 - 1);
            break;
          }
          v117 = (__int64 **)*v117;
        }
        v151 = v118;
        LOBYTE(v119) = 1;
        RtlpHeapAddListEntry((_DWORD)Src, (_DWORD)v117, v119, (_DWORD)v11 + 16, v118, v11[4]);
      }
      goto LABEL_130;
    }
    v112 = v11 + 16;
    v166 = v11 + 16;
    v113 = (16 * (unsigned __int64)(unsigned int)v111 - 32) >> 2;
    v150 = v113;
    if ( v113 )
    {
      if ( ((unsigned __int8)v112 & 4) == 0 )
        goto LABEL_244;
      *v112 = -17891602;
      v150 = --v113;
      if ( v113 )
      {
        v112 = v11 + 18;
        v166 = v11 + 18;
LABEL_244:
        memset64(v112, 0xFEEEFEEEFEEEFEEEuLL, v113 >> 1);
        if ( (v113 & 1) != 0 )
          v112[v113 - 1] = -17891602;
      }
    }
    *((_BYTE *)v11 + 10) |= 4u;
    goto LABEL_247;
  }
  RtlpDeCommitFreeBlock(Src, v11, Entry, 0LL);
LABEL_283:
  v123 = 256;
  if ( v131 )
  {
    if ( (*((_DWORD *)Src + 29) & 0x1000000) == 0 )
    {
      v124 = *((_DWORD *)Src + 160) + 1;
      *((_DWORD *)Src + 160) = v124;
      v125 = *((_DWORD *)Src + 162);
      if ( v124 > v125 )
      {
        *((_DWORD *)Src + 160) = 0;
        v129 = *((_QWORD *)Src + 72) - 16LL * *((_QWORD *)Src + 24);
        if ( v129 > *((_QWORD *)Src + 84) )
          *((_QWORD *)Src + 84) = v129;
        *((_QWORD *)Src + 85) = v129;
      }
      v126 = Src + 326;
      v127 = *((_DWORD *)Src + 163) + 1;
      *((_DWORD *)Src + 163) = v127;
      if ( v127 >= 0x1000 )
      {
        v130 = (char *)(Src + 326);
        if ( *((_BYTE *)Src + 418) != 2 || (v130 = (char *)(Src + 326), *((_DWORD *)Src + 164) <= 0x10u) )
          v123 = 16;
        if ( *((_DWORD *)Src + 161) > v123 && v125 < 0x10000 )
        {
          *((_DWORD *)Src + 162) = 2 * v125;
          v126 = v130;
        }
        *((_DWORD *)Src + 161) = 0;
        *v126 = 0;
      }
    }
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  }
  return v141;
}
