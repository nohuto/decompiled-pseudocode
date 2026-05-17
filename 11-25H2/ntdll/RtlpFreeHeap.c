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

__int64 __fastcall RtlpFreeHeap(_DWORD *Src, int a2, unsigned __int16 *a3, __int64 a4)
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
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int16 *v26; // rdi
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
  unsigned __int64 v42; // r14
  __int64 v43; // r15
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
  unsigned __int64 v90; // rsi
  __int64 v91; // r14
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
  unsigned __int16 *v106; // r14
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
  char *v130; // rdi
  char v131; // [rsp+40h] [rbp-198h]
  unsigned __int16 updated; // [rsp+44h] [rbp-194h]
  unsigned __int64 v133; // [rsp+48h] [rbp-190h] BYREF
  char v134; // [rsp+50h] [rbp-188h]
  char v135; // [rsp+51h] [rbp-187h]
  char v136; // [rsp+58h] [rbp-180h]
  _QWORD *v137; // [rsp+60h] [rbp-178h]
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
  __int64 v165; // [rsp+120h] [rbp-B8h]
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
  if ( Src == (_DWORD *)a3 )
  {
    RtlpLogHeapFailure(9, (__int64)Src, (__int64)a3, 0LL, 0LL, 0LL);
    return 0LL;
  }
  v6 = Src[29] | a2;
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
    if ( ((*((_BYTE *)v176 + 10) ^ (unsigned __int8)(*((_BYTE *)Src + 138) & (Src[31] >> 17))) & 8) == 0 )
      RtlpLogHeapFreeEvent((__int64)Src, a4, v7, a4);
  }
  else
  {
    v11 = v176;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( Src[31] )
    {
      v122 = *((_DWORD *)v11 + 2) ^ Src[34];
      *((_DWORD *)v11 + 2) = v122;
      if ( *((_BYTE *)v11 + 11) != ((unsigned __int8)v122 ^ (unsigned __int8)(BYTE1(v122) ^ BYTE2(v122))) )
        RtlpAnalyzeHeapFailure(Src, v11);
    }
    goto LABEL_26;
  }
  if ( (unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)Src + 44)) )
  {
    ++Src[154];
  }
  else
  {
    if ( byte_1801D4988 )
    {
      v134 = 0;
      v12 = 0;
      goto LABEL_12;
    }
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v73 = Src[154] + 1;
    Src[154] = v73;
    v74 = Src[155] + 1;
    Src[155] = v74;
    if ( *((_BYTE *)Src + 418) != 2 )
    {
      if ( v73 < v74 )
      {
        *((_QWORD *)Src + 77) = 0LL;
        v73 = 0;
        v74 = 0;
      }
      if ( v74 >= v73 >> 4 )
        Src[30] |= 0x20000000u;
    }
  }
  v134 = 1;
  v12 = 1;
LABEL_12:
  if ( !v12 )
  {
    v93 = NtCurrentTeb();
    v93->LastStatusValue = -1073741420;
    v93->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC0000194);
    v141 = 0;
    goto LABEL_283;
  }
  v131 = 1;
  if ( Src[31] )
  {
    v13 = *((_DWORD *)v11 + 2) ^ Src[34];
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
    v94 = (__int64)(v11 - 24);
    v137 = (_QWORD *)v94;
    v144 = *(_QWORD *)(v94 + 32);
    v146 = v94 & 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)Src + 74) -= v144;
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
        RtlpUpdateTagEntry((__int64)Src, *(_WORD *)(v94 + 18), *(_QWORD *)(v94 + 32) >> 4, 0LL, 3);
    }
    if ( v131 )
    {
      RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      v131 = 0;
    }
    v99 = v137[5];
    v152 = v99;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v100 = (__int64)NtCurrentPeb()->SharedData + 558;
      v99 = v152;
    }
    else
    {
      v100 = 2147353480LL;
    }
    if ( *(_BYTE *)v100 )
      RtlpHeapLogRangeRelease((__int64)Src, v146, v99);
    v133 = 0LL;
    v143 = RtlpSecMemFreeVirtualMemory(v100, &v146, &v133, 0x8000LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v101 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v101 = 2147353472LL;
    if ( *(_BYTE *)v101 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapContractEvent(
        (_DWORD)Src,
        (_DWORD)v137,
        v144,
        16 * *((_QWORD *)Src + 24),
        0,
        0LL,
        *(unsigned __int8 *)v9);
    }
    v102 = 2147353482LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v103 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v103 = 2147353482LL;
    if ( *(_BYTE *)v103 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v102 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapContractEvent(
        (_DWORD)Src,
        (_DWORD)v137,
        v144,
        16 * *((_QWORD *)Src + 24),
        0,
        0LL,
        *(unsigned __int8 *)v102);
    }
    v167 = v133 >> 4;
    goto LABEL_283;
  }
  v21 = v11[4];
  if ( (unsigned __int16)v21 < *((_WORD *)Src + 216) )
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
      v107 = v176[4];
      if ( (v176[5] & 2) != 0 )
      {
        v163 = (char *)&v176[8 * v176[4] - 8];
        v108 = *((_WORD *)v163 + 1);
      }
      else
      {
        v108 = *((unsigned __int8 *)v176 + 11);
      }
      updated = RtlpUpdateTagEntry((__int64)Src, v108, v107, 0LL, 2);
    }
  }
  v24 = v11[4];
  v133 = v24;
  v167 = v24;
  if ( *((char *)Src + 112) >= 0 )
  {
    v136 = 0;
    v164 = v11;
    v25 = 16 * (v11[6] ^ (unsigned __int64)*((unsigned __int16 *)Src + 70));
    v26 = &v11[v25 / 0xFFFFFFFFFFFFFFFEuLL];
    if ( &v11[v25 / 0xFFFFFFFFFFFFFFFEuLL] != v11
      && ((*((_BYTE *)v26 + 10) ^ (unsigned __int8)(*((_BYTE *)Src + 138) & (Src[31] >> 20))) & 1) == 0 )
    {
      if ( Src[31] )
      {
        v77 = *((_DWORD *)v26 + 2) ^ Src[34];
        *((_DWORD *)v26 + 2) = v77;
        if ( HIBYTE(v77) != ((unsigned __int8)v77 ^ (unsigned __int8)(BYTE1(v77) ^ BYTE2(v77))) )
          RtlpAnalyzeHeapFailure(Src, v26);
      }
      v78 = (__int64)(v26 + 8);
      v79 = *((_QWORD *)v26 + 2);
      v80 = (__int64 *)*((_QWORD *)v26 + 3);
      v81 = *v80;
      v82 = *(_QWORD *)(v79 + 8);
      if ( (unsigned __int16 *)*v80 == v26 + 8 && v81 == v82 )
      {
        *((_QWORD *)Src + 24) -= v26[4];
        v83 = (__int64 **)*((_QWORD *)Src + 39);
        if ( v83 )
        {
          v154 = 0LL;
          v84 = v26[4];
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
          RtlpHeapRemoveListEntry((_DWORD)Src, (_DWORD)v83, v78, (_DWORD)v26 + 16, v84, v26[4]);
        }
        *v80 = v79;
        *(_QWORD *)(v79 + 8) = v80;
        if ( (v26[5] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(Src, v26, v78) )
        {
          v89 = *((_BYTE *)v26 + 10);
          if ( (v89 & 4) != 0 )
          {
            v155 = 0LL;
            v90 = 16LL * v26[4] - 32;
            v155 = v90;
            if ( (v89 & 2) != 0 && v90 > 4 )
            {
              v90 -= 4LL;
              v155 = v90;
            }
            v91 = RtlCompareMemoryUlong(v26 + 16, v90, 4277075694LL);
            if ( v91 != v90 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v26, (char *)v26 + v91 + 32);
              RtlpBreakPointHeap();
            }
          }
          *((_BYTE *)v26 + 10) = 0;
          *((_BYTE *)v26 + 15) = 0;
          v11 = v26;
          v164 = v26;
          v133 += v26[4];
          v26[4] = v133;
          v26[8 * v133 + 6] = *((_WORD *)Src + 70) ^ v133;
        }
        else
        {
          LOBYTE(v119) = 1;
          RtlpDeCommitFreeBlock(Src, v26, v26[4], v119);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, (__int64)Src, v78, v82, v81, 0LL);
      }
      v24 = v133;
    }
    v27 = (__int64)&v11[8 * v24];
    if ( Src[31] )
    {
      v168 = 0LL;
      DWORD2(v168) = Src[34] ^ *(_DWORD *)(v27 + 8);
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
    RtlpLogHeapFailure(3, (__int64)Src, v27, 0LL, 0LL, 0LL);
    while ( 1 )
    {
      v24 = v133;
LABEL_43:
      if ( ((*(_BYTE *)(v27 + 10) ^ (unsigned __int8)(*((_BYTE *)Src + 138) & (Src[31] >> 20))) & 1) != 0 )
        break;
      if ( Src[31] )
      {
        v29 = *(_DWORD *)(v27 + 8) ^ Src[34];
        *(_DWORD *)(v27 + 8) = v29;
        if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE2(v29) ^ BYTE1(v29))) )
          RtlpAnalyzeHeapFailure(Src, v27);
      }
      v30 = *(_QWORD *)(v27 + 16);
      v31 = *(__int64 **)(v27 + 24);
      v32 = *v31;
      v33 = *(_QWORD *)(v30 + 8);
      if ( *v31 == v27 + 16 && v32 == v33 )
      {
        *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v27 + 8);
        v34 = *((_QWORD *)Src + 39);
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
          RtlpHeapRemoveListEntry((_DWORD)Src, v34, v24, v27 + 16, v35, *(unsigned __int16 *)(v27 + 8));
        }
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        if ( (*(_BYTE *)(v27 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(Src, v27, v24) )
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
            v43 = RtlCompareMemoryUlong(v27 + 32, v42, 4277075694LL);
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
          *((_BYTE *)v11 + 10) = 0;
          *((_BYTE *)v11 + 15) = 0;
          v133 += *(unsigned __int16 *)(v27 + 8);
          v11[4] = v133;
          v11[8 * v133 + 6] = *((_WORD *)Src + 70) ^ v133;
          v24 = v133;
          break;
        }
        LOBYTE(v92) = 1;
        RtlpDeCommitFreeBlock(Src, v27, *(unsigned __int16 *)(v27 + 8), v92);
      }
      else
      {
        RtlpLogHeapFailure(13, (__int64)Src, v27 + 16, v33, v32, 0LL);
      }
    }
    v176 = v11;
  }
  if ( v24 >= *((_QWORD *)Src + 22) && v24 + *((_QWORD *)Src + 24) >= *((_QWORD *)Src + 23) )
  {
    RtlpDeCommitFreeBlock(Src, v11, v24, 0LL);
    goto LABEL_283;
  }
  if ( v24 + *((_QWORD *)Src + 24) <= *((_QWORD *)Src + 23) || v24 < 0x100 || *((_WORD *)Src + 70) != v11[6] )
  {
    if ( v24 > 0xFF00 )
    {
      RtlpInsertFreeBlock(Src, v11);
      v72 = Src + 31;
LABEL_132:
      if ( updated )
      {
        if ( *v72 )
        {
          v104 = *((_DWORD *)v11 + 2) ^ Src[34];
          *((_DWORD *)v11 + 2) = v104;
          if ( *((_BYTE *)v11 + 11) != ((unsigned __int8)v104 ^ (unsigned __int8)(BYTE1(v104) ^ BYTE2(v104))) )
            RtlpAnalyzeHeapFailure(Src, v11);
        }
        *((_BYTE *)v11 + 10) |= 2u;
        v105 = v11[4];
        v106 = &v11[8 * v105];
        if ( *v72 )
        {
          *((_BYTE *)v11 + 11) = v105 ^ *((_BYTE *)v11 + 10) ^ HIBYTE(v105);
          *((_DWORD *)v11 + 2) ^= Src[34];
        }
        *(v106 - 2) = updated;
        *(v106 - 1) = 0;
        if ( (Src[28] & 0x8000000) != 0 )
        {
          v142 = RtlLogStackBackTraceEx(1u);
          *(v106 - 1) = v142;
        }
      }
      goto LABEL_283;
    }
    if ( v5 )
    {
      v38 = (unsigned __int16)v24;
      v169 = (unsigned __int16)v24;
      *((_BYTE *)v11 + 10) = 0;
      *((_BYTE *)v11 + 15) = 0;
      v39 = (_QWORD **)(Src + 84);
      v40 = (__int64 *)*((_QWORD *)Src + 39);
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
        v137 = v47;
        v48 = (_QWORD *)v47[1];
        if ( v47 == v48 )
        {
          v46 = v47;
        }
        else
        {
          v49 = *((_DWORD *)v48 - 2);
          v170 = v49;
          if ( Src[31] )
          {
            v49 ^= Src[34];
            v50 = v49;
            v170 = v49;
            if ( HIBYTE(v49) != ((unsigned __int8)v49 ^ (unsigned __int8)(BYTE1(v49) ^ BYTE2(v49))) )
            {
              RtlpLogHeapFailure(3, (__int64)Src, (__int64)(v48 - 2), 0LL, 0LL, 0LL);
              LOWORD(v49) = v50;
              v47 = v137;
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
            if ( Src[31] )
            {
              v52 ^= Src[34];
              v53 = v52;
              v171 = v52;
              if ( HIBYTE(v52) != ((unsigned __int8)v52 ^ (unsigned __int8)(BYTE1(v52) ^ BYTE2(v52))) )
              {
                RtlpLogHeapFailure(3, (__int64)Src, v51 - 16, 0LL, 0LL, 0LL);
                LOWORD(v52) = v53;
                v47 = v137;
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
                if ( Src[31] )
                {
                  v87 ^= Src[34];
                  v88 = v87;
                  v172 = v87;
                  if ( HIBYTE(v87) != ((unsigned __int8)v87 ^ (unsigned __int8)(BYTE1(v87) ^ BYTE2(v87))) )
                  {
                    RtlpLogHeapFailure(3, (__int64)Src, (__int64)(v86 - 2), 0LL, 0LL, 0LL);
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
                v47 = v137;
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
        v39 = (_QWORD **)(Src + 84);
LABEL_107:
        if ( v39 == v46 )
          break;
        if ( Src[31] )
        {
          v60 = *((_DWORD *)v46 - 2);
          v173 = v60;
          if ( (v60 & Src[31]) != 0 )
          {
            v60 ^= Src[34];
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
      v62 = v11 + 8;
      v63 = (__int64 *)v46[1];
      if ( (_QWORD *)*v63 == v46 )
      {
        *v62 = v46;
        *((_QWORD *)v11 + 3) = v63;
        *v63 = (__int64)v62;
        v46[1] = v62;
      }
      else
      {
        RtlpLogHeapFailure(13, 0LL, (__int64)v46, 0LL, *v63, 0LL);
      }
      *((_QWORD *)Src + 24) += v11[4];
      v64 = (__int64 *)*((_QWORD *)Src + 39);
      if ( v64 )
      {
        v149 = 0LL;
        v65 = v11[4];
        while ( 1 )
        {
          v66 = *((unsigned int *)v64 + 2);
          if ( v65 < v66 )
          {
            v149 = v11[4];
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
        v68 = v11[4];
        v165 = v11[4];
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
        if ( Src[31] )
        {
          v75 ^= Src[34];
          v76 = v75;
          v174 = v75;
          if ( HIBYTE(v75) != ((unsigned __int8)v75 ^ (unsigned __int8)(BYTE1(v75) ^ BYTE2(v75))) )
          {
            RtlpLogHeapFailure(3, (__int64)Src, v71 - 16, 0LL, 0LL, 0LL);
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
      v72 = Src + 31;
      if ( Src[31] )
      {
        *((_BYTE *)v11 + 11) = *((_BYTE *)v11 + 8) ^ *((_BYTE *)v11 + 9) ^ *((_BYTE *)v11 + 10);
        *((_DWORD *)v11 + 2) ^= Src[34];
      }
      goto LABEL_132;
    }
    v109 = (unsigned __int16)v24;
    *((_BYTE *)v11 + 10) &= 0xF0u;
    *((_BYTE *)v11 + 15) = 0;
    if ( (Src[28] & 0x40) == 0 )
    {
LABEL_247:
      v112 = (_QWORD **)(Src + 84);
      if ( *((_QWORD *)Src + 39) )
        Entry = (_QWORD *)RtlpFindEntry(Src, v109);
      else
        Entry = *v112;
      while ( v112 != Entry )
      {
        if ( Src[31] )
        {
          v120 = *((_DWORD *)Entry - 2);
          v175 = v120;
          v121 = v120;
          if ( (v120 & Src[31]) != 0 )
          {
            v120 ^= Src[34];
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
      v114 = v11 + 8;
      v115 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v115 == Entry )
      {
        *v114 = Entry;
        *((_QWORD *)v11 + 3) = v115;
        *v115 = (__int64)v114;
        Entry[1] = v114;
      }
      else
      {
        RtlpLogHeapFailure(13, 0LL, (__int64)Entry, 0LL, *v115, 0LL);
      }
      *((_QWORD *)Src + 24) += v11[4];
      v116 = *((_QWORD *)Src + 39);
      if ( v116 )
      {
        v151 = 0LL;
        v117 = v11[4];
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
        RtlpHeapAddListEntry((__int64)Src, v116, 1, (__int64)(v11 + 8), v117, v11[4]);
      }
      goto LABEL_130;
    }
    v110 = v11 + 16;
    v166 = v11 + 16;
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
        v110 = v11 + 18;
        v166 = v11 + 18;
LABEL_244:
        memset64(v110, 0xFEEEFEEEFEEEFEEEuLL, v111 >> 1);
        if ( (v111 & 1) != 0 )
          v110[v111 - 1] = -17891602;
      }
    }
    *((_BYTE *)v11 + 10) |= 4u;
    goto LABEL_247;
  }
  RtlpDeCommitFreeBlock(Src, v11, v24, 0LL);
LABEL_283:
  v123 = 256;
  if ( v131 )
  {
    if ( (Src[29] & 0x1000000) == 0 )
    {
      v124 = Src[160] + 1;
      Src[160] = v124;
      v125 = Src[162];
      if ( v124 > v125 )
      {
        Src[160] = 0;
        v129 = *((_QWORD *)Src + 72) - 16LL * *((_QWORD *)Src + 24);
        if ( v129 > *((_QWORD *)Src + 84) )
          *((_QWORD *)Src + 84) = v129;
        *((_QWORD *)Src + 85) = v129;
      }
      v126 = Src + 163;
      v127 = Src[163] + 1;
      Src[163] = v127;
      if ( v127 >= 0x1000 )
      {
        v130 = (char *)(Src + 163);
        if ( *((_BYTE *)Src + 418) != 2 || (v130 = (char *)(Src + 163), Src[164] <= 0x10u) )
          v123 = 16;
        if ( Src[161] > v123 && v125 < 0x10000 )
        {
          Src[162] = 2 * v125;
          v126 = v130;
        }
        Src[161] = 0;
        *v126 = 0;
      }
    }
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  }
  return v141;
}
