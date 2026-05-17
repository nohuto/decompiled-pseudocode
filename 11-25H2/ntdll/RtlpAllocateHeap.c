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
  char *v20; // r12
  char **v21; // r15
  char **v22; // rax
  int v23; // edx
  __int16 v24; // di
  int v25; // edx
  __int16 v26; // di
  __int64 v27; // rdi
  unsigned int *v28; // r9
  unsigned int v29; // edx
  int v30; // ecx
  __int64 v31; // rdi
  __int64 v32; // r15
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
  char *v45; // r11
  __int64 v46; // r12
  __int64 v47; // rax
  int v48; // edx
  __int16 v49; // r15
  char v50; // r12
  int v51; // edx
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // r9
  unsigned __int64 v57; // rsi
  _QWORD *v58; // rdx
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // r13
  _QWORD *v62; // rax
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
  unsigned __int64 v89; // r8
  __int64 v90; // r13
  __int64 v91; // rdi
  bool v92; // zf
  char **k; // r13
  int v94; // edx
  __int16 v95; // di
  int v96; // edx
  unsigned __int64 v97; // rcx
  _QWORD *n; // r8
  int v99; // edx
  __int16 v100; // r12
  int v101; // edx
  _QWORD *v102; // r8
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
  __int64 **v118; // rdx
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // r8
  int v121; // r9d
  unsigned int v122; // r11d
  unsigned int v123; // eax
  _QWORD *v124; // r11
  int v125; // edx
  char v126; // al
  unsigned __int64 v127; // r12
  __int64 v128; // r13
  unsigned __int64 v129; // rdi
  __int64 v130; // rsi
  __int64 v131; // r9
  __int64 v132; // r9
  __int64 v133; // rax
  __int64 v134; // rdi
  __int64 *v135; // rsi
  __int64 v136; // rax
  __int64 v137; // r9
  __int64 **v138; // rdx
  unsigned __int64 v139; // rcx
  unsigned __int64 v140; // r9
  struct _TEB *v141; // rdi
  unsigned int v142; // ecx
  unsigned int v143; // eax
  int v144; // r9d
  unsigned __int64 v145; // rax
  signed __int64 v146; // rcx
  unsigned __int64 v147; // rtt
  unsigned __int64 v148; // rcx
  __int64 v149; // rdi
  __int64 v150; // rcx
  __int64 v151; // rcx
  __int64 v152; // rdi
  __int64 v153; // rcx
  __int64 *v154; // rax
  unsigned __int64 v155; // r14
  _DWORD *v156; // r8
  unsigned __int64 v157; // rdx
  _QWORD *v158; // rdi
  _QWORD *Entry; // r8
  _QWORD *v160; // r14
  __int64 *v161; // rax
  __int64 **v162; // rdx
  unsigned __int64 v163; // rdi
  unsigned __int64 v164; // rcx
  unsigned __int64 v165; // rcx
  struct _TEB *v166; // rdi
  _BYTE *v167; // rdi
  char *v168; // r10
  _OWORD *ExtraStuffPointer; // rsi
  _BYTE *v170; // rdi
  int v171; // eax
  __int64 v172; // r9
  unsigned __int64 v173; // r8
  unsigned __int64 v174; // r14
  _QWORD *v175; // rdi
  _QWORD *v176; // r8
  int v177; // eax
  unsigned __int64 *v178; // rdi
  __int64 *v179; // rax
  unsigned __int64 v180; // rdx
  unsigned __int64 v181; // rcx
  unsigned __int64 v182; // r8
  _DWORD *v183; // r8
  unsigned __int64 v184; // rdx
  unsigned __int64 *v185; // rdi
  __int64 *v186; // rax
  unsigned __int64 v187; // rax
  int v188; // eax
  struct _TEB *v189; // rdi
  _DWORD *SharedData; // rcx
  __int64 v191; // rcx
  __int64 v193; // r14
  unsigned __int64 v194; // r14
  char v195; // [rsp+30h] [rbp-238h]
  int j; // [rsp+38h] [rbp-230h]
  char *v197; // [rsp+38h] [rbp-230h]
  _QWORD *v198; // [rsp+38h] [rbp-230h]
  __int64 v199; // [rsp+48h] [rbp-220h]
  _DWORD *v200; // [rsp+50h] [rbp-218h]
  int v201; // [rsp+58h] [rbp-210h]
  int v202; // [rsp+5Ch] [rbp-20Ch]
  int v203; // [rsp+5Ch] [rbp-20Ch]
  char v204; // [rsp+68h] [rbp-200h]
  int m; // [rsp+70h] [rbp-1F8h]
  bool v206; // [rsp+80h] [rbp-1E8h]
  int v207; // [rsp+88h] [rbp-1E0h]
  unsigned int v208; // [rsp+88h] [rbp-1E0h]
  __int64 *v209; // [rsp+90h] [rbp-1D8h]
  _QWORD *v210; // [rsp+90h] [rbp-1D8h]
  _QWORD *v211; // [rsp+98h] [rbp-1D0h]
  unsigned __int64 v212; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v213; // [rsp+A8h] [rbp-1C0h]
  __int64 *v214; // [rsp+B0h] [rbp-1B8h]
  char *v215; // [rsp+B8h] [rbp-1B0h]
  int v216; // [rsp+C0h] [rbp-1A8h]
  int v217; // [rsp+C4h] [rbp-1A4h]
  unsigned __int64 v218; // [rsp+C8h] [rbp-1A0h]
  _OWORD *v219; // [rsp+D0h] [rbp-198h]
  unsigned int *v220; // [rsp+D8h] [rbp-190h]
  unsigned __int64 v221; // [rsp+E0h] [rbp-188h]
  unsigned __int64 v222; // [rsp+E8h] [rbp-180h]
  unsigned int *v223; // [rsp+F0h] [rbp-178h]
  unsigned __int64 v224; // [rsp+F8h] [rbp-170h]
  unsigned __int64 v225; // [rsp+100h] [rbp-168h]
  unsigned __int64 v226; // [rsp+108h] [rbp-160h]
  unsigned __int64 v227; // [rsp+110h] [rbp-158h]
  __int64 v228; // [rsp+118h] [rbp-150h]
  unsigned __int64 v229; // [rsp+120h] [rbp-148h]
  unsigned __int64 v230; // [rsp+128h] [rbp-140h]
  __int64 v231; // [rsp+130h] [rbp-138h]
  __int64 v232; // [rsp+138h] [rbp-130h]
  __int128 v233; // [rsp+140h] [rbp-128h]
  __int128 v234; // [rsp+150h] [rbp-118h]
  __int128 v235; // [rsp+160h] [rbp-108h]
  __int128 v236; // [rsp+170h] [rbp-F8h]
  int v237; // [rsp+188h] [rbp-E0h]
  int v238; // [rsp+198h] [rbp-D0h]
  unsigned __int64 v239; // [rsp+1A0h] [rbp-C8h]
  unsigned __int64 v240; // [rsp+1A8h] [rbp-C0h]
  __int64 v241; // [rsp+1B0h] [rbp-B8h]
  unsigned __int64 v242; // [rsp+1B8h] [rbp-B0h]
  int v243; // [rsp+1C8h] [rbp-A0h]
  int v244; // [rsp+1D8h] [rbp-90h]
  int v245; // [rsp+1E8h] [rbp-80h]
  int v246; // [rsp+1F8h] [rbp-70h]
  int v247; // [rsp+208h] [rbp-60h]
  int v248; // [rsp+218h] [rbp-50h]
  int v249; // [rsp+228h] [rbp-40h]
  unsigned int v250; // [rsp+278h] [rbp+10h]
  unsigned __int64 v251; // [rsp+280h] [rbp+18h]
  unsigned __int64 v252; // [rsp+288h] [rbp+20h] BYREF

  v252 = a4;
  v251 = a3;
  v250 = a2;
  v6 = a2;
  v201 = 1;
  v195 = 0;
  v200 = 0LL;
  v199 = 0LL;
  v212 = 0LL;
  v202 = 0;
  v8 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v201 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return (_DWORD *)RtlDebugAllocateHeap(Src, a2, a3);
    v193 = a3;
    if ( !a3 )
      v193 = 1LL;
    v194 = Src[33] & (Src[32] + v193);
    if ( v194 < 0x20 )
      v194 = 32LL;
    v252 = v194;
    v9 = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    v204 = v9;
    if ( (a2 & 0x3C000100) != 0 || Src[41] )
    {
      v9 = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      v204 = v9;
      v194 += 16LL;
      v252 = v194;
    }
    v10 = v194 >> 4;
  }
  else
  {
    v9 = 1;
    v204 = 1;
    v10 = a4 >> 4;
    if ( v8 < 2 )
    {
      v252 += 16LL;
      v10 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    v9 |= 8u;
    v204 = v9;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(Src[44]) )
    {
      ++*((_DWORD *)Src + 154);
    }
    else
    {
      if ( byte_1801D4988 )
      {
        v189 = NtCurrentTeb();
        v189->LastStatusValue = -1073741420;
        v189->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225876LL);
        goto LABEL_478;
      }
      v202 = 1;
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
    v195 = 1;
    if ( (Src[15] & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(Src);
    a3 = v251;
  }
  if ( v10 > *((unsigned int *)Src + 37) )
  {
    if ( (Src[14] & 2) != 0 )
    {
      v252 += 56LL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v252 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           Src[72] - Src[83],
                           (int)Src,
                           Src + 47) )
      {
        v145 = qword_1801CFF00;
        do
        {
          v146 = v145 ^ (v145 >> 12) ^ ((v145 ^ (v145 >> 12)) << 25) ^ ((v145 ^ (v145 >> 12) ^ ((v145 ^ (v145 >> 12)) << 25)) >> 27);
          v147 = v145;
          v145 = _InterlockedCompareExchange64(&qword_1801CFF00, v146, v145);
        }
        while ( v147 != v145 );
        v199 = RtlpHpAllocVirtBlockCommitFirst(
                 (__int64)Src,
                 &v252,
                 (unsigned __int64)((-3 * (_BYTE)v146) & 0xF) << 12,
                 (__int64 *)&v212);
        if ( v199 )
        {
          v148 = v252;
          *(_WORD *)(v199 + 56) = v252 - v251;
          *(_BYTE *)(v199 + 58) = v9 | 2;
          *(_QWORD *)(v199 + 32) = v148;
          *(_QWORD *)(v199 + 40) = v212;
          *(_BYTE *)(v199 + 63) = 4;
          Src[74] += v148;
          v149 = 2147353472LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v150 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v150 = 2147353472LL;
          if ( *(_BYTE *)v150 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(Src, v199, v252, 9LL);
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v151 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v151 = 2147353472LL;
          if ( *(_BYTE *)v151 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              v149 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent((_DWORD)Src, v199, v252, 16 * Src[24], *(unsigned __int8 *)v149);
          }
          v152 = 2147353482LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v153 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v153 = 2147353482LL;
          if ( *(_BYTE *)v153 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              v152 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent((_DWORD)Src, v199, v252, 16 * Src[24], *(unsigned __int8 *)v152);
          }
          if ( (Src[14] & 0x8000000) != 0 )
            *(_WORD *)(v199 + 16) = RtlLogStackBackTraceEx(1u);
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(v199 + 18) = RtlpUpdateTagEntry(
                                      (__int64)Src,
                                      (unsigned __int8)(v6 >> 18),
                                      0LL,
                                      *(_QWORD *)(v199 + 32) >> 4,
                                      1);
          if ( *((_DWORD *)Src + 31) )
          {
            *(_BYTE *)(v199 + 59) = *(_BYTE *)(v199 + 56) ^ *(_BYTE *)(v199 + 57) ^ *(_BYTE *)(v199 + 58);
            *(_DWORD *)(v199 + 56) ^= *((_DWORD *)Src + 34);
          }
          a3 = (unsigned __int64)(Src + 34);
          v154 = (__int64 *)Src[35];
          if ( (_QWORD *)*v154 == Src + 34 )
          {
            *(_QWORD *)v199 = a3;
            *(_QWORD *)(v199 + 8) = v154;
            *v154 = v199;
            Src[35] = v199;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, a3, 0, *v154, 0LL);
          }
          v200 = (_DWORD *)(v199 + 64);
        }
        else
        {
          v200 = 0LL;
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
      v214 = v13;
      v14 = *(_WORD *)v13 + 33;
      *(_WORD *)v13 = v14;
      if ( !v202 && (v14 & 0x1Fu) <= 0x10 && v14 <= 0xFF00u )
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
      v32 = (__int64)(v15 - 2);
      v197 = (char *)(v15 - 2);
      if ( *((_DWORD *)Src + 31) )
      {
        v113 = *(_DWORD *)(v32 + 8) ^ *((_DWORD *)Src + 34);
        *(_DWORD *)(v32 + 8) = v113;
        if ( HIBYTE(v113) != ((unsigned __int8)v113 ^ (unsigned __int8)(BYTE1(v113) ^ BYTE2(v113))) )
          RtlpAnalyzeHeapFailure(Src, v15 - 2);
      }
      v114 = *v15;
      v115 = *(__int64 **)(v32 + 24);
      v116 = *v115;
      v117 = *(_QWORD *)(*v15 + 8);
      if ( (__int64 *)*v115 == v15 && v116 == v117 )
      {
        Src[24] -= *(unsigned __int16 *)(v32 + 8);
        v118 = (__int64 **)Src[39];
        if ( v118 )
        {
          v119 = *(unsigned __int16 *)(v32 + 8);
          while ( 1 )
          {
            v120 = *((unsigned int *)v118 + 2);
            if ( v119 < v120 )
              break;
            if ( !*v118 )
            {
              LODWORD(v119) = v120 - 1;
              break;
            }
            v118 = (__int64 **)*v118;
          }
          LOBYTE(v120) = 1;
          RtlpHeapRemoveListEntry((_DWORD)Src, (_DWORD)v118, v120, (_DWORD)v15, v119, *(unsigned __int16 *)(v32 + 8));
        }
        *v115 = v114;
        *(_QWORD *)(v114 + 8) = v115;
        if ( (*(_BYTE *)(v32 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(Src, v15 - 2, a3) )
          goto LABEL_82;
        LOBYTE(v132) = 1;
        RtlpDeCommitFreeBlock(Src, v15 - 2, *(unsigned __int16 *)(v32 + 8), v132);
      }
      else
      {
        RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v15, v117, v116, 0LL);
      }
      v166 = NtCurrentTeb();
      v166->LastStatusValue = -1073741801;
      v166->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225495LL);
      goto LABEL_478;
    }
  }
  v215 = (char *)(Src + 42);
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
    v21 = (char **)i[4];
    v22 = (char **)v21[1];
    if ( v21 == v22 )
    {
      v20 = (char *)i[4];
    }
    else
    {
      a3 = (unsigned __int64)(v22 - 2);
      v233 = 0LL;
      v23 = *((_DWORD *)v22 - 2);
      DWORD2(v233) = v23;
      if ( *((_DWORD *)Src + 31) )
      {
        v23 ^= *((_DWORD *)Src + 34);
        v24 = v23;
        DWORD2(v233) = v23;
        if ( HIBYTE(v23) != ((unsigned __int8)v23 ^ (unsigned __int8)(BYTE1(v23) ^ BYTE2(v23))) )
        {
          RtlpLogHeapFailure(3, (_DWORD)Src, a3, 0, 0LL, 0LL);
          LOWORD(v23) = v24;
        }
      }
      if ( (int)(v10 - (unsigned __int16)v23) > 0 )
      {
        v20 = (char *)v21;
      }
      else
      {
        a3 = (unsigned __int64)(*v21 - 16);
        v234 = 0LL;
        v25 = *(_DWORD *)(a3 + 8);
        DWORD2(v234) = v25;
        if ( *((_DWORD *)Src + 31) )
        {
          v25 ^= *((_DWORD *)Src + 34);
          v26 = v25;
          DWORD2(v234) = v25;
          if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(BYTE1(v25) ^ BYTE2(v25))) )
          {
            RtlpLogHeapFailure(3, (_DWORD)Src, a3, 0, 0LL, 0LL);
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
          for ( k = *(char ***)(i[6] + 8 * v19); v21 != k; k = (char **)*k )
          {
            a3 = (unsigned __int64)(k - 2);
            v235 = 0LL;
            v94 = *((_DWORD *)k - 2);
            DWORD2(v235) = v94;
            if ( *((_DWORD *)Src + 31) )
            {
              v94 ^= *((_DWORD *)Src + 34);
              v95 = v94;
              DWORD2(v235) = v94;
              if ( HIBYTE(v94) != ((unsigned __int8)v94 ^ (unsigned __int8)(BYTE1(v94) ^ BYTE2(v94))) )
              {
                RtlpLogHeapFailure(3, (_DWORD)Src, a3, 0, 0LL, 0LL);
                LOWORD(v94) = v95;
              }
            }
            if ( (int)(v10 - (unsigned __int16)v94) <= 0 )
            {
              v20 = (char *)k;
              break;
            }
          }
        }
        else
        {
          v220 = 0LL;
          v27 = (unsigned int)v19 >> 5;
          a3 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
          v28 = (unsigned int *)(i[5] + 4 * v27);
          v220 = v28;
          v29 = *v28 & (-1 << (v19 & 0x1F));
          while ( !v29 )
          {
            if ( (unsigned int)v27 > (unsigned int)a3 )
            {
              v20 = 0LL;
              goto LABEL_48;
            }
            v220 = ++v28;
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
          v20 = *(char **)(i[6] + 8 * v31);
        }
      }
    }
LABEL_48:
    if ( v20 )
      break;
    i = (__int64 *)*i;
    v18 = *((_DWORD *)i + 6);
  }
  if ( v215 == v20 )
  {
LABEL_292:
    v133 = RtlpExtendHeap(Src, v252, a3);
    v32 = v133;
    v197 = (char *)v133;
    if ( v133 )
    {
      v36 = (__int64 *)(v133 + 16);
      v134 = *(_QWORD *)(v133 + 16);
      v135 = *(__int64 **)(v133 + 24);
      v136 = *v135;
      v137 = *(_QWORD *)(v134 + 8);
      if ( (__int64 *)*v135 != v36 || v136 != v137 )
      {
        RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v36, v137, v136, 0LL);
        goto LABEL_478;
      }
      Src[24] -= *(unsigned __int16 *)(v32 + 8);
      v138 = (__int64 **)Src[39];
      if ( v138 )
      {
        v221 = 0LL;
        v139 = *(unsigned __int16 *)(v32 + 8);
        while ( 1 )
        {
          v140 = *((unsigned int *)v138 + 2);
          if ( v139 < v140 )
            break;
          if ( !*v138 )
          {
            v139 = (unsigned int)(v140 - 1);
            break;
          }
          v138 = (__int64 **)*v138;
        }
        v221 = v139;
        v144 = (int)v36;
        LOBYTE(v36) = 1;
        RtlpHeapRemoveListEntry((_DWORD)Src, (_DWORD)v138, (_DWORD)v36, v144, v139, *(unsigned __int16 *)(v32 + 8));
      }
      *v135 = v134;
      *(_QWORD *)(v134 + 8) = v135;
      goto LABEL_80;
    }
LABEL_365:
    v200 = 0LL;
    goto LABEL_478;
  }
  v32 = (__int64)(v20 - 16);
  v197 = v20 - 16;
  if ( *((_DWORD *)Src + 31) )
  {
    v33 = *(_DWORD *)(v32 + 8) ^ *((_DWORD *)Src + 34);
    *(_DWORD *)(v32 + 8) = v33;
    if ( HIBYTE(v33) != ((unsigned __int8)v33 ^ (unsigned __int8)(BYTE1(v33) ^ BYTE2(v33))) )
      RtlpAnalyzeHeapFailure(Src, v20 - 16);
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
  v209 = v36;
  v37 = *v36;
  v38 = *(_QWORD *)(*(_QWORD *)v20 + 8LL);
  if ( (char *)*v36 != v20 || v37 != v38 )
  {
    RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v20, v38, v37, 0LL);
    goto LABEL_478;
  }
  Src[24] -= v34;
  v39 = (__int64 *)Src[39];
  if ( !v39 )
    goto LABEL_79;
  v213 = 0LL;
  v40 = *(unsigned __int16 *)(v32 + 8);
  while ( 1 )
  {
    v41 = *((unsigned int *)v39 + 2);
    if ( v40 < v41 )
    {
      v213 = *(unsigned __int16 *)(v32 + 8);
      v42 = v41 - 1;
      goto LABEL_63;
    }
    if ( !*v39 )
      break;
    v39 = (__int64 *)*v39;
  }
  v42 = v41 - 1;
  v213 = (unsigned int)(v41 - 1);
  LODWORD(v40) = v41 - 1;
LABEL_63:
  v228 = *(unsigned __int16 *)(v32 + 8);
  v43 = v40 - *((_DWORD *)v39 + 6);
  v44 = 2 * v43;
  if ( !*((_DWORD *)v39 + 3) )
    v44 = v43;
  v207 = v44;
  v213 = v39[6] + 8 * v44;
  v45 = *(char **)v213;
  --*((_DWORD *)v39 + 4);
  if ( (_DWORD)v40 == v42 )
    --*((_DWORD *)v39 + 5);
  if ( v45 != v20 )
    goto LABEL_79;
  v216 = v41;
  if ( !*v39 )
    LODWORD(v41) = v42;
  v216 = v41;
  v46 = *(_QWORD *)v20;
  v47 = v39[4];
  if ( (unsigned int)v40 >= (unsigned int)v41 )
  {
    if ( v46 != v47 )
    {
      *(_QWORD *)v213 = v46;
      goto LABEL_79;
    }
    *(_QWORD *)v213 = 0LL;
  }
  else
  {
    if ( v46 != v47 )
    {
      v236 = 0LL;
      v48 = *(_DWORD *)(v46 - 8);
      DWORD2(v236) = v48;
      if ( *((_DWORD *)Src + 31) )
      {
        v48 ^= *((_DWORD *)Src + 34);
        v49 = v48;
        DWORD2(v236) = v48;
        if ( HIBYTE(v48) != ((unsigned __int8)v48 ^ (unsigned __int8)(BYTE1(v48) ^ BYTE2(v48))) )
        {
          RtlpLogHeapFailure(3, (_DWORD)Src, v46 - 16, 0, 0LL, 0LL);
          LOWORD(v48) = v49;
          v36 = v209;
          LODWORD(v44) = v207;
        }
      }
      if ( (_DWORD)v228 == (unsigned __int16)v48 )
      {
        *(_QWORD *)(v39[6] + 8LL * (unsigned int)v44) = v46;
        v32 = (__int64)v197;
        goto LABEL_79;
      }
      v32 = (__int64)v197;
    }
    *(_QWORD *)(v39[6] + 8LL * (unsigned int)v44) = 0LL;
  }
  *(_DWORD *)(v39[5] + 4LL * (v43 >> 5)) &= ~(1 << (v43 & 0x1F));
LABEL_79:
  *v36 = v35;
  *(_QWORD *)(v35 + 8) = v36;
LABEL_80:
  if ( (*(_BYTE *)(v32 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v32, v36) )
  {
    LOBYTE(v131) = 1;
    RtlpDeCommitFreeBlock(Src, v32, *(unsigned __int16 *)(v32 + 8), v131);
    goto LABEL_478;
  }
  v9 = v204;
LABEL_82:
  v50 = *(_BYTE *)(v32 + 10);
  v51 = v201;
  if ( !v201 && (v50 & 4) != 0 )
  {
    v222 = 0LL;
    v129 = 16LL * *(unsigned __int16 *)(v32 + 8) - 32;
    v222 = v129;
    if ( (v50 & 2) != 0 && v129 > 4 )
    {
      v129 -= 4LL;
      v222 = v129;
    }
    v130 = RtlCompareMemoryUlong(v32 + 32, v129, 4277075694LL);
    if ( v130 != v129 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v32 = (__int64)v197;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v197, &v197[v130 + 32]);
      RtlpBreakPointHeap();
    }
    v51 = 0;
  }
  if ( (*(_BYTE *)(v32 + 10) & 1) == 0 )
  {
    *(_BYTE *)(v32 + 10) = v9;
    v52 = *(unsigned __int16 *)(v32 + 8) - v10;
    *(_WORD *)(v32 + 8) = v10;
    v53 = v251;
    v54 = v252 - v251;
    v239 = v252 - v251;
    if ( v252 - v251 >= 0x3F )
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
        v206 = v51 == 0;
        v55 = *(unsigned __int8 *)(v32 + 14);
        if ( (_BYTE)v55 )
          v56 = (_QWORD *)((v32 & 0xFFFFFFFFFFFF0000uLL) - (v55 << 16) + 0x10000);
        else
          v56 = Src;
        v219 = (_OWORD *)v52;
        v57 = v32 + 16 * v10;
        v203 = 0;
        *(_BYTE *)(v57 + 10) = v50;
        *(_BYTE *)(v57 + 15) = 0;
        *(_WORD *)(v57 + 12) = *((_WORD *)Src + 70) ^ v10;
        v218 = 0LL;
        v58 = (_QWORD *)v56[5];
        if ( v58 == v56 )
        {
          LOBYTE(v59) = 0;
        }
        else
        {
          v59 = ((v57 - (unsigned __int64)v56) >> 16) + 1;
          v218 = v59;
          if ( v59 >= 0xFE )
            RtlpLogHeapFailure(3, (_DWORD)v58, v57, (_DWORD)v56, 0LL, 0LL);
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
            if ( !v206 )
            {
              v61 = (unsigned __int16)v52;
              v241 = (unsigned __int16)v52;
              *(_BYTE *)(v57 + 10) = 0;
              *(_BYTE *)(v57 + 15) = 0;
              v62 = Src + 42;
              v63 = (__int64 *)Src[39];
              if ( !v63 )
              {
                v66 = (_QWORD *)*v62;
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
                LODWORD(v252) = v65 - *((_DWORD *)v63 + 6);
                v66 = 0LL;
                v67 = (_QWORD *)v63[4];
                v198 = v67;
                v68 = (_QWORD *)v67[1];
                if ( v67 == v68 )
                {
                  v66 = (_QWORD *)v63[4];
                }
                else
                {
                  v69 = *((_DWORD *)v68 - 2);
                  v243 = v69;
                  if ( *((_DWORD *)Src + 31) )
                  {
                    v69 ^= *((_DWORD *)Src + 34);
                    v70 = v69;
                    v243 = v69;
                    if ( HIBYTE(v69) != ((unsigned __int8)v69 ^ (unsigned __int8)(BYTE1(v69) ^ BYTE2(v69))) )
                    {
                      RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)v68 - 16, 0, 0LL, 0LL);
                      LOWORD(v69) = v70;
                      v67 = v198;
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
                    v244 = v72;
                    if ( *((_DWORD *)Src + 31) )
                    {
                      v72 ^= *((_DWORD *)Src + 34);
                      v73 = v72;
                      v244 = v72;
                      if ( HIBYTE(v72) != ((unsigned __int8)v72 ^ (unsigned __int8)(BYTE1(v72) ^ BYTE2(v72))) )
                      {
                        RtlpLogHeapFailure(3, (_DWORD)Src, v71, 0, 0LL, 0LL);
                        LOWORD(v72) = v73;
                        v67 = v198;
                      }
                    }
                    if ( (int)(v61 - (unsigned __int16)v72) <= 0 )
                    {
                      v66 = (_QWORD *)*v67;
                    }
                    else if ( !*v63 && m == *((_DWORD *)v63 + 2) - 1 )
                    {
                      v97 = *((_DWORD *)v63 + 3) ? (unsigned int)(2 * v252) : (unsigned int)v252;
                      for ( n = *(_QWORD **)(v63[6] + 8 * v97); ; n = (_QWORD *)*n )
                      {
                        v252 = (unsigned __int64)n;
                        if ( v67 == n )
                          break;
                        v99 = *((_DWORD *)n - 2);
                        v245 = v99;
                        if ( *((_DWORD *)Src + 31) )
                        {
                          v99 ^= *((_DWORD *)Src + 34);
                          v100 = v99;
                          v245 = v99;
                          if ( HIBYTE(v99) != ((unsigned __int8)v99 ^ (unsigned __int8)(BYTE1(v99) ^ BYTE2(v99))) )
                          {
                            RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)n - 16, 0, 0LL, 0LL);
                            LOWORD(v99) = v100;
                            n = (_QWORD *)v252;
                            v67 = v198;
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
                      v223 = 0LL;
                      v74 = (unsigned int)v252 >> 5;
                      v75 = ((unsigned int)(*((_DWORD *)v63 + 2) - *((_DWORD *)v63 + 6)) >> 5) - 1;
                      v76 = (unsigned int *)(v63[5] + 4 * v74);
                      v223 = v76;
                      v77 = *v76 & (-1 << (v252 & 0x1F));
                      while ( !v77 )
                      {
                        if ( (unsigned int)v74 > v75 )
                        {
                          v66 = 0LL;
                          goto LABEL_121;
                        }
                        v223 = ++v76;
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
                v62 = Src + 42;
LABEL_123:
                if ( v62 == v66 )
                  break;
                if ( *((_DWORD *)Src + 31) )
                {
                  v80 = *((_DWORD *)v66 - 2);
                  v246 = v80;
                  if ( (v80 & *((_DWORD *)Src + 31)) != 0 )
                  {
                    v80 ^= *((_DWORD *)Src + 34);
                    v246 = v80;
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
                RtlpLogHeapFailure(13, 0, (_DWORD)v66, 0, *v82, 0LL);
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
                v214 = (__int64 *)*(unsigned __int16 *)(v57 + 8);
                v88 = v84 - *((_DWORD *)v83 + 6);
                v89 = 2 * v88;
                if ( !*((_DWORD *)v83 + 3) )
                  v89 = v88;
                v252 = v89;
                ++*((_DWORD *)v83 + 4);
                v90 = *(_QWORD *)(v83[6] + 8 * v89);
                if ( (_DWORD)v84 == v86 )
                  ++*((_DWORD *)v83 + 5);
                if ( !v90 )
                  goto LABEL_141;
                v96 = *(_DWORD *)(v90 - 8);
                v237 = v96;
                if ( *((_DWORD *)Src + 31) )
                {
                  v96 ^= *((_DWORD *)Src + 34);
                  v237 = v96;
                  if ( HIBYTE(v96) != ((unsigned __int8)v96 ^ (unsigned __int8)(BYTE1(v96) ^ BYTE2(v96))) )
                  {
                    RtlpLogHeapFailure(3, (_DWORD)Src, v90 - 16, 0, 0LL, 0LL);
                    LOWORD(v96) = v237;
                    LODWORD(v89) = v252;
                    v87 = (int)v214;
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
            v155 = (unsigned __int16)v52;
            *(_BYTE *)(v57 + 10) &= 0xF0u;
            *(_BYTE *)(v57 + 15) = 0;
            if ( (Src[14] & 0x40) != 0 )
            {
              v156 = (_DWORD *)(v57 + 32);
              v229 = v57 + 32;
              v157 = (16 * (unsigned __int64)(unsigned __int16)v52 - 32) >> 2;
              v227 = v157;
              if ( v157 )
              {
                if ( ((unsigned __int8)v156 & 4) != 0 )
                {
                  *v156 = -17891602;
                  v227 = --v157;
                  if ( v157 )
                  {
                    v156 = (_DWORD *)(v57 + 36);
                    v229 = v57 + 36;
                    goto LABEL_344;
                  }
                }
                else
                {
LABEL_344:
                  memset64(v156, 0xFEEEFEEEFEEEFEEEuLL, v157 >> 1);
                  if ( (v157 & 1) != 0 )
                    v156[v157 - 1] = -17891602;
                }
              }
              *(_BYTE *)(v57 + 10) |= 4u;
            }
            v158 = Src + 42;
            if ( Src[39] )
              Entry = (_QWORD *)RtlpFindEntry(Src, v155);
            else
              Entry = (_QWORD *)*v158;
            while ( v158 != Entry )
            {
              if ( *((_DWORD *)Src + 31) )
              {
                v171 = *((_DWORD *)Entry - 2);
                v247 = v171;
                if ( (v171 & *((_DWORD *)Src + 31)) != 0 )
                {
                  v171 ^= *((_DWORD *)Src + 34);
                  v247 = v171;
                }
              }
              else
              {
                LOWORD(v171) = *((_WORD *)Entry - 4);
              }
              if ( v155 <= (unsigned __int16)v171 )
                break;
              Entry = (_QWORD *)*Entry;
            }
            v160 = (_QWORD *)(v57 + 16);
            v161 = (__int64 *)Entry[1];
            if ( (_QWORD *)*v161 == Entry )
            {
              *v160 = Entry;
              *(_QWORD *)(v57 + 24) = v161;
              *v161 = (__int64)v160;
              Entry[1] = v160;
            }
            else
            {
              RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v161, 0LL);
            }
            Src[24] += *(unsigned __int16 *)(v57 + 8);
            v162 = (__int64 **)Src[39];
            if ( v162 )
            {
              v163 = *(unsigned __int16 *)(v57 + 8);
              while ( 1 )
              {
                v164 = *((unsigned int *)v162 + 2);
                if ( v163 < v164 )
                  break;
                if ( !*v162 )
                {
                  LODWORD(v163) = v164 - 1;
                  break;
                }
                v162 = (__int64 **)*v162;
              }
              LOBYTE(Entry) = 1;
              RtlpHeapAddListEntry(
                (_DWORD)Src,
                (_DWORD)v162,
                (_DWORD)Entry,
                v57 + 16,
                v163,
                *(unsigned __int16 *)(v57 + 8));
            }
            goto LABEL_144;
          }
          if ( *((_DWORD *)Src + 31) )
          {
            v101 = *(_DWORD *)(v60 + 8) ^ *((_DWORD *)Src + 34);
            *(_DWORD *)(v60 + 8) = v101;
            if ( HIBYTE(v101) != ((unsigned __int8)v101 ^ (unsigned __int8)(BYTE1(v101) ^ BYTE2(v101))) )
              RtlpAnalyzeHeapFailure(Src, v57 + 16 * v52);
          }
          v102 = (_QWORD *)(v60 + 16);
          v103 = *(_QWORD *)(v60 + 16);
          v104 = *(__int64 **)(v60 + 24);
          v214 = v104;
          v105 = *v104;
          v106 = *(_QWORD *)(v103 + 8);
          if ( *v104 != v60 + 16 || v105 != v106 )
          {
            RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v102, v106, v105, 0LL);
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
            v218 = *(unsigned __int16 *)(v60 + 8);
            v242 = v218;
            v122 = v108 - *((_DWORD *)v107 + 6);
            LODWORD(v252) = v122;
            v123 = 2 * v122;
            if ( !*((_DWORD *)v107 + 3) )
              v123 = v122;
            v208 = v123;
            v211 = (_QWORD *)(v107[6] + 8LL * v123);
            v124 = (_QWORD *)*v211;
            --*((_DWORD *)v107 + 4);
            if ( (_DWORD)v108 == v121 )
              --*((_DWORD *)v107 + 5);
            if ( v124 == v102 )
            {
              v217 = v109;
              if ( !*v107 )
                LODWORD(v109) = v121;
              v217 = v109;
              v102 = (_QWORD *)*v102;
              v210 = v102;
              if ( (unsigned int)v108 >= (unsigned int)v109 )
              {
                if ( v102 == (_QWORD *)v107[4] )
                {
                  *v211 = 0LL;
                  goto LABEL_264;
                }
                *v211 = v102;
              }
              else
              {
                if ( v102 == (_QWORD *)v107[4] )
                  goto LABEL_263;
                v125 = *((_DWORD *)v102 - 2);
                v238 = v125;
                if ( *((_DWORD *)Src + 31) )
                {
                  v125 ^= *((_DWORD *)Src + 34);
                  v238 = v125;
                  if ( HIBYTE(v125) != ((unsigned __int8)v125 ^ (unsigned __int8)(BYTE1(v125) ^ BYTE2(v125))) )
                  {
                    RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)v102 - 16, 0, 0LL, 0LL);
                    LOWORD(v125) = v238;
                    v104 = v214;
                    v102 = v210;
                  }
                }
                if ( (_DWORD)v218 != (unsigned __int16)v125 )
                {
LABEL_263:
                  *(_QWORD *)(v107[6] + 8LL * v208) = 0LL;
LABEL_264:
                  *(_DWORD *)(v107[5] + 4LL * ((unsigned int)v252 >> 5)) &= ~(1 << (v252 & 0x1F));
                  goto LABEL_265;
                }
                *(_QWORD *)(v107[6] + 8LL * v208) = v102;
              }
            }
          }
LABEL_265:
          *v104 = v103;
          *(_QWORD *)(v103 + 8) = v104;
          if ( (*(_BYTE *)(v60 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(Src, v57 + 16 * v52, v102) )
          {
            if ( v206 )
            {
              v126 = *(_BYTE *)(v60 + 10);
              if ( (v126 & 4) != 0 )
              {
                v224 = 0LL;
                v127 = 16LL * *(unsigned __int16 *)(v60 + 8) - 32;
                v224 = v127;
                if ( (v126 & 2) != 0 && v127 > 4 )
                {
                  v127 -= 4LL;
                  v224 = v127;
                }
                v128 = RtlCompareMemoryUlong(v60 + 32, v127, 4277075694LL);
                if ( v128 != v127 )
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint(
                    "HEAP: Free Heap block %p modified at %p after it was freed\n",
                    (const void *)(v57 + 16 * v52),
                    (const void *)(v60 + v128 + 32));
                  RtlpBreakPointHeap();
                }
              }
            }
            *(_BYTE *)(v57 + 10) = *(_BYTE *)(v60 + 10);
            v173 = v52 + *(unsigned __int16 *)(v60 + 8);
            v219 = (_OWORD *)v173;
            if ( v173 > 0xFF00 )
            {
              RtlpInsertFreeBlock(Src, v57);
            }
            else
            {
              *(_WORD *)(v57 + 8) = v173;
              *(_WORD *)(v57 + 16 * v173 + 12) = *((_WORD *)Src + 70) ^ v173;
              v174 = (unsigned __int16)v173;
              if ( !v206 )
              {
                *(_BYTE *)(v57 + 10) = 0;
                *(_BYTE *)(v57 + 15) = 0;
                v175 = Src + 42;
                if ( Src[39] )
                  v176 = (_QWORD *)RtlpFindEntry(Src, (unsigned __int16)v173);
                else
                  v176 = (_QWORD *)*v175;
                while ( v175 != v176 )
                {
                  if ( *((_DWORD *)Src + 31) )
                  {
                    v177 = *((_DWORD *)v176 - 2);
                    v248 = v177;
                    if ( (v177 & *((_DWORD *)Src + 31)) != 0 )
                    {
                      v177 ^= *((_DWORD *)Src + 34);
                      v248 = v177;
                    }
                  }
                  else
                  {
                    LOWORD(v177) = *((_WORD *)v176 - 4);
                  }
                  if ( v174 <= (unsigned __int16)v177 )
                    break;
                  v176 = (_QWORD *)*v176;
                }
                v178 = (unsigned __int64 *)(v57 + 16);
                v179 = (__int64 *)v176[1];
                if ( (_QWORD *)*v179 == v176 )
                {
                  *v178 = (unsigned __int64)v176;
                  *(_QWORD *)(v57 + 24) = v179;
                  *v179 = (__int64)v178;
                  v176[1] = v178;
                }
                else
                {
                  RtlpLogHeapFailure(13, 0, (_DWORD)v176, 0, *v179, 0LL);
                }
                Src[24] += *(unsigned __int16 *)(v57 + 8);
                v180 = Src[39];
                if ( v180 )
                {
                  v215 = 0LL;
                  v181 = *(unsigned __int16 *)(v57 + 8);
                  while ( 1 )
                  {
                    v182 = *(unsigned int *)(v180 + 8);
                    if ( v181 < v182 )
                      break;
                    if ( !*(_QWORD *)v180 )
                    {
                      v181 = (unsigned int)(v182 - 1);
                      break;
                    }
                    v180 = *(_QWORD *)v180;
                  }
                  v215 = (char *)v181;
                  goto LABEL_439;
                }
                goto LABEL_144;
              }
              *(_BYTE *)(v57 + 10) &= 0xF0u;
              *(_BYTE *)(v57 + 15) = 0;
              if ( (Src[14] & 0x40) != 0 )
              {
                v183 = (_DWORD *)(v57 + 32);
                v230 = v57 + 32;
                v184 = (16 * v174 - 32) >> 2;
                v226 = v184;
                if ( v184 )
                {
                  if ( ((unsigned __int8)v183 & 4) != 0 )
                  {
                    *v183 = -17891602;
                    v226 = --v184;
                    if ( v184 )
                    {
                      v183 = (_DWORD *)(v57 + 36);
                      v230 = v57 + 36;
                      goto LABEL_448;
                    }
                  }
                  else
                  {
LABEL_448:
                    memset64(v183, 0xFEEEFEEEFEEEFEEEuLL, v184 >> 1);
                    if ( (v184 & 1) != 0 )
                      v183[v184 - 1] = -17891602;
                  }
                }
                *(_BYTE *)(v57 + 10) |= 4u;
              }
              v185 = Src + 42;
              if ( Src[39] )
                v182 = RtlpFindEntry(Src, v174);
              else
                v182 = *v185;
              while ( v185 != (unsigned __int64 *)v182 )
              {
                if ( *((_DWORD *)Src + 31) )
                {
                  v188 = *(_DWORD *)(v182 - 8);
                  v249 = v188;
                  if ( (v188 & *((_DWORD *)Src + 31)) != 0 )
                  {
                    v188 ^= *((_DWORD *)Src + 34);
                    v249 = v188;
                  }
                }
                else
                {
                  LOWORD(v188) = *(_WORD *)(v182 - 8);
                }
                if ( v174 <= (unsigned __int16)v188 )
                  break;
                v182 = *(_QWORD *)v182;
              }
              v178 = (unsigned __int64 *)(v57 + 16);
              v186 = *(__int64 **)(v182 + 8);
              if ( *v186 == v182 )
              {
                *v178 = v182;
                *(_QWORD *)(v57 + 24) = v186;
                *v186 = (__int64)v178;
                *(_QWORD *)(v182 + 8) = v178;
              }
              else
              {
                RtlpLogHeapFailure(13, 0, v182, 0, *v186, 0LL);
              }
              Src[24] += *(unsigned __int16 *)(v57 + 8);
              v180 = Src[39];
              if ( v180 )
              {
                v212 = 0LL;
                v181 = *(unsigned __int16 *)(v57 + 8);
                while ( 1 )
                {
                  v187 = *(unsigned int *)(v180 + 8);
                  if ( v181 < v187 )
                    break;
                  v182 = *(_QWORD *)v180;
                  if ( !*(_QWORD *)v180 )
                  {
                    v181 = (unsigned int)(v187 - 1);
                    break;
                  }
                  v180 = *(_QWORD *)v180;
                }
                v212 = v181;
LABEL_439:
                LOBYTE(v182) = 1;
                RtlpHeapAddListEntry((_DWORD)Src, v180, v182, (_DWORD)v178, v181, *(unsigned __int16 *)(v57 + 8));
              }
LABEL_144:
              if ( *((_DWORD *)Src + 31) )
              {
                *(_BYTE *)(v57 + 11) = *(_BYTE *)(v57 + 8) ^ *(_BYTE *)(v57 + 9) ^ *(_BYTE *)(v57 + 10);
                *(_DWORD *)(v57 + 8) ^= *((_DWORD *)Src + 34);
              }
            }
            v53 = v251;
            goto LABEL_147;
          }
          LOBYTE(v172) = 1;
          RtlpDeCommitFreeBlock(Src, v57 + 16 * v52, *(unsigned __int16 *)(v60 + 8), v172);
LABEL_301:
          if ( v203 )
          {
            v141 = NtCurrentTeb();
            v141->LastStatusValue = -1073741764;
            v141->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225532LL);
            goto LABEL_478;
          }
          v203 = 1;
        }
      }
      ++*(_WORD *)(v32 + 8);
      v165 = v252 - v251 + 16;
      v240 = v165;
      if ( v165 >= 0x3F )
      {
        *(_QWORD *)(v32 + 16 * (v10 + 1)) = v165;
        *(_BYTE *)(v32 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v32 + 15) = v165;
      }
    }
LABEL_147:
    v200 = (_DWORD *)(v32 + 16);
    a2 = *(unsigned __int16 *)(v32 + 8);
    a3 = (unsigned __int16)a2;
    LOWORD(a3) = BYTE1(a2);
    v91 = 16 * a2;
    v231 = 16 * a2;
    if ( (*(_BYTE *)(v32 + 15) & 0x3F) == 0x3F )
    {
      v91 -= 8LL;
      v231 = v91;
    }
    if ( v201 )
    {
      if ( *((_DWORD *)Src + 31) )
      {
        LOBYTE(a2) = BYTE1(a2) ^ *(_BYTE *)(v32 + 10) ^ a2;
        *(_BYTE *)(v32 + 11) = a2;
        *(_DWORD *)(v32 + 8) ^= *((_DWORD *)Src + 34);
      }
      if ( v195 )
      {
        RtlpUpdateHeapWatermarks(Src, a2, a3);
        RtlLeaveCriticalSection(Src[44]);
        v195 = 0;
      }
      if ( (v250 & 8) != 0 )
        memset_thunk_772440563353939046(v200, 0, v91 - 8);
      goto LABEL_478;
    }
    if ( (v250 & 8) != 0 )
    {
      memset_thunk_772440563353939046(v200, 0, v91 - 8);
      v167 = Src + 14;
    }
    else
    {
      v167 = Src + 14;
      if ( (Src[14] & 0x40) != 0 )
      {
        a3 = v32 + 16;
        v232 = v32 + 16;
        a2 = (v53 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
        v225 = a2;
        v167 = Src + 14;
        if ( a2 )
        {
          v168 = (char *)(Src + 14);
          if ( ((unsigned __int8)v200 & 4) != 0 )
          {
            *v200 = -1163005939;
            v225 = --a2;
            v167 = Src + 14;
            if ( !a2 )
              goto LABEL_379;
            a3 = v32 + 20;
            v232 = v32 + 20;
            v168 = (char *)(Src + 14);
          }
          memset64((void *)a3, 0xBAADF00DBAADF00DuLL, a2 >> 1);
          v167 = Src + 14;
          if ( (a2 & 1) != 0 )
          {
            *(_DWORD *)(a3 + 4 * a2 - 4) = -1163005939;
            v167 = v168;
          }
        }
      }
    }
LABEL_379:
    if ( (*v167 & 0x20) != 0 )
    {
      *(__m128i *)((char *)v200 + v53) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
      *(_BYTE *)(v32 + 10) |= 4u;
    }
    *(_BYTE *)(v32 + 11) = 0;
    if ( (*(_BYTE *)(v32 + 10) & 2) != 0 )
    {
      ExtraStuffPointer = (_OWORD *)RtlpGetExtraStuffPointer(v32);
      v219 = ExtraStuffPointer;
      *ExtraStuffPointer = 0LL;
      if ( (*(_DWORD *)v167 & 0x8000000) != 0 )
        *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
      if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        v170 = (_BYTE *)v32;
        *((_WORD *)v219 + 1) = RtlpUpdateTagEntry(
                                 (__int64)Src,
                                 (v250 >> 18) & 0xFFF,
                                 0LL,
                                 *(unsigned __int16 *)(v32 + 8),
                                 0);
        goto LABEL_386;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v170 = (_BYTE *)v32;
      *(_BYTE *)(v32 + 11) = RtlpUpdateTagEntry(
                               (__int64)Src,
                               (unsigned __int8)(v250 >> 18),
                               0LL,
                               *(unsigned __int16 *)(v32 + 8),
                               0);
      goto LABEL_386;
    }
    v170 = (_BYTE *)v32;
LABEL_386:
    if ( *((_DWORD *)Src + 31) )
    {
      v170[11] = v170[8] ^ v170[9] ^ v170[10];
      *((_DWORD *)v170 + 2) ^= *((_DWORD *)Src + 34);
    }
    goto LABEL_478;
  }
  RtlpLogHeapFailure(3, (_DWORD)Src, v32, 0, 0LL, 0LL);
LABEL_478:
  if ( v195 )
  {
    if ( v200 && !v199 )
      RtlpUpdateHeapWatermarks(Src, a2, a3);
    RtlLeaveCriticalSection(Src[44]);
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v191 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v191 = 2147353480LL;
  if ( *(_BYTE *)v191 && v200 )
  {
    if ( v199 )
      RtlpHeapLogRangeReserve(Src, v199 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v199 + 40));
  }
  return v200;
}
