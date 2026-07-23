/*
 * XREFs of RtlpAllocateHeap @ 0x180026310
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x180050E70 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpUpdateTagEntry @ 0x1800255D8 (RtlpUpdateTagEntry.c)
 *     RtlLogStackBackTraceEx @ 0x1800257CC (RtlLogStackBackTraceEx.c)
 *     RtlDebugAllocateHeap @ 0x180025BE0 (RtlDebugAllocateHeap.c)
 *     RtlpGetExtraStuffPointer @ 0x180025F70 (RtlpGetExtraStuffPointer.c)
 *     RtlpGetLFHContext @ 0x180025F94 (RtlpGetLFHContext.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800261B4 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180026290 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpPerformHeapMaintenance @ 0x180028880 (RtlpPerformHeapMaintenance.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpExtendHeap @ 0x180028BE0 (RtlpExtendHeap.c)
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
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlpLogHeapExtendEvent @ 0x180097F08 (RtlpLogHeapExtendEvent.c)
 *     RtlpFindEntry @ 0x1800BD830 (RtlpFindEntry.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800DB6E0 (RtlpUpdateHeapWatermarks.c)
 *     RtlpLogHeapCommit @ 0x1801170C8 (RtlpLogHeapCommit.c)
 *     RtlpHeapLogRangeReserve @ 0x1801197F0 (RtlpHeapLogRangeReserve.c)
 *     RtlCompareMemoryUlong @ 0x180167520 (RtlCompareMemoryUlong.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall RtlpAllocateHeap(
        __int64 a1,
        unsigned __int64 a2,
        SIZE_T a3,
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
  __int64 *v20; // r12
  __int64 *v21; // r15
  __int64 *v22; // rax
  int v23; // edx
  __int16 v24; // di
  __int64 v25; // r8
  int v26; // edx
  __int16 v27; // di
  __int64 v28; // rdi
  unsigned int v29; // r8d
  unsigned int *v30; // r9
  unsigned int v31; // edx
  int v32; // ecx
  __int64 v33; // rdi
  __int64 v34; // r15
  int v35; // edx
  unsigned __int64 v36; // rcx
  __int64 v37; // r13
  __int64 *v38; // r8
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 *v41; // rdi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  int v44; // r9d
  unsigned int v45; // esi
  __int64 v46; // r10
  __int64 *v47; // r11
  __int64 v48; // r12
  __int64 v49; // rax
  int v50; // edx
  __int16 v51; // r15
  char v52; // r12
  int v53; // edx
  unsigned __int64 v54; // rdi
  SIZE_T v55; // rsi
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // rsi
  __int64 v60; // rdx
  unsigned __int64 v61; // r14
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // r13
  _QWORD *v64; // rax
  __int64 *v65; // rdi
  unsigned __int64 v66; // rcx
  int v67; // ecx
  _QWORD *v68; // r14
  _QWORD *v69; // r9
  _QWORD *v70; // rax
  int v71; // edx
  __int16 v72; // r12
  __int64 v73; // r8
  int v74; // edx
  __int16 v75; // r12
  __int64 v76; // r8
  unsigned int v77; // r9d
  unsigned int *v78; // r10
  unsigned int v79; // edx
  int v80; // ecx
  __int64 v81; // r8
  int v82; // eax
  _QWORD *v83; // r12
  __int64 *v84; // rax
  __int64 *v85; // rdi
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // rax
  int v88; // edx
  int v89; // r9d
  unsigned int v90; // r14d
  unsigned __int64 v91; // r8
  __int64 v92; // r13
  __int64 v93; // rdi
  bool v94; // zf
  __int64 *k; // r13
  int v96; // edx
  __int16 v97; // di
  int v98; // edx
  unsigned __int64 v99; // rcx
  _QWORD *n; // r8
  int v101; // edx
  __int16 v102; // r12
  int v103; // edx
  __int64 *v104; // r8
  __int64 v105; // r13
  __int64 *v106; // r10
  __int64 v107; // rax
  __int64 v108; // r9
  __int64 *v109; // r12
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rdx
  __int64 v113; // rcx
  __int16 LFHContext; // ax
  int v115; // edx
  __int64 v116; // rsi
  __int64 *v117; // r12
  __int64 v118; // rax
  __int64 v119; // r9
  __int64 **v120; // rdx
  unsigned __int64 v121; // rcx
  unsigned __int64 v122; // r8
  int v123; // r9d
  unsigned int v124; // r11d
  unsigned int v125; // eax
  __int64 *v126; // r11
  __int64 *v127; // r8
  int v128; // edx
  char v129; // al
  SIZE_T v130; // r12
  SIZE_T v131; // r13
  SIZE_T v132; // rdi
  SIZE_T v133; // rsi
  __int64 v134; // r9
  __int64 v135; // r9
  __int64 v136; // rax
  __int64 v137; // r8
  __int64 v138; // rdi
  __int64 *v139; // rsi
  __int64 v140; // rax
  __int64 v141; // r9
  __int64 **v142; // rdx
  unsigned __int64 v143; // rcx
  unsigned __int64 v144; // r9
  struct _TEB *v145; // rdi
  unsigned int v146; // ecx
  unsigned int v147; // eax
  int v148; // r9d
  unsigned __int64 v149; // rax
  signed __int64 v150; // rcx
  unsigned __int64 v151; // rtt
  unsigned __int64 v152; // rcx
  __int64 v153; // rdi
  __int64 v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // rdi
  __int64 v157; // rcx
  __int64 *v158; // rax
  unsigned __int64 v159; // r14
  _DWORD *v160; // r8
  unsigned __int64 v161; // rdx
  _QWORD *v162; // rdi
  _QWORD *Entry; // r8
  _QWORD *v164; // r14
  __int64 *v165; // rax
  __int64 **v166; // rdx
  unsigned __int64 v167; // rdi
  unsigned __int64 v168; // rcx
  unsigned __int64 v169; // rcx
  struct _TEB *v170; // rdi
  _BYTE *v171; // rdi
  _BYTE *v172; // r10
  _OWORD *ExtraStuffPointer; // rsi
  _BYTE *v174; // rdi
  int v175; // eax
  __int64 v176; // r9
  unsigned __int64 v177; // r8
  unsigned __int64 v178; // r14
  _QWORD *v179; // rdi
  _QWORD *v180; // r8
  int v181; // eax
  unsigned __int64 *v182; // rdi
  __int64 *v183; // rax
  unsigned __int64 v184; // rdx
  ULONG_PTR v185; // rcx
  unsigned __int64 v186; // r8
  _DWORD *v187; // r8
  unsigned __int64 v188; // rdx
  unsigned __int64 *v189; // rdi
  __int64 *v190; // rax
  ULONG_PTR v191; // rax
  int v192; // eax
  struct _TEB *v193; // rdi
  _DWORD *SharedData; // rcx
  __int64 v195; // rcx
  __int64 v197; // r14
  unsigned __int64 v198; // r14
  char v199; // [rsp+30h] [rbp-238h]
  int j; // [rsp+38h] [rbp-230h]
  char *v201; // [rsp+38h] [rbp-230h]
  _QWORD *v202; // [rsp+38h] [rbp-230h]
  __int64 v203; // [rsp+48h] [rbp-220h]
  _DWORD *v204; // [rsp+50h] [rbp-218h]
  int v205; // [rsp+58h] [rbp-210h]
  int v206; // [rsp+5Ch] [rbp-20Ch]
  int v207; // [rsp+5Ch] [rbp-20Ch]
  char v208; // [rsp+68h] [rbp-200h]
  int m; // [rsp+70h] [rbp-1F8h]
  bool v210; // [rsp+80h] [rbp-1E8h]
  int v211; // [rsp+88h] [rbp-1E0h]
  unsigned int v212; // [rsp+88h] [rbp-1E0h]
  __int64 *v213; // [rsp+90h] [rbp-1D8h]
  __int64 *v214; // [rsp+90h] [rbp-1D8h]
  __int64 **v215; // [rsp+98h] [rbp-1D0h]
  ULONG_PTR v216; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v217; // [rsp+A8h] [rbp-1C0h]
  __int64 *v218; // [rsp+B0h] [rbp-1B8h]
  ULONG_PTR v219; // [rsp+B8h] [rbp-1B0h]
  int v220; // [rsp+C0h] [rbp-1A8h]
  int v221; // [rsp+C4h] [rbp-1A4h]
  unsigned __int64 v222; // [rsp+C8h] [rbp-1A0h]
  _OWORD *v223; // [rsp+D0h] [rbp-198h]
  unsigned int *v224; // [rsp+D8h] [rbp-190h]
  unsigned __int64 v225; // [rsp+E0h] [rbp-188h]
  SIZE_T v226; // [rsp+E8h] [rbp-180h]
  unsigned int *v227; // [rsp+F0h] [rbp-178h]
  SIZE_T v228; // [rsp+F8h] [rbp-170h]
  unsigned __int64 v229; // [rsp+100h] [rbp-168h]
  unsigned __int64 v230; // [rsp+108h] [rbp-160h]
  unsigned __int64 v231; // [rsp+110h] [rbp-158h]
  __int64 v232; // [rsp+118h] [rbp-150h]
  unsigned __int64 v233; // [rsp+120h] [rbp-148h]
  unsigned __int64 v234; // [rsp+128h] [rbp-140h]
  __int64 v235; // [rsp+130h] [rbp-138h]
  __int64 v236; // [rsp+138h] [rbp-130h]
  __int128 v237; // [rsp+140h] [rbp-128h]
  __int128 v238; // [rsp+150h] [rbp-118h]
  __int128 v239; // [rsp+160h] [rbp-108h]
  __int128 v240; // [rsp+170h] [rbp-F8h]
  int v241; // [rsp+188h] [rbp-E0h]
  int v242; // [rsp+198h] [rbp-D0h]
  unsigned __int64 v243; // [rsp+1A0h] [rbp-C8h]
  unsigned __int64 v244; // [rsp+1A8h] [rbp-C0h]
  __int64 v245; // [rsp+1B0h] [rbp-B8h]
  unsigned __int64 v246; // [rsp+1B8h] [rbp-B0h]
  int v247; // [rsp+1C8h] [rbp-A0h]
  int v248; // [rsp+1D8h] [rbp-90h]
  int v249; // [rsp+1E8h] [rbp-80h]
  int v250; // [rsp+1F8h] [rbp-70h]
  int v251; // [rsp+208h] [rbp-60h]
  int v252; // [rsp+218h] [rbp-50h]
  int v253; // [rsp+228h] [rbp-40h]
  unsigned int v254; // [rsp+278h] [rbp+10h]
  SIZE_T v255; // [rsp+280h] [rbp+18h]
  unsigned __int64 v256; // [rsp+288h] [rbp+20h] BYREF

  v256 = a4;
  v255 = a3;
  v254 = a2;
  v6 = a2;
  v205 = 1;
  v199 = 0;
  v204 = 0LL;
  v203 = 0LL;
  v216 = 0LL;
  v206 = 0;
  v8 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v205 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return RtlDebugAllocateHeap(a1, a2, a3);
    v197 = a3;
    if ( !a3 )
      v197 = 1LL;
    v198 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v197);
    if ( v198 < 0x20 )
      v198 = 32LL;
    v256 = v198;
    v9 = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    v208 = v9;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      v9 = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      v208 = v9;
      v198 += 16LL;
      v256 = v198;
    }
    v10 = v198 >> 4;
  }
  else
  {
    v9 = 1;
    v208 = 1;
    v10 = a4 >> 4;
    if ( v8 < 2 )
    {
      v256 += 16LL;
      v10 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    v9 |= 8u;
    v208 = v9;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_1801D4988 )
      {
        v193 = NtCurrentTeb();
        v193->LastStatusValue = -1073741420;
        v193->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741420);
        goto LABEL_478;
      }
      v206 = 1;
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v146 = *(_DWORD *)(a1 + 616) + 1;
      *(_DWORD *)(a1 + 616) = v146;
      v147 = *(_DWORD *)(a1 + 620) + 1;
      *(_DWORD *)(a1 + 620) = v147;
      if ( *(_BYTE *)(a1 + 418) != 2 )
      {
        if ( v146 < v147 )
        {
          *(_QWORD *)(a1 + 616) = 0LL;
          v146 = 0;
          v147 = 0;
        }
        if ( v147 >= v146 >> 4 )
          *(_DWORD *)(a1 + 120) |= 0x20000000u;
      }
    }
    v199 = 1;
    if ( (*(_DWORD *)(a1 + 120) & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(a1);
    a3 = v255;
  }
  if ( v10 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v256 += 56LL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v256 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           (__int64 *)(a1 + 376)) )
      {
        v149 = qword_1801CFF00;
        do
        {
          v150 = v149 ^ (v149 >> 12) ^ ((v149 ^ (v149 >> 12)) << 25) ^ ((v149 ^ (v149 >> 12) ^ ((v149 ^ (v149 >> 12)) << 25)) >> 27);
          v151 = v149;
          v149 = _InterlockedCompareExchange64(&qword_1801CFF00, v150, v149);
        }
        while ( v151 != v149 );
        v203 = (__int64)RtlpHpAllocVirtBlockCommitFirst(
                          (_DWORD *)a1,
                          &v256,
                          (unsigned __int64)((-3 * (_BYTE)v150) & 0xF) << 12,
                          &v216);
        if ( v203 )
        {
          v152 = v256;
          *(_WORD *)(v203 + 56) = v256 - v255;
          *(_BYTE *)(v203 + 58) = v9 | 2;
          *(_QWORD *)(v203 + 32) = v152;
          *(_QWORD *)(v203 + 40) = v216;
          *(_BYTE *)(v203 + 63) = 4;
          *(_QWORD *)(a1 + 592) += v152;
          v153 = 2147353472LL;
          if ( RtlGetCurrentServiceSessionId() )
            v154 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v154 = 2147353472LL;
          if ( *(_BYTE *)v154 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a1, v203, v256, 9LL);
          if ( RtlGetCurrentServiceSessionId() )
            v155 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v155 = 2147353472LL;
          if ( *(_BYTE *)v155 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v153 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent(a1, v203, v256, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v153);
          }
          v156 = 2147353482LL;
          if ( RtlGetCurrentServiceSessionId() )
            v157 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v157 = 2147353482LL;
          if ( *(_BYTE *)v157 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v156 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent(a1, v203, v256, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v156);
          }
          if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
            *(_WORD *)(v203 + 16) = RtlLogStackBackTraceEx(1u);
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(v203 + 18) = RtlpUpdateTagEntry(
                                      a1,
                                      (unsigned __int8)(v6 >> 18),
                                      0LL,
                                      *(_QWORD *)(v203 + 32) >> 4,
                                      1);
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v203 + 59) = *(_BYTE *)(v203 + 56) ^ *(_BYTE *)(v203 + 57) ^ *(_BYTE *)(v203 + 58);
            *(_DWORD *)(v203 + 56) ^= *(_DWORD *)(a1 + 136);
          }
          a3 = a1 + 272;
          v158 = *(__int64 **)(a1 + 280);
          if ( *v158 == a1 + 272 )
          {
            *(_QWORD *)v203 = a3;
            *(_QWORD *)(v203 + 8) = v158;
            *v158 = v203;
            *(_QWORD *)(a1 + 280) = v203;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, a3, 0, *v158, 0LL);
          }
          v204 = (_DWORD *)(v203 + 64);
        }
        else
        {
          v204 = 0LL;
          ++*(_DWORD *)(a1 + 632);
        }
        goto LABEL_478;
      }
    }
    goto LABEL_365;
  }
  if ( (v6 & 0x800000) == 0 )
  {
    if ( v8 < *(unsigned __int16 *)(a1 + 432) )
    {
      if ( a3 > RtlpLargestLfhBlock )
        goto LABEL_21;
      v11 = v8 >> 3;
      v12 = v8 & 7;
      if ( ((unsigned __int8)(1 << (v8 & 7)) & *(_BYTE *)((v8 >> 3) + a1 + 434)) != 0 )
        goto LABEL_21;
      v13 = (__int64 *)(*(_QWORD *)(a1 + 424) + 2 * v8);
      v218 = v13;
      v14 = *(_WORD *)v13 + 33;
      *(_WORD *)v13 = v14;
      if ( !v206 && (v14 & 0x1Fu) <= 0x10 && v14 <= 0xFF00u )
        goto LABEL_21;
      v112 = a3;
      if ( !a3 )
        v112 = 1LL;
      if ( *(_BYTE *)(a1 + 418) == 2 )
        v113 = *(_QWORD *)(a1 + 408);
      else
        v113 = 0LL;
      LFHContext = RtlpGetLFHContext(v113, v112);
      if ( LFHContext != -1 )
      {
        *(_WORD *)v13 = LFHContext;
        *(_BYTE *)(v11 + a1 + 434) |= 1 << v12;
        ++*(_DWORD *)(a1 + 656);
        goto LABEL_21;
      }
      if ( *(_BYTE *)(a1 + 418) != 2 )
      {
LABEL_166:
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
        goto LABEL_21;
      }
      v94 = *(_QWORD *)(a1 + 408) == 0LL;
LABEL_165:
      if ( !v94 )
        goto LABEL_21;
      goto LABEL_166;
    }
    if ( a3 <= RtlpLargestLfhBlock && (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408)) )
    {
      v94 = *(_BYTE *)(a1 + 419) == 2;
      goto LABEL_165;
    }
  }
LABEL_21:
  if ( a5 )
  {
    v15 = *a5;
    if ( *a5 )
    {
      v34 = (__int64)(v15 - 2);
      v201 = (char *)(v15 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v115 = *(_DWORD *)(v34 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v34 + 8) = v115;
        if ( HIBYTE(v115) != ((unsigned __int8)v115 ^ (unsigned __int8)(BYTE1(v115) ^ BYTE2(v115))) )
          RtlpAnalyzeHeapFailure(a1, v15 - 2);
      }
      v116 = *v15;
      v117 = *(__int64 **)(v34 + 24);
      v118 = *v117;
      v119 = *(_QWORD *)(*v15 + 8);
      if ( (__int64 *)*v117 == v15 && v118 == v119 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v34 + 8);
        v120 = *(__int64 ***)(a1 + 312);
        if ( v120 )
        {
          v121 = *(unsigned __int16 *)(v34 + 8);
          while ( 1 )
          {
            v122 = *((unsigned int *)v120 + 2);
            if ( v121 < v122 )
              break;
            if ( !*v120 )
            {
              LODWORD(v121) = v122 - 1;
              break;
            }
            v120 = (__int64 **)*v120;
          }
          LOBYTE(v122) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v120, v122, (_DWORD)v15, v121, *(unsigned __int16 *)(v34 + 8));
        }
        *v117 = v116;
        *(_QWORD *)(v116 + 8) = v117;
        if ( (*(_BYTE *)(v34 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
          goto LABEL_82;
        LOBYTE(v135) = 1;
        RtlpDeCommitFreeBlock(a1, v15 - 2, *(unsigned __int16 *)(v34 + 8), v135);
      }
      else
      {
        RtlpLogHeapFailure(13, a1, (_DWORD)v15, v119, v118, 0LL);
      }
      v170 = NtCurrentTeb();
      v170->LastStatusValue = -1073741801;
      v170->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741801);
      goto LABEL_478;
    }
  }
  v219 = a1 + 336;
  for ( i = *(__int64 **)(a1 + 312); ; i = (__int64 *)*i )
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
      v20 = (__int64 *)i[4];
    }
    else
    {
      v237 = 0LL;
      v23 = *((_DWORD *)v22 - 2);
      DWORD2(v237) = v23;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v23 ^= *(_DWORD *)(a1 + 136);
        v24 = v23;
        DWORD2(v237) = v23;
        if ( HIBYTE(v23) != ((unsigned __int8)v23 ^ (unsigned __int8)(BYTE1(v23) ^ BYTE2(v23))) )
        {
          RtlpLogHeapFailure(3, a1, (_DWORD)v22 - 16, 0, 0LL, 0LL);
          LOWORD(v23) = v24;
        }
      }
      if ( (int)(v10 - (unsigned __int16)v23) > 0 )
      {
        v20 = v21;
      }
      else
      {
        v25 = *v21 - 16;
        v238 = 0LL;
        v26 = *(_DWORD *)(v25 + 8);
        DWORD2(v238) = v26;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v26 ^= *(_DWORD *)(a1 + 136);
          v27 = v26;
          DWORD2(v238) = v26;
          if ( HIBYTE(v26) != ((unsigned __int8)v26 ^ (unsigned __int8)(BYTE1(v26) ^ BYTE2(v26))) )
          {
            RtlpLogHeapFailure(3, a1, v25, 0, 0LL, 0LL);
            LOWORD(v26) = v27;
          }
        }
        if ( (int)(v10 - (unsigned __int16)v26) <= 0 )
        {
          v20 = (__int64 *)*v21;
        }
        else if ( !*i && j == *((_DWORD *)i + 2) - 1 )
        {
          if ( *((_DWORD *)i + 3) )
            v19 = (unsigned int)(2 * v19);
          for ( k = *(__int64 **)(i[6] + 8 * v19); v21 != k; k = (__int64 *)*k )
          {
            v239 = 0LL;
            v96 = *((_DWORD *)k - 2);
            DWORD2(v239) = v96;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v96 ^= *(_DWORD *)(a1 + 136);
              v97 = v96;
              DWORD2(v239) = v96;
              if ( HIBYTE(v96) != ((unsigned __int8)v96 ^ (unsigned __int8)(BYTE1(v96) ^ BYTE2(v96))) )
              {
                RtlpLogHeapFailure(3, a1, (_DWORD)k - 16, 0, 0LL, 0LL);
                LOWORD(v96) = v97;
              }
            }
            if ( (int)(v10 - (unsigned __int16)v96) <= 0 )
            {
              v20 = k;
              break;
            }
          }
        }
        else
        {
          v224 = 0LL;
          v28 = (unsigned int)v19 >> 5;
          v29 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
          v30 = (unsigned int *)(i[5] + 4 * v28);
          v224 = v30;
          v31 = *v30 & (-1 << (v19 & 0x1F));
          while ( !v31 )
          {
            if ( (unsigned int)v28 > v29 )
            {
              v20 = 0LL;
              goto LABEL_48;
            }
            v224 = ++v30;
            v31 = *v30;
            LODWORD(v28) = v28 + 1;
          }
          if ( (_WORD)v31 )
          {
            if ( (_BYTE)v31 )
              v32 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v31];
            else
              v32 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v31)] + 8;
          }
          else if ( (v31 & 0xFF0000) != 0 )
          {
            v32 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v31)] + 16;
          }
          else
          {
            v32 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v31 >> 24] + 24;
          }
          v33 = (unsigned int)(v32 + 32 * v28);
          if ( *((_DWORD *)i + 3) )
            v33 = (unsigned int)(2 * v33);
          v20 = *(__int64 **)(i[6] + 8 * v33);
        }
      }
    }
LABEL_48:
    if ( v20 )
      break;
    i = (__int64 *)*i;
    v18 = *((_DWORD *)i + 6);
  }
  if ( (__int64 *)v219 == v20 )
  {
LABEL_292:
    v136 = RtlpExtendHeap(a1);
    v34 = v136;
    v201 = (char *)v136;
    if ( v136 )
    {
      v137 = v136 + 16;
      v138 = *(_QWORD *)(v136 + 16);
      v139 = *(__int64 **)(v136 + 24);
      v140 = *v139;
      v141 = *(_QWORD *)(v138 + 8);
      if ( *v139 != v137 || v140 != v141 )
      {
        RtlpLogHeapFailure(13, a1, v137, v141, v140, 0LL);
        goto LABEL_478;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v34 + 8);
      v142 = *(__int64 ***)(a1 + 312);
      if ( v142 )
      {
        v225 = 0LL;
        v143 = *(unsigned __int16 *)(v34 + 8);
        while ( 1 )
        {
          v144 = *((unsigned int *)v142 + 2);
          if ( v143 < v144 )
            break;
          if ( !*v142 )
          {
            v143 = (unsigned int)(v144 - 1);
            break;
          }
          v142 = (__int64 **)*v142;
        }
        v225 = v143;
        v148 = v137;
        LOBYTE(v137) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v142, v137, v148, v143, *(unsigned __int16 *)(v34 + 8));
      }
      *v139 = v138;
      *(_QWORD *)(v138 + 8) = v139;
      goto LABEL_80;
    }
LABEL_365:
    v204 = 0LL;
    goto LABEL_478;
  }
  v34 = (__int64)(v20 - 2);
  v201 = (char *)(v20 - 2);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v35 = *(_DWORD *)(v34 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v34 + 8) = v35;
    if ( HIBYTE(v35) != ((unsigned __int8)v35 ^ (unsigned __int8)(BYTE1(v35) ^ BYTE2(v35))) )
      RtlpAnalyzeHeapFailure(a1, v20 - 2);
  }
  v36 = *(unsigned __int16 *)(v34 + 8);
  if ( v36 < v10 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v34 + 11) = BYTE1(v36) ^ *(_BYTE *)(v34 + 10) ^ v36;
      *(_DWORD *)(v34 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_292;
  }
  v37 = *v20;
  v38 = *(__int64 **)(v34 + 24);
  v213 = v38;
  v39 = *v38;
  v40 = *(_QWORD *)(*v20 + 8);
  if ( (__int64 *)*v38 != v20 || v39 != v40 )
  {
    RtlpLogHeapFailure(13, a1, (_DWORD)v20, v40, v39, 0LL);
    goto LABEL_478;
  }
  *(_QWORD *)(a1 + 192) -= v36;
  v41 = *(__int64 **)(a1 + 312);
  if ( !v41 )
    goto LABEL_79;
  v217 = 0LL;
  v42 = *(unsigned __int16 *)(v34 + 8);
  while ( 1 )
  {
    v43 = *((unsigned int *)v41 + 2);
    if ( v42 < v43 )
    {
      v217 = *(unsigned __int16 *)(v34 + 8);
      v44 = v43 - 1;
      goto LABEL_63;
    }
    if ( !*v41 )
      break;
    v41 = (__int64 *)*v41;
  }
  v44 = v43 - 1;
  v217 = (unsigned int)(v43 - 1);
  LODWORD(v42) = v43 - 1;
LABEL_63:
  v232 = *(unsigned __int16 *)(v34 + 8);
  v45 = v42 - *((_DWORD *)v41 + 6);
  v46 = 2 * v45;
  if ( !*((_DWORD *)v41 + 3) )
    v46 = v45;
  v211 = v46;
  v217 = v41[6] + 8 * v46;
  v47 = *(__int64 **)v217;
  --*((_DWORD *)v41 + 4);
  if ( (_DWORD)v42 == v44 )
    --*((_DWORD *)v41 + 5);
  if ( v47 != v20 )
    goto LABEL_79;
  v220 = v43;
  if ( !*v41 )
    LODWORD(v43) = v44;
  v220 = v43;
  v48 = *v20;
  v49 = v41[4];
  if ( (unsigned int)v42 >= (unsigned int)v43 )
  {
    if ( v48 != v49 )
    {
      *(_QWORD *)v217 = v48;
      goto LABEL_79;
    }
    *(_QWORD *)v217 = 0LL;
  }
  else
  {
    if ( v48 != v49 )
    {
      v240 = 0LL;
      v50 = *(_DWORD *)(v48 - 8);
      DWORD2(v240) = v50;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v50 ^= *(_DWORD *)(a1 + 136);
        v51 = v50;
        DWORD2(v240) = v50;
        if ( HIBYTE(v50) != ((unsigned __int8)v50 ^ (unsigned __int8)(BYTE1(v50) ^ BYTE2(v50))) )
        {
          RtlpLogHeapFailure(3, a1, v48 - 16, 0, 0LL, 0LL);
          LOWORD(v50) = v51;
          v38 = v213;
          LODWORD(v46) = v211;
        }
      }
      if ( (_DWORD)v232 == (unsigned __int16)v50 )
      {
        *(_QWORD *)(v41[6] + 8LL * (unsigned int)v46) = v48;
        v34 = (__int64)v201;
        goto LABEL_79;
      }
      v34 = (__int64)v201;
    }
    *(_QWORD *)(v41[6] + 8LL * (unsigned int)v46) = 0LL;
  }
  *(_DWORD *)(v41[5] + 4LL * (v45 >> 5)) &= ~(1 << (v45 & 0x1F));
LABEL_79:
  *v38 = v37;
  *(_QWORD *)(v37 + 8) = v38;
LABEL_80:
  if ( (*(_BYTE *)(v34 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1) )
  {
    LOBYTE(v134) = 1;
    RtlpDeCommitFreeBlock(a1, v34, *(unsigned __int16 *)(v34 + 8), v134);
    goto LABEL_478;
  }
  v9 = v208;
LABEL_82:
  v52 = *(_BYTE *)(v34 + 10);
  v53 = v205;
  if ( !v205 && (v52 & 4) != 0 )
  {
    v226 = 0LL;
    v132 = 16LL * *(unsigned __int16 *)(v34 + 8) - 32;
    v226 = v132;
    if ( (v52 & 2) != 0 && v132 > 4 )
    {
      v132 -= 4LL;
      v226 = v132;
    }
    v133 = RtlCompareMemoryUlong((PVOID)(v34 + 32), v132, 0xFEEEFEEE);
    if ( v133 != v132 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v34 = (__int64)v201;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v201, &v201[v133 + 32]);
      RtlpBreakPointHeap();
    }
    v53 = 0;
  }
  if ( (*(_BYTE *)(v34 + 10) & 1) == 0 )
  {
    *(_BYTE *)(v34 + 10) = v9;
    v54 = *(unsigned __int16 *)(v34 + 8) - v10;
    *(_WORD *)(v34 + 8) = v10;
    v55 = v255;
    v56 = v256 - v255;
    v243 = v256 - v255;
    if ( v256 - v255 >= 0x3F )
    {
      *(_QWORD *)(v34 + 16 * v10) = v56;
      *(_BYTE *)(v34 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v34 + 15) = v56;
    }
    *(_BYTE *)(v34 + 11) = 0;
    if ( v54 )
    {
      if ( v54 != 1 )
      {
        v210 = v53 == 0;
        v57 = *(unsigned __int8 *)(v34 + 14);
        if ( (_BYTE)v57 )
          v58 = (v34 & 0xFFFFFFFFFFFF0000uLL) - (v57 << 16) + 0x10000;
        else
          v58 = a1;
        v223 = (_OWORD *)v54;
        v59 = v34 + 16 * v10;
        v207 = 0;
        *(_BYTE *)(v59 + 10) = v52;
        *(_BYTE *)(v59 + 15) = 0;
        *(_WORD *)(v59 + 12) = *(_WORD *)(a1 + 140) ^ v10;
        v222 = 0LL;
        v60 = *(_QWORD *)(v58 + 40);
        if ( v60 == v58 )
        {
          LOBYTE(v61) = 0;
        }
        else
        {
          v61 = ((v59 - v58) >> 16) + 1;
          v222 = v61;
          if ( v61 >= 0xFE )
            RtlpLogHeapFailure(3, v60, v59, v58, 0LL, 0LL);
        }
        *(_BYTE *)(v59 + 14) = v61;
        *(_BYTE *)(v59 + 11) = 0;
        *(_WORD *)(v59 + 8) = v54;
        while ( 1 )
        {
          v62 = v59 + 16 * v54;
          if ( ((*(_BYTE *)(v62 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
          {
            *(_WORD *)(v62 + 12) = *(_WORD *)(a1 + 140) ^ v54;
            if ( !v210 )
            {
              v63 = (unsigned __int16)v54;
              v245 = (unsigned __int16)v54;
              *(_BYTE *)(v59 + 10) = 0;
              *(_BYTE *)(v59 + 15) = 0;
              v64 = (_QWORD *)(a1 + 336);
              v65 = *(__int64 **)(a1 + 312);
              if ( !v65 )
              {
                v68 = (_QWORD *)*v64;
                goto LABEL_123;
              }
              while ( 1 )
              {
                v66 = *((unsigned int *)v65 + 2);
                if ( v63 < v66 )
                {
                  v67 = v63;
                  goto LABEL_101;
                }
                if ( !*v65 )
                  break;
                v65 = (__int64 *)*v65;
              }
              v67 = v66 - 1;
LABEL_101:
              for ( m = v67; ; m = v67 )
              {
                LODWORD(v256) = v67 - *((_DWORD *)v65 + 6);
                v68 = 0LL;
                v69 = (_QWORD *)v65[4];
                v202 = v69;
                v70 = (_QWORD *)v69[1];
                if ( v69 == v70 )
                {
                  v68 = (_QWORD *)v65[4];
                }
                else
                {
                  v71 = *((_DWORD *)v70 - 2);
                  v247 = v71;
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v71 ^= *(_DWORD *)(a1 + 136);
                    v72 = v71;
                    v247 = v71;
                    if ( HIBYTE(v71) != ((unsigned __int8)v71 ^ (unsigned __int8)(BYTE1(v71) ^ BYTE2(v71))) )
                    {
                      RtlpLogHeapFailure(3, a1, (_DWORD)v70 - 16, 0, 0LL, 0LL);
                      LOWORD(v71) = v72;
                      v69 = v202;
                    }
                  }
                  if ( (int)(v63 - (unsigned __int16)v71) > 0 )
                  {
                    v68 = v69;
                  }
                  else
                  {
                    v73 = *v69 - 16LL;
                    v74 = *(_DWORD *)(v73 + 8);
                    v248 = v74;
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v74 ^= *(_DWORD *)(a1 + 136);
                      v75 = v74;
                      v248 = v74;
                      if ( HIBYTE(v74) != ((unsigned __int8)v74 ^ (unsigned __int8)(BYTE1(v74) ^ BYTE2(v74))) )
                      {
                        RtlpLogHeapFailure(3, a1, v73, 0, 0LL, 0LL);
                        LOWORD(v74) = v75;
                        v69 = v202;
                      }
                    }
                    if ( (int)(v63 - (unsigned __int16)v74) <= 0 )
                    {
                      v68 = (_QWORD *)*v69;
                    }
                    else if ( !*v65 && m == *((_DWORD *)v65 + 2) - 1 )
                    {
                      v99 = *((_DWORD *)v65 + 3) ? (unsigned int)(2 * v256) : (unsigned int)v256;
                      for ( n = *(_QWORD **)(v65[6] + 8 * v99); ; n = (_QWORD *)*n )
                      {
                        v256 = (unsigned __int64)n;
                        if ( v69 == n )
                          break;
                        v101 = *((_DWORD *)n - 2);
                        v249 = v101;
                        if ( *(_DWORD *)(a1 + 124) )
                        {
                          v101 ^= *(_DWORD *)(a1 + 136);
                          v102 = v101;
                          v249 = v101;
                          if ( HIBYTE(v101) != ((unsigned __int8)v101 ^ (unsigned __int8)(BYTE1(v101) ^ BYTE2(v101))) )
                          {
                            RtlpLogHeapFailure(3, a1, (_DWORD)n - 16, 0, 0LL, 0LL);
                            LOWORD(v101) = v102;
                            n = (_QWORD *)v256;
                            v69 = v202;
                          }
                        }
                        if ( (int)(v63 - (unsigned __int16)v101) <= 0 )
                        {
                          v68 = n;
                          break;
                        }
                      }
                    }
                    else
                    {
                      v227 = 0LL;
                      v76 = (unsigned int)v256 >> 5;
                      v77 = ((unsigned int)(*((_DWORD *)v65 + 2) - *((_DWORD *)v65 + 6)) >> 5) - 1;
                      v78 = (unsigned int *)(v65[5] + 4 * v76);
                      v227 = v78;
                      v79 = *v78 & (-1 << (v256 & 0x1F));
                      while ( !v79 )
                      {
                        if ( (unsigned int)v76 > v77 )
                        {
                          v68 = 0LL;
                          goto LABEL_121;
                        }
                        v227 = ++v78;
                        v79 = *v78;
                        LODWORD(v76) = v76 + 1;
                      }
                      if ( (_WORD)v79 )
                      {
                        if ( (_BYTE)v79 )
                          v80 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v79];
                        else
                          v80 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v79)] + 8;
                      }
                      else if ( (v79 & 0xFF0000) != 0 )
                      {
                        v80 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v79)] + 16;
                      }
                      else
                      {
                        v80 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v79 >> 24] + 24;
                      }
                      v81 = (unsigned int)(v80 + 32 * v76);
                      if ( *((_DWORD *)v65 + 3) )
                        v81 = (unsigned int)(2 * v81);
                      v68 = *(_QWORD **)(v65[6] + 8 * v81);
                    }
                  }
                }
LABEL_121:
                if ( v68 )
                  break;
                v65 = (__int64 *)*v65;
                v67 = *((_DWORD *)v65 + 6);
              }
              while ( 1 )
              {
                v64 = (_QWORD *)(a1 + 336);
LABEL_123:
                if ( v64 == v68 )
                  break;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v82 = *((_DWORD *)v68 - 2);
                  v250 = v82;
                  if ( (v82 & *(_DWORD *)(a1 + 124)) != 0 )
                  {
                    v82 ^= *(_DWORD *)(a1 + 136);
                    v250 = v82;
                  }
                }
                else
                {
                  LOWORD(v82) = *((_WORD *)v68 - 4);
                }
                if ( v63 <= (unsigned __int16)v82 )
                  break;
                v68 = (_QWORD *)*v68;
              }
              v83 = (_QWORD *)(v59 + 16);
              v84 = (__int64 *)v68[1];
              if ( (_QWORD *)*v84 == v68 )
              {
                *v83 = v68;
                *(_QWORD *)(v59 + 24) = v84;
                *v84 = (__int64)v83;
                v68[1] = v83;
              }
              else
              {
                RtlpLogHeapFailure(13, 0, (_DWORD)v68, 0, *v84, 0LL);
              }
              *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v59 + 8);
              v85 = *(__int64 **)(a1 + 312);
              if ( v85 )
              {
                v86 = *(unsigned __int16 *)(v59 + 8);
                while ( 1 )
                {
                  v87 = *((unsigned int *)v85 + 2);
                  if ( v86 < v87 )
                  {
                    v88 = v87 - 1;
                    goto LABEL_136;
                  }
                  if ( !*v85 )
                    break;
                  v85 = (__int64 *)*v85;
                }
                v88 = v87 - 1;
                LODWORD(v86) = v87 - 1;
LABEL_136:
                v89 = *(unsigned __int16 *)(v59 + 8);
                v218 = (__int64 *)*(unsigned __int16 *)(v59 + 8);
                v90 = v86 - *((_DWORD *)v85 + 6);
                v91 = 2 * v90;
                if ( !*((_DWORD *)v85 + 3) )
                  v91 = v90;
                v256 = v91;
                ++*((_DWORD *)v85 + 4);
                v92 = *(_QWORD *)(v85[6] + 8 * v91);
                if ( (_DWORD)v86 == v88 )
                  ++*((_DWORD *)v85 + 5);
                if ( !v92 )
                  goto LABEL_141;
                v98 = *(_DWORD *)(v92 - 8);
                v241 = v98;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v98 ^= *(_DWORD *)(a1 + 136);
                  v241 = v98;
                  if ( HIBYTE(v98) != ((unsigned __int8)v98 ^ (unsigned __int8)(BYTE1(v98) ^ BYTE2(v98))) )
                  {
                    RtlpLogHeapFailure(3, a1, v92 - 16, 0, 0LL, 0LL);
                    LOWORD(v98) = v241;
                    LODWORD(v91) = v256;
                    v89 = (int)v218;
                  }
                }
                if ( v89 - (unsigned __int16)v98 <= 0 )
LABEL_141:
                  *(_QWORD *)(v85[6] + 8LL * (unsigned int)v91) = v83;
                if ( !v92 )
                  *(_DWORD *)(v85[5] + 4LL * (v90 >> 5)) |= 1 << (v90 & 0x1F);
              }
              goto LABEL_144;
            }
            v159 = (unsigned __int16)v54;
            *(_BYTE *)(v59 + 10) &= 0xF0u;
            *(_BYTE *)(v59 + 15) = 0;
            if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
            {
              v160 = (_DWORD *)(v59 + 32);
              v233 = v59 + 32;
              v161 = (16 * (unsigned __int64)(unsigned __int16)v54 - 32) >> 2;
              v231 = v161;
              if ( v161 )
              {
                if ( ((unsigned __int8)v160 & 4) != 0 )
                {
                  *v160 = -17891602;
                  v231 = --v161;
                  if ( v161 )
                  {
                    v160 = (_DWORD *)(v59 + 36);
                    v233 = v59 + 36;
                    goto LABEL_344;
                  }
                }
                else
                {
LABEL_344:
                  memset64(v160, 0xFEEEFEEEFEEEFEEEuLL, v161 >> 1);
                  if ( (v161 & 1) != 0 )
                    v160[v161 - 1] = -17891602;
                }
              }
              *(_BYTE *)(v59 + 10) |= 4u;
            }
            v162 = (_QWORD *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              Entry = (_QWORD *)RtlpFindEntry(a1, v159);
            else
              Entry = (_QWORD *)*v162;
            while ( v162 != Entry )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v175 = *((_DWORD *)Entry - 2);
                v251 = v175;
                if ( (v175 & *(_DWORD *)(a1 + 124)) != 0 )
                {
                  v175 ^= *(_DWORD *)(a1 + 136);
                  v251 = v175;
                }
              }
              else
              {
                LOWORD(v175) = *((_WORD *)Entry - 4);
              }
              if ( v159 <= (unsigned __int16)v175 )
                break;
              Entry = (_QWORD *)*Entry;
            }
            v164 = (_QWORD *)(v59 + 16);
            v165 = (__int64 *)Entry[1];
            if ( (_QWORD *)*v165 == Entry )
            {
              *v164 = Entry;
              *(_QWORD *)(v59 + 24) = v165;
              *v165 = (__int64)v164;
              Entry[1] = v164;
            }
            else
            {
              RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v165, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v59 + 8);
            v166 = *(__int64 ***)(a1 + 312);
            if ( v166 )
            {
              v167 = *(unsigned __int16 *)(v59 + 8);
              while ( 1 )
              {
                v168 = *((unsigned int *)v166 + 2);
                if ( v167 < v168 )
                  break;
                if ( !*v166 )
                {
                  LODWORD(v167) = v168 - 1;
                  break;
                }
                v166 = (__int64 **)*v166;
              }
              LOBYTE(Entry) = 1;
              RtlpHeapAddListEntry(a1, (_DWORD)v166, (_DWORD)Entry, v59 + 16, v167, *(unsigned __int16 *)(v59 + 8));
            }
            goto LABEL_144;
          }
          if ( *(_DWORD *)(a1 + 124) )
          {
            v103 = *(_DWORD *)(v62 + 8) ^ *(_DWORD *)(a1 + 136);
            *(_DWORD *)(v62 + 8) = v103;
            if ( HIBYTE(v103) != ((unsigned __int8)v103 ^ (unsigned __int8)(BYTE1(v103) ^ BYTE2(v103))) )
              RtlpAnalyzeHeapFailure(a1, v59 + 16 * v54);
          }
          v104 = (__int64 *)(v62 + 16);
          v105 = *(_QWORD *)(v62 + 16);
          v106 = *(__int64 **)(v62 + 24);
          v218 = v106;
          v107 = *v106;
          v108 = *(_QWORD *)(v105 + 8);
          if ( *v106 != v62 + 16 || v107 != v108 )
          {
            RtlpLogHeapFailure(13, a1, (_DWORD)v104, v108, v107, 0LL);
            goto LABEL_301;
          }
          *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v62 + 8);
          v109 = *(__int64 **)(a1 + 312);
          if ( v109 )
          {
            v110 = *(unsigned __int16 *)(v62 + 8);
            while ( 1 )
            {
              v111 = *((unsigned int *)v109 + 2);
              if ( v110 < v111 )
              {
                v123 = v111 - 1;
                goto LABEL_250;
              }
              if ( !*v109 )
                break;
              v109 = (__int64 *)*v109;
            }
            v123 = v111 - 1;
            LODWORD(v110) = v111 - 1;
LABEL_250:
            v222 = *(unsigned __int16 *)(v62 + 8);
            v246 = v222;
            v124 = v110 - *((_DWORD *)v109 + 6);
            LODWORD(v256) = v124;
            v125 = 2 * v124;
            if ( !*((_DWORD *)v109 + 3) )
              v125 = v124;
            v212 = v125;
            v215 = (__int64 **)(v109[6] + 8LL * v125);
            v126 = *v215;
            --*((_DWORD *)v109 + 4);
            if ( (_DWORD)v110 == v123 )
              --*((_DWORD *)v109 + 5);
            if ( v126 == v104 )
            {
              v221 = v111;
              if ( !*v109 )
                LODWORD(v111) = v123;
              v221 = v111;
              v127 = (__int64 *)*v104;
              v214 = v127;
              if ( (unsigned int)v110 >= (unsigned int)v111 )
              {
                if ( v127 == (__int64 *)v109[4] )
                {
                  *v215 = 0LL;
                  goto LABEL_264;
                }
                *v215 = v127;
              }
              else
              {
                if ( v127 == (__int64 *)v109[4] )
                  goto LABEL_263;
                v128 = *((_DWORD *)v127 - 2);
                v242 = v128;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v128 ^= *(_DWORD *)(a1 + 136);
                  v242 = v128;
                  if ( HIBYTE(v128) != ((unsigned __int8)v128 ^ (unsigned __int8)(BYTE1(v128) ^ BYTE2(v128))) )
                  {
                    RtlpLogHeapFailure(3, a1, (_DWORD)v127 - 16, 0, 0LL, 0LL);
                    LOWORD(v128) = v242;
                    v106 = v218;
                    v127 = v214;
                  }
                }
                if ( (_DWORD)v222 != (unsigned __int16)v128 )
                {
LABEL_263:
                  *(_QWORD *)(v109[6] + 8LL * v212) = 0LL;
LABEL_264:
                  *(_DWORD *)(v109[5] + 4LL * ((unsigned int)v256 >> 5)) &= ~(1 << (v256 & 0x1F));
                  goto LABEL_265;
                }
                *(_QWORD *)(v109[6] + 8LL * v212) = v127;
              }
            }
          }
LABEL_265:
          *v106 = v105;
          *(_QWORD *)(v105 + 8) = v106;
          if ( (*(_BYTE *)(v62 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
          {
            if ( v210 )
            {
              v129 = *(_BYTE *)(v62 + 10);
              if ( (v129 & 4) != 0 )
              {
                v228 = 0LL;
                v130 = 16LL * *(unsigned __int16 *)(v62 + 8) - 32;
                v228 = v130;
                if ( (v129 & 2) != 0 && v130 > 4 )
                {
                  v130 -= 4LL;
                  v228 = v130;
                }
                v131 = RtlCompareMemoryUlong((PVOID)(v62 + 32), v130, 0xFEEEFEEE);
                if ( v131 != v130 )
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint(
                    "HEAP: Free Heap block %p modified at %p after it was freed\n",
                    (const void *)(v59 + 16 * v54),
                    (const void *)(v62 + v131 + 32));
                  RtlpBreakPointHeap();
                }
              }
            }
            *(_BYTE *)(v59 + 10) = *(_BYTE *)(v62 + 10);
            v177 = v54 + *(unsigned __int16 *)(v62 + 8);
            v223 = (_OWORD *)v177;
            if ( v177 > 0xFF00 )
            {
              RtlpInsertFreeBlock(a1, v59);
            }
            else
            {
              *(_WORD *)(v59 + 8) = v177;
              *(_WORD *)(v59 + 16 * v177 + 12) = *(_WORD *)(a1 + 140) ^ v177;
              v178 = (unsigned __int16)v177;
              if ( !v210 )
              {
                *(_BYTE *)(v59 + 10) = 0;
                *(_BYTE *)(v59 + 15) = 0;
                v179 = (_QWORD *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  v180 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v177);
                else
                  v180 = (_QWORD *)*v179;
                while ( v179 != v180 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v181 = *((_DWORD *)v180 - 2);
                    v252 = v181;
                    if ( (v181 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v181 ^= *(_DWORD *)(a1 + 136);
                      v252 = v181;
                    }
                  }
                  else
                  {
                    LOWORD(v181) = *((_WORD *)v180 - 4);
                  }
                  if ( v178 <= (unsigned __int16)v181 )
                    break;
                  v180 = (_QWORD *)*v180;
                }
                v182 = (unsigned __int64 *)(v59 + 16);
                v183 = (__int64 *)v180[1];
                if ( (_QWORD *)*v183 == v180 )
                {
                  *v182 = (unsigned __int64)v180;
                  *(_QWORD *)(v59 + 24) = v183;
                  *v183 = (__int64)v182;
                  v180[1] = v182;
                }
                else
                {
                  RtlpLogHeapFailure(13, 0, (_DWORD)v180, 0, *v183, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v59 + 8);
                v184 = *(_QWORD *)(a1 + 312);
                if ( v184 )
                {
                  v219 = 0LL;
                  v185 = *(unsigned __int16 *)(v59 + 8);
                  while ( 1 )
                  {
                    v186 = *(unsigned int *)(v184 + 8);
                    if ( v185 < v186 )
                      break;
                    if ( !*(_QWORD *)v184 )
                    {
                      v185 = (unsigned int)(v186 - 1);
                      break;
                    }
                    v184 = *(_QWORD *)v184;
                  }
                  v219 = v185;
                  goto LABEL_439;
                }
                goto LABEL_144;
              }
              *(_BYTE *)(v59 + 10) &= 0xF0u;
              *(_BYTE *)(v59 + 15) = 0;
              if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
              {
                v187 = (_DWORD *)(v59 + 32);
                v234 = v59 + 32;
                v188 = (16 * v178 - 32) >> 2;
                v230 = v188;
                if ( v188 )
                {
                  if ( ((unsigned __int8)v187 & 4) != 0 )
                  {
                    *v187 = -17891602;
                    v230 = --v188;
                    if ( v188 )
                    {
                      v187 = (_DWORD *)(v59 + 36);
                      v234 = v59 + 36;
                      goto LABEL_448;
                    }
                  }
                  else
                  {
LABEL_448:
                    memset64(v187, 0xFEEEFEEEFEEEFEEEuLL, v188 >> 1);
                    if ( (v188 & 1) != 0 )
                      v187[v188 - 1] = -17891602;
                  }
                }
                *(_BYTE *)(v59 + 10) |= 4u;
              }
              v189 = (unsigned __int64 *)(a1 + 336);
              if ( *(_QWORD *)(a1 + 312) )
                v186 = RtlpFindEntry(a1, v178);
              else
                v186 = *v189;
              while ( v189 != (unsigned __int64 *)v186 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v192 = *(_DWORD *)(v186 - 8);
                  v253 = v192;
                  if ( (v192 & *(_DWORD *)(a1 + 124)) != 0 )
                  {
                    v192 ^= *(_DWORD *)(a1 + 136);
                    v253 = v192;
                  }
                }
                else
                {
                  LOWORD(v192) = *(_WORD *)(v186 - 8);
                }
                if ( v178 <= (unsigned __int16)v192 )
                  break;
                v186 = *(_QWORD *)v186;
              }
              v182 = (unsigned __int64 *)(v59 + 16);
              v190 = *(__int64 **)(v186 + 8);
              if ( *v190 == v186 )
              {
                *v182 = v186;
                *(_QWORD *)(v59 + 24) = v190;
                *v190 = (__int64)v182;
                *(_QWORD *)(v186 + 8) = v182;
              }
              else
              {
                RtlpLogHeapFailure(13, 0, v186, 0, *v190, 0LL);
              }
              *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v59 + 8);
              v184 = *(_QWORD *)(a1 + 312);
              if ( v184 )
              {
                v216 = 0LL;
                v185 = *(unsigned __int16 *)(v59 + 8);
                while ( 1 )
                {
                  v191 = *(unsigned int *)(v184 + 8);
                  if ( v185 < v191 )
                    break;
                  v186 = *(_QWORD *)v184;
                  if ( !*(_QWORD *)v184 )
                  {
                    v185 = (unsigned int)(v191 - 1);
                    break;
                  }
                  v184 = *(_QWORD *)v184;
                }
                v216 = v185;
LABEL_439:
                LOBYTE(v186) = 1;
                RtlpHeapAddListEntry(a1, v184, v186, (_DWORD)v182, v185, *(unsigned __int16 *)(v59 + 8));
              }
LABEL_144:
              if ( *(_DWORD *)(a1 + 124) )
              {
                *(_BYTE *)(v59 + 11) = *(_BYTE *)(v59 + 8) ^ *(_BYTE *)(v59 + 9) ^ *(_BYTE *)(v59 + 10);
                *(_DWORD *)(v59 + 8) ^= *(_DWORD *)(a1 + 136);
              }
            }
            v55 = v255;
            goto LABEL_147;
          }
          LOBYTE(v176) = 1;
          RtlpDeCommitFreeBlock(a1, v59 + 16 * v54, *(unsigned __int16 *)(v62 + 8), v176);
LABEL_301:
          if ( v207 )
          {
            v145 = NtCurrentTeb();
            v145->LastStatusValue = -1073741764;
            v145->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741764);
            goto LABEL_478;
          }
          v207 = 1;
        }
      }
      ++*(_WORD *)(v34 + 8);
      v169 = v256 - v255 + 16;
      v244 = v169;
      if ( v169 >= 0x3F )
      {
        *(_QWORD *)(v34 + 16 * (v10 + 1)) = v169;
        *(_BYTE *)(v34 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v34 + 15) = v169;
      }
    }
LABEL_147:
    v204 = (_DWORD *)(v34 + 16);
    a2 = *(unsigned __int16 *)(v34 + 8);
    a3 = (unsigned __int16)a2;
    LOWORD(a3) = BYTE1(a2);
    v93 = 16 * a2;
    v235 = 16 * a2;
    if ( (*(_BYTE *)(v34 + 15) & 0x3F) == 0x3F )
    {
      v93 -= 8LL;
      v235 = v93;
    }
    if ( v205 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        LOBYTE(a2) = BYTE1(a2) ^ *(_BYTE *)(v34 + 10) ^ a2;
        *(_BYTE *)(v34 + 11) = a2;
        *(_DWORD *)(v34 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      if ( v199 )
      {
        RtlpUpdateHeapWatermarks(a1, a2, a3);
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
        v199 = 0;
      }
      if ( (v254 & 8) != 0 )
        memset_thunk_772440563353939046(v204, 0, v93 - 8);
      goto LABEL_478;
    }
    if ( (v254 & 8) != 0 )
    {
      memset_thunk_772440563353939046(v204, 0, v93 - 8);
      v171 = (_BYTE *)(a1 + 112);
    }
    else
    {
      v171 = (_BYTE *)(a1 + 112);
      if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
      {
        a3 = v34 + 16;
        v236 = v34 + 16;
        a2 = (v55 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
        v229 = a2;
        v171 = (_BYTE *)(a1 + 112);
        if ( a2 )
        {
          v172 = (_BYTE *)(a1 + 112);
          if ( ((unsigned __int8)v204 & 4) != 0 )
          {
            *v204 = -1163005939;
            v229 = --a2;
            v171 = (_BYTE *)(a1 + 112);
            if ( !a2 )
              goto LABEL_379;
            a3 = v34 + 20;
            v236 = v34 + 20;
            v172 = (_BYTE *)(a1 + 112);
          }
          memset64((void *)a3, 0xBAADF00DBAADF00DuLL, a2 >> 1);
          v171 = (_BYTE *)(a1 + 112);
          if ( (a2 & 1) != 0 )
          {
            *(_DWORD *)(a3 + 4 * a2 - 4) = -1163005939;
            v171 = v172;
          }
        }
      }
    }
LABEL_379:
    if ( (*v171 & 0x20) != 0 )
    {
      *(__m128i *)((char *)v204 + v55) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
      *(_BYTE *)(v34 + 10) |= 4u;
    }
    *(_BYTE *)(v34 + 11) = 0;
    if ( (*(_BYTE *)(v34 + 10) & 2) != 0 )
    {
      ExtraStuffPointer = (_OWORD *)RtlpGetExtraStuffPointer(v34);
      v223 = ExtraStuffPointer;
      *ExtraStuffPointer = 0LL;
      if ( (*(_DWORD *)v171 & 0x8000000) != 0 )
        *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
      if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        v174 = (_BYTE *)v34;
        *((_WORD *)v223 + 1) = RtlpUpdateTagEntry(a1, (v254 >> 18) & 0xFFF, 0LL, *(unsigned __int16 *)(v34 + 8), 0);
        goto LABEL_386;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v174 = (_BYTE *)v34;
      *(_BYTE *)(v34 + 11) = RtlpUpdateTagEntry(
                               a1,
                               (unsigned __int8)(v254 >> 18),
                               0LL,
                               *(unsigned __int16 *)(v34 + 8),
                               0);
      goto LABEL_386;
    }
    v174 = (_BYTE *)v34;
LABEL_386:
    if ( *(_DWORD *)(a1 + 124) )
    {
      v174[11] = v174[8] ^ v174[9] ^ v174[10];
      *((_DWORD *)v174 + 2) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_478;
  }
  RtlpLogHeapFailure(3, a1, v34, 0, 0LL, 0LL);
LABEL_478:
  if ( v199 )
  {
    if ( v204 && !v203 )
      RtlpUpdateHeapWatermarks(a1, a2, a3);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v195 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v195 = 2147353480LL;
  if ( *(_BYTE *)v195 && v204 )
  {
    if ( v203 )
      RtlpHeapLogRangeReserve(a1, v203 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v203 + 40));
  }
  return (char *)v204;
}
