/*
 * XREFs of RtlpAllocateHeap @ 0x18009D360
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x1800283A0 (RtlpAllocateNTHeapInternal.c)
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
 *     RtlpCommitBlock @ 0x180042A00 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180042E70 (RtlpDeCommitFreeBlock.c)
 *     RtlpLogHeapExtendEvent @ 0x180044228 (RtlpLogHeapExtendEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpUpdateTagEntry @ 0x18009C630 (RtlpUpdateTagEntry.c)
 *     RtlLogStackBackTraceEx @ 0x18009C824 (RtlLogStackBackTraceEx.c)
 *     RtlDebugAllocateHeap @ 0x18009CC30 (RtlDebugAllocateHeap.c)
 *     RtlpGetExtraStuffPointer @ 0x18009CFC0 (RtlpGetExtraStuffPointer.c)
 *     RtlpGetLFHContext @ 0x18009CFE4 (RtlpGetLFHContext.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18009D204 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x18009D2E0 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpPerformHeapMaintenance @ 0x18009F8D0 (RtlpPerformHeapMaintenance.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpExtendHeap @ 0x18009FC30 (RtlpExtendHeap.c)
 *     RtlpHeapAddListEntry @ 0x1800A9240 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x1800B7440 (RtlpFindEntry.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800DC170 (RtlpUpdateHeapWatermarks.c)
 *     RtlpLogHeapCommit @ 0x180114118 (RtlpLogHeapCommit.c)
 *     RtlpHeapLogRangeReserve @ 0x180116600 (RtlpHeapLogRangeReserve.c)
 *     RtlCompareMemoryUlong @ 0x180165F90 (RtlCompareMemoryUlong.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall RtlpAllocateHeap(
        _QWORD *Src,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 **a5,
        _DWORD *a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v8; // rdi
  char v9; // r13
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  char v12; // si
  __int64 *v13; // rdi
  unsigned __int16 v14; // cx
  __int64 *v15; // rdi
  __int64 *i; // rsi
  unsigned __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 *v21; // r15
  __int64 *v22; // rax
  int v23; // edx
  __int16 v24; // di
  int v25; // edx
  __int16 v26; // di
  __int64 v27; // rdi
  unsigned int *v28; // r9
  unsigned int v29; // edx
  int v30; // ecx
  __int64 v31; // rdi
  unsigned __int64 v32; // r15
  int v33; // edx
  unsigned __int64 v34; // rcx
  __int64 v35; // r13
  __int64 *v36; // r8
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 *v39; // rdi
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  int v42; // r9d
  unsigned int v43; // esi
  __int64 v44; // r10
  __int64 v45; // r11
  __int64 v46; // r12
  __int64 v47; // rax
  int v48; // edx
  __int16 v49; // r15
  char v50; // r12
  int v51; // edx
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // r9
  unsigned __int64 v57; // rsi
  __int64 v58; // rdx
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // r13
  _QWORD **v62; // rax
  __int64 *v63; // rdi
  unsigned __int64 v64; // rcx
  int v65; // ecx
  _QWORD *v66; // r14
  _QWORD *v67; // r9
  _QWORD *v68; // rax
  int v69; // edx
  __int16 v70; // r12
  __int64 v71; // r8
  int v72; // edx
  __int16 v73; // r12
  __int64 v74; // r8
  unsigned int v75; // r9d
  unsigned int *v76; // r10
  unsigned int v77; // edx
  int v78; // ecx
  __int64 v79; // r8
  int v80; // eax
  _QWORD *v81; // r12
  __int64 *v82; // rax
  __int64 *v83; // rdi
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rax
  int v86; // edx
  int v87; // r9d
  unsigned int v88; // r14d
  __int64 v89; // r8
  __int64 v90; // r13
  __int64 v91; // rdi
  bool v92; // zf
  __int64 *k; // r13
  int v94; // edx
  __int16 v95; // di
  int v96; // edx
  __int64 v97; // rcx
  _QWORD *n; // r8
  int v99; // edx
  __int16 v100; // r12
  int v101; // edx
  __int64 *v102; // r8
  __int64 v103; // r13
  __int64 *v104; // r10
  __int64 v105; // rax
  __int64 v106; // r9
  __int64 *v107; // r12
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rcx
  unsigned __int64 v110; // rdx
  __int64 v111; // rcx
  __int16 LFHContext; // ax
  int v113; // edx
  __int64 v114; // rsi
  __int64 *v115; // r12
  __int64 v116; // rax
  __int64 v117; // r9
  __int64 v118; // rdx
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // r8
  int v121; // r9d
  unsigned int v122; // r11d
  unsigned int v123; // eax
  __int64 *v124; // r11
  __int64 *v125; // r8
  int v126; // edx
  char v127; // al
  unsigned __int64 v128; // r12
  __int64 v129; // r13
  unsigned __int64 v130; // rdi
  __int64 v131; // rsi
  __int64 v132; // rax
  __int64 *v133; // r8
  __int64 v134; // rdi
  __int64 *v135; // rsi
  __int64 v136; // rax
  __int64 v137; // r9
  __int64 v138; // rdx
  unsigned __int64 v139; // rcx
  unsigned __int64 v140; // r9
  struct _TEB *v141; // rdi
  unsigned int v142; // ecx
  unsigned int v143; // eax
  unsigned __int64 v144; // rax
  signed __int64 v145; // rcx
  unsigned __int64 v146; // rtt
  __int64 v147; // rcx
  __int64 v148; // rdi
  __int64 v149; // rcx
  __int64 v150; // rcx
  __int64 v151; // rdi
  __int64 v152; // rcx
  __int64 *v153; // rax
  unsigned __int64 v154; // r14
  _DWORD *v155; // r8
  unsigned __int64 v156; // rdx
  _QWORD **v157; // rdi
  _QWORD *Entry; // r8
  _QWORD *v159; // r14
  __int64 *v160; // rax
  __int64 **v161; // rdx
  unsigned __int64 v162; // rdi
  unsigned __int64 v163; // rcx
  unsigned __int64 v164; // rcx
  struct _TEB *v165; // rdi
  _BYTE *v166; // rdi
  char *v167; // r10
  _OWORD *ExtraStuffPointer; // rsi
  _BYTE *v169; // rdi
  int v170; // eax
  unsigned __int64 v171; // r8
  unsigned __int64 v172; // r14
  _QWORD **v173; // rdi
  _QWORD *v174; // r8
  int v175; // eax
  unsigned __int64 *v176; // rdi
  __int64 *v177; // rax
  unsigned __int64 v178; // rdx
  unsigned __int64 v179; // rcx
  unsigned __int64 v180; // r8
  _DWORD *v181; // r8
  unsigned __int64 v182; // rdx
  unsigned __int64 *v183; // rdi
  __int64 *v184; // rax
  unsigned __int64 v185; // rax
  int v186; // eax
  struct _TEB *v187; // rdi
  _DWORD *SharedData; // rcx
  __int64 v189; // rcx
  __int64 v191; // r14
  unsigned __int64 v192; // r14
  char v193; // [rsp+30h] [rbp-238h]
  int j; // [rsp+38h] [rbp-230h]
  __int64 *v195; // [rsp+38h] [rbp-230h]
  _QWORD *v196; // [rsp+38h] [rbp-230h]
  __int64 v197; // [rsp+48h] [rbp-220h]
  _DWORD *v198; // [rsp+50h] [rbp-218h]
  int v199; // [rsp+58h] [rbp-210h]
  int v200; // [rsp+5Ch] [rbp-20Ch]
  int v201; // [rsp+5Ch] [rbp-20Ch]
  char v202; // [rsp+68h] [rbp-200h]
  int m; // [rsp+70h] [rbp-1F8h]
  bool v204; // [rsp+80h] [rbp-1E8h]
  int v205; // [rsp+88h] [rbp-1E0h]
  unsigned int v206; // [rsp+88h] [rbp-1E0h]
  __int64 *v207; // [rsp+90h] [rbp-1D8h]
  __int64 *v208; // [rsp+90h] [rbp-1D8h]
  __int64 **v209; // [rsp+98h] [rbp-1D0h]
  unsigned __int64 v210; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v211; // [rsp+A8h] [rbp-1C0h]
  __int64 *v212; // [rsp+B0h] [rbp-1B8h]
  char *v213; // [rsp+B8h] [rbp-1B0h]
  int v214; // [rsp+C0h] [rbp-1A8h]
  int v215; // [rsp+C4h] [rbp-1A4h]
  unsigned __int64 v216; // [rsp+C8h] [rbp-1A0h]
  _OWORD *v217; // [rsp+D0h] [rbp-198h]
  unsigned int *v218; // [rsp+D8h] [rbp-190h]
  unsigned __int64 v219; // [rsp+E0h] [rbp-188h]
  unsigned __int64 v220; // [rsp+E8h] [rbp-180h]
  unsigned int *v221; // [rsp+F0h] [rbp-178h]
  unsigned __int64 v222; // [rsp+F8h] [rbp-170h]
  unsigned __int64 v223; // [rsp+100h] [rbp-168h]
  unsigned __int64 v224; // [rsp+108h] [rbp-160h]
  unsigned __int64 v225; // [rsp+110h] [rbp-158h]
  __int64 v226; // [rsp+118h] [rbp-150h]
  unsigned __int64 v227; // [rsp+120h] [rbp-148h]
  unsigned __int64 v228; // [rsp+128h] [rbp-140h]
  __int64 v229; // [rsp+130h] [rbp-138h]
  unsigned __int64 v230; // [rsp+138h] [rbp-130h]
  __int128 v231; // [rsp+140h] [rbp-128h]
  __int128 v232; // [rsp+150h] [rbp-118h]
  __int128 v233; // [rsp+160h] [rbp-108h]
  __int128 v234; // [rsp+170h] [rbp-F8h]
  int v235; // [rsp+188h] [rbp-E0h]
  int v236; // [rsp+198h] [rbp-D0h]
  __int64 v237; // [rsp+1A0h] [rbp-C8h]
  unsigned __int64 v238; // [rsp+1A8h] [rbp-C0h]
  __int64 v239; // [rsp+1B0h] [rbp-B8h]
  unsigned __int64 v240; // [rsp+1B8h] [rbp-B0h]
  int v241; // [rsp+1C8h] [rbp-A0h]
  int v242; // [rsp+1D8h] [rbp-90h]
  int v243; // [rsp+1E8h] [rbp-80h]
  int v244; // [rsp+1F8h] [rbp-70h]
  int v245; // [rsp+208h] [rbp-60h]
  int v246; // [rsp+218h] [rbp-50h]
  int v247; // [rsp+228h] [rbp-40h]
  unsigned int v248; // [rsp+278h] [rbp+10h]
  unsigned __int64 v249; // [rsp+280h] [rbp+18h]
  __int64 v250; // [rsp+288h] [rbp+20h] BYREF

  v250 = a4;
  v249 = a3;
  v248 = a2;
  v6 = a2;
  v199 = 1;
  v193 = 0;
  v198 = 0LL;
  v197 = 0LL;
  v210 = 0LL;
  v200 = 0;
  v8 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v199 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return (_DWORD *)RtlDebugAllocateHeap(Src, a2, a3);
    v191 = a3;
    if ( !a3 )
      v191 = 1LL;
    v192 = Src[33] & (Src[32] + v191);
    if ( v192 < 0x20 )
      v192 = 32LL;
    v250 = v192;
    v9 = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    v202 = v9;
    if ( (a2 & 0x3C000100) != 0 || Src[41] )
    {
      v9 = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      v202 = v9;
      v192 += 16LL;
      v250 = v192;
    }
    v10 = v192 >> 4;
  }
  else
  {
    v9 = 1;
    v202 = 1;
    v10 = a4 >> 4;
    if ( v8 < 2 )
    {
      v250 += 16LL;
      v10 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    v9 |= 8u;
    v202 = v9;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(Src[44]) )
    {
      ++*((_DWORD *)Src + 154);
    }
    else
    {
      if ( byte_1801D2908 )
      {
        v187 = NtCurrentTeb();
        v187->LastStatusValue = -1073741420;
        v187->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225876LL);
        goto LABEL_478;
      }
      v200 = 1;
      RtlEnterCriticalSection(Src[44]);
      v142 = *((_DWORD *)Src + 154) + 1;
      *((_DWORD *)Src + 154) = v142;
      v143 = *((_DWORD *)Src + 155) + 1;
      *((_DWORD *)Src + 155) = v143;
      if ( *((_BYTE *)Src + 418) != 2 )
      {
        if ( v142 < v143 )
        {
          Src[77] = 0LL;
          v142 = 0;
          v143 = 0;
        }
        if ( v143 >= v142 >> 4 )
          *((_DWORD *)Src + 30) |= 0x20000000u;
      }
    }
    v193 = 1;
    if ( (Src[15] & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(Src);
    a3 = v249;
  }
  if ( v10 > *((unsigned int *)Src + 37) )
  {
    if ( (Src[14] & 2) != 0 )
    {
      v250 += 56LL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v250 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           Src[72] - Src[83],
                           (__int64)Src,
                           Src + 47) )
      {
        v144 = qword_1801CDF00;
        do
        {
          v145 = v144 ^ (v144 >> 12) ^ ((v144 ^ (v144 >> 12)) << 25) ^ ((v144 ^ (v144 >> 12) ^ ((v144 ^ (v144 >> 12)) << 25)) >> 27);
          v146 = v144;
          v144 = _InterlockedCompareExchange64(&qword_1801CDF00, v145, v144);
        }
        while ( v146 != v144 );
        v197 = RtlpHpAllocVirtBlockCommitFirst(
                 (__int64)Src,
                 &v250,
                 (unsigned __int64)((-3 * (_BYTE)v145) & 0xF) << 12,
                 (__int64 *)&v210);
        if ( v197 )
        {
          v147 = v250;
          *(_WORD *)(v197 + 56) = v250 - v249;
          *(_BYTE *)(v197 + 58) = v9 | 2;
          *(_QWORD *)(v197 + 32) = v147;
          *(_QWORD *)(v197 + 40) = v210;
          *(_BYTE *)(v197 + 63) = 4;
          Src[74] += v147;
          v148 = 2147353472LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v149 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v149 = 2147353472LL;
          if ( *(_BYTE *)v149 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(Src, v197, v250, 9LL);
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v150 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v150 = 2147353472LL;
          if ( *(_BYTE *)v150 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              v148 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent((__int64)Src, v197, v250, 16LL * Src[24], *(unsigned __int8 *)v148);
          }
          v151 = 2147353482LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v152 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v152 = 2147353482LL;
          if ( *(_BYTE *)v152 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              v151 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent((__int64)Src, v197, v250, 16LL * Src[24], *(unsigned __int8 *)v151);
          }
          if ( (Src[14] & 0x8000000) != 0 )
            *(_WORD *)(v197 + 16) = RtlLogStackBackTraceEx(1u);
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(v197 + 18) = RtlpUpdateTagEntry(
                                      (__int64)Src,
                                      (unsigned __int8)(v6 >> 18),
                                      0LL,
                                      *(_QWORD *)(v197 + 32) >> 4,
                                      1);
          if ( *((_DWORD *)Src + 31) )
          {
            *(_BYTE *)(v197 + 59) = *(_BYTE *)(v197 + 56) ^ *(_BYTE *)(v197 + 57) ^ *(_BYTE *)(v197 + 58);
            *(_DWORD *)(v197 + 56) ^= *((_DWORD *)Src + 34);
          }
          a3 = (unsigned __int64)(Src + 34);
          v153 = (__int64 *)Src[35];
          if ( (_QWORD *)*v153 == Src + 34 )
          {
            *(_QWORD *)v197 = a3;
            *(_QWORD *)(v197 + 8) = v153;
            *v153 = v197;
            Src[35] = v197;
          }
          else
          {
            RtlpLogHeapFailure(13, 0LL, a3, 0LL, *v153, 0LL);
          }
          v198 = (_DWORD *)(v197 + 64);
        }
        else
        {
          v198 = 0LL;
          ++*((_DWORD *)Src + 158);
        }
        goto LABEL_478;
      }
    }
    goto LABEL_365;
  }
  if ( (v6 & 0x800000) == 0 )
  {
    if ( v8 < *((unsigned __int16 *)Src + 216) )
    {
      if ( a3 > RtlpLargestLfhBlock )
        goto LABEL_21;
      v11 = v8 >> 3;
      v12 = v8 & 7;
      if ( ((unsigned __int8)(1 << (v8 & 7)) & *((_BYTE *)Src + (v8 >> 3) + 434)) != 0 )
        goto LABEL_21;
      v13 = (__int64 *)(Src[53] + 2 * v8);
      v212 = v13;
      v14 = *(_WORD *)v13 + 33;
      *(_WORD *)v13 = v14;
      if ( !v200 && (v14 & 0x1Fu) <= 0x10 && v14 <= 0xFF00u )
        goto LABEL_21;
      v110 = a3;
      if ( !a3 )
        v110 = 1LL;
      if ( *((_BYTE *)Src + 418) == 2 )
        v111 = Src[51];
      else
        v111 = 0LL;
      LFHContext = RtlpGetLFHContext(v111, v110);
      if ( LFHContext != -1 )
      {
        *(_WORD *)v13 = LFHContext;
        *((_BYTE *)Src + v11 + 434) |= 1 << v12;
        ++*((_DWORD *)Src + 164);
        goto LABEL_21;
      }
      if ( *((_BYTE *)Src + 418) != 2 )
      {
LABEL_166:
        *((_DWORD *)Src + 30) |= 0x20000000u;
        goto LABEL_21;
      }
      v92 = Src[51] == 0LL;
LABEL_165:
      if ( !v92 )
        goto LABEL_21;
      goto LABEL_166;
    }
    if ( a3 <= RtlpLargestLfhBlock && (*((_BYTE *)Src + 418) != 2 || !Src[51]) )
    {
      v92 = *((_BYTE *)Src + 419) == 2;
      goto LABEL_165;
    }
  }
LABEL_21:
  if ( a5 )
  {
    v15 = *a5;
    if ( *a5 )
    {
      v32 = (unsigned __int64)(v15 - 2);
      v195 = v15 - 2;
      if ( *((_DWORD *)Src + 31) )
      {
        v113 = *(_DWORD *)(v32 + 8) ^ *((_DWORD *)Src + 34);
        *(_DWORD *)(v32 + 8) = v113;
        if ( HIBYTE(v113) != ((unsigned __int8)v113 ^ (unsigned __int8)(BYTE1(v113) ^ BYTE2(v113))) )
          RtlpAnalyzeHeapFailure((__int64)Src, (unsigned __int64)(v15 - 2));
      }
      v114 = *v15;
      v115 = *(__int64 **)(v32 + 24);
      v116 = *v115;
      v117 = *(_QWORD *)(*v15 + 8);
      if ( (__int64 *)*v115 == v15 && v116 == v117 )
      {
        Src[24] -= *(unsigned __int16 *)(v32 + 8);
        v118 = Src[39];
        if ( v118 )
        {
          v119 = *(unsigned __int16 *)(v32 + 8);
          while ( 1 )
          {
            v120 = *(unsigned int *)(v118 + 8);
            if ( v119 < v120 )
              break;
            if ( !*(_QWORD *)v118 )
            {
              LODWORD(v119) = v120 - 1;
              break;
            }
            v118 = *(_QWORD *)v118;
          }
          RtlpHeapRemoveListEntry((__int64)Src, v118, 1, v15, v119, *(unsigned __int16 *)(v32 + 8));
        }
        *v115 = v114;
        *(_QWORD *)(v114 + 8) = v115;
        if ( (*(_BYTE *)(v32 + 10) & 8) == 0 || RtlpCommitBlock((__int64)Src, (__int64)(v15 - 2)) )
          goto LABEL_82;
        RtlpDeCommitFreeBlock((__int64)Src, (unsigned __int64)(v15 - 2), *(unsigned __int16 *)(v32 + 8), 1);
      }
      else
      {
        RtlpLogHeapFailure(13, (__int64)Src, (__int64)v15, v117, v116, 0LL);
      }
      v165 = NtCurrentTeb();
      v165->LastStatusValue = -1073741801;
      v165->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225495LL);
      goto LABEL_478;
    }
  }
  v213 = (char *)(Src + 42);
  for ( i = (__int64 *)Src[39]; ; i = (__int64 *)*i )
  {
    v17 = *((unsigned int *)i + 2);
    if ( v10 < v17 )
    {
      v18 = v10;
      goto LABEL_28;
    }
    if ( !*i )
      break;
  }
  v18 = v17 - 1;
LABEL_28:
  for ( j = v18; ; j = v18 )
  {
    v19 = (unsigned int)(v18 - *((_DWORD *)i + 6));
    v20 = 0LL;
    v21 = (__int64 *)i[4];
    v22 = (__int64 *)v21[1];
    if ( v21 == v22 )
    {
      v20 = i[4];
    }
    else
    {
      a3 = (unsigned __int64)(v22 - 2);
      v231 = 0LL;
      v23 = *((_DWORD *)v22 - 2);
      DWORD2(v231) = v23;
      if ( *((_DWORD *)Src + 31) )
      {
        v23 ^= *((_DWORD *)Src + 34);
        v24 = v23;
        DWORD2(v231) = v23;
        if ( HIBYTE(v23) != ((unsigned __int8)v23 ^ (unsigned __int8)(BYTE1(v23) ^ BYTE2(v23))) )
        {
          RtlpLogHeapFailure(3, (__int64)Src, a3, 0LL, 0LL, 0LL);
          LOWORD(v23) = v24;
        }
      }
      if ( (int)(v10 - (unsigned __int16)v23) > 0 )
      {
        v20 = (__int64)v21;
      }
      else
      {
        a3 = *v21 - 16;
        v232 = 0LL;
        v25 = *(_DWORD *)(a3 + 8);
        DWORD2(v232) = v25;
        if ( *((_DWORD *)Src + 31) )
        {
          v25 ^= *((_DWORD *)Src + 34);
          v26 = v25;
          DWORD2(v232) = v25;
          if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(BYTE1(v25) ^ BYTE2(v25))) )
          {
            RtlpLogHeapFailure(3, (__int64)Src, a3, 0LL, 0LL, 0LL);
            LOWORD(v25) = v26;
          }
        }
        if ( (int)(v10 - (unsigned __int16)v25) <= 0 )
        {
          v20 = *v21;
        }
        else if ( !*i && j == *((_DWORD *)i + 2) - 1 )
        {
          if ( *((_DWORD *)i + 3) )
            v19 = (unsigned int)(2 * v19);
          for ( k = *(__int64 **)(i[6] + 8 * v19); v21 != k; k = (__int64 *)*k )
          {
            a3 = (unsigned __int64)(k - 2);
            v233 = 0LL;
            v94 = *((_DWORD *)k - 2);
            DWORD2(v233) = v94;
            if ( *((_DWORD *)Src + 31) )
            {
              v94 ^= *((_DWORD *)Src + 34);
              v95 = v94;
              DWORD2(v233) = v94;
              if ( HIBYTE(v94) != ((unsigned __int8)v94 ^ (unsigned __int8)(BYTE1(v94) ^ BYTE2(v94))) )
              {
                RtlpLogHeapFailure(3, (__int64)Src, a3, 0LL, 0LL, 0LL);
                LOWORD(v94) = v95;
              }
            }
            if ( (int)(v10 - (unsigned __int16)v94) <= 0 )
            {
              v20 = (__int64)k;
              break;
            }
          }
        }
        else
        {
          v218 = 0LL;
          v27 = (unsigned int)v19 >> 5;
          a3 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
          v28 = (unsigned int *)(i[5] + 4 * v27);
          v218 = v28;
          v29 = *v28 & (-1 << (v19 & 0x1F));
          while ( !v29 )
          {
            if ( (unsigned int)v27 > (unsigned int)a3 )
            {
              v20 = 0LL;
              goto LABEL_48;
            }
            v218 = ++v28;
            v29 = *v28;
            LODWORD(v27) = v27 + 1;
          }
          if ( (_WORD)v29 )
          {
            if ( (_BYTE)v29 )
              v30 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v29];
            else
              v30 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v29)] + 8;
          }
          else if ( (v29 & 0xFF0000) != 0 )
          {
            v30 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v29)] + 16;
          }
          else
          {
            v30 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v29 >> 24] + 24;
          }
          v31 = (unsigned int)(v30 + 32 * v27);
          if ( *((_DWORD *)i + 3) )
            v31 = (unsigned int)(2 * v31);
          v20 = *(_QWORD *)(i[6] + 8 * v31);
        }
      }
    }
LABEL_48:
    if ( v20 )
      break;
    i = (__int64 *)*i;
    v18 = *((_DWORD *)i + 6);
  }
  if ( v213 == (char *)v20 )
  {
LABEL_292:
    v132 = RtlpExtendHeap(Src, v250, a3);
    v32 = v132;
    v195 = (__int64 *)v132;
    if ( v132 )
    {
      v133 = (__int64 *)(v132 + 16);
      v134 = *(_QWORD *)(v132 + 16);
      v135 = *(__int64 **)(v132 + 24);
      v136 = *v135;
      v137 = *(_QWORD *)(v134 + 8);
      if ( (__int64 *)*v135 != v133 || v136 != v137 )
      {
        RtlpLogHeapFailure(13, (__int64)Src, (__int64)v133, v137, v136, 0LL);
        goto LABEL_478;
      }
      Src[24] -= *(unsigned __int16 *)(v32 + 8);
      v138 = Src[39];
      if ( v138 )
      {
        v219 = 0LL;
        v139 = *(unsigned __int16 *)(v32 + 8);
        while ( 1 )
        {
          v140 = *(unsigned int *)(v138 + 8);
          if ( v139 < v140 )
            break;
          if ( !*(_QWORD *)v138 )
          {
            v139 = (unsigned int)(v140 - 1);
            break;
          }
          v138 = *(_QWORD *)v138;
        }
        v219 = v139;
        RtlpHeapRemoveListEntry((__int64)Src, v138, 1, v133, v139, *(unsigned __int16 *)(v32 + 8));
      }
      *v135 = v134;
      *(_QWORD *)(v134 + 8) = v135;
      goto LABEL_80;
    }
LABEL_365:
    v198 = 0LL;
    goto LABEL_478;
  }
  v32 = v20 - 16;
  v195 = (__int64 *)(v20 - 16);
  if ( *((_DWORD *)Src + 31) )
  {
    v33 = *(_DWORD *)(v32 + 8) ^ *((_DWORD *)Src + 34);
    *(_DWORD *)(v32 + 8) = v33;
    if ( HIBYTE(v33) != ((unsigned __int8)v33 ^ (unsigned __int8)(BYTE1(v33) ^ BYTE2(v33))) )
      RtlpAnalyzeHeapFailure((__int64)Src, v20 - 16);
  }
  v34 = *(unsigned __int16 *)(v32 + 8);
  if ( v34 < v10 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v32 + 11) = BYTE1(v34) ^ *(_BYTE *)(v32 + 10) ^ v34;
      *(_DWORD *)(v32 + 8) ^= *((_DWORD *)Src + 34);
    }
    goto LABEL_292;
  }
  v35 = *(_QWORD *)v20;
  v36 = *(__int64 **)(v32 + 24);
  v207 = v36;
  v37 = *v36;
  v38 = *(_QWORD *)(*(_QWORD *)v20 + 8LL);
  if ( *v36 != v20 || v37 != v38 )
  {
    RtlpLogHeapFailure(13, (__int64)Src, v20, v38, v37, 0LL);
    goto LABEL_478;
  }
  Src[24] -= v34;
  v39 = (__int64 *)Src[39];
  if ( !v39 )
    goto LABEL_79;
  v211 = 0LL;
  v40 = *(unsigned __int16 *)(v32 + 8);
  while ( 1 )
  {
    v41 = *((unsigned int *)v39 + 2);
    if ( v40 < v41 )
    {
      v211 = *(unsigned __int16 *)(v32 + 8);
      v42 = v41 - 1;
      goto LABEL_63;
    }
    if ( !*v39 )
      break;
    v39 = (__int64 *)*v39;
  }
  v42 = v41 - 1;
  v211 = (unsigned int)(v41 - 1);
  LODWORD(v40) = v41 - 1;
LABEL_63:
  v226 = *(unsigned __int16 *)(v32 + 8);
  v43 = v40 - *((_DWORD *)v39 + 6);
  v44 = 2 * v43;
  if ( !*((_DWORD *)v39 + 3) )
    v44 = v43;
  v205 = v44;
  v211 = v39[6] + 8 * v44;
  v45 = *(_QWORD *)v211;
  --*((_DWORD *)v39 + 4);
  if ( (_DWORD)v40 == v42 )
    --*((_DWORD *)v39 + 5);
  if ( v45 != v20 )
    goto LABEL_79;
  v214 = v41;
  if ( !*v39 )
    LODWORD(v41) = v42;
  v214 = v41;
  v46 = *(_QWORD *)v20;
  v47 = v39[4];
  if ( (unsigned int)v40 >= (unsigned int)v41 )
  {
    if ( v46 != v47 )
    {
      *(_QWORD *)v211 = v46;
      goto LABEL_79;
    }
    *(_QWORD *)v211 = 0LL;
  }
  else
  {
    if ( v46 != v47 )
    {
      v234 = 0LL;
      v48 = *(_DWORD *)(v46 - 8);
      DWORD2(v234) = v48;
      if ( *((_DWORD *)Src + 31) )
      {
        v48 ^= *((_DWORD *)Src + 34);
        v49 = v48;
        DWORD2(v234) = v48;
        if ( HIBYTE(v48) != ((unsigned __int8)v48 ^ (unsigned __int8)(BYTE1(v48) ^ BYTE2(v48))) )
        {
          RtlpLogHeapFailure(3, (__int64)Src, v46 - 16, 0LL, 0LL, 0LL);
          LOWORD(v48) = v49;
          v36 = v207;
          LODWORD(v44) = v205;
        }
      }
      if ( (_DWORD)v226 == (unsigned __int16)v48 )
      {
        *(_QWORD *)(v39[6] + 8LL * (unsigned int)v44) = v46;
        v32 = (unsigned __int64)v195;
        goto LABEL_79;
      }
      v32 = (unsigned __int64)v195;
    }
    *(_QWORD *)(v39[6] + 8LL * (unsigned int)v44) = 0LL;
  }
  *(_DWORD *)(v39[5] + 4LL * (v43 >> 5)) &= ~(1 << (v43 & 0x1F));
LABEL_79:
  *v36 = v35;
  *(_QWORD *)(v35 + 8) = v36;
LABEL_80:
  if ( (*(_BYTE *)(v32 + 10) & 8) != 0 && !RtlpCommitBlock((__int64)Src, v32) )
  {
    RtlpDeCommitFreeBlock((__int64)Src, v32, *(unsigned __int16 *)(v32 + 8), 1);
    goto LABEL_478;
  }
  v9 = v202;
LABEL_82:
  v50 = *(_BYTE *)(v32 + 10);
  v51 = v199;
  if ( !v199 && (v50 & 4) != 0 )
  {
    v220 = 0LL;
    v130 = 16LL * *(unsigned __int16 *)(v32 + 8) - 32;
    v220 = v130;
    if ( (v50 & 2) != 0 && v130 > 4 )
    {
      v130 -= 4LL;
      v220 = v130;
    }
    v131 = RtlCompareMemoryUlong(v32 + 32, v130, 4277075694LL);
    if ( v131 != v130 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v32 = (unsigned __int64)v195;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v195, (char *)v195 + v131 + 32);
      RtlpBreakPointHeap();
    }
    v51 = 0;
  }
  if ( (*(_BYTE *)(v32 + 10) & 1) == 0 )
  {
    *(_BYTE *)(v32 + 10) = v9;
    v52 = *(unsigned __int16 *)(v32 + 8) - v10;
    *(_WORD *)(v32 + 8) = v10;
    v53 = v249;
    v54 = v250 - v249;
    v237 = v250 - v249;
    if ( v250 - v249 >= 0x3F )
    {
      *(_QWORD *)(v32 + 16 * v10) = v54;
      *(_BYTE *)(v32 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v32 + 15) = v54;
    }
    *(_BYTE *)(v32 + 11) = 0;
    if ( v52 )
    {
      if ( v52 != 1 )
      {
        v204 = v51 == 0;
        v55 = *(unsigned __int8 *)(v32 + 14);
        if ( (_BYTE)v55 )
          v56 = (_QWORD *)((v32 & 0xFFFFFFFFFFFF0000uLL) - (v55 << 16) + 0x10000);
        else
          v56 = Src;
        v217 = (_OWORD *)v52;
        v57 = v32 + 16 * v10;
        v201 = 0;
        *(_BYTE *)(v57 + 10) = v50;
        *(_BYTE *)(v57 + 15) = 0;
        *(_WORD *)(v57 + 12) = *((_WORD *)Src + 70) ^ v10;
        v216 = 0LL;
        v58 = v56[5];
        if ( (_QWORD *)v58 == v56 )
        {
          LOBYTE(v59) = 0;
        }
        else
        {
          v59 = ((v57 - (unsigned __int64)v56) >> 16) + 1;
          v216 = v59;
          if ( v59 >= 0xFE )
            RtlpLogHeapFailure(3, v58, v57, (__int64)v56, 0LL, 0LL);
        }
        *(_BYTE *)(v57 + 14) = v59;
        *(_BYTE *)(v57 + 11) = 0;
        *(_WORD *)(v57 + 8) = v52;
        while ( 1 )
        {
          v60 = v57 + 16 * v52;
          if ( ((*(_BYTE *)(v60 + 10) ^ (unsigned __int8)(*((_BYTE *)Src + 138) & (*((_DWORD *)Src + 31) >> 20))) & 1) != 0 )
          {
            *(_WORD *)(v60 + 12) = *((_WORD *)Src + 70) ^ v52;
            if ( !v204 )
            {
              v61 = (unsigned __int16)v52;
              v239 = (unsigned __int16)v52;
              *(_BYTE *)(v57 + 10) = 0;
              *(_BYTE *)(v57 + 15) = 0;
              v62 = (_QWORD **)(Src + 42);
              v63 = (__int64 *)Src[39];
              if ( !v63 )
              {
                v66 = *v62;
                goto LABEL_123;
              }
              while ( 1 )
              {
                v64 = *((unsigned int *)v63 + 2);
                if ( v61 < v64 )
                {
                  v65 = v61;
                  goto LABEL_101;
                }
                if ( !*v63 )
                  break;
                v63 = (__int64 *)*v63;
              }
              v65 = v64 - 1;
LABEL_101:
              for ( m = v65; ; m = v65 )
              {
                LODWORD(v250) = v65 - *((_DWORD *)v63 + 6);
                v66 = 0LL;
                v67 = (_QWORD *)v63[4];
                v196 = v67;
                v68 = (_QWORD *)v67[1];
                if ( v67 == v68 )
                {
                  v66 = (_QWORD *)v63[4];
                }
                else
                {
                  v69 = *((_DWORD *)v68 - 2);
                  v241 = v69;
                  if ( *((_DWORD *)Src + 31) )
                  {
                    v69 ^= *((_DWORD *)Src + 34);
                    v70 = v69;
                    v241 = v69;
                    if ( HIBYTE(v69) != ((unsigned __int8)v69 ^ (unsigned __int8)(BYTE1(v69) ^ BYTE2(v69))) )
                    {
                      RtlpLogHeapFailure(3, (__int64)Src, (__int64)(v68 - 2), 0LL, 0LL, 0LL);
                      LOWORD(v69) = v70;
                      v67 = v196;
                    }
                  }
                  if ( (int)(v61 - (unsigned __int16)v69) > 0 )
                  {
                    v66 = v67;
                  }
                  else
                  {
                    v71 = *v67 - 16LL;
                    v72 = *(_DWORD *)(v71 + 8);
                    v242 = v72;
                    if ( *((_DWORD *)Src + 31) )
                    {
                      v72 ^= *((_DWORD *)Src + 34);
                      v73 = v72;
                      v242 = v72;
                      if ( HIBYTE(v72) != ((unsigned __int8)v72 ^ (unsigned __int8)(BYTE1(v72) ^ BYTE2(v72))) )
                      {
                        RtlpLogHeapFailure(3, (__int64)Src, v71, 0LL, 0LL, 0LL);
                        LOWORD(v72) = v73;
                        v67 = v196;
                      }
                    }
                    if ( (int)(v61 - (unsigned __int16)v72) <= 0 )
                    {
                      v66 = (_QWORD *)*v67;
                    }
                    else if ( !*v63 && m == *((_DWORD *)v63 + 2) - 1 )
                    {
                      v97 = *((_DWORD *)v63 + 3) ? (unsigned int)(2 * v250) : (unsigned int)v250;
                      for ( n = *(_QWORD **)(v63[6] + 8 * v97); ; n = (_QWORD *)*n )
                      {
                        v250 = (__int64)n;
                        if ( v67 == n )
                          break;
                        v99 = *((_DWORD *)n - 2);
                        v243 = v99;
                        if ( *((_DWORD *)Src + 31) )
                        {
                          v99 ^= *((_DWORD *)Src + 34);
                          v100 = v99;
                          v243 = v99;
                          if ( HIBYTE(v99) != ((unsigned __int8)v99 ^ (unsigned __int8)(BYTE1(v99) ^ BYTE2(v99))) )
                          {
                            RtlpLogHeapFailure(3, (__int64)Src, (__int64)(n - 2), 0LL, 0LL, 0LL);
                            LOWORD(v99) = v100;
                            n = (_QWORD *)v250;
                            v67 = v196;
                          }
                        }
                        if ( (int)(v61 - (unsigned __int16)v99) <= 0 )
                        {
                          v66 = n;
                          break;
                        }
                      }
                    }
                    else
                    {
                      v221 = 0LL;
                      v74 = (unsigned int)v250 >> 5;
                      v75 = ((unsigned int)(*((_DWORD *)v63 + 2) - *((_DWORD *)v63 + 6)) >> 5) - 1;
                      v76 = (unsigned int *)(v63[5] + 4 * v74);
                      v221 = v76;
                      v77 = *v76 & (-1 << (v250 & 0x1F));
                      while ( !v77 )
                      {
                        if ( (unsigned int)v74 > v75 )
                        {
                          v66 = 0LL;
                          goto LABEL_121;
                        }
                        v221 = ++v76;
                        v77 = *v76;
                        LODWORD(v74) = v74 + 1;
                      }
                      if ( (_WORD)v77 )
                      {
                        if ( (_BYTE)v77 )
                          v78 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v77];
                        else
                          v78 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v77)] + 8;
                      }
                      else if ( (v77 & 0xFF0000) != 0 )
                      {
                        v78 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v77)] + 16;
                      }
                      else
                      {
                        v78 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v77 >> 24] + 24;
                      }
                      v79 = (unsigned int)(v78 + 32 * v74);
                      if ( *((_DWORD *)v63 + 3) )
                        v79 = (unsigned int)(2 * v79);
                      v66 = *(_QWORD **)(v63[6] + 8 * v79);
                    }
                  }
                }
LABEL_121:
                if ( v66 )
                  break;
                v63 = (__int64 *)*v63;
                v65 = *((_DWORD *)v63 + 6);
              }
              while ( 1 )
              {
                v62 = (_QWORD **)(Src + 42);
LABEL_123:
                if ( v62 == v66 )
                  break;
                if ( *((_DWORD *)Src + 31) )
                {
                  v80 = *((_DWORD *)v66 - 2);
                  v244 = v80;
                  if ( (v80 & *((_DWORD *)Src + 31)) != 0 )
                  {
                    v80 ^= *((_DWORD *)Src + 34);
                    v244 = v80;
                  }
                }
                else
                {
                  LOWORD(v80) = *((_WORD *)v66 - 4);
                }
                if ( v61 <= (unsigned __int16)v80 )
                  break;
                v66 = (_QWORD *)*v66;
              }
              v81 = (_QWORD *)(v57 + 16);
              v82 = (__int64 *)v66[1];
              if ( (_QWORD *)*v82 == v66 )
              {
                *v81 = v66;
                *(_QWORD *)(v57 + 24) = v82;
                *v82 = (__int64)v81;
                v66[1] = v81;
              }
              else
              {
                RtlpLogHeapFailure(13, 0LL, (__int64)v66, 0LL, *v82, 0LL);
              }
              Src[24] += *(unsigned __int16 *)(v57 + 8);
              v83 = (__int64 *)Src[39];
              if ( v83 )
              {
                v84 = *(unsigned __int16 *)(v57 + 8);
                while ( 1 )
                {
                  v85 = *((unsigned int *)v83 + 2);
                  if ( v84 < v85 )
                  {
                    v86 = v85 - 1;
                    goto LABEL_136;
                  }
                  if ( !*v83 )
                    break;
                  v83 = (__int64 *)*v83;
                }
                v86 = v85 - 1;
                LODWORD(v84) = v85 - 1;
LABEL_136:
                v87 = *(unsigned __int16 *)(v57 + 8);
                v212 = (__int64 *)*(unsigned __int16 *)(v57 + 8);
                v88 = v84 - *((_DWORD *)v83 + 6);
                v89 = 2 * v88;
                if ( !*((_DWORD *)v83 + 3) )
                  v89 = v88;
                v250 = v89;
                ++*((_DWORD *)v83 + 4);
                v90 = *(_QWORD *)(v83[6] + 8 * v89);
                if ( (_DWORD)v84 == v86 )
                  ++*((_DWORD *)v83 + 5);
                if ( !v90 )
                  goto LABEL_141;
                v96 = *(_DWORD *)(v90 - 8);
                v235 = v96;
                if ( *((_DWORD *)Src + 31) )
                {
                  v96 ^= *((_DWORD *)Src + 34);
                  v235 = v96;
                  if ( HIBYTE(v96) != ((unsigned __int8)v96 ^ (unsigned __int8)(BYTE1(v96) ^ BYTE2(v96))) )
                  {
                    RtlpLogHeapFailure(3, (__int64)Src, v90 - 16, 0LL, 0LL, 0LL);
                    LOWORD(v96) = v235;
                    LODWORD(v89) = v250;
                    v87 = (int)v212;
                  }
                }
                if ( v87 - (unsigned __int16)v96 <= 0 )
LABEL_141:
                  *(_QWORD *)(v83[6] + 8LL * (unsigned int)v89) = v81;
                if ( !v90 )
                  *(_DWORD *)(v83[5] + 4LL * (v88 >> 5)) |= 1 << (v88 & 0x1F);
              }
              goto LABEL_144;
            }
            v154 = (unsigned __int16)v52;
            *(_BYTE *)(v57 + 10) &= 0xF0u;
            *(_BYTE *)(v57 + 15) = 0;
            if ( (Src[14] & 0x40) != 0 )
            {
              v155 = (_DWORD *)(v57 + 32);
              v227 = v57 + 32;
              v156 = (16 * (unsigned __int64)(unsigned __int16)v52 - 32) >> 2;
              v225 = v156;
              if ( v156 )
              {
                if ( ((unsigned __int8)v155 & 4) != 0 )
                {
                  *v155 = -17891602;
                  v225 = --v156;
                  if ( v156 )
                  {
                    v155 = (_DWORD *)(v57 + 36);
                    v227 = v57 + 36;
                    goto LABEL_344;
                  }
                }
                else
                {
LABEL_344:
                  memset64(v155, 0xFEEEFEEEFEEEFEEEuLL, v156 >> 1);
                  if ( (v156 & 1) != 0 )
                    v155[v156 - 1] = -17891602;
                }
              }
              *(_BYTE *)(v57 + 10) |= 4u;
            }
            v157 = (_QWORD **)(Src + 42);
            if ( Src[39] )
              Entry = (_QWORD *)RtlpFindEntry(Src, v154);
            else
              Entry = *v157;
            while ( v157 != Entry )
            {
              if ( *((_DWORD *)Src + 31) )
              {
                v170 = *((_DWORD *)Entry - 2);
                v245 = v170;
                if ( (v170 & *((_DWORD *)Src + 31)) != 0 )
                {
                  v170 ^= *((_DWORD *)Src + 34);
                  v245 = v170;
                }
              }
              else
              {
                LOWORD(v170) = *((_WORD *)Entry - 4);
              }
              if ( v154 <= (unsigned __int16)v170 )
                break;
              Entry = (_QWORD *)*Entry;
            }
            v159 = (_QWORD *)(v57 + 16);
            v160 = (__int64 *)Entry[1];
            if ( (_QWORD *)*v160 == Entry )
            {
              *v159 = Entry;
              *(_QWORD *)(v57 + 24) = v160;
              *v160 = (__int64)v159;
              Entry[1] = v159;
            }
            else
            {
              RtlpLogHeapFailure(13, 0LL, (__int64)Entry, 0LL, *v160, 0LL);
            }
            Src[24] += *(unsigned __int16 *)(v57 + 8);
            v161 = (__int64 **)Src[39];
            if ( v161 )
            {
              v162 = *(unsigned __int16 *)(v57 + 8);
              while ( 1 )
              {
                v163 = *((unsigned int *)v161 + 2);
                if ( v162 < v163 )
                  break;
                if ( !*v161 )
                {
                  LODWORD(v162) = v163 - 1;
                  break;
                }
                v161 = (__int64 **)*v161;
              }
              LOBYTE(Entry) = 1;
              RtlpHeapAddListEntry(
                (_DWORD)Src,
                (_DWORD)v161,
                (_DWORD)Entry,
                v57 + 16,
                v162,
                *(unsigned __int16 *)(v57 + 8));
            }
            goto LABEL_144;
          }
          if ( *((_DWORD *)Src + 31) )
          {
            v101 = *(_DWORD *)(v60 + 8) ^ *((_DWORD *)Src + 34);
            *(_DWORD *)(v60 + 8) = v101;
            if ( HIBYTE(v101) != ((unsigned __int8)v101 ^ (unsigned __int8)(BYTE1(v101) ^ BYTE2(v101))) )
              RtlpAnalyzeHeapFailure((__int64)Src, v57 + 16 * v52);
          }
          v102 = (__int64 *)(v60 + 16);
          v103 = *(_QWORD *)(v60 + 16);
          v104 = *(__int64 **)(v60 + 24);
          v212 = v104;
          v105 = *v104;
          v106 = *(_QWORD *)(v103 + 8);
          if ( *v104 != v60 + 16 || v105 != v106 )
          {
            RtlpLogHeapFailure(13, (__int64)Src, (__int64)v102, v106, v105, 0LL);
            goto LABEL_301;
          }
          Src[24] -= *(unsigned __int16 *)(v60 + 8);
          v107 = (__int64 *)Src[39];
          if ( v107 )
          {
            v108 = *(unsigned __int16 *)(v60 + 8);
            while ( 1 )
            {
              v109 = *((unsigned int *)v107 + 2);
              if ( v108 < v109 )
              {
                v121 = v109 - 1;
                goto LABEL_250;
              }
              if ( !*v107 )
                break;
              v107 = (__int64 *)*v107;
            }
            v121 = v109 - 1;
            LODWORD(v108) = v109 - 1;
LABEL_250:
            v216 = *(unsigned __int16 *)(v60 + 8);
            v240 = v216;
            v122 = v108 - *((_DWORD *)v107 + 6);
            LODWORD(v250) = v122;
            v123 = 2 * v122;
            if ( !*((_DWORD *)v107 + 3) )
              v123 = v122;
            v206 = v123;
            v209 = (__int64 **)(v107[6] + 8LL * v123);
            v124 = *v209;
            --*((_DWORD *)v107 + 4);
            if ( (_DWORD)v108 == v121 )
              --*((_DWORD *)v107 + 5);
            if ( v124 == v102 )
            {
              v215 = v109;
              if ( !*v107 )
                LODWORD(v109) = v121;
              v215 = v109;
              v125 = (__int64 *)*v102;
              v208 = v125;
              if ( (unsigned int)v108 >= (unsigned int)v109 )
              {
                if ( v125 == (__int64 *)v107[4] )
                {
                  *v209 = 0LL;
                  goto LABEL_264;
                }
                *v209 = v125;
              }
              else
              {
                if ( v125 == (__int64 *)v107[4] )
                  goto LABEL_263;
                v126 = *((_DWORD *)v125 - 2);
                v236 = v126;
                if ( *((_DWORD *)Src + 31) )
                {
                  v126 ^= *((_DWORD *)Src + 34);
                  v236 = v126;
                  if ( HIBYTE(v126) != ((unsigned __int8)v126 ^ (unsigned __int8)(BYTE1(v126) ^ BYTE2(v126))) )
                  {
                    RtlpLogHeapFailure(3, (__int64)Src, (__int64)(v125 - 2), 0LL, 0LL, 0LL);
                    LOWORD(v126) = v236;
                    v104 = v212;
                    v125 = v208;
                  }
                }
                if ( (_DWORD)v216 != (unsigned __int16)v126 )
                {
LABEL_263:
                  *(_QWORD *)(v107[6] + 8LL * v206) = 0LL;
LABEL_264:
                  *(_DWORD *)(v107[5] + 4LL * ((unsigned int)v250 >> 5)) &= ~(1 << (v250 & 0x1F));
                  goto LABEL_265;
                }
                *(_QWORD *)(v107[6] + 8LL * v206) = v125;
              }
            }
          }
LABEL_265:
          *v104 = v103;
          *(_QWORD *)(v103 + 8) = v104;
          if ( (*(_BYTE *)(v60 + 10) & 8) == 0 || RtlpCommitBlock((__int64)Src, v57 + 16 * v52) )
          {
            if ( v204 )
            {
              v127 = *(_BYTE *)(v60 + 10);
              if ( (v127 & 4) != 0 )
              {
                v222 = 0LL;
                v128 = 16LL * *(unsigned __int16 *)(v60 + 8) - 32;
                v222 = v128;
                if ( (v127 & 2) != 0 && v128 > 4 )
                {
                  v128 -= 4LL;
                  v222 = v128;
                }
                v129 = RtlCompareMemoryUlong(v60 + 32, v128, 4277075694LL);
                if ( v129 != v128 )
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint(
                    "HEAP: Free Heap block %p modified at %p after it was freed\n",
                    (const void *)(v57 + 16 * v52),
                    (const void *)(v60 + v129 + 32));
                  RtlpBreakPointHeap();
                }
              }
            }
            *(_BYTE *)(v57 + 10) = *(_BYTE *)(v60 + 10);
            v171 = v52 + *(unsigned __int16 *)(v60 + 8);
            v217 = (_OWORD *)v171;
            if ( v171 > 0xFF00 )
            {
              RtlpInsertFreeBlock((__int64)Src, v57, v171);
            }
            else
            {
              *(_WORD *)(v57 + 8) = v171;
              *(_WORD *)(v57 + 16 * v171 + 12) = *((_WORD *)Src + 70) ^ v171;
              v172 = (unsigned __int16)v171;
              if ( !v204 )
              {
                *(_BYTE *)(v57 + 10) = 0;
                *(_BYTE *)(v57 + 15) = 0;
                v173 = (_QWORD **)(Src + 42);
                if ( Src[39] )
                  v174 = (_QWORD *)RtlpFindEntry(Src, (unsigned __int16)v171);
                else
                  v174 = *v173;
                while ( v173 != v174 )
                {
                  if ( *((_DWORD *)Src + 31) )
                  {
                    v175 = *((_DWORD *)v174 - 2);
                    v246 = v175;
                    if ( (v175 & *((_DWORD *)Src + 31)) != 0 )
                    {
                      v175 ^= *((_DWORD *)Src + 34);
                      v246 = v175;
                    }
                  }
                  else
                  {
                    LOWORD(v175) = *((_WORD *)v174 - 4);
                  }
                  if ( v172 <= (unsigned __int16)v175 )
                    break;
                  v174 = (_QWORD *)*v174;
                }
                v176 = (unsigned __int64 *)(v57 + 16);
                v177 = (__int64 *)v174[1];
                if ( (_QWORD *)*v177 == v174 )
                {
                  *v176 = (unsigned __int64)v174;
                  *(_QWORD *)(v57 + 24) = v177;
                  *v177 = (__int64)v176;
                  v174[1] = v176;
                }
                else
                {
                  RtlpLogHeapFailure(13, 0LL, (__int64)v174, 0LL, *v177, 0LL);
                }
                Src[24] += *(unsigned __int16 *)(v57 + 8);
                v178 = Src[39];
                if ( v178 )
                {
                  v213 = 0LL;
                  v179 = *(unsigned __int16 *)(v57 + 8);
                  while ( 1 )
                  {
                    v180 = *(unsigned int *)(v178 + 8);
                    if ( v179 < v180 )
                      break;
                    if ( !*(_QWORD *)v178 )
                    {
                      v179 = (unsigned int)(v180 - 1);
                      break;
                    }
                    v178 = *(_QWORD *)v178;
                  }
                  v213 = (char *)v179;
                  goto LABEL_439;
                }
                goto LABEL_144;
              }
              *(_BYTE *)(v57 + 10) &= 0xF0u;
              *(_BYTE *)(v57 + 15) = 0;
              if ( (Src[14] & 0x40) != 0 )
              {
                v181 = (_DWORD *)(v57 + 32);
                v228 = v57 + 32;
                v182 = (16 * v172 - 32) >> 2;
                v224 = v182;
                if ( v182 )
                {
                  if ( ((unsigned __int8)v181 & 4) != 0 )
                  {
                    *v181 = -17891602;
                    v224 = --v182;
                    if ( v182 )
                    {
                      v181 = (_DWORD *)(v57 + 36);
                      v228 = v57 + 36;
                      goto LABEL_448;
                    }
                  }
                  else
                  {
LABEL_448:
                    memset64(v181, 0xFEEEFEEEFEEEFEEEuLL, v182 >> 1);
                    if ( (v182 & 1) != 0 )
                      v181[v182 - 1] = -17891602;
                  }
                }
                *(_BYTE *)(v57 + 10) |= 4u;
              }
              v183 = Src + 42;
              if ( Src[39] )
                v180 = RtlpFindEntry(Src, v172);
              else
                v180 = *v183;
              while ( v183 != (unsigned __int64 *)v180 )
              {
                if ( *((_DWORD *)Src + 31) )
                {
                  v186 = *(_DWORD *)(v180 - 8);
                  v247 = v186;
                  if ( (v186 & *((_DWORD *)Src + 31)) != 0 )
                  {
                    v186 ^= *((_DWORD *)Src + 34);
                    v247 = v186;
                  }
                }
                else
                {
                  LOWORD(v186) = *(_WORD *)(v180 - 8);
                }
                if ( v172 <= (unsigned __int16)v186 )
                  break;
                v180 = *(_QWORD *)v180;
              }
              v176 = (unsigned __int64 *)(v57 + 16);
              v184 = *(__int64 **)(v180 + 8);
              if ( *v184 == v180 )
              {
                *v176 = v180;
                *(_QWORD *)(v57 + 24) = v184;
                *v184 = (__int64)v176;
                *(_QWORD *)(v180 + 8) = v176;
              }
              else
              {
                RtlpLogHeapFailure(13, 0LL, v180, 0LL, *v184, 0LL);
              }
              Src[24] += *(unsigned __int16 *)(v57 + 8);
              v178 = Src[39];
              if ( v178 )
              {
                v210 = 0LL;
                v179 = *(unsigned __int16 *)(v57 + 8);
                while ( 1 )
                {
                  v185 = *(unsigned int *)(v178 + 8);
                  if ( v179 < v185 )
                    break;
                  v180 = *(_QWORD *)v178;
                  if ( !*(_QWORD *)v178 )
                  {
                    v179 = (unsigned int)(v185 - 1);
                    break;
                  }
                  v178 = *(_QWORD *)v178;
                }
                v210 = v179;
LABEL_439:
                LOBYTE(v180) = 1;
                RtlpHeapAddListEntry((_DWORD)Src, v178, v180, (_DWORD)v176, v179, *(unsigned __int16 *)(v57 + 8));
              }
LABEL_144:
              if ( *((_DWORD *)Src + 31) )
              {
                *(_BYTE *)(v57 + 11) = *(_BYTE *)(v57 + 8) ^ *(_BYTE *)(v57 + 9) ^ *(_BYTE *)(v57 + 10);
                *(_DWORD *)(v57 + 8) ^= *((_DWORD *)Src + 34);
              }
            }
            v53 = v249;
            goto LABEL_147;
          }
          RtlpDeCommitFreeBlock((__int64)Src, v57 + 16 * v52, *(unsigned __int16 *)(v60 + 8), 1);
LABEL_301:
          if ( v201 )
          {
            v141 = NtCurrentTeb();
            v141->LastStatusValue = -1073741764;
            v141->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225532LL);
            goto LABEL_478;
          }
          v201 = 1;
        }
      }
      ++*(_WORD *)(v32 + 8);
      v164 = v250 - v249 + 16;
      v238 = v164;
      if ( v164 >= 0x3F )
      {
        *(_QWORD *)(v32 + 16 * (v10 + 1)) = v164;
        *(_BYTE *)(v32 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v32 + 15) = v164;
      }
    }
LABEL_147:
    v198 = (_DWORD *)(v32 + 16);
    a2 = *(unsigned __int16 *)(v32 + 8);
    a3 = (unsigned __int16)a2;
    LOWORD(a3) = BYTE1(a2);
    v91 = 16 * a2;
    v229 = 16 * a2;
    if ( (*(_BYTE *)(v32 + 15) & 0x3F) == 0x3F )
    {
      v91 -= 8LL;
      v229 = v91;
    }
    if ( v199 )
    {
      if ( *((_DWORD *)Src + 31) )
      {
        LOBYTE(a2) = BYTE1(a2) ^ *(_BYTE *)(v32 + 10) ^ a2;
        *(_BYTE *)(v32 + 11) = a2;
        *(_DWORD *)(v32 + 8) ^= *((_DWORD *)Src + 34);
      }
      if ( v193 )
      {
        RtlpUpdateHeapWatermarks(Src, a2, a3);
        RtlLeaveCriticalSection(Src[44]);
        v193 = 0;
      }
      if ( (v248 & 8) != 0 )
        memset_thunk_772440563353939046(v198, 0, v91 - 8);
      goto LABEL_478;
    }
    if ( (v248 & 8) != 0 )
    {
      memset_thunk_772440563353939046(v198, 0, v91 - 8);
      v166 = Src + 14;
    }
    else
    {
      v166 = Src + 14;
      if ( (Src[14] & 0x40) != 0 )
      {
        a3 = v32 + 16;
        v230 = v32 + 16;
        a2 = (v53 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
        v223 = a2;
        v166 = Src + 14;
        if ( a2 )
        {
          v167 = (char *)(Src + 14);
          if ( ((unsigned __int8)v198 & 4) != 0 )
          {
            *v198 = -1163005939;
            v223 = --a2;
            v166 = Src + 14;
            if ( !a2 )
              goto LABEL_379;
            a3 = v32 + 20;
            v230 = v32 + 20;
            v167 = (char *)(Src + 14);
          }
          memset64((void *)a3, 0xBAADF00DBAADF00DuLL, a2 >> 1);
          v166 = Src + 14;
          if ( (a2 & 1) != 0 )
          {
            *(_DWORD *)(a3 + 4 * a2 - 4) = -1163005939;
            v166 = v167;
          }
        }
      }
    }
LABEL_379:
    if ( (*v166 & 0x20) != 0 )
    {
      *(__m128i *)((char *)v198 + v53) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
      *(_BYTE *)(v32 + 10) |= 4u;
    }
    *(_BYTE *)(v32 + 11) = 0;
    if ( (*(_BYTE *)(v32 + 10) & 2) != 0 )
    {
      ExtraStuffPointer = (_OWORD *)RtlpGetExtraStuffPointer(v32);
      v217 = ExtraStuffPointer;
      *ExtraStuffPointer = 0LL;
      if ( (*(_DWORD *)v166 & 0x8000000) != 0 )
        *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
      if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        v169 = (_BYTE *)v32;
        *((_WORD *)v217 + 1) = RtlpUpdateTagEntry(
                                 (__int64)Src,
                                 (v248 >> 18) & 0xFFF,
                                 0LL,
                                 *(unsigned __int16 *)(v32 + 8),
                                 0);
        goto LABEL_386;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v169 = (_BYTE *)v32;
      *(_BYTE *)(v32 + 11) = RtlpUpdateTagEntry(
                               (__int64)Src,
                               (unsigned __int8)(v248 >> 18),
                               0LL,
                               *(unsigned __int16 *)(v32 + 8),
                               0);
      goto LABEL_386;
    }
    v169 = (_BYTE *)v32;
LABEL_386:
    if ( *((_DWORD *)Src + 31) )
    {
      v169[11] = v169[8] ^ v169[9] ^ v169[10];
      *((_DWORD *)v169 + 2) ^= *((_DWORD *)Src + 34);
    }
    goto LABEL_478;
  }
  RtlpLogHeapFailure(3, (__int64)Src, v32, 0LL, 0LL, 0LL);
LABEL_478:
  if ( v193 )
  {
    if ( v198 && !v197 )
      RtlpUpdateHeapWatermarks(Src, a2, a3);
    RtlLeaveCriticalSection(Src[44]);
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v189 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v189 = 2147353480LL;
  if ( *(_BYTE *)v189 && v198 )
  {
    if ( v197 )
      RtlpHeapLogRangeReserve(Src, v197 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v197 + 40));
  }
  return v198;
}
