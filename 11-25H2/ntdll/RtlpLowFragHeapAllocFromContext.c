/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x180051570
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x180050E70 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x180001BB0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180001E38 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpSetSegmentInfo @ 0x180001ED0 (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180002060 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1800021A4 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlReAllocateHeap @ 0x180029DE0 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpSubSegmentInitialize @ 0x18007CB10 (RtlpSubSegmentInitialize.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800EBE10 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800F6C40 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x1801185F8 (RtlpLogHeapSubSegmentAlloc.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180119F00 (RtlpLogHeapAffinityManagerEnable.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x180166F90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x180167040 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x180167800 (RtlGetCurrentProcessorNumberEx.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocFromContext(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  bool v4; // zf
  unsigned __int16 *v6; // r13
  struct _TEB *v7; // rbx
  void *UniqueThread; // rax
  __int64 v9; // rdi
  __int64 HeapData_low; // rcx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rbx
  int v14; // r14d
  __int64 v15; // rbp
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  signed __int32 v18; // edx
  __int64 v19; // rsi
  struct _TEB *v20; // r9
  __int64 v21; // r11
  unsigned __int64 v22; // r10
  char v23; // cl
  unsigned __int64 v24; // rcx
  int v25; // r11d
  __int64 v26; // r8
  _QWORD *v27; // r9
  unsigned int v28; // r11d
  __int64 v31; // rax
  int v34; // r9d
  unsigned int v35; // ebp
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r13
  volatile signed __int32 **v39; // r15
  volatile signed __int32 *v40; // rdi
  volatile signed __int32 **v41; // rsi
  unsigned int v42; // ebx
  volatile signed __int64 *v43; // rbp
  unsigned int v44; // r14d
  volatile signed __int32 *v45; // rdx
  _SLIST_HEADER *v46; // rsi
  PSLIST_ENTRY v47; // rax
  __int64 v48; // r8
  __int64 *v49; // r9
  volatile signed __int64 **v50; // rbx
  PSLIST_ENTRY v51; // r14
  __int64 v52; // rcx
  unsigned int v53; // r14d
  _SLIST_ENTRY *v54; // rbx
  PSLIST_ENTRY v55; // r15
  _SLIST_HEADER *v56; // rbp
  PSLIST_ENTRY v57; // rsi
  __int64 v58; // r8
  signed __int32 v59; // eax
  __int64 i; // r8
  _DWORD *v61; // rcx
  __int64 v62; // rcx
  char v63; // dl
  _DWORD *v64; // rcx
  __int64 v65; // rcx
  _DWORD *v66; // rcx
  __int64 v67; // rcx
  signed __int32 v68; // eax
  __int64 v69; // rax
  volatile signed __int32 *v70; // rdx
  __int64 *v71; // rcx
  char v72; // r8
  _DWORD *SharedData; // rcx
  __int64 v74; // rcx
  _DWORD *v75; // rcx
  __int64 v76; // rcx
  _QWORD *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rsi
  unsigned __int64 v80; // rsi
  unsigned __int64 v82; // rax
  signed __int64 v83; // r8
  unsigned __int64 v84; // rtt
  volatile signed __int64 v85; // rcx
  __int64 v86; // r15
  __int64 v87; // r13
  unsigned int v88; // r10d
  unsigned int v89; // r11d
  int v90; // r8d
  signed __int64 v91; // rcx
  bool v92; // r9
  __int64 v93; // r11
  char v94; // cl
  char v95; // dl
  unsigned int v96; // edx
  unsigned int v97; // eax
  unsigned int v98; // edi
  unsigned int v99; // edi
  bool v100; // r12
  __int64 v101; // r14
  __int64 v102; // rbx
  PSLIST_ENTRY v103; // rsi
  unsigned __int64 v104; // rax
  __int64 v105; // rdi
  _DWORD *v106; // rcx
  __int64 v107; // rcx
  unsigned int v108; // edx
  unsigned __int64 v109; // rax
  __int64 v110; // rdi
  PSLIST_ENTRY v111; // rax
  __int64 v112; // r8
  __int64 v113; // r9
  volatile signed __int32 *v114; // rbx
  __int64 v115; // r9
  signed __int32 v116; // eax
  __int64 *v117; // r8
  _DWORD *v118; // rcx
  __int64 v119; // rcx
  char v120; // dl
  _DWORD *v121; // rcx
  __int64 v122; // rcx
  _DWORD *v123; // rcx
  __int64 v124; // rcx
  signed __int32 v125; // eax
  __int64 v126; // rax
  volatile signed __int32 *v127; // rdx
  __int64 *v128; // rcx
  int v129; // eax
  signed __int32 v130; // eax
  __int64 v131; // rax
  volatile signed __int32 *v132; // rdx
  __int64 *v133; // rcx
  PRTL_CRITICAL_SECTION *v134; // r13
  __int64 v135; // r15
  _RTL_CRITICAL_SECTION *v136; // rcx
  char *v137; // r14
  _SLIST_ENTRY *Heap; // rax
  _BYTE *v139; // rbp
  __int16 v140; // ax
  _DWORD *v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // rdi
  char *v144; // rcx
  __int64 v145; // rax
  unsigned __int32 v146; // eax
  unsigned __int32 v147; // eax
  __int64 v148; // rax
  _QWORD **v149; // rdx
  __int64 v150; // rcx
  signed __int32 v151; // eax
  __int64 v152; // rax
  volatile signed __int32 *v153; // rdx
  __int64 *v154; // rcx
  __int64 v155; // rax
  signed __int32 v156; // eax
  __int64 *v157; // r9
  __int64 j; // r8
  __int64 v159; // rax
  volatile signed __int32 *v160; // rdx
  __int64 *v161; // rcx
  __int64 v162; // rcx
  __int64 v163; // rcx
  __int64 v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rcx
  signed __int64 v167; // [rsp+30h] [rbp-98h]
  __int64 v168; // [rsp+30h] [rbp-98h]
  _PROCESSOR_NUMBER ProcessorNumber; // [rsp+38h] [rbp-90h] BYREF
  int v170; // [rsp+3Ch] [rbp-8Ch]
  __int64 v171; // [rsp+40h] [rbp-88h]
  unsigned __int16 *v172; // [rsp+48h] [rbp-80h]
  ULONG OldProtect; // [rsp+50h] [rbp-78h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-70h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-68h] BYREF
  __int64 v176; // [rsp+68h] [rbp-60h]
  __int64 v177; // [rsp+70h] [rbp-58h]
  PSLIST_HEADER ListHead; // [rsp+78h] [rbp-50h]
  char v180; // [rsp+D8h] [rbp+10h]
  __int64 v181; // [rsp+E0h] [rbp+18h]

  v181 = a3;
  ProcessorNumber = 0;
  v4 = (*(_BYTE *)(a1 + 672) & 1) == 0;
  v180 = 0;
  LODWORD(a3) = 0;
  v6 = (unsigned __int16 *)(a1 + 4 * (a2 + 169LL));
  v172 = v6;
  if ( v4 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v7 = NtCurrentTeb();
    UniqueThread = v7->ClientId.UniqueThread;
    v9 = (unsigned int)UniqueThread;
    HeapData_low = LOBYTE(v7->HeapData);
    LODWORD(a3) = HeapData_low - 1;
    v180 = HeapData_low - 1;
    if ( (int)HeapData_low - 1 < 0 || RtlpAffinityState[HeapData_low] != (unsigned int)UniqueThread )
    {
      RtlGetCurrentProcessorNumberEx(&ProcessorNumber);
      a3 = (unsigned __int8)(BYTE4(RtlpAffinityState[0]) & ProcessorNumber.Number);
      v180 = BYTE4(RtlpAffinityState[0]) & ProcessorNumber.Number;
      LOBYTE(v7->HeapData) = (BYTE4(RtlpAffinityState[0]) & ProcessorNumber.Number) + 1;
      qword_1801D5848[a3] = v9;
    }
  }
  v11 = *((unsigned __int8 *)v6 + 2);
  v176 = 16LL * *v6;
  ListHead = (PSLIST_HEADER)(a1 + 48 * ((unsigned int)a3 + 68LL));
  if ( (_DWORD)a3 )
    v12 = *(_QWORD *)(a1 + 8 * v11 + 2224) - 192LL + 192LL * (unsigned int)a3;
  else
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1192);
  v171 = v12;
LABEL_10:
  while ( 2 )
  {
    while ( 2 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
      {
        v14 = 0;
        v15 = *(_QWORD *)(*(_QWORD *)v12 + 24LL);
        if ( (HIWORD(*(_DWORD *)(v13 + 32)) & 0x8000u) != 0 )
        {
          v14 = 1;
          v143 = v15 + 4LL * *(unsigned __int16 *)(v12 + 172);
          if ( (*(_BYTE *)(v143 + 679) & 1) == 0
            && (int)RtlpAffinitizeSegmentInfoForBucket(
                      *(_QWORD *)(*(_QWORD *)v12 + 24LL),
                      *(unsigned __int8 *)(v143 + 678)) >= 0 )
          {
            *(_BYTE *)(v143 + 679) |= 1u;
            v144 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
            if ( *v144 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v15 + 24), *(unsigned __int8 *)(v143 + 678));
          }
        }
        v16 = 0;
        v17 = 0;
        if ( MEMORY[0x7FFE036A] > 1u )
          v16 = 100;
        while ( 1 )
        {
          if ( v17 > v16 )
            goto LABEL_31;
          v18 = *(_DWORD *)(v13 + 32);
          if ( (v18 & 0x80000000) == 0 )
          {
            if ( !(_WORD)v18 )
              goto LABEL_31;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 32), v18 | 0x80000000, v18) == v18 )
              break;
          }
          ++v17;
        }
        if ( v18 == -1 )
          goto LABEL_31;
        v19 = *(_QWORD *)(v13 + 8);
        if ( !v19 || *(_QWORD *)v13 != v12 || !(_WORD)v18 )
        {
          *(_DWORD *)(v13 + 32) = v18;
          goto LABEL_31;
        }
        v20 = NtCurrentTeb();
        v21 = BYTE2(v20->HeapData);
        v22 = (unsigned __int8)RtlpSearchWidth[*(unsigned __int16 *)(v12 + 172)];
        if ( (_BYTE)v21 == HIBYTE(v20->HeapData) )
        {
          v82 = qword_1801CFF00;
          do
          {
            v83 = ((((v82 ^ (v82 >> 12)) << 25) ^ v82 ^ (v82 >> 12)) >> 27) ^ ((v82 ^ (v82 >> 12)) << 25) ^ v82 ^ (v82 >> 12);
            v84 = v82;
            v82 = _InterlockedCompareExchange64(&qword_1801CFF00, v83, v82);
          }
          while ( v84 != v82 );
          v23 = 29 * v83;
          HIBYTE(v20->HeapData) = 29 * v83;
        }
        else
        {
          v23 = BYTE2(v20->HeapData);
        }
        BYTE2(v20->HeapData) = v23 + 1;
        v24 = *(_QWORD *)(v19 + 32);
        v25 = RtlpLowFragHeapRandomData[v21];
        v26 = *(_QWORD *)(v19 + 40);
        if ( v24 >= 0x40 )
        {
          v77 = (_QWORD *)(v26 + 8 * ((v24 - 1) >> 6));
          v27 = (_QWORD *)(v26 + 8 * ((unsigned __int64)(unsigned int)(v18 >> 16) >> 6));
          do
          {
            if ( *v27 != -1LL )
              break;
            if ( v27 == v77 )
              v27 = *(_QWORD **)(v19 + 40);
            else
              ++v27;
          }
          while ( v27 != (_QWORD *)(v26 + 8 * ((unsigned __int64)(unsigned int)(v18 >> 16) >> 6)) );
          if ( v27 == v77 && (v24 & 0x3F) != 0 && (*(_QWORD *)(v19 + 32) & 0x3FuLL) < v22 )
            LODWORD(v22) = v24 & 0x3F;
        }
        else
        {
          v27 = *(_QWORD **)(v19 + 40);
          if ( v24 < v22 )
            LODWORD(v22) = *(_QWORD *)(v19 + 32);
        }
        v28 = (unsigned int)(v22 * v25) >> 8;
        if ( (unsigned int)v22 >= 0x40 )
        {
          v31 = -1LL;
        }
        else
        {
          _RAX = ~*v27;
          __asm { tzcnt   r8, rax }
          LOBYTE(v28) = _R8 + v28;
          v31 = ((1LL << v22) - 1) << _R8;
        }
        _RAX = ~__ROR8__(*v27 | ~v31, v28);
        __asm { tzcnt   rcx, rax }
        LODWORD(_RCX) = ((_BYTE)v28 + (_BYTE)_RCX) & 0x3F;
        *v27 |= 1LL << _RCX;
        v34 = _RCX + ((unsigned int)(((__int64)v27 - *(_QWORD *)(v19 + 40)) >> 3) << 6);
        *(_DWORD *)(v13 + 32) = (v34 << 16) | ((unsigned __int16)v18 - 1);
        v35 = RtlpLFHKey ^ v19 ^ *(_DWORD *)(v19 + 24) ^ v15;
        v36 = v19 + v34 * HIWORD(v35);
        v37 = v36 + (unsigned __int16)v35;
        if ( (*(_BYTE *)(v37 + 15) & 0x3F) != 0 )
        {
          RtlpLogHeapFailure(
            15,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL),
            v36 + (unsigned __int16)v35,
            0,
            0LL,
            0LL);
LABEL_31:
          v37 = 0LL;
        }
        if ( v14 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
          _InterlockedCompareExchange(
            (_DWORD *)RtlpAffinityState + 1,
            2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
            SHIDWORD(RtlpAffinityState[0]));
        if ( v37 )
        {
          v79 = v176;
          if ( (a4 & 8) != 0 )
            memset_thunk_772440563353939046((void *)(v37 + 16), 0, v176 - 8);
          v80 = v79 - v181;
          if ( v80 >= 0x3F )
          {
            *(_QWORD *)(v37 + 16LL * *v172) = v80;
            *(_BYTE *)(v37 + 15) = -65;
          }
          else
          {
            *(_BYTE *)(v37 + 15) = v80 | 0x80;
          }
          return v37 + 16;
        }
      }
      v38 = *(_QWORD *)v12;
      v39 = (volatile signed __int32 **)(v12 + 16);
LABEL_35:
      v40 = 0LL;
      while ( 2 )
      {
        v41 = v39;
        v42 = 0;
        v43 = 0LL;
        v44 = 0;
        do
        {
          v45 = *v41;
          if ( *v41 && *((unsigned __int16 *)v45 + 16) > v44 )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v78 = *(unsigned __int16 *)(v12 + 172), (unsigned int)v78 > 0x70)
              || *(_DWORD *)(v12 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v78]
              || (v72 = 1, (unsigned int)(*((_WORD *)v45 + 20) >> 2) <= *((_WORD *)v45 + 16)) )
            {
              v72 = 0;
            }
            SharedData = NtCurrentPeb()->SharedData;
            if ( SharedData && *SharedData )
              v74 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v74 = 2147353482LL;
            if ( !*(_BYTE *)v74 )
            {
              v75 = NtCurrentPeb()->SharedData;
              if ( v75 && *v75 )
                v76 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v76 = 2147353472LL;
              if ( !*(_BYTE *)v76 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
              {
                if ( v72 )
                  goto LABEL_39;
LABEL_89:
                v40 = *v41;
                v44 = *((unsigned __int16 *)v45 + 16);
                v43 = (volatile signed __int64 *)(v12 + 8 * (v42 + 2LL));
                goto LABEL_39;
              }
            }
            if ( !v72 )
              goto LABEL_89;
            RtlpLogHeapReuseThresholdActivate(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL),
              *((_QWORD *)v45 + 1),
              *(unsigned __int16 *)(v12 + 172));
          }
LABEL_39:
          ++v42;
          ++v41;
        }
        while ( v42 < 0x10 );
        v39 = (volatile signed __int32 **)(v12 + 16);
        if ( v43 )
        {
          v46 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v38 + 24) + 8LL * *(unsigned __int16 *)(v12 + 172) + 1192)
                                + 144LL);
          while ( 1 )
          {
            v47 = RtlpInterlockedPopEntrySList(v46);
            v50 = (volatile signed __int64 **)v47;
            v51 = v47;
            if ( !v47 )
              break;
            v50 = (volatile signed __int64 **)&v47[-3];
            if ( (*((_DWORD *)&v47[-1].Next + 3) & 1) != 0 )
            {
              if ( !(unsigned int)RtlpSetSegmentInfo(v50, (volatile signed __int64 *)v12) )
              {
                RtlpInterlockedPushEntrySList(v46, v51, v48, v49);
                v50 = 0LL;
              }
              break;
            }
            _m_prefetchw((char *)v50 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v50 + 11, 0xFFFFFFFD) == 2 )
            {
              v85 = **v50;
              *v50 = 0LL;
              RtlpInterlockedPushEntrySList(v85, v47, v48, v49);
            }
          }
          if ( v40 != (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                   v43,
                                                   (signed __int64)v50,
                                                   (signed __int64)v40) )
          {
            if ( v50 )
              RtlpInterlockedPushEntrySList(v46, v50 + 6, v48, v49);
            continue;
          }
          if ( !v50 )
            *(_WORD *)(v12 + 174) = (unsigned __int8)(((__int64)v43 - v12 - 16) >> 3);
          if ( v40 )
          {
            _m_prefetchw((const void *)(v40 + 11));
            if ( _InterlockedAnd(v40 + 11, 0xFFFFFFFD) != 2 )
              goto LABEL_52;
            v52 = **(_QWORD **)v40;
            *(_QWORD *)v40 = 0LL;
            RtlpInterlockedPushEntrySList(v52, v40 + 12, v48, v49);
            goto LABEL_35;
          }
        }
        else
        {
          v40 = 0LL;
        }
        break;
      }
      v53 = 0;
      v54 = 0LL;
      v55 = 0LL;
      v56 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v38 + 24) + 8LL * *(unsigned __int16 *)(v12 + 172) + 1192) + 144LL);
      v57 = RtlpInterlockedPopEntrySList(v56);
      if ( !v57 )
        goto LABEL_51;
      while ( 2 )
      {
        v40 = (volatile signed __int32 *)&v57[-3];
        if ( (*((_DWORD *)&v57[-1].Next + 3) & 1) == 0 )
        {
          _m_prefetchw((const void *)(v40 + 11));
          if ( _InterlockedAnd(v40 + 11, 0xFFFFFFFD) != 2 )
            goto LABEL_335;
LABEL_341:
          v163 = **(_QWORD **)v40;
          *(_QWORD *)v40 = 0LL;
          RtlpInterlockedPushEntrySList(v163, v57, v58, v49);
          goto LABEL_335;
        }
        if ( !(unsigned int)RtlpSetSegmentInfo((volatile signed __int64 **)&v57[-3], (volatile signed __int64 *)v12) )
        {
          v57->Next = v54;
          v54 = v57;
          if ( !v53 )
            v55 = v57;
          ++v53;
LABEL_335:
          v40 = 0LL;
          v57 = RtlpInterlockedPopEntrySList(v56);
          if ( !v57 )
            goto LABEL_313;
          continue;
        }
        break;
      }
      _m_prefetchw((const void *)(v40 + 11));
      if ( _InterlockedAnd(v40 + 11, 0xFFFFFFFD) == 2 )
        goto LABEL_341;
      if ( !RtlpIsSubSegmentReuseable(v12, (__int64)&v57[-3]) )
        goto LABEL_335;
LABEL_313:
      if ( v53 )
        InterlockedPushListSList(v56, v54, v55, v53);
LABEL_51:
      if ( v40 )
      {
LABEL_52:
        *((_BYTE *)v40 + 43) = v180;
        v12 = v171;
        do
        {
          v59 = *((_DWORD *)v40 + 11);
          if ( !v59 || (v59 & 6) != 0 )
            goto LABEL_10;
        }
        while ( v59 != _InterlockedCompareExchange(v40 + 11, v59 | 6, v59) );
        i = *(_QWORD *)v40;
        if ( *(_QWORD *)v40 == v12 )
        {
          v61 = NtCurrentPeb()->SharedData;
          if ( v61 && *v61 )
            v62 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v62 = 2147353472LL;
          if ( *(_BYTE *)v62 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL), *((_QWORD *)v40 + 1));
          v40 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v40);
          if ( !v40 )
            continue;
          _m_prefetchw((const void *)(v40 + 11));
          if ( _InterlockedAnd(v40 + 11, 0xFFFFFFF9) == 6 )
          {
LABEL_271:
            v149 = (_QWORD **)(v40 + 12);
            v150 = **(_QWORD **)v40;
            *(_QWORD *)v40 = 0LL;
            goto LABEL_272;
          }
          if ( *((_WORD *)v40 + 16) )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v148 = *(unsigned __int16 *)(v12 + 172), (unsigned int)v148 > 0x70)
              || *(_DWORD *)(v12 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v148]
              || (v63 = 1, (unsigned int)(*((_WORD *)v40 + 20) >> 2) <= *((_WORD *)v40 + 16)) )
            {
              v63 = 0;
            }
            v64 = NtCurrentPeb()->SharedData;
            if ( v64 && *v64 )
              v65 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v65 = 2147353482LL;
            if ( *(_BYTE *)v65
              || ((v66 = NtCurrentPeb()->SharedData) == 0LL || !*v66
                ? (v67 = 2147353472LL)
                : (v67 = (__int64)NtCurrentPeb()->SharedData + 550),
                  *(_BYTE *)v67 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
            {
              if ( !v63 )
                goto LABEL_72;
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL),
                *((_QWORD *)v40 + 1),
                *(unsigned __int16 *)(v12 + 172));
            }
            else if ( !v63 )
            {
LABEL_72:
              while ( 1 )
              {
                v68 = *((_DWORD *)v40 + 11);
                if ( !v68 || (v68 & 2) != 0 )
                  break;
                if ( v68 == _InterlockedCompareExchange(v40 + 11, v68 | 2, v68) )
                {
                  v49 = *(__int64 **)v40;
                  for ( i = 0LL; (unsigned int)i < 0x10; i = (unsigned int)(i + 1) )
                  {
                    v69 = ((_BYTE)i + (unsigned __int8)*((_WORD *)v49 + 87)) & 0xF;
                    v70 = (volatile signed __int32 *)v49[v69 + 2];
                    v71 = &v49[v69];
                    if ( v70 )
                    {
                      if ( (v70[11] & 1) == 0
                        && v70 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                               v71 + 2,
                                                               (signed __int64)v40,
                                                               (signed __int64)v70) )
                      {
                        _m_prefetchw((const void *)(v70 + 11));
                        if ( _InterlockedAnd(v70 + 11, 0xFFFFFFFD) == 2 )
                        {
                          v162 = **(_QWORD **)v70;
                          *(_QWORD *)v70 = 0LL;
                          RtlpInterlockedPushEntrySList(v162, v70 + 12, i, v49);
                        }
                        goto LABEL_10;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(v71 + 2, (signed __int64)v40, 0LL) )
                    {
                      goto LABEL_10;
                    }
                  }
                  goto LABEL_9;
                }
              }
            }
          }
          continue;
        }
        _m_prefetchw((const void *)(v40 + 11));
        if ( _InterlockedAnd(v40 + 11, 0xFFFFFFF9) == 6 )
          goto LABEL_271;
        if ( !RtlpIsSubSegmentReuseable(i, (__int64)v40) )
          continue;
        do
        {
          v151 = *((_DWORD *)v40 + 11);
          if ( !v151 || (v151 & 2) != 0 )
            goto LABEL_10;
        }
        while ( v151 != _InterlockedCompareExchange(v40 + 11, v151 | 2, v151) );
        v49 = *(__int64 **)v40;
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= 0x10 )
          {
LABEL_9:
            RtlpInterlockedPushEntrySList(
              *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v40 + 24LL)
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)v40 + 172LL)
                        + 1192)
            + 144LL,
              v40 + 12,
              i,
              v49);
            goto LABEL_10;
          }
          v152 = ((_BYTE)i + (unsigned __int8)*((_WORD *)v49 + 87)) & 0xF;
          v153 = (volatile signed __int32 *)v49[v152 + 2];
          v154 = &v49[v152];
          if ( v153 )
          {
            if ( (v153[11] & 1) == 0
              && v153 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                      v154 + 2,
                                                      (signed __int64)v40,
                                                      (signed __int64)v153) )
            {
              _m_prefetchw((const void *)(v153 + 11));
              if ( _InterlockedAnd(v153 + 11, 0xFFFFFFFD) == 2 )
              {
                v150 = **(_QWORD **)v153;
                *(_QWORD *)v153 = 0LL;
                v149 = (_QWORD **)(v153 + 12);
                goto LABEL_272;
              }
              goto LABEL_10;
            }
          }
          else if ( !_InterlockedCompareExchange64(v154 + 2, (signed __int64)v40, 0LL) )
          {
            goto LABEL_10;
          }
        }
      }
      break;
    }
    v86 = a1;
    v87 = (__int64)v172;
    v88 = *(_DWORD *)(v12 + 160);
    v89 = *((unsigned __int8 *)v172 + 2);
    v90 = *(_DWORD *)(a1 + 672) & 2;
    LODWORD(v167) = 0;
    do
    {
      v91 = *(_QWORD *)(a1 + 80);
      v92 = 0;
      if ( (_DWORD)v91 == v89 )
      {
        v129 = HIDWORD(v91) + 1;
        if ( HIDWORD(v91) > 7 )
          v129 = 0;
        v92 = HIDWORD(v91) > 7;
        HIDWORD(v167) = v129;
      }
      else
      {
        v167 = v89 | 0x100000000LL;
      }
    }
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v167, v91) != v91 );
    if ( !v92 || v90 )
      v88 >>= (v90 != 0) + 3;
    v93 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(v87 + 2)];
    v94 = (*(_BYTE *)(v87 + 3) & 1) - 1;
    if ( (unsigned int)v93 >= 0x100 )
      v94 = *(_BYTE *)(v87 + 3) & 1;
    v95 = v94 - 1;
    if ( !*(_DWORD *)(v12 + 164) )
      v95 = v94;
    v96 = 1 << (3 - v95);
    if ( v88 >= v96 )
      v96 = v88;
    if ( v96 < 4 )
    {
      v96 = 4;
    }
    else if ( v96 > 0x400 )
    {
      v96 = 1024;
    }
    v170 = 0;
    v97 = ((((unsigned __int64)v96 + 31) >> 3) & 0xFFFFFFFC) + 68 + v96 * (v93 + 16);
    if ( v97 >= 0xF0000 )
      v97 = 983040;
    _BitScanReverse(&v98, v97 - 1);
    v99 = v98 + 1;
    if ( v99 <= 7 )
    {
      LOBYTE(v99) = 7;
      v170 = 7;
    }
    else
    {
      v170 = v99;
      if ( v99 >= 0x12 )
        LOBYTE(v99) = 18;
    }
    if ( (*(_BYTE *)(v87 + 3) & 6) != 0 )
      LOBYTE(v99) = 18;
    v100 = (_BYTE)v99 == 18 || v88 >= 0x400;
    v101 = v93 + 16;
    v168 = v93 + 16;
    v177 = a1 + 48LL * (unsigned __int8)v99;
    v102 = v177 - 240;
    *(_WORD *)(v102 + 28) = *(_WORD *)(v177 - 240 + 28) + 1;
    v103 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v102);
    if ( v103 )
    {
      ++*(_WORD *)(v102 + 32);
      goto LABEL_156;
    }
    if ( (unsigned __int8)v99 > 7u
      && (v103 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * ((unsigned __int8)v99 - 6LL)))) != 0LL )
    {
LABEL_156:
      v104 = 1LL << LOBYTE(v103[1].Next);
      if ( v104 > 0xF0000 )
        v104 = 983040LL;
      v105 = v104 + WORD1(v103[1].Next);
      v106 = NtCurrentPeb()->SharedData;
      if ( v106 && *v106 )
        v107 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v107 = 2147353472LL;
      if ( *(_BYTE *)v107 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), (__int64)v103, v105, v101);
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), -v105);
    }
    else
    {
      v134 = *(PRTL_CRITICAL_SECTION **)(a1 + 24);
      BaseAddress = 0LL;
      OldProtect = 0;
      v135 = 1LL << v99;
      v136 = v134[44];
      RegionSize = 0LL;
      if ( (unsigned __int64)(1LL << v99) > 0xF0000 )
        v135 = 983040LL;
      v137 = (char *)(v135 + 0x2000);
      if ( !v100 )
        v137 = (char *)v135;
      RtlEnterCriticalSection(v136);
      Heap = (_SLIST_ENTRY *)RtlAllocateHeap(v134, 0x800001u, (SIZE_T)v137);
      v139 = Heap;
      v103 = Heap;
      if ( Heap )
      {
        if ( v100 )
        {
          BaseAddress = (PVOID)(((unsigned __int64)&Heap[255].Next + v135 + 15) & 0xFFFFFFFFFFFFF000uLL);
          v137 = (char *)((_BYTE *)BaseAddress - (_BYTE *)Heap);
          v139 = RtlReAllocateHeap(v134, 0x800001u, Heap, (_BYTE *)BaseAddress - (_BYTE *)Heap + 4096);
          RtlLeaveCriticalSection(v134[44]);
          RegionSize = 4096LL;
          ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u, &OldProtect);
          v139[17] = 1;
          v140 = (_WORD)v137 - v135;
        }
        else
        {
          RtlLeaveCriticalSection(v134[44]);
          v140 = 0;
          BYTE1(v103[1].Next) = 0;
        }
        *((_WORD *)v139 + 9) = v140;
        v139[16] = v99;
        v141 = NtCurrentPeb()->SharedData;
        if ( v141 && *v141 )
          v142 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v142 = 2147353472LL;
        if ( *(_BYTE *)v142 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentAlloc(v134, v139, v137, v168);
        v103 = (PSLIST_ENTRY)v139;
        if ( v139 )
          _InterlockedIncrement((volatile signed __int32 *)(v177 - 224));
      }
      else
      {
        RtlLeaveCriticalSection(v134[44]);
      }
      v86 = a1;
      v87 = (__int64)v172;
    }
    v108 = *(unsigned __int16 *)(v102 + 28);
    if ( v108 > 0x40 )
    {
      if ( v108 < *(unsigned __int16 *)(v102 + 30) + (*(unsigned __int16 *)(v102 + 30) >> 1)
        && *(unsigned __int16 *)(v102 + 32) < v108 - (v108 >> 1) )
      {
        v146 = *(_DWORD *)(v102 + 20);
        if ( v146 >= 2 )
        {
          v147 = *(_DWORD *)(v102 + 24);
          if ( v147 > 2 )
            _InterlockedCompareExchange((volatile signed __int32 *)(v102 + 24), v147 - 1, v147);
        }
        else
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v102 + 20), v146 + 1, v146);
        }
      }
      *(_WORD *)(v102 + 28) = 0;
      *(_WORD *)(v102 + 30) = 0;
      *(_WORD *)(v102 + 32) = 0;
    }
    if ( !v103 )
      return 0LL;
    v109 = 1LL << LOBYTE(v103[1].Next);
    if ( v109 > 0xF0000 )
      v109 = 983040LL;
    v110 = v109 + WORD1(v103[1].Next);
    _InterlockedIncrement((volatile signed __int32 *)(v86 + 56));
    v111 = RtlpInterlockedPopEntrySList(ListHead);
    if ( v111 )
    {
      v114 = (volatile signed __int32 *)&v111[-3];
      if ( v111 == (PSLIST_ENTRY)48 )
        break;
      goto LABEL_168;
    }
    v145 = RtlpLowFragHeapAllocateFromZone((PRTL_SRWLOCK)v86);
    v114 = (volatile signed __int32 *)v145;
    if ( v145 )
    {
      *(_QWORD *)(v145 + 8) = 0LL;
LABEL_168:
      *((_BYTE *)v114 + 43) = v180;
      RtlpSubSegmentInitialize(
        v86,
        (_DWORD)v114,
        (_DWORD)v103,
        (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(v87 + 2)],
        v110,
        v87);
      do
      {
        v116 = *((_DWORD *)v114 + 11);
        if ( !v116 || (v116 & 6) != 0 )
        {
          v12 = v171;
          goto LABEL_204;
        }
      }
      while ( v116 != _InterlockedCompareExchange(v114 + 11, v116 | 6, v116) );
      v117 = *(__int64 **)v114;
      v12 = v171;
      if ( *(_QWORD *)v114 == v171 )
      {
        v118 = NtCurrentPeb()->SharedData;
        if ( v118 && *v118 )
          v119 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v119 = 2147353472LL;
        if ( *(_BYTE *)v119 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v171 + 24LL) + 24LL), *((_QWORD *)v114 + 1));
        v114 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v114);
        if ( !v114 )
          continue;
        _m_prefetchw((const void *)(v114 + 11));
        if ( _InterlockedAnd(v114 + 11, 0xFFFFFFF9) == 6 )
        {
          v164 = **(_QWORD **)v114;
          *(_QWORD *)v114 = 0LL;
          RtlpInterlockedPushEntrySList(v164, v114 + 12, v117, v115);
          continue;
        }
        if ( !*((_WORD *)v114 + 16) )
          continue;
        if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
          || (v155 = *(unsigned __int16 *)(v12 + 172), (unsigned int)v155 > 0x70)
          || *(_DWORD *)(v12 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v155]
          || (v120 = 1, (unsigned int)(*((_WORD *)v114 + 20) >> 2) <= *((_WORD *)v114 + 16)) )
        {
          v120 = 0;
        }
        v121 = NtCurrentPeb()->SharedData;
        if ( v121 && *v121 )
          v122 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v122 = 2147353482LL;
        if ( *(_BYTE *)v122
          || ((v123 = NtCurrentPeb()->SharedData) == 0LL || !*v123
            ? (v124 = 2147353472LL)
            : (v124 = (__int64)NtCurrentPeb()->SharedData + 550),
              *(_BYTE *)v124 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
        {
          if ( v120 )
          {
            RtlpLogHeapReuseThresholdActivate(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL),
              *((_QWORD *)v114 + 1),
              *(unsigned __int16 *)(v12 + 172));
            continue;
          }
        }
        else if ( v120 )
        {
          continue;
        }
        do
        {
          v125 = *((_DWORD *)v114 + 11);
          if ( !v125 || (v125 & 2) != 0 )
            goto LABEL_10;
        }
        while ( v125 != _InterlockedCompareExchange(v114 + 11, v125 | 2, v125) );
        v49 = *(__int64 **)v114;
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= 0x10 )
            goto LABEL_324;
          v126 = ((_BYTE)i + (unsigned __int8)*((_WORD *)v49 + 87)) & 0xF;
          v127 = (volatile signed __int32 *)v49[v126 + 2];
          v128 = &v49[v126];
          if ( v127 )
          {
            if ( (v127[11] & 1) == 0
              && v127 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                      v128 + 2,
                                                      (signed __int64)v114,
                                                      (signed __int64)v127) )
            {
              _m_prefetchw((const void *)(v127 + 11));
              if ( _InterlockedAnd(v127 + 11, 0xFFFFFFFD) == 2 )
              {
                v150 = **(_QWORD **)v127;
                *(_QWORD *)v127 = 0LL;
                v149 = (_QWORD **)(v127 + 12);
LABEL_272:
                RtlpInterlockedPushEntrySList(v150, v149, i, v49);
              }
              goto LABEL_10;
            }
          }
          else if ( !_InterlockedCompareExchange64(v128 + 2, (signed __int64)v114, 0LL) )
          {
            goto LABEL_10;
          }
        }
      }
      _m_prefetchw((const void *)(v114 + 11));
      if ( _InterlockedAnd(v114 + 11, 0xFFFFFFF9) == 6 )
      {
        v166 = **(_QWORD **)v114;
        *(_QWORD *)v114 = 0LL;
        RtlpInterlockedPushEntrySList(v166, v114 + 12, v117, v115);
        goto LABEL_204;
      }
      if ( RtlpIsSubSegmentReuseable((__int64)v117, (__int64)v114) )
      {
        do
        {
          v156 = *((_DWORD *)v114 + 11);
          if ( !v156 || (v156 & 2) != 0 )
            goto LABEL_204;
        }
        while ( v156 != _InterlockedCompareExchange(v114 + 11, v156 | 2, v156) );
        v157 = *(__int64 **)v114;
        for ( j = 0LL; ; j = (unsigned int)(j + 1) )
        {
          if ( (unsigned int)j >= 0x10 )
          {
            RtlpInterlockedPushEntrySList(
              *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v114 + 24LL)
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)v114 + 172LL)
                        + 1192)
            + 144LL,
              v114 + 12,
              j,
              v157);
            goto LABEL_204;
          }
          v159 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v157 + 87)) & 0xF;
          v160 = (volatile signed __int32 *)v157[v159 + 2];
          v161 = &v157[v159];
          if ( v160 )
          {
            if ( (v160[11] & 1) == 0
              && v160 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                      v161 + 2,
                                                      (signed __int64)v114,
                                                      (signed __int64)v160) )
            {
              _m_prefetchw((const void *)(v160 + 11));
              if ( _InterlockedAnd(v160 + 11, 0xFFFFFFFD) == 2 )
              {
                v165 = **(_QWORD **)v160;
                *(_QWORD *)v160 = 0LL;
                RtlpInterlockedPushEntrySList(v165, v160 + 12, j, v157);
              }
              goto LABEL_204;
            }
          }
          else if ( !_InterlockedCompareExchange64(v161 + 2, (signed __int64)v114, 0LL) )
          {
            goto LABEL_204;
          }
        }
      }
      do
      {
LABEL_204:
        v130 = *((_DWORD *)v114 + 11);
        if ( !v130 || (v130 & 2) != 0 )
          goto LABEL_10;
      }
      while ( v130 != _InterlockedCompareExchange(v114 + 11, v130 | 2, v130) );
      v49 = *(__int64 **)v114;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= 0x10 )
        {
LABEL_324:
          RtlpInterlockedPushEntrySList(
            *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v114 + 24LL)
                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)v114 + 172LL)
                      + 1192)
          + 144LL,
            v114 + 12,
            i,
            v49);
          goto LABEL_10;
        }
        v131 = ((_BYTE)i + (unsigned __int8)*((_WORD *)v49 + 87)) & 0xF;
        v132 = (volatile signed __int32 *)v49[v131 + 2];
        v133 = &v49[v131];
        if ( v132 )
        {
          if ( (v132[11] & 1) == 0
            && v132 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                    v133 + 2,
                                                    (signed __int64)v114,
                                                    (signed __int64)v132) )
          {
            _m_prefetchw((const void *)(v132 + 11));
            if ( _InterlockedAnd(v132 + 11, 0xFFFFFFFD) == 2 )
            {
              v150 = **(_QWORD **)v132;
              *(_QWORD *)v132 = 0LL;
              v149 = (_QWORD **)(v132 + 12);
              goto LABEL_272;
            }
            goto LABEL_10;
          }
        }
        else if ( !_InterlockedCompareExchange64(v133 + 2, (signed __int64)v114, 0LL) )
        {
          goto LABEL_10;
        }
      }
    }
    break;
  }
  RtlpFreeUserBlock(v86, v103, v112, v113);
  return 0LL;
}
