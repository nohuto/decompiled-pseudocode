/*
 * XREFs of RtlpAllocateHeap @ 0x1801159A0
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x180054DA0 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x18000BFB0 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpFindEntry @ 0x18000C880 (RtlpFindEntry.c)
 *     RtlpExtendHeap @ 0x18000CB60 (RtlpExtendHeap.c)
 *     RtlpCreateSplitBlock @ 0x18000DD00 (RtlpCreateSplitBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18000F610 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180010480 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlDebugAllocateHeap @ 0x18001F7A4 (RtlDebugAllocateHeap.c)
 *     RtlpGetExtraStuffPointer @ 0x18001FE30 (RtlpGetExtraStuffPointer.c)
 *     RtlpLogHeapCommit @ 0x1800235BC (RtlpLogHeapCommit.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800287E4 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlStdLogStackTrace @ 0x180030E50 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1800310D0 (RtlStdReleaseStackTrace.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlTryEnterCriticalSection @ 0x1800A09E0 (RtlTryEnterCriticalSection.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800D7250 (RtlpUpdateHeapWatermarks.c)
 *     RtlpGetLFHContext @ 0x1800E8554 (RtlpGetLFHContext.c)
 *     RtlpUpdateTagEntry @ 0x1800EE4DC (RtlpUpdateTagEntry.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F2038 (RtlpLogHeapExtendEvent.c)
 *     RtlpHeapLogRangeReserve @ 0x180111834 (RtlpHeapLogRangeReserve.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x180164350 (RtlCompareMemoryUlong.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall RtlpAllocateHeap(
        _QWORD *BaseAddress,
        unsigned int a2,
        SIZE_T a3,
        unsigned __int64 a4,
        __int64 **a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // rsi
  unsigned int v7; // r12d
  unsigned __int64 v9; // r15
  char v10; // cl
  unsigned __int64 v11; // r13
  __int64 v13; // r13
  unsigned __int64 v14; // r13
  char v15; // al
  unsigned int v16; // ecx
  unsigned int v17; // eax
  struct _TEB *v18; // rdi
  int v19; // eax
  int v20; // eax
  unsigned int v21; // edi
  unsigned __int64 v22; // rsi
  _DWORD *Heap; // rax
  char *v24; // r12
  __int64 ii; // rsi
  unsigned __int64 v26; // r9
  _DWORD *jj; // rdi
  unsigned __int64 v28; // r8
  unsigned int v29; // r8d
  __int64 v30; // rdx
  unsigned int v31; // r11d
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // r10
  bool v35; // zf
  unsigned __int16 *v36; // rdi
  unsigned __int16 v37; // cx
  int v38; // eax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int16 LFHContext; // ax
  __int64 *v42; // rdi
  unsigned __int64 v43; // rsi
  int v44; // edx
  __int64 v45; // r14
  __int64 *v46; // r15
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // r8
  char v52; // al
  struct _TEB *v53; // rdi
  __int64 *Entry; // rax
  __int64 *v55; // r14
  int v56; // edx
  unsigned __int64 v57; // rcx
  __int64 v58; // r15
  __int64 *v59; // r12
  __int64 v60; // rax
  __int64 v61; // r9
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rdi
  char v65; // al
  __int64 v66; // rax
  __int64 *v67; // r8
  __int64 v68; // r14
  __int64 *v69; // r15
  __int64 v70; // rax
  __int64 v71; // r9
  __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rdi
  char v75; // al
  char v76; // al
  SIZE_T v77; // rdi
  SIZE_T v78; // r14
  __int64 v79; // rdi
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  _QWORD *v83; // rdx
  struct _TEB *v84; // rdi
  unsigned __int16 v85; // dx
  __int64 v86; // rdi
  __int64 v87; // r8
  _BYTE *v88; // rdi
  void *v89; // r8
  unsigned __int64 v90; // rdx
  char *v91; // r10
  PRTL_SRWLOCK v92; // rsi
  char *v93; // r8
  unsigned __int16 *v94; // r14
  unsigned int v95; // edi
  unsigned int i; // edx
  __int64 v97; // r13
  char **v98; // rdx
  _QWORD *SchedulerSharedDataSlot; // rdi
  unsigned int j; // ecx
  unsigned __int16 **v101; // r15
  PRTL_SRWLOCK *v102; // rdx
  _QWORD *v103; // rdi
  unsigned int k; // ecx
  unsigned __int64 Value; // rdi
  char *v106; // rcx
  unsigned __int64 v107; // rax
  __int64 v108; // rdi
  _BYTE *v109; // rdi
  __int16 updated; // ax
  unsigned __int64 v111; // rdx
  __int64 *v112; // r8
  unsigned __int64 v113; // rcx
  __int64 v114; // r9
  unsigned __int64 v115; // rax
  signed __int64 v116; // rcx
  unsigned __int64 v117; // rtt
  char *v118; // rax
  unsigned __int64 v119; // rcx
  ULONG_PTR v120; // rdx
  __int64 v121; // rdi
  __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // rdi
  __int64 v125; // rcx
  PRTL_SRWLOCK v126; // rsi
  __int64 v127; // rdi
  char *v128; // r8
  char *v129; // r9
  unsigned __int16 *v130; // r14
  unsigned int v131; // edi
  unsigned int m; // edx
  unsigned __int64 n; // rdx
  __int64 v134; // r13
  volatile signed __int32 *v135; // rdi
  volatile signed __int32 **v136; // rcx
  unsigned __int16 **v137; // r15
  PRTL_SRWLOCK *v138; // rcx
  _QWORD *v139; // rdi
  unsigned __int64 v140; // rdi
  char *v141; // rcx
  unsigned __int64 v142; // rax
  char *v143; // r8
  __int64 *v144; // rax
  _DWORD *SharedData; // rcx
  __int64 v146; // rcx
  char v147; // [rsp+40h] [rbp-1D8h]
  char v148; // [rsp+41h] [rbp-1D7h]
  char v149; // [rsp+44h] [rbp-1D4h]
  int v150; // [rsp+48h] [rbp-1D0h]
  _DWORD *v151; // [rsp+50h] [rbp-1C8h]
  __int64 v152; // [rsp+58h] [rbp-1C0h]
  unsigned __int16 *v153; // [rsp+68h] [rbp-1B0h]
  int v154; // [rsp+70h] [rbp-1A8h]
  PVOID BaseAddressa; // [rsp+90h] [rbp-188h] BYREF
  unsigned __int64 v156; // [rsp+98h] [rbp-180h]
  signed __int64 v157; // [rsp+A0h] [rbp-178h]
  PVOID v158; // [rsp+A8h] [rbp-170h] BYREF
  int v159; // [rsp+B0h] [rbp-168h]
  unsigned int v160; // [rsp+B4h] [rbp-164h]
  int v161; // [rsp+B8h] [rbp-160h]
  unsigned int v162; // [rsp+BCh] [rbp-15Ch]
  int v163; // [rsp+C0h] [rbp-158h]
  __int64 ExtraStuffPointer; // [rsp+C8h] [rbp-150h]
  ULONG_PTR v165; // [rsp+D0h] [rbp-148h] BYREF
  volatile signed __int32 **v166; // [rsp+D8h] [rbp-140h]
  PRTL_SRWLOCK *v167; // [rsp+E0h] [rbp-138h]
  ULONG_PTR v168; // [rsp+E8h] [rbp-130h] BYREF
  unsigned __int64 v169; // [rsp+F0h] [rbp-128h]
  __int64 v170; // [rsp+F8h] [rbp-120h]
  unsigned __int64 v171; // [rsp+100h] [rbp-118h]
  unsigned __int64 v172; // [rsp+108h] [rbp-110h]
  unsigned __int64 v173; // [rsp+110h] [rbp-108h]
  SIZE_T v174; // [rsp+118h] [rbp-100h]
  __int64 v175; // [rsp+120h] [rbp-F8h]
  char **v176; // [rsp+128h] [rbp-F0h]
  PRTL_SRWLOCK *v177; // [rsp+130h] [rbp-E8h]
  ULONG_PTR RegionSize; // [rsp+138h] [rbp-E0h] BYREF
  int v179; // [rsp+140h] [rbp-D8h]
  int v180; // [rsp+144h] [rbp-D4h]
  unsigned int v181; // [rsp+148h] [rbp-D0h]
  unsigned int NtGlobalFlag; // [rsp+14Ch] [rbp-CCh]
  int v183; // [rsp+150h] [rbp-C8h]
  unsigned int v184; // [rsp+154h] [rbp-C4h]
  unsigned __int64 v185; // [rsp+158h] [rbp-C0h]
  unsigned __int16 *v186; // [rsp+160h] [rbp-B8h]
  char *v187; // [rsp+168h] [rbp-B0h]
  __int64 *v188; // [rsp+170h] [rbp-A8h]
  __int64 v189; // [rsp+178h] [rbp-A0h]
  _QWORD *v190; // [rsp+180h] [rbp-98h]
  unsigned __int64 v191; // [rsp+188h] [rbp-90h]
  char **v192; // [rsp+190h] [rbp-88h]
  PRTL_SRWLOCK *v193; // [rsp+198h] [rbp-80h]
  unsigned __int64 v194; // [rsp+1A0h] [rbp-78h]
  ULONG_PTR v195; // [rsp+1A8h] [rbp-70h]
  volatile signed __int32 **v196; // [rsp+1B0h] [rbp-68h]
  PRTL_SRWLOCK *v197; // [rsp+1B8h] [rbp-60h]
  unsigned __int64 v198; // [rsp+1C0h] [rbp-58h]
  __int64 v199; // [rsp+1C8h] [rbp-50h]
  unsigned __int64 v200; // [rsp+1D0h] [rbp-48h]
  unsigned __int64 v201; // [rsp+1D8h] [rbp-40h]
  unsigned __int64 v204; // [rsp+238h] [rbp+20h] BYREF

  v204 = a4;
  v6 = a3;
  v7 = a2;
  v156 = 0LL;
  v175 = 0LL;
  ExtraStuffPointer = 0LL;
  v150 = 1;
  v187 = 0LL;
  v189 = 0LL;
  v147 = 0;
  v188 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  v165 = 0LL;
  v154 = 0;
  v195 = 0LL;
  v186 = 0LL;
  v9 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v150 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return RtlDebugAllocateHeap((unsigned __int64)BaseAddress, a2, a3);
    v13 = a3;
    if ( !a3 )
      v13 = 1LL;
    v14 = BaseAddress[33] & (BaseAddress[32] + v13);
    if ( v14 < 0x20 )
      v14 = 32LL;
    v204 = v14;
    v10 = (a2 >> 4) & 0xE0 | 1;
    v149 = v10;
    if ( (a2 & 0x3C000100) != 0 || BaseAddress[41] )
    {
      v10 = (a2 >> 4) & 0xE0 | 3;
      v149 = v10;
      v14 += 16LL;
      v204 = v14;
    }
    v11 = v14 >> 4;
  }
  else
  {
    v10 = 1;
    v149 = 1;
    v11 = a4 >> 4;
    if ( v9 < 2 )
    {
      v204 += 16LL;
      v11 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    v149 = v10 | 8;
  if ( (a2 & 1) != 0 )
  {
LABEL_60:
    if ( v11 <= *((unsigned int *)BaseAddress + 37) )
    {
      if ( (v7 & 0x800000) != 0 )
        goto LABEL_86;
      if ( v9 < *((unsigned __int16 *)BaseAddress + 216) )
      {
        if ( v6 > RtlpLargestLfhBlock
          || ((unsigned __int8)(1 << (v9 & 7)) & *((_BYTE *)BaseAddress + (v9 >> 3) + 434)) != 0 )
        {
          goto LABEL_86;
        }
        v36 = (unsigned __int16 *)(BaseAddress[53] + 2 * v9);
        v186 = v36;
        v37 = *v36 + 33;
        *v36 = v37;
        if ( !v154 )
        {
          if ( (v37 & 0x1Fu) > 0x10 || v37 > 0xFF00u )
          {
            v159 = 1;
            v38 = 1;
          }
          else
          {
            v159 = 0;
            v38 = 0;
          }
          if ( !v38 )
            goto LABEL_86;
        }
        v39 = v6;
        if ( !v6 )
          v39 = 1LL;
        if ( *((_BYTE *)BaseAddress + 418) == 2 )
          v40 = BaseAddress[51];
        else
          v40 = 0LL;
        LFHContext = RtlpGetLFHContext(v40, v39);
        if ( LFHContext != 0xFFFF )
        {
          *v36 = LFHContext;
          *((_BYTE *)BaseAddress + (v9 >> 3) + 434) |= 1 << (v9 & 7);
          ++*((_DWORD *)BaseAddress + 166);
          goto LABEL_86;
        }
        if ( *((_BYTE *)BaseAddress + 418) != 2 )
        {
LABEL_85:
          *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
          goto LABEL_86;
        }
        v35 = BaseAddress[51] == 0LL;
      }
      else
      {
        if ( v6 > RtlpLargestLfhBlock || *((_BYTE *)BaseAddress + 418) == 2 && BaseAddress[51] )
          goto LABEL_86;
        v35 = *((_BYTE *)BaseAddress + 419) == 2;
      }
      if ( v35 )
        goto LABEL_85;
LABEL_86:
      if ( a5 )
      {
        v42 = *a5;
        if ( *a5 )
        {
          v43 = (unsigned __int64)(v42 - 2);
          v153 = (unsigned __int16 *)(v42 - 2);
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v44 = *((_DWORD *)v42 - 2) ^ *((_DWORD *)BaseAddress + 34);
            *((_DWORD *)v42 - 2) = v44;
            if ( *((_BYTE *)v42 - 5) != ((unsigned __int8)v44 ^ (unsigned __int8)(BYTE1(v44) ^ BYTE2(v44))) )
              RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, (unsigned __int64)(v42 - 2));
          }
          v45 = *v42;
          v46 = (__int64 *)v42[1];
          v47 = *v46;
          v48 = *(_QWORD *)(*v42 + 8);
          if ( *v46 == v48 && (__int64 *)v47 == v42 )
          {
            BaseAddress[24] -= *((unsigned __int16 *)v42 - 4);
            v49 = BaseAddress[39];
            if ( v49 )
            {
              v171 = 0LL;
              v50 = *((unsigned __int16 *)v42 - 4);
              while ( 1 )
              {
                v51 = *(unsigned int *)(v49 + 8);
                if ( v50 < v51 )
                  break;
                if ( !*(_QWORD *)v49 )
                {
                  v50 = (unsigned int)(v51 - 1);
                  break;
                }
                v49 = *(_QWORD *)v49;
              }
              v171 = v50;
              RtlpHeapRemoveListEntry((__int64)BaseAddress, v49, 1, v42, v50, *(unsigned __int16 *)(v43 + 8));
            }
            *v46 = v45;
            *(_QWORD *)(v45 + 8) = v46;
            if ( (*(_BYTE *)(v43 + 10) & 8) == 0 || RtlpCommitBlock(BaseAddress, (__int64)(v42 - 2)) )
            {
              v52 = 1;
              goto LABEL_106;
            }
            RtlpDeCommitFreeBlock(BaseAddress, (unsigned __int64)(v42 - 2), *(unsigned __int16 *)(v43 + 8), 1);
          }
          else
          {
            RtlpLogHeapFailure(13, (__int64)BaseAddress, (__int64)v42, v48, v47, 0LL);
          }
          v52 = 0;
LABEL_106:
          if ( !v52 )
          {
            v53 = NtCurrentTeb();
            v53->LastStatusValue = -1073741801;
            v53->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741801);
            goto LABEL_348;
          }
LABEL_149:
          v76 = *(_BYTE *)(v43 + 10);
          v148 = v76;
          if ( !v150 && (v76 & 4) != 0 )
          {
            v174 = 0LL;
            v77 = 16LL * *(unsigned __int16 *)(v43 + 8) - 32;
            v174 = v77;
            if ( (v76 & 2) != 0 && v77 > 4 )
            {
              v77 -= 4LL;
              v174 = v77;
            }
            v78 = RtlCompareMemoryUlong((PVOID)(v43 + 32), v77, 0xFEEEFEEE);
            if ( v78 != v77 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v153, (char *)v153 + v78 + 32);
              v43 = (unsigned __int64)v153;
              if ( NtCurrentPeb()->BeingDebugged )
              {
                RtlpHeapInvalidBadAddress = (__int64)v153;
                __debugbreak();
                RtlpHeapInvalidBreakPoint = 0;
              }
            }
          }
          v156 = v43;
          if ( (*(_BYTE *)(v43 + 10) & 1) != 0 )
          {
            RtlpLogHeapFailure(3, (__int64)BaseAddress, v43, 0LL, 0LL, 0LL);
            goto LABEL_348;
          }
          *(_BYTE *)(v43 + 10) = v149;
          v79 = *(unsigned __int16 *)(v43 + 8) - v11;
          v189 = v79;
          *(_WORD *)(v43 + 8) = v11;
          v80 = v204 - a3;
          v200 = v204 - a3;
          if ( v204 - a3 >= 0x3F )
          {
            *(_QWORD *)(v43 + 16 * v11) = v80;
            *(_BYTE *)(v43 + 15) = 63;
          }
          else
          {
            *(_BYTE *)(v43 + 15) = v80;
          }
          *(_BYTE *)(v43 + 11) = 0;
          if ( v79 )
          {
            if ( v79 == 1 )
            {
              ++*(_WORD *)(v43 + 8);
              v81 = v204 - a3 + 16;
              v201 = v81;
              if ( v81 >= 0x3F )
              {
                *(_QWORD *)(v43 + 16 * (v11 + 1)) = v81;
                *(_BYTE *)(v43 + 15) = 63;
              }
              else
              {
                *(_BYTE *)(v43 + 15) = v81;
              }
            }
            else
            {
              v82 = *(unsigned __int8 *)(v43 + 14);
              if ( (_BYTE)v82 )
              {
                v83 = (_QWORD *)((v43 & 0xFFFFFFFFFFFF0000uLL) + ((1 - v82) << 16));
                v190 = v83;
              }
              else
              {
                v83 = BaseAddress;
                v190 = BaseAddress;
              }
              if ( !RtlpCreateSplitBlock(BaseAddress, (__int64)v83, v43 + 16 * v11, v148, v150 ^ 1, v11, v79) )
              {
                v84 = NtCurrentTeb();
                v84->LastStatusValue = -1073741764;
                v84->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741764);
                goto LABEL_348;
              }
            }
          }
          v151 = (_DWORD *)(v43 + 16);
          v85 = *(_WORD *)(v43 + 8);
          v86 = 16LL * v85;
          v175 = v86;
          v87 = v86;
          if ( (*(_BYTE *)(v43 + 15) & 0x3F) == 0x3F )
          {
            v87 = v86 - 8;
            v86 = v87;
            v175 = v87;
          }
          if ( v150 )
          {
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              *(_BYTE *)(v43 + 11) = v85 ^ *(_BYTE *)(v43 + 10) ^ HIBYTE(v85);
              *(_DWORD *)(v43 + 8) ^= *((_DWORD *)BaseAddress + 34);
            }
            if ( v147 )
            {
              RtlpUpdateHeapWatermarks((__int64)BaseAddress);
              RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]);
              v147 = 0;
            }
            if ( (v7 & 8) != 0 )
              memset_thunk_772440563353939046(v151, 0, v86 - 8);
            goto LABEL_348;
          }
          if ( (v7 & 8) != 0 )
          {
            memset_thunk_772440563353939046((void *)(v43 + 16), 0, v87 - 8);
            v88 = BaseAddress + 14;
            goto LABEL_193;
          }
          v88 = BaseAddress + 14;
          if ( (BaseAddress[14] & 0x40) != 0 )
          {
            v89 = (void *)(v43 + 16);
            v191 = v43 + 16;
            v90 = (a3 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
            v169 = v90;
            v88 = BaseAddress + 14;
            if ( v90 )
            {
              v91 = (char *)(BaseAddress + 14);
              if ( ((unsigned __int8)v151 & 4) != 0 )
              {
                *v151 = -1163005939;
                v169 = --v90;
                v88 = BaseAddress + 14;
                if ( !v90 )
                  goto LABEL_193;
                v89 = (void *)(v43 + 20);
                v191 = v43 + 20;
                v91 = (char *)(BaseAddress + 14);
              }
              memset64(v89, 0xBAADF00DBAADF00DuLL, v90 >> 1);
              v88 = BaseAddress + 14;
              if ( (v90 & 1) != 0 )
              {
                *((_DWORD *)v89 + v90 - 1) = -1163005939;
                v88 = v91;
              }
            }
          }
LABEL_193:
          if ( (*v88 & 0x20) != 0 )
          {
            *(__m128i *)((char *)v151 + a3) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
            *(_BYTE *)(v43 + 10) |= 4u;
          }
          *(_BYTE *)(v43 + 11) = 0;
          if ( (*(_BYTE *)(v43 + 10) & 2) == 0 )
          {
            NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
            if ( (NtGlobalFlag & 0x800) != 0 )
              *(_BYTE *)(v43 + 11) = RtlpUpdateTagEntry(
                                       (__int64)BaseAddress,
                                       (unsigned __int8)(v7 >> 18),
                                       0LL,
                                       v153[4],
                                       0);
            goto LABEL_249;
          }
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v43);
          *(_OWORD *)ExtraStuffPointer = 0LL;
          if ( (*(_DWORD *)v88 & 0x8000000) == 0 )
          {
LABEL_245:
            v181 = NtCurrentPeb()->NtGlobalFlag;
            if ( (v181 & 0x800) != 0 )
            {
              v109 = (_BYTE *)v156;
              updated = RtlpUpdateTagEntry(
                          (__int64)BaseAddress,
                          (v7 >> 18) & 0xFFF,
                          0LL,
                          *(unsigned __int16 *)(v156 + 8),
                          0);
              *(_WORD *)(ExtraStuffPointer + 2) = updated;
              goto LABEL_250;
            }
LABEL_249:
            v109 = (_BYTE *)v156;
LABEL_250:
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v109[11] = v109[8] ^ v109[9] ^ v109[10];
              *((_DWORD *)v109 + 2) ^= *((_DWORD *)BaseAddress + 34);
            }
            goto LABEL_348;
          }
          v92 = RtlpStackTraceDatabase;
          if ( !RtlpStackTraceDatabase
            || (v94 = (unsigned __int16 *)RtlStdLogStackTrace((__int64)RtlpStackTraceDatabase, 1)) == 0LL )
          {
            LODWORD(v108) = 0;
LABEL_244:
            v161 = v108;
            *(_WORD *)ExtraStuffPointer = v108;
            goto LABEL_245;
          }
          v95 = 0;
          v160 = 0;
          for ( i = 0; i < v94[7]; ++i )
          {
            v180 = *(_DWORD *)&v94[4 * i + 8];
            v95 += v180;
            v160 = v95;
          }
          v97 = 2LL * (v95 % *(_DWORD *)&v92[90].0);
          if ( !byte_1801D1908 )
          {
            v93 = (char *)&v92[2 * (v95 % *(_DWORD *)&v92[90].0) + 92];
            v192 = 0LL;
            v98 = 0LL;
            v176 = 0LL;
            SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
            if ( SchedulerSharedDataSlot )
            {
              for ( j = 0; j < 8; ++j )
              {
                if ( !SchedulerSharedDataSlot[j] )
                {
                  v98 = (char **)&SchedulerSharedDataSlot[j];
                  v176 = v98;
                  break;
                }
              }
            }
            v192 = v98;
            if ( v98 )
              *v98 = v93;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v93, 0LL) )
              RtlpAcquireSRWLockExclusiveContended((unsigned __int64)&v92[v97 + 92], (unsigned __int64)v98, v93, 0LL);
          }
          if ( *(_DWORD *)(v94 + 5) )
          {
            LODWORD(v108) = v94[6] + (v94[5] << 16);
LABEL_239:
            if ( !byte_1801D1908 )
              RtlReleaseSRWLockExclusive(&v92[v97 + 92]);
            if ( !(_DWORD)v108 )
              RtlStdReleaseStackTrace((__int64)v92, (__int64)v94);
            goto LABEL_244;
          }
          BaseAddressa = 0LL;
          RegionSize = 0LL;
          v101 = 0LL;
          v194 = 0LL;
          if ( !byte_1801D1908 )
          {
            v193 = 0LL;
            v102 = 0LL;
            v177 = 0LL;
            v103 = NtCurrentTeb()->SchedulerSharedDataSlot;
            if ( v103 )
            {
              for ( k = 0; k < 8; ++k )
              {
                if ( !v103[k] )
                {
                  v102 = (PRTL_SRWLOCK *)&v103[k];
                  v177 = v102;
                  break;
                }
              }
            }
            v193 = v102;
            if ( v102 )
              *v102 = v92;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v92, 0LL) )
              RtlpAcquireSRWLockExclusiveContended((unsigned __int64)v92, (unsigned __int64)v102, v93, 0LL);
          }
          Value = v92[21].Value;
          v106 = (char *)v92[19].Value;
          BaseAddressa = v106;
          v107 = Value - 8;
          if ( v92[16].0 )
          {
            if ( v107 < v92[20].Value )
            {
LABEL_231:
              if ( !byte_1801D1908 )
                RtlReleaseSRWLockExclusive(v92);
              if ( v101 )
              {
                *v101 = v94;
                v108 = (__int64)(v92[23].Value - (_QWORD)v101) >> 3;
                v94[6] = v108;
                v94[5] = WORD1(v108);
              }
              else
              {
                LODWORD(v108) = 0;
              }
              goto LABEL_239;
            }
          }
          else if ( v107 < (unsigned __int64)v106 )
          {
            RegionSize = 4096LL;
            if ( (unsigned __int64)(v106 - 4096) <= v92[18].Value )
              goto LABEL_231;
            BaseAddressa = v106 - 4096;
            if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
              goto LABEL_231;
            v92[19].Value = (unsigned __int64)BaseAddressa;
          }
          v101 = (unsigned __int16 **)(Value - 8);
          v92[21].Value = Value - 8;
          v194 = Value - 8;
          ++HIDWORD(v92[22].Ptr);
          goto LABEL_231;
        }
      }
      v187 = (char *)(BaseAddress + 42);
      Entry = RtlpFindEntry((__int64)BaseAddress, v11);
      v55 = Entry;
      v188 = Entry;
      if ( BaseAddress + 42 != Entry )
      {
        v43 = (unsigned __int64)(Entry - 2);
        v153 = (unsigned __int16 *)(Entry - 2);
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v56 = *((_DWORD *)Entry - 2) ^ *((_DWORD *)BaseAddress + 34);
          *((_DWORD *)Entry - 2) = v56;
          if ( *((_BYTE *)Entry - 5) != ((unsigned __int8)v56 ^ (unsigned __int8)(BYTE1(v56) ^ BYTE2(v56))) )
            RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, v43);
        }
        v57 = *((unsigned __int16 *)v55 - 4);
        if ( v57 >= v11 )
        {
          v58 = *v55;
          v59 = (__int64 *)v55[1];
          v60 = *v59;
          v61 = *(_QWORD *)(*v55 + 8);
          if ( *v59 == v61 && (__int64 *)v60 == v55 )
          {
            BaseAddress[24] -= v57;
            v62 = BaseAddress[39];
            if ( v62 )
            {
              v172 = 0LL;
              v63 = *((unsigned __int16 *)v55 - 4);
              while ( 1 )
              {
                v64 = *(unsigned int *)(v62 + 8);
                if ( v63 < v64 )
                  break;
                if ( !*(_QWORD *)v62 )
                {
                  v63 = (unsigned int)(v64 - 1);
                  break;
                }
                v62 = *(_QWORD *)v62;
              }
              v172 = v63;
              RtlpHeapRemoveListEntry((__int64)BaseAddress, v62, 1, v55, v63, *(unsigned __int16 *)(v43 + 8));
            }
            *v59 = v58;
            *(_QWORD *)(v58 + 8) = v59;
            if ( (*(_BYTE *)(v43 + 10) & 8) == 0 || RtlpCommitBlock(BaseAddress, v43) )
            {
              v65 = 1;
LABEL_128:
              if ( !v65 )
                goto LABEL_348;
              v7 = a2;
              goto LABEL_149;
            }
            RtlpDeCommitFreeBlock(BaseAddress, v43, *(unsigned __int16 *)(v43 + 8), 1);
          }
          else
          {
            RtlpLogHeapFailure(13, (__int64)BaseAddress, (__int64)v55, v61, v60, 0LL);
          }
          v65 = 0;
          goto LABEL_128;
        }
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *((_BYTE *)v55 - 5) = v57 ^ *((_BYTE *)v55 - 6) ^ BYTE1(v57);
          *((_DWORD *)v55 - 2) ^= *((_DWORD *)BaseAddress + 34);
        }
      }
      v66 = RtlpExtendHeap(BaseAddress, v204);
      v43 = v66;
      v153 = (unsigned __int16 *)v66;
      if ( v66 )
      {
        v67 = (__int64 *)(v66 + 16);
        v68 = *(_QWORD *)(v66 + 16);
        v69 = *(__int64 **)(v66 + 24);
        v70 = *v69;
        v71 = *(_QWORD *)(v68 + 8);
        if ( *v69 == v71 && (__int64 *)v70 == v67 )
        {
          BaseAddress[24] -= *(unsigned __int16 *)(v43 + 8);
          v72 = BaseAddress[39];
          if ( v72 )
          {
            v173 = 0LL;
            v73 = *(unsigned __int16 *)(v43 + 8);
            while ( 1 )
            {
              v74 = *(unsigned int *)(v72 + 8);
              if ( v73 < v74 )
                break;
              if ( !*(_QWORD *)v72 )
              {
                v73 = (unsigned int)(v74 - 1);
                break;
              }
              v72 = *(_QWORD *)v72;
            }
            v173 = v73;
            RtlpHeapRemoveListEntry((__int64)BaseAddress, v72, 1, v67, v73, *(unsigned __int16 *)(v43 + 8));
          }
          *v69 = v68;
          *(_QWORD *)(v68 + 8) = v69;
          if ( (*(_BYTE *)(v43 + 10) & 8) == 0 || RtlpCommitBlock(BaseAddress, v43) )
          {
            v75 = 1;
            goto LABEL_148;
          }
          RtlpDeCommitFreeBlock(BaseAddress, v43, *(unsigned __int16 *)(v43 + 8), 1);
        }
        else
        {
          RtlpLogHeapFailure(13, (__int64)BaseAddress, (__int64)v67, v71, v70, 0LL);
        }
        v75 = 0;
LABEL_148:
        if ( !v75 )
          goto LABEL_348;
        goto LABEL_149;
      }
LABEL_347:
      v151 = 0LL;
      goto LABEL_348;
    }
    if ( (BaseAddress[14] & 2) == 0 )
      goto LABEL_347;
    v204 += 56LL;
    v111 = (v204 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v112 = BaseAddress + 47;
    if ( !dword_1801CB578 )
    {
      v113 = *v112;
      if ( *v112 || (v113 = qword_1801CCED8, v112 = &qword_1801CCED8, qword_1801CCED8) )
      {
        if ( BaseAddress[72] - BaseAddress[84] + v111 > v113 )
        {
          v114 = v112[1];
          if ( v114 )
            RtlpLogHeapFailure(21, (__int64)BaseAddress, 0LL, v114, v111, BaseAddress[72] - BaseAddress[84]);
          v151 = 0LL;
          goto LABEL_348;
        }
      }
    }
    v157 = 0LL;
    v115 = qword_1801CCF00;
    do
    {
      v116 = v115 ^ (v115 >> 12) ^ ((v115 ^ (v115 >> 12)) << 25) ^ ((v115 ^ (v115 >> 12) ^ ((v115 ^ (v115 >> 12)) << 25)) >> 27);
      v157 = v116;
      v117 = v115;
      v115 = _InterlockedCompareExchange64(&qword_1801CCF00, v116, v115);
    }
    while ( v117 != v115 );
    v195 = (unsigned __int64)((-3 * (_BYTE)v116) & 0xF) << 12;
    v118 = RtlpHpAllocVirtBlockCommitFirst(BaseAddress, &v204, v195, &v165);
    v152 = (__int64)v118;
    if ( !v118 )
    {
      v151 = 0LL;
      ++*((_DWORD *)BaseAddress + 160);
      goto LABEL_348;
    }
    v119 = v204;
    *((_WORD *)v118 + 28) = v204 - v6;
    v118[58] = v149 | 2;
    *((_QWORD *)v118 + 4) = v119;
    v120 = v165;
    *((_QWORD *)v118 + 5) = v165;
    v118[63] = 4;
    BaseAddress[75] += v119;
    BaseAddress[74] += v120;
    v121 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v122 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v122 = 2147353472LL;
    if ( *(_BYTE *)v122 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit((__int64)BaseAddress, v152, v204, 9);
    if ( RtlGetCurrentServiceSessionId() )
      v123 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v123 = 2147353472LL;
    if ( *(_BYTE *)v123 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v121 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent((__int64)BaseAddress, v152, v204, 16LL * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v121);
    }
    v124 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
      v125 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v125 = 2147353482LL;
    if ( *(_BYTE *)v125 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v124 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapExtendEvent((__int64)BaseAddress, v152, v204, 16LL * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v124);
    }
    if ( (BaseAddress[14] & 0x8000000) == 0 )
    {
LABEL_338:
      v184 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v184 & 0x800) != 0 )
        *(_WORD *)(v152 + 18) = RtlpUpdateTagEntry(
                                  (__int64)BaseAddress,
                                  (unsigned __int8)(v7 >> 18),
                                  0LL,
                                  *(_QWORD *)(v152 + 32) >> 4,
                                  1);
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v152 + 59) = *(_BYTE *)(v152 + 56) ^ *(_BYTE *)(v152 + 57) ^ *(_BYTE *)(v152 + 58);
        *(_DWORD *)(v152 + 56) ^= *((_DWORD *)BaseAddress + 34);
      }
      v143 = (char *)(BaseAddress + 34);
      v144 = (__int64 *)BaseAddress[35];
      if ( (_QWORD *)*v144 == BaseAddress + 34 )
      {
        *(_QWORD *)v152 = v143;
        *(_QWORD *)(v152 + 8) = v144;
        *v144 = v152;
        BaseAddress[35] = v152;
      }
      else
      {
        RtlpLogHeapFailure(13, 0LL, (__int64)v143, 0LL, *v144, 0LL);
      }
      v151 = (_DWORD *)(v152 + 64);
      goto LABEL_348;
    }
    v126 = RtlpStackTraceDatabase;
    if ( !RtlpStackTraceDatabase )
    {
      LOWORD(v127) = 0;
      v163 = 0;
LABEL_337:
      *(_WORD *)(v152 + 16) = v127;
      goto LABEL_338;
    }
    v130 = (unsigned __int16 *)RtlStdLogStackTrace((__int64)RtlpStackTraceDatabase, 1);
    if ( !v130 )
    {
      LODWORD(v127) = 0;
LABEL_336:
      v163 = v127;
      goto LABEL_337;
    }
    v131 = 0;
    v162 = 0;
    for ( m = 0; m < v130[7]; ++m )
    {
      v183 = *(_DWORD *)&v130[4 * m + 8];
      v131 += v183;
      v162 = v131;
    }
    n = v131 % *(_DWORD *)&v126[90].0;
    v134 = 2LL * (unsigned int)n;
    if ( !byte_1801D1908 )
    {
      v135 = (volatile signed __int32 *)&v126[2 * (v131 % *(_DWORD *)&v126[90].0) + 92];
      v196 = 0LL;
      v136 = 0LL;
      v166 = 0LL;
      v129 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v129 )
      {
        for ( n = 0LL; (unsigned int)n < 8; n = (unsigned int)(n + 1) )
        {
          v128 = &v129[8 * (unsigned int)n];
          if ( !*(_QWORD *)v128 )
          {
            v136 = (volatile signed __int32 **)&v129[8 * (unsigned int)n];
            v166 = v136;
            break;
          }
        }
      }
      v196 = v136;
      if ( v136 )
        *v136 = v135;
      if ( _interlockedbittestandset64(v135, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((unsigned __int64)&v126[v134 + 92], n, v128, v129);
    }
    if ( *(_DWORD *)(v130 + 5) )
    {
      LODWORD(v127) = v130[6] + (v130[5] << 16);
LABEL_330:
      if ( !byte_1801D1908 )
        RtlReleaseSRWLockExclusive(&v126[v134 + 92]);
      if ( !(_DWORD)v127 )
        RtlStdReleaseStackTrace((__int64)v126, (__int64)v130);
      goto LABEL_336;
    }
    v158 = 0LL;
    v168 = 0LL;
    v137 = 0LL;
    v198 = 0LL;
    if ( !byte_1801D1908 )
    {
      v197 = 0LL;
      v138 = 0LL;
      v167 = 0LL;
      v139 = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v139 )
      {
        for ( n = 0LL; (unsigned int)n < 8; n = (unsigned int)(n + 1) )
        {
          if ( !v139[(unsigned int)n] )
          {
            v138 = (PRTL_SRWLOCK *)&v139[(unsigned int)n];
            v167 = v138;
            break;
          }
        }
      }
      v197 = v138;
      if ( v138 )
        *v138 = v126;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v126, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((unsigned __int64)v126, n, v128, v129);
    }
    v140 = v126[21].Value;
    v141 = (char *)v126[19].Value;
    v158 = v141;
    v142 = v140 - 8;
    if ( v126[16].0 )
    {
      if ( v142 < v126[20].Value )
      {
LABEL_322:
        if ( !byte_1801D1908 )
          RtlReleaseSRWLockExclusive(v126);
        if ( v137 )
        {
          *v137 = v130;
          v127 = (__int64)(v126[23].Value - (_QWORD)v137) >> 3;
          v130[6] = v127;
          v130[5] = WORD1(v127);
        }
        else
        {
          LODWORD(v127) = 0;
        }
        goto LABEL_330;
      }
    }
    else if ( v142 < (unsigned __int64)v141 )
    {
      v168 = 4096LL;
      if ( (unsigned __int64)(v141 - 4096) <= v126[18].Value )
        goto LABEL_322;
      v158 = v141 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v158, 0LL, &v168, 0x1000u, 4u) < 0 )
        goto LABEL_322;
      v126[19].Value = (unsigned __int64)v158;
    }
    v137 = (unsigned __int16 **)(v140 - 8);
    v126[21].Value = v140 - 8;
    v198 = v140 - 8;
    ++HIDWORD(v126[22].Ptr);
    goto LABEL_322;
  }
  if ( RtlTryEnterCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]) )
  {
    ++*((_DWORD *)BaseAddress + 156);
  }
  else
  {
    if ( byte_1801D1908 )
    {
      v15 = 0;
      goto LABEL_33;
    }
    v154 = 1;
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]);
    v16 = *((_DWORD *)BaseAddress + 156) + 1;
    *((_DWORD *)BaseAddress + 156) = v16;
    v17 = *((_DWORD *)BaseAddress + 157) + 1;
    *((_DWORD *)BaseAddress + 157) = v17;
    if ( *((_BYTE *)BaseAddress + 418) != 2 )
    {
      if ( v16 < v17 )
      {
        BaseAddress[78] = 0LL;
        v16 = 0;
        v17 = 0;
      }
      if ( v17 >= v16 >> 4 )
        *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
    }
  }
  v15 = 1;
LABEL_33:
  if ( v15 )
  {
    v147 = 1;
    v19 = *((_DWORD *)BaseAddress + 30);
    if ( (v19 & 0x30000000) != 0 )
    {
      if ( (v19 & 0x20000000) != 0 )
      {
        *((_DWORD *)BaseAddress + 30) = v19 & 0xDFFFFFFF;
        if ( (RtlpDisableHeapLookaside & 1) == 0 )
          RtlpActivateLowFragmentationHeap(BaseAddress);
      }
      v20 = *((_DWORD *)BaseAddress + 30);
      if ( (v20 & 0x10000000) != 0 )
      {
        *((_DWORD *)BaseAddress + 30) = v20 & 0xEFFFFFFF;
        v185 = 0LL;
        v185 = (unsigned __int64)*((unsigned int *)BaseAddress + 37) >> 8;
        v21 = (v185 + 31) & 0xFFFFFFE0;
        v22 = (unsigned __int64)v21 >> 3;
        Heap = RtlAllocateHeap(BaseAddress, 0x80000Au, v22 + 8 * (v21 + 7LL));
        v24 = (char *)(BaseAddress + 30);
        if ( Heap )
        {
          *((_BYTE *)Heap - 1) = 1;
          Heap[2] = v21;
          *((_QWORD *)Heap + 5) = Heap + 14;
          *((_QWORD *)Heap + 6) = (char *)Heap + v22 + 56;
          *((_QWORD *)Heap + 4) = v24;
          BaseAddress[40] = Heap;
          for ( ii = BaseAddress[31]; v24 != (char *)ii; ii = *(_QWORD *)(ii + 8) )
          {
            v170 = 0LL;
            v26 = *(_QWORD *)(ii + 40) >> 12;
            for ( jj = Heap; ; jj = *(_DWORD **)jj )
            {
              v28 = (unsigned int)jj[2];
              if ( v26 < v28 )
              {
                v170 = *(_QWORD *)(ii + 40) >> 12;
                v29 = v28 - 1;
                goto LABEL_48;
              }
              if ( !*(_QWORD *)jj )
                break;
            }
            v29 = v28 - 1;
            v170 = v29;
            LODWORD(v26) = v29;
LABEL_48:
            v30 = *(_QWORD *)(ii + 40);
            v199 = v30;
            v31 = v26 - jj[6];
            ++jj[4];
            v32 = 2 * v31;
            if ( !jj[3] )
              v32 = v31;
            v33 = (__int64 *)(*((_QWORD *)jj + 6) + 8 * v32);
            v34 = *v33;
            if ( (_DWORD)v26 == v29 )
              ++jj[5];
            if ( !v34 || (v179 = v30 - *(_DWORD *)(v34 + 40), v179 <= 0) )
              *v33 = ii;
            if ( !v34 )
              *(_DWORD *)(*((_QWORD *)jj + 5) + 4LL * (v31 >> 5)) |= 1 << (v31 & 0x1F);
          }
        }
        *((_DWORD *)BaseAddress + 30) &= ~0x10000000u;
        v7 = a2;
        v6 = a3;
      }
    }
    goto LABEL_60;
  }
  v18 = NtCurrentTeb();
  v18->LastStatusValue = -1073741420;
  v18->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741420);
LABEL_348:
  if ( v147 )
  {
    if ( v151 && !v152 )
      RtlpUpdateHeapWatermarks((__int64)BaseAddress);
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]);
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v146 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v146 = 2147353480LL;
  if ( *(_BYTE *)v146 && v151 )
  {
    if ( v152 )
      RtlpHeapLogRangeReserve((__int64)BaseAddress, v152 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v152 + 40));
  }
  return v151;
}
