/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x180028AA0
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x1800283A0 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpFreeUserBlock @ 0x18002B950 (RtlpFreeUserBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpIsSubSegmentReuseable @ 0x1800966B0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180096938 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpSetSegmentInfo @ 0x1800969D0 (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180096B60 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180096CA4 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlReAllocateHeap @ 0x1800A0E30 (RtlReAllocateHeap.c)
 *     RtlpSubSegmentInitialize @ 0x1800D0810 (RtlpSubSegmentInitialize.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800EA9C0 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800F5060 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x180115414 (RtlpLogHeapSubSegmentAlloc.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180116A74 (RtlpLogHeapAffinityManagerEnable.c)
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x180165A00 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180165A40 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x180165AB0 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x180166270 (RtlGetCurrentProcessorNumberEx.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  union _SLIST_HEADER *v46; // rsi
  PSLIST_ENTRY v47; // rax
  __int64 v48; // r9
  _QWORD **v49; // rbx
  PSLIST_ENTRY v50; // r14
  __int64 v51; // rcx
  unsigned int v52; // r14d
  _SLIST_ENTRY *v53; // rbx
  PSLIST_ENTRY v54; // r15
  union _SLIST_HEADER *v55; // rbp
  PSLIST_ENTRY v56; // rsi
  signed __int32 v57; // eax
  __int64 *v58; // r8
  _DWORD *v59; // rcx
  __int64 v60; // rcx
  char v61; // dl
  _DWORD *v62; // rcx
  __int64 v63; // rcx
  _DWORD *v64; // rcx
  __int64 v65; // rcx
  signed __int32 v66; // eax
  __int64 *v67; // r9
  unsigned int i; // r8d
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
  __int64 v85; // rcx
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
  unsigned __int64 v105; // rdi
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
  __int64 *v126; // r9
  unsigned int k; // r8d
  __int64 v128; // rax
  volatile signed __int32 *v129; // rdx
  __int64 *v130; // rcx
  int v131; // eax
  signed __int32 v132; // eax
  __int64 *v133; // r9
  unsigned int n; // r8d
  __int64 v135; // rax
  volatile signed __int32 *v136; // rdx
  __int64 *v137; // rcx
  __int64 v138; // r13
  __int64 v139; // r15
  __int64 v140; // rcx
  unsigned __int64 v141; // r14
  __int64 Heap; // rax
  __int64 v143; // rbp
  __int16 v144; // ax
  _DWORD *v145; // rcx
  __int64 v146; // rcx
  __int64 v147; // rdi
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  char *v152; // rcx
  __int64 v153; // rax
  unsigned __int32 v154; // eax
  unsigned __int32 v155; // eax
  __int64 v156; // rax
  _QWORD **v157; // rdx
  __int64 v158; // rcx
  signed __int32 v159; // eax
  __int64 *v160; // r9
  unsigned int j; // r8d
  __int64 v162; // rax
  volatile signed __int32 *v163; // rdx
  __int64 *v164; // rcx
  __int64 v165; // rax
  signed __int32 v166; // eax
  __int64 *v167; // r9
  unsigned int m; // r8d
  __int64 v169; // rax
  volatile signed __int32 *v170; // rdx
  __int64 *v171; // rcx
  __int64 v172; // rcx
  __int64 v173; // rcx
  __int64 v174; // rcx
  __int64 v175; // rcx
  __int64 v176; // rcx
  signed __int64 v177; // [rsp+30h] [rbp-98h]
  __int64 v178; // [rsp+30h] [rbp-98h]
  int v179; // [rsp+38h] [rbp-90h] BYREF
  int v180; // [rsp+3Ch] [rbp-8Ch]
  __int64 v181; // [rsp+40h] [rbp-88h]
  unsigned __int16 *v182; // [rsp+48h] [rbp-80h]
  int v183; // [rsp+50h] [rbp-78h] BYREF
  __int64 v184; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v185; // [rsp+60h] [rbp-68h] BYREF
  __int64 v186; // [rsp+68h] [rbp-60h]
  __int64 v187; // [rsp+70h] [rbp-58h]
  PSLIST_HEADER ListHead; // [rsp+78h] [rbp-50h]
  unsigned int v190; // [rsp+D8h] [rbp+10h]
  __int64 v191; // [rsp+E0h] [rbp+18h]

  v191 = a3;
  v179 = 0;
  v4 = (*(_BYTE *)(a1 + 672) & 1) == 0;
  v190 = 0;
  LODWORD(a3) = 0;
  v6 = (unsigned __int16 *)(a1 + 4 * (a2 + 169LL));
  v182 = v6;
  if ( v4 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v7 = NtCurrentTeb();
    UniqueThread = v7->ClientId.UniqueThread;
    v9 = (unsigned int)UniqueThread;
    HeapData_low = LOBYTE(v7->HeapData);
    LODWORD(a3) = HeapData_low - 1;
    v190 = HeapData_low - 1;
    if ( (int)HeapData_low - 1 < 0 || RtlpAffinityState[HeapData_low] != (unsigned int)UniqueThread )
    {
      RtlGetCurrentProcessorNumberEx(&v179);
      a3 = (unsigned __int8)(BYTE4(RtlpAffinityState[0]) & BYTE2(v179));
      v190 = (unsigned __int8)(BYTE4(RtlpAffinityState[0]) & BYTE2(v179));
      LOBYTE(v7->HeapData) = (BYTE4(RtlpAffinityState[0]) & BYTE2(v179)) + 1;
      qword_1801D37E8[a3] = v9;
    }
  }
  v11 = *((unsigned __int8 *)v6 + 2);
  v186 = 16LL * *v6;
  ListHead = (PSLIST_HEADER)(a1 + 48 * ((unsigned int)a3 + 68LL));
  if ( (_DWORD)a3 )
    v12 = *(_QWORD *)(a1 + 8 * v11 + 2224) - 192LL + 192LL * (unsigned int)a3;
  else
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1192);
  v181 = v12;
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
          v147 = v15 + 4LL * *(unsigned __int16 *)(v12 + 172);
          if ( (*(_BYTE *)(v147 + 679) & 1) == 0
            && (int)RtlpAffinitizeSegmentInfoForBucket(
                      *(_QWORD *)(*(_QWORD *)v12 + 24LL),
                      *(unsigned __int8 *)(v147 + 678)) >= 0 )
          {
            *(_BYTE *)(v147 + 679) |= 1u;
            v152 = (unsigned int)RtlGetCurrentServiceSessionId(v149, v148, v150, v151)
                 ? (char *)NtCurrentPeb()->SharedData + 550
                 : (char *)2147353472;
            if ( *v152 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v15 + 24), *(unsigned __int8 *)(v147 + 678));
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
        v22 = RtlpSearchWidth[*(unsigned __int16 *)(v12 + 172)];
        if ( (_BYTE)v21 == HIBYTE(v20->HeapData) )
        {
          v82 = qword_1801CDF00;
          do
          {
            v83 = ((((v82 ^ (v82 >> 12)) << 25) ^ v82 ^ (v82 >> 12)) >> 27) ^ ((v82 ^ (v82 >> 12)) << 25) ^ v82 ^ (v82 >> 12);
            v84 = v82;
            v82 = _InterlockedCompareExchange64(&qword_1801CDF00, v83, v82);
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
          v79 = v186;
          if ( (a4 & 8) != 0 )
            memset_thunk_772440563353939046((void *)(v37 + 16), 0, v186 - 8);
          v80 = v79 - v191;
          if ( v80 >= 0x3F )
          {
            *(_QWORD *)(v37 + 16LL * *v182) = v80;
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
              *(unsigned __int16 *)(v12 + 172),
              *((unsigned __int16 *)v45 + 16));
          }
LABEL_39:
          ++v42;
          ++v41;
        }
        while ( v42 < 0x10 );
        v39 = (volatile signed __int32 **)(v12 + 16);
        if ( v43 )
        {
          v46 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v38 + 24) + 8LL * *(unsigned __int16 *)(v12 + 172) + 1192)
                                      + 144LL);
          while ( 1 )
          {
            v47 = RtlpInterlockedPopEntrySList(v46);
            v49 = (_QWORD **)v47;
            v50 = v47;
            if ( !v47 )
              break;
            v49 = (_QWORD **)&v47[-3];
            if ( (*((_DWORD *)&v47[-1].Next + 3) & 1) != 0 )
            {
              if ( !(unsigned int)RtlpSetSegmentInfo(v49, v12) )
              {
                RtlpInterlockedPushEntrySList(v46, v50);
                v49 = 0LL;
              }
              break;
            }
            _m_prefetchw((char *)v49 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v49 + 11, 0xFFFFFFFD) == 2 )
            {
              v85 = **v49;
              *v49 = 0LL;
              RtlpInterlockedPushEntrySList(v85, v47);
            }
          }
          if ( v40 != (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                   v43,
                                                   (signed __int64)v49,
                                                   (signed __int64)v40) )
          {
            if ( v49 )
              RtlpInterlockedPushEntrySList(v46, v49 + 6);
            continue;
          }
          if ( !v49 )
            *(_WORD *)(v12 + 174) = (unsigned __int8)(((__int64)v43 - v12 - 16) >> 3);
          if ( v40 )
          {
            _m_prefetchw((const void *)(v40 + 11));
            if ( _InterlockedAnd(v40 + 11, 0xFFFFFFFD) != 2 )
              goto LABEL_52;
            v51 = **(_QWORD **)v40;
            *(_QWORD *)v40 = 0LL;
            RtlpInterlockedPushEntrySList(v51, v40 + 12);
            goto LABEL_35;
          }
        }
        else
        {
          v40 = 0LL;
        }
        break;
      }
      v52 = 0;
      v53 = 0LL;
      v54 = 0LL;
      v55 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v38 + 24) + 8LL * *(unsigned __int16 *)(v12 + 172) + 1192)
                                  + 144LL);
      v56 = RtlpInterlockedPopEntrySList(v55);
      if ( !v56 )
        goto LABEL_51;
      while ( 2 )
      {
        v40 = (volatile signed __int32 *)&v56[-3];
        if ( (*((_DWORD *)&v56[-1].Next + 3) & 1) == 0 )
        {
          _m_prefetchw((const void *)(v40 + 11));
          if ( _InterlockedAnd(v40 + 11, 0xFFFFFFFD) != 2 )
            goto LABEL_335;
LABEL_341:
          v173 = **(_QWORD **)v40;
          *(_QWORD *)v40 = 0LL;
          RtlpInterlockedPushEntrySList(v173, v56);
          goto LABEL_335;
        }
        if ( !(unsigned int)RtlpSetSegmentInfo(&v56[-3], v12) )
        {
          v56->Next = v53;
          v53 = v56;
          if ( !v52 )
            v54 = v56;
          ++v52;
LABEL_335:
          v40 = 0LL;
          v56 = RtlpInterlockedPopEntrySList(v55);
          if ( !v56 )
            goto LABEL_313;
          continue;
        }
        break;
      }
      _m_prefetchw((const void *)(v40 + 11));
      if ( _InterlockedAnd(v40 + 11, 0xFFFFFFFD) == 2 )
        goto LABEL_341;
      if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v12, &v56[-3]) )
        goto LABEL_335;
LABEL_313:
      if ( v52 )
        InterlockedPushListSList(v55, v53, v54, v52);
LABEL_51:
      if ( v40 )
      {
LABEL_52:
        *((_BYTE *)v40 + 43) = v190;
        v12 = v181;
        do
        {
          v57 = *((_DWORD *)v40 + 11);
          if ( !v57 || (v57 & 6) != 0 )
            goto LABEL_10;
        }
        while ( v57 != _InterlockedCompareExchange(v40 + 11, v57 | 6, v57) );
        v58 = *(__int64 **)v40;
        if ( *(_QWORD *)v40 == v12 )
        {
          v59 = NtCurrentPeb()->SharedData;
          if ( v59 && *v59 )
            v60 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v60 = 2147353472LL;
          if ( *(_BYTE *)v60 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL), *((_QWORD *)v40 + 1));
          v40 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v40);
          if ( !v40 )
            continue;
          _m_prefetchw((const void *)(v40 + 11));
          if ( _InterlockedAnd(v40 + 11, 0xFFFFFFF9) == 6 )
          {
LABEL_271:
            v157 = (_QWORD **)(v40 + 12);
            v158 = **(_QWORD **)v40;
            *(_QWORD *)v40 = 0LL;
            goto LABEL_272;
          }
          if ( *((_WORD *)v40 + 16) )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v156 = *(unsigned __int16 *)(v12 + 172), (unsigned int)v156 > 0x70)
              || *(_DWORD *)(v12 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v156]
              || (v61 = 1, (unsigned int)(*((_WORD *)v40 + 20) >> 2) <= *((_WORD *)v40 + 16)) )
            {
              v61 = 0;
            }
            v62 = NtCurrentPeb()->SharedData;
            if ( v62 && *v62 )
              v63 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v63 = 2147353482LL;
            if ( *(_BYTE *)v63
              || ((v64 = NtCurrentPeb()->SharedData) == 0LL || !*v64
                ? (v65 = 2147353472LL)
                : (v65 = (__int64)NtCurrentPeb()->SharedData + 550),
                  *(_BYTE *)v65 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
            {
              if ( !v61 )
                goto LABEL_72;
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL),
                *((_QWORD *)v40 + 1),
                *(unsigned __int16 *)(v12 + 172),
                v48);
            }
            else if ( !v61 )
            {
LABEL_72:
              while ( 1 )
              {
                v66 = *((_DWORD *)v40 + 11);
                if ( !v66 || (v66 & 2) != 0 )
                  break;
                if ( v66 == _InterlockedCompareExchange(v40 + 11, v66 | 2, v66) )
                {
                  v67 = *(__int64 **)v40;
                  for ( i = 0; i < 0x10; ++i )
                  {
                    v69 = ((_BYTE)i + (unsigned __int8)*((_WORD *)v67 + 87)) & 0xF;
                    v70 = (volatile signed __int32 *)v67[v69 + 2];
                    v71 = &v67[v69];
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
                          v172 = **(_QWORD **)v70;
                          *(_QWORD *)v70 = 0LL;
                          RtlpInterlockedPushEntrySList(v172, v70 + 12);
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
        if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v58, v40) )
          continue;
        do
        {
          v159 = *((_DWORD *)v40 + 11);
          if ( !v159 || (v159 & 2) != 0 )
            goto LABEL_10;
        }
        while ( v159 != _InterlockedCompareExchange(v40 + 11, v159 | 2, v159) );
        v160 = *(__int64 **)v40;
        for ( j = 0; ; ++j )
        {
          if ( j >= 0x10 )
          {
LABEL_9:
            RtlpInterlockedPushEntrySList(
              *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v40 + 24LL)
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)v40 + 172LL)
                        + 1192)
            + 144LL,
              v40 + 12);
            goto LABEL_10;
          }
          v162 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v160 + 87)) & 0xF;
          v163 = (volatile signed __int32 *)v160[v162 + 2];
          v164 = &v160[v162];
          if ( v163 )
          {
            if ( (v163[11] & 1) == 0
              && v163 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                      v164 + 2,
                                                      (signed __int64)v40,
                                                      (signed __int64)v163) )
            {
              _m_prefetchw((const void *)(v163 + 11));
              if ( _InterlockedAnd(v163 + 11, 0xFFFFFFFD) == 2 )
              {
                v158 = **(_QWORD **)v163;
                *(_QWORD *)v163 = 0LL;
                v157 = (_QWORD **)(v163 + 12);
                goto LABEL_272;
              }
              goto LABEL_10;
            }
          }
          else if ( !_InterlockedCompareExchange64(v164 + 2, (signed __int64)v40, 0LL) )
          {
            goto LABEL_10;
          }
        }
      }
      break;
    }
    v86 = a1;
    v87 = (__int64)v182;
    v88 = *(_DWORD *)(v12 + 160);
    v89 = *((unsigned __int8 *)v182 + 2);
    v90 = *(_DWORD *)(a1 + 672) & 2;
    LODWORD(v177) = 0;
    do
    {
      v91 = *(_QWORD *)(a1 + 80);
      v92 = 0;
      if ( (_DWORD)v91 == v89 )
      {
        v131 = HIDWORD(v91) + 1;
        if ( HIDWORD(v91) > 7 )
          v131 = 0;
        v92 = HIDWORD(v91) > 7;
        HIDWORD(v177) = v131;
      }
      else
      {
        v177 = v89 | 0x100000000LL;
      }
    }
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v177, v91) != v91 );
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
    v180 = 0;
    v97 = ((((unsigned __int64)v96 + 31) >> 3) & 0xFFFFFFFC) + 68 + v96 * (v93 + 16);
    if ( v97 >= 0xF0000 )
      v97 = 983040;
    _BitScanReverse(&v98, v97 - 1);
    v99 = v98 + 1;
    if ( v99 <= 7 )
    {
      LOBYTE(v99) = 7;
      v180 = 7;
    }
    else
    {
      v180 = v99;
      if ( v99 >= 0x12 )
        LOBYTE(v99) = 18;
    }
    if ( (*(_BYTE *)(v87 + 3) & 6) != 0 )
      LOBYTE(v99) = 18;
    v100 = (_BYTE)v99 == 18 || v88 >= 0x400;
    v101 = v93 + 16;
    v178 = v93 + 16;
    v187 = a1 + 48LL * (unsigned __int8)v99;
    v102 = v187 - 240;
    *(_WORD *)(v102 + 28) = *(_WORD *)(v187 - 240 + 28) + 1;
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
        RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v103, v105, v101);
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v105);
    }
    else
    {
      v138 = *(_QWORD *)(a1 + 24);
      v185 = 0LL;
      v183 = 0;
      v139 = 1LL << v99;
      v140 = *(_QWORD *)(v138 + 352);
      v184 = 0LL;
      if ( (unsigned __int64)(1LL << v99) > 0xF0000 )
        v139 = 983040LL;
      v141 = v139 + 0x2000;
      if ( !v100 )
        v141 = v139;
      RtlEnterCriticalSection(v140);
      Heap = RtlAllocateHeap(v138, 0x800001u, v141);
      v143 = Heap;
      v103 = (PSLIST_ENTRY)Heap;
      if ( Heap )
      {
        if ( v100 )
        {
          v185 = (v139 + Heap + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v141 = v185 - Heap;
          v143 = RtlReAllocateHeap(v138, 8388609LL, Heap, v185 - Heap + 4096);
          RtlLeaveCriticalSection(*(_QWORD *)(v138 + 352));
          v184 = 4096LL;
          ZwProtectVirtualMemory(-1LL, &v185, &v184, 1LL, &v183);
          *(_BYTE *)(v143 + 17) = 1;
          v144 = v141 - v139;
        }
        else
        {
          RtlLeaveCriticalSection(*(_QWORD *)(v138 + 352));
          v144 = 0;
          BYTE1(v103[1].Next) = 0;
        }
        *(_WORD *)(v143 + 18) = v144;
        *(_BYTE *)(v143 + 16) = v99;
        v145 = NtCurrentPeb()->SharedData;
        if ( v145 && *v145 )
          v146 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v146 = 2147353472LL;
        if ( *(_BYTE *)v146 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentAlloc(v138, v143, v141, v178);
        v103 = (PSLIST_ENTRY)v143;
        if ( v143 )
          _InterlockedIncrement((volatile signed __int32 *)(v187 - 224));
      }
      else
      {
        RtlLeaveCriticalSection(*(_QWORD *)(v138 + 352));
      }
      v86 = a1;
      v87 = (__int64)v182;
    }
    v108 = *(unsigned __int16 *)(v102 + 28);
    if ( v108 > 0x40 )
    {
      if ( v108 < *(unsigned __int16 *)(v102 + 30) + (*(unsigned __int16 *)(v102 + 30) >> 1)
        && *(unsigned __int16 *)(v102 + 32) < v108 - (v108 >> 1) )
      {
        v154 = *(_DWORD *)(v102 + 20);
        if ( v154 >= 2 )
        {
          v155 = *(_DWORD *)(v102 + 24);
          if ( v155 > 2 )
            _InterlockedCompareExchange((volatile signed __int32 *)(v102 + 24), v155 - 1, v155);
        }
        else
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v102 + 20), v154 + 1, v154);
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
    v153 = RtlpLowFragHeapAllocateFromZone(v86, v190);
    v114 = (volatile signed __int32 *)v153;
    if ( v153 )
    {
      *(_QWORD *)(v153 + 8) = 0LL;
LABEL_168:
      *((_BYTE *)v114 + 43) = v190;
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
          v12 = v181;
          goto LABEL_204;
        }
      }
      while ( v116 != _InterlockedCompareExchange(v114 + 11, v116 | 6, v116) );
      v117 = *(__int64 **)v114;
      v12 = v181;
      if ( *(_QWORD *)v114 == v181 )
      {
        v118 = NtCurrentPeb()->SharedData;
        if ( v118 && *v118 )
          v119 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v119 = 2147353472LL;
        if ( *(_BYTE *)v119 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v181 + 24LL) + 24LL), *((_QWORD *)v114 + 1));
        v114 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v114);
        if ( !v114 )
          continue;
        _m_prefetchw((const void *)(v114 + 11));
        if ( _InterlockedAnd(v114 + 11, 0xFFFFFFF9) == 6 )
        {
          v174 = **(_QWORD **)v114;
          *(_QWORD *)v114 = 0LL;
          RtlpInterlockedPushEntrySList(v174, v114 + 12);
          continue;
        }
        if ( !*((_WORD *)v114 + 16) )
          continue;
        if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
          || (v165 = *(unsigned __int16 *)(v12 + 172), (unsigned int)v165 > 0x70)
          || *(_DWORD *)(v12 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v165]
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
              *(unsigned __int16 *)(v12 + 172),
              v115);
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
        v126 = *(__int64 **)v114;
        for ( k = 0; ; ++k )
        {
          if ( k >= 0x10 )
            goto LABEL_324;
          v128 = ((_BYTE)k + (unsigned __int8)*((_WORD *)v126 + 87)) & 0xF;
          v129 = (volatile signed __int32 *)v126[v128 + 2];
          v130 = &v126[v128];
          if ( v129 )
          {
            if ( (v129[11] & 1) == 0
              && v129 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                      v130 + 2,
                                                      (signed __int64)v114,
                                                      (signed __int64)v129) )
            {
              _m_prefetchw((const void *)(v129 + 11));
              if ( _InterlockedAnd(v129 + 11, 0xFFFFFFFD) == 2 )
              {
                v158 = **(_QWORD **)v129;
                *(_QWORD *)v129 = 0LL;
                v157 = (_QWORD **)(v129 + 12);
LABEL_272:
                RtlpInterlockedPushEntrySList(v158, v157);
              }
              goto LABEL_10;
            }
          }
          else if ( !_InterlockedCompareExchange64(v130 + 2, (signed __int64)v114, 0LL) )
          {
            goto LABEL_10;
          }
        }
      }
      _m_prefetchw((const void *)(v114 + 11));
      if ( _InterlockedAnd(v114 + 11, 0xFFFFFFF9) == 6 )
      {
        v176 = **(_QWORD **)v114;
        *(_QWORD *)v114 = 0LL;
        RtlpInterlockedPushEntrySList(v176, v114 + 12);
        goto LABEL_204;
      }
      if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v117, v114) )
      {
        do
        {
          v166 = *((_DWORD *)v114 + 11);
          if ( !v166 || (v166 & 2) != 0 )
            goto LABEL_204;
        }
        while ( v166 != _InterlockedCompareExchange(v114 + 11, v166 | 2, v166) );
        v167 = *(__int64 **)v114;
        for ( m = 0; ; ++m )
        {
          if ( m >= 0x10 )
          {
            RtlpInterlockedPushEntrySList(
              *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v114 + 24LL)
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)v114 + 172LL)
                        + 1192)
            + 144LL,
              v114 + 12);
            goto LABEL_204;
          }
          v169 = ((_BYTE)m + (unsigned __int8)*((_WORD *)v167 + 87)) & 0xF;
          v170 = (volatile signed __int32 *)v167[v169 + 2];
          v171 = &v167[v169];
          if ( v170 )
          {
            if ( (v170[11] & 1) == 0
              && v170 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                      v171 + 2,
                                                      (signed __int64)v114,
                                                      (signed __int64)v170) )
            {
              _m_prefetchw((const void *)(v170 + 11));
              if ( _InterlockedAnd(v170 + 11, 0xFFFFFFFD) == 2 )
              {
                v175 = **(_QWORD **)v170;
                *(_QWORD *)v170 = 0LL;
                RtlpInterlockedPushEntrySList(v175, v170 + 12);
              }
              goto LABEL_204;
            }
          }
          else if ( !_InterlockedCompareExchange64(v171 + 2, (signed __int64)v114, 0LL) )
          {
            goto LABEL_204;
          }
        }
      }
      do
      {
LABEL_204:
        v132 = *((_DWORD *)v114 + 11);
        if ( !v132 || (v132 & 2) != 0 )
          goto LABEL_10;
      }
      while ( v132 != _InterlockedCompareExchange(v114 + 11, v132 | 2, v132) );
      v133 = *(__int64 **)v114;
      for ( n = 0; ; ++n )
      {
        if ( n >= 0x10 )
        {
LABEL_324:
          RtlpInterlockedPushEntrySList(
            *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v114 + 24LL)
                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)v114 + 172LL)
                      + 1192)
          + 144LL,
            v114 + 12);
          goto LABEL_10;
        }
        v135 = ((_BYTE)n + (unsigned __int8)*((_WORD *)v133 + 87)) & 0xF;
        v136 = (volatile signed __int32 *)v133[v135 + 2];
        v137 = &v133[v135];
        if ( v136 )
        {
          if ( (v136[11] & 1) == 0
            && v136 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                    v137 + 2,
                                                    (signed __int64)v114,
                                                    (signed __int64)v136) )
          {
            _m_prefetchw((const void *)(v136 + 11));
            if ( _InterlockedAnd(v136 + 11, 0xFFFFFFFD) == 2 )
            {
              v158 = **(_QWORD **)v136;
              *(_QWORD *)v136 = 0LL;
              v157 = (_QWORD **)(v136 + 12);
              goto LABEL_272;
            }
            goto LABEL_10;
          }
        }
        else if ( !_InterlockedCompareExchange64(v137 + 2, (signed __int64)v114, 0LL) )
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
