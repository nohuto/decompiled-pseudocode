/*
 * XREFs of RtlpHpLfhSlotAllocateSlow @ 0x180061270
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180060ADC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x180060D18 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhHeatMapQuery @ 0x180060E00 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x180060FB8 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180061120 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180062D40 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800630F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180063C20 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180064030 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800646A0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhSubsegmentFree @ 0x180064EE4 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1800656C0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800669B0 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x18006BC60 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x18006BE00 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCommit @ 0x18006C560 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800CD8B0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhHeatMapUpdate @ 0x1800D5A30 (RtlpHpLfhHeatMapUpdate.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1800D6160 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x1800D6668 (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x1800DD8F0 (RtlpHpLfhSubsegmentPrefetchRange.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180140874 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlHeapZero @ 0x1801653C0 (RtlHeapZero.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSlotAllocateSlow(__int64 a1, __int64 a2, __int64 a3, struct _TEB *i)
{
  unsigned __int8 *v4; // rdi
  __int64 v5; // r13
  unsigned int v6; // ecx
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // r11
  signed __int32 v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  signed int v15; // ecx
  volatile signed __int32 *v16; // r14
  volatile signed __int32 *v17; // rdx
  char *SchedulerSharedDataSlot; // r8
  volatile signed __int32 **v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int16 v23; // r10
  int v24; // r11d
  int v25; // r8d
  unsigned __int32 v26; // eax
  int v27; // r14d
  unsigned __int32 v28; // r8d
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rbx
  int v31; // edx
  unsigned int v32; // ecx
  unsigned __int64 v33; // r13
  int v34; // eax
  char v35; // r14
  unsigned __int16 v36; // r15
  signed __int32 v37; // ett
  __int64 v38; // rax
  char v39; // r10
  unsigned int v40; // ebx
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned __int64 v45; // r8
  char v46; // cl
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // r8
  char *v50; // rdx
  char *v51; // rcx
  int v52; // r9d
  __int64 v53; // r14
  signed __int16 v54; // ax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r8
  _QWORD *v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // rcx
  unsigned __int64 *v60; // rax
  unsigned int v61; // eax
  unsigned __int16 v62; // bx
  unsigned int v63; // edi
  int v64; // r10d
  _RTL_SRWLOCK *v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // edx
  volatile signed __int16 *v69; // r8
  int v70; // ecx
  int v71; // ecx
  struct _TEB *v72; // r9
  __int64 v73; // rbx
  int v74; // eax
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // r8
  int v78; // r14d
  unsigned __int64 v79; // r11
  unsigned int v80; // edi
  unsigned __int64 v81; // rdx
  int v82; // r12d
  unsigned __int8 v83; // r15
  unsigned int v84; // r13d
  volatile signed __int64 *v85; // r14
  volatile signed __int64 *v86; // r8
  signed __int64 v87; // r9
  signed __int64 v88; // rax
  __int64 v92; // r10
  signed __int64 v93; // rcx
  unsigned __int64 v94; // r8
  unsigned int v95; // r14d
  __int64 v96; // rbx
  __int64 v97; // r15
  unsigned __int64 v98; // rbx
  __int16 v99; // cx
  __int64 *v100; // rdi
  __int64 *v101; // rcx
  __int64 **v102; // rax
  __int64 v103; // r8
  _RTL_SRWLOCK *v104; // rdi
  __int64 v105; // rax
  __int64 v106; // r8
  char v108; // cl
  __int64 v109; // r12
  int v110; // r11d
  unsigned __int64 v111; // r15
  __int64 v112; // r8
  signed __int16 *v113; // r15
  int v114; // r13d
  __int64 v115; // rdx
  signed __int16 *v116; // rdi
  signed __int16 v117; // ax
  signed __int16 v118; // tt
  int v119; // edx
  __int64 v120; // r10
  unsigned __int64 v121; // r14
  signed __int64 j; // rsi
  signed __int64 v123; // rax
  _QWORD *v126; // rax
  unsigned __int64 *v127; // rax
  _QWORD *v128; // rax
  _QWORD *v129; // rax
  _RTL_SRWLOCK *v130; // rcx
  int v131; // edi
  __int64 Subsegment; // rbx
  __int64 v133; // rax
  _RTL_SRWLOCK *v134; // rcx
  char v135; // cl
  __int64 v136; // rax
  __int64 v137; // r11
  unsigned int v138; // r12d
  __int64 (__fastcall *v139)(); // rax
  int v140; // ecx
  __int64 v141; // r9
  unsigned __int64 v144; // rcx
  unsigned __int64 v145; // rdx
  unsigned __int64 v146; // r8
  unsigned __int64 v147; // rdx
  void **TlsExpansionSlots; // rdx
  signed __int64 v149; // rax
  char v150; // dl
  signed __int64 v151; // rcx
  unsigned __int64 v152; // rdx
  signed __int64 v153; // rtt
  signed __int64 v154; // rax
  __int64 v155; // r10
  signed __int64 v156; // rax
  signed __int64 v157; // rtt
  int v158; // r10d
  __int64 v159; // rdi
  unsigned __int64 v160; // rdx
  __int16 v161; // r11
  _DWORD *v162; // r8
  unsigned int v166; // ecx
  __int16 v167; // cx
  char v168; // r10
  struct _TEB *v169; // rax
  struct _TEB *v170; // rax
  __int64 v171; // rax
  __int64 *v172; // rax
  _RTL_SRWLOCK *v173; // rcx
  char v174; // [rsp+40h] [rbp-E8h]
  int v175; // [rsp+44h] [rbp-E4h]
  int v176; // [rsp+44h] [rbp-E4h]
  unsigned int v177; // [rsp+44h] [rbp-E4h]
  char v178[4]; // [rsp+48h] [rbp-E0h] BYREF
  int v179; // [rsp+4Ch] [rbp-DCh]
  int v180; // [rsp+50h] [rbp-D8h]
  __int64 v181; // [rsp+58h] [rbp-D0h]
  __int64 v182; // [rsp+60h] [rbp-C8h]
  __int64 v183; // [rsp+68h] [rbp-C0h] BYREF
  __int64 *v184; // [rsp+70h] [rbp-B8h]
  signed __int64 v185; // [rsp+78h] [rbp-B0h]
  int v186; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD *v187; // [rsp+88h] [rbp-A0h] BYREF
  _QWORD *v188; // [rsp+90h] [rbp-98h]
  int v189; // [rsp+98h] [rbp-90h] BYREF
  int v190; // [rsp+9Ch] [rbp-8Ch] BYREF
  int v191; // [rsp+A0h] [rbp-88h]
  _QWORD *v192; // [rsp+A8h] [rbp-80h] BYREF
  unsigned __int64 *v193; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v194; // [rsp+B8h] [rbp-70h]
  int v195; // [rsp+C0h] [rbp-68h]
  signed __int64 v196; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v197; // [rsp+D8h] [rbp-50h]
  volatile signed __int32 *v198; // [rsp+E0h] [rbp-48h]
  __int64 v200; // [rsp+138h] [rbp+10h]
  unsigned __int16 v201; // [rsp+13Ah] [rbp+12h]
  unsigned int v202; // [rsp+140h] [rbp+18h]
  char v203; // [rsp+148h] [rbp+20h]

  v203 = (char)i;
  v202 = a3;
  v200 = a2;
  v4 = (unsigned __int8 *)(a1 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) << 6));
  v184 = &v183;
  v5 = a1;
  v191 = 0;
  v6 = *(unsigned __int16 *)(a1 + 76);
  v183 = (__int64)&v183;
  v7 = a2;
  v181 = (__int64)v4;
  if ( v6 < 0x40 )
  {
    v8 = __readgsqword(8 * v6 + 5248);
    goto LABEL_3;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v8 = (__int64)TlsExpansionSlots[v6 - 64];
LABEL_3:
    if ( v8 )
      goto LABEL_4;
  }
  v8 = RtlpHpLfhThreadDataInitializeSet(v5);
LABEL_4:
  v9 = v5 + ((unsigned __int64)WORD1(v8) << 6);
  v10 = *v4 >> 1;
  v194 = v9;
  if ( (unsigned int)v10 >= 0x7E )
  {
    v13 = 0;
  }
  else
  {
    i = (struct _TEB *)(v9 + 252);
    a3 = 2147352584LL;
    v11 = *(_DWORD *)(v9 + 252);
    while ( 1 )
    {
      v12 = (MEMORY[0x7FFE0008] >> 20) - v11;
      if ( !v12 )
        break;
      v37 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)i, MEMORY[0x7FFE0008] >> 20, v11);
      if ( v37 == v11 )
      {
        if ( v12 > 0x1E )
        {
          v170 = (struct _TEB *)(v5 + ((unsigned __int64)WORD1(v8) << 6));
          if ( v9 < (unsigned __int64)i )
          {
            do
            {
              LOWORD(v170->NtTib.ExceptionList) = 0;
              v170 = (struct _TEB *)((char *)v170 + 2);
            }
            while ( v170 < i );
          }
        }
        else
        {
          v38 = 3LL;
          a3 = 1LL;
          v39 = v12;
          while ( 1 )
          {
            if ( (v12 & 1) != 0 )
              a3 *= v38;
            LOBYTE(v12) = (unsigned __int8)v12 >> 1;
            if ( !(_BYTE)v12 )
              break;
            v38 *= v38;
          }
          v168 = 2 * v39;
          v169 = (struct _TEB *)(v5 + ((unsigned __int64)WORD1(v8) << 6));
          if ( v9 < (unsigned __int64)i )
          {
            do
            {
              LOWORD(v169->NtTib.ExceptionList) = (a3 * (unsigned __int64)LOWORD(v169->NtTib.ExceptionList)) >> v168;
              v169 = (struct _TEB *)((char *)v169 + 2);
            }
            while ( v169 < i );
          }
        }
        break;
      }
    }
    v13 = *(unsigned __int16 *)(v9 + 2 * v10);
  }
  v14 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v14 )
  {
    if ( v14 == 2 )
    {
      v15 = 2;
    }
    else if ( v14 == 1 )
    {
      v15 = 1;
    }
    else
    {
      i = NtCurrentTeb();
      v144 = i->RngState[0];
      v145 = i->RngState[1];
      v146 = v145 + v144;
      v147 = v144 ^ v145;
      a3 = HIDWORD(v146);
      i->RngState[0] = v147 ^ (v147 << 16) ^ __ROL8__(v144, 24);
      i->RngState[1] = __ROL8__(v147, 37);
      v15 = (unsigned __int8)a3 % 3u;
    }
  }
  else if ( (RtlpHpLfhPerfFlags & 1) != 0 )
  {
    if ( v13 < *((unsigned __int16 *)v4 + 38) )
    {
      v15 = 0;
    }
    else if ( v13 >= *((unsigned __int16 *)v4 + 39) )
    {
      v15 = ((*(_BYTE *)(v5 + 72) & 1) != 0) + 1;
    }
    else
    {
      v15 = 1;
    }
  }
  else
  {
    v15 = 0;
  }
  v16 = (volatile signed __int32 *)(v5 + 192);
  v175 = v15;
  v198 = (volatile signed __int32 *)(v5 + 192);
  if ( v9 == v5 + 192 && v15 >= 1 )
  {
    v9 = RtlpHpLfhContextPrivateHeatMapCreate(v5, v8, a3);
    v194 = v9;
    v175 = 1;
    goto LABEL_15;
  }
  if ( v15 != 2 )
  {
LABEL_15:
    if ( *(_WORD *)(v7 + 4) )
      v7 = RtlpHpLfhPrivateSlotShutdown(v5, v7, v8, 0);
    v200 = v7;
    goto LABEL_18;
  }
  if ( *(_WORD *)(v7 + 4) )
    goto LABEL_273;
  v171 = RtlpHpLfhPrivateSlotCreate(v5, v8, v4);
  if ( v171 )
  {
    v7 = v171;
    v200 = v171;
  }
  else
  {
    v175 = 1;
  }
LABEL_18:
  if ( *(_WORD *)(v7 + 4) )
  {
LABEL_273:
    v16 = (volatile signed __int32 *)v9;
    v198 = (volatile signed __int32 *)v9;
    v179 = 0;
    goto LABEL_27;
  }
  v17 = (volatile signed __int32 *)(v7 + 16);
  v179 = 2;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (struct _TEB *)(unsigned int)((_DWORD)i + 1) )
    {
      v19 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * (unsigned int)i];
      if ( !*v19 )
      {
        if ( v19 )
          *v19 = v17;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v17, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v7 + 16, (unsigned __int64)v17, SchedulerSharedDataSlot, (char *)i);
  while ( 1 )
  {
    do
    {
LABEL_27:
      if ( !*(_WORD *)(v7 + 4) )
      {
        _m_prefetchw((const void *)(v7 + 56));
        for ( j = *(_QWORD *)(v7 + 56); ; j = v123 )
        {
          if ( (j & 0xFFF) == 0 )
            goto LABEL_28;
          v123 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 56), j - 1, j);
          if ( j == v123 )
            break;
          v191 = 1;
        }
        v22 = j & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_143;
      }
LABEL_28:
      v20 = *(_QWORD **)(v7 + 24);
      v193 = (unsigned __int64 *)&v192;
      v192 = &v192;
      v21 = &v187;
      v188 = &v187;
LABEL_29:
      v187 = v21;
      while ( v20 != (_QWORD *)(v7 + 24) )
      {
        v22 = (unsigned __int64)v20;
        v20 = (_QWORD *)*v20;
        v23 = *(_WORD *)(v22 + 18);
        v24 = *(unsigned __int16 *)(v22 + 32);
        v25 = v24 + v23;
        if ( v25 )
        {
          if ( v25 != *(unsigned __int16 *)(v22 + 34) )
          {
            if ( v23 && v23 >= (unsigned __int16)v24 )
            {
              v182 = 0LL;
              v26 = _InterlockedExchange((volatile __int32 *)(v22 + 16), 0);
              v27 = *(unsigned __int16 *)(v22 + 34);
              LODWORD(v182) = v26;
              v28 = v26;
              v174 = *(_BYTE *)(v22 + 51) & 1;
              v29 = v22 >> 12;
              v30 = (unsigned __int64)v26 >> 16;
              v31 = (unsigned __int16)(qword_1801CCEC8 ^ *(_WORD *)(v22 + 40) ^ (v22 >> 12));
              v32 = HIWORD(v26);
              v33 = v22
                  + ((unsigned __int64)((unsigned int)qword_1801CCEC8 ^ *(_DWORD *)(v22 + 40) ^ (unsigned int)(v22 >> 12)) >> 16);
              v34 = HIWORD(v26) + *(unsigned __int16 *)(v22 + 32);
              v196 = (unsigned int)v182;
              v185 = v22 >> 12;
              v180 = v31;
              v197 = (unsigned __int64)(unsigned int)v182 >> 16;
              if ( v27 == v34 && *(_BYTE *)(v22 + 39) == 1 )
              {
                memset_thunk_772440563353939046((void *)(v22 + 64), 0, 8LL * ((unsigned int)(v27 + 31) >> 5));
                *(_QWORD *)(v22 + 8LL * (((unsigned int)(v27 + 31) >> 5) - 1) + 64) = (unsigned int)~(0xFFFFFFFFuLL >> ((32 - (v27 & 0x1F)) & 0x1F));
                *(_BYTE *)(v22 + 36) = 0;
                goto LABEL_64;
              }
              v35 = v174;
              if ( *(_BYTE *)(v22 + 39) != 1 || v174 || v32 <= (unsigned int)*(unsigned __int8 *)(v22 + 24) - 8 )
              {
                if ( (_WORD)v182 )
                {
                  v36 = v196;
                  do
                  {
                    v40 = v36 - 1;
                    v41 = v33 + v31 * v40;
                    v36 = *(_WORD *)v41;
                    if ( *(_DWORD *)(v41 + 8) != ((unsigned int)v41 ^ HIDWORD(*(_QWORD *)(a1 + 80)) ^ __ROL4__(*(_DWORD *)v41 ^ *(_QWORD *)(a1 + 80), *(_WORD *)v41)) )
                    {
                      RtlpLogHeapFailure(23, a1, v41, v22, v40, 0LL);
                      NT_ASSERT("0");
                    }
                    if ( v35 )
                    {
                      v42 = v40 >> 5;
                      v43 = *(_QWORD *)(v22 + 8 * v42 + 64);
                      v44 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v40 & 0x1F);
                      *(_QWORD *)(v22 + 8 * v42 + 64) = v44 & v43;
                      v45 = (unsigned int)v43 & (unsigned __int64)~v44;
                    }
                    else
                    {
                      if ( *(_BYTE *)(v22 + 39) > 1u )
                      {
                        v46 = *(_BYTE *)(v22 + 38);
                        v47 = (unsigned int)(v41 - v22) >> 12 >> v46;
                        v48 = (((*(unsigned __int16 *)(v22 + 40) ^ (unsigned __int16)qword_1801CCEC8 ^ (unsigned int)(unsigned __int16)v29)
                              - 1
                              + (_DWORD)v41
                              - (_DWORD)v22) >> 12 >> v46)
                            - v47;
                        v49 = 2 * v47;
                        v50 = (char *)(v49 + v22 + 8LL * *(unsigned __int8 *)(v22 + 24));
                        _m_prefetchw(v50);
                        v51 = &v50[2 * (v48 + 1)];
                        v52 = 0;
                        LODWORD(v53) = -1;
                        if ( v50 < v51 )
                        {
                          do
                          {
                            v54 = _InterlockedDecrement16((volatile signed __int16 *)v50);
                            if ( v54 )
                            {
                              if ( v54 == -1 )
                                --v52;
                            }
                            else
                            {
                              ++v52;
                              if ( (_DWORD)v53 == -1 )
                                v53 = v49 >> 1;
                            }
                            v50 += 2;
                            v49 += 2LL;
                          }
                          while ( v50 < v51 );
                          if ( v52 )
                            RtlpHpLfhContextUpdateFreeCommitCount(a1, v22, (v52 << 12 << *(_BYTE *)(v22 + 38)) / 4096);
                          if ( (_DWORD)v53 != -1 )
                            RtlpHpLfhSubsegmentDecommitPages(a1, v22, (unsigned int)v53, 2LL);
                        }
                        v35 = v174;
                      }
                      v55 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v40 & 0x1F);
                      v56 = v22 + 8LL * (v40 >> 5);
                      _m_prefetchw((const void *)(v56 + 64));
                      v45 = ~v55 & (unsigned int)_InterlockedAnd64((volatile signed __int64 *)(v56 + 64), v55);
                    }
                    if ( !v45 )
                    {
                      RtlpLogHeapFailure(17, *(_QWORD *)a1, v41, v22, v40, 0LL);
                      NT_ASSERT("0");
                    }
                    LOWORD(v29) = v185;
                    v31 = v180;
                  }
                  while ( v36 );
                  v9 = v194;
                  v7 = v200;
LABEL_64:
                  LOWORD(v30) = v197;
                }
              }
              else
              {
                RtlpHpLfhSubsegmentDelayFreeListBatch(a1, v22, v28, v33, v31);
              }
              *(_WORD *)(v22 + 32) += v30;
              v16 = v198;
              v5 = a1;
              v4 = (unsigned __int8 *)v181;
LABEL_66:
              v21 = v187;
            }
            goto LABEL_67;
          }
          v128 = *(_QWORD **)(v22 + 8);
          if ( v20[1] != v22 )
            goto LABEL_165;
          if ( *v128 != v22 )
            goto LABEL_165;
          *v128 = v20;
          v20[1] = v128;
          v129 = v187;
          if ( (_QWORD **)v187[1] != &v187 )
            goto LABEL_165;
          *(_QWORD *)v22 = v187;
          *(_QWORD *)(v22 + 8) = &v187;
          v21 = (_QWORD *)v22;
          v129[1] = v22;
          goto LABEL_29;
        }
        v126 = *(_QWORD **)(v22 + 8);
        if ( v20[1] != v22 )
          goto LABEL_165;
        if ( *v126 != v22 )
          goto LABEL_165;
        *v126 = v20;
        v20[1] = v126;
        v127 = v193;
        if ( (_QWORD **)*v193 != &v192 )
          goto LABEL_165;
        *(_QWORD *)(v22 + 8) = v193;
        *(_QWORD *)v22 = &v192;
        *v127 = v22;
        v21 = v187;
        v193 = (unsigned __int64 *)v22;
      }
      if ( v21 != &v187 )
      {
        v22 = (unsigned __int64)v21;
        RtlpHpLfhSubsegmentDelayFreeProcess(v5, v21, 1LL);
        goto LABEL_66;
      }
      v22 = 0LL;
LABEL_67:
      if ( v21 != &v187 )
      {
        v57 = *(_QWORD **)(v7 + 32);
        *v57 = v21;
        v58 = v188;
        *(_QWORD *)(v7 + 32) = v188;
        *v58 = v7 + 24;
        v187[1] = v57;
      }
      if ( v192 != &v192 )
      {
        v59 = *(_QWORD **)(v7 + 32);
        *v59 = v192;
        v60 = v193;
        *(_QWORD *)(v7 + 32) = v193;
        *v60 = v7 + 24;
        v192[1] = v59;
      }
      if ( v22 )
      {
        v61 = *(unsigned __int16 *)(v22 + 32);
        v62 = 4096;
        if ( (unsigned __int16)v61 > 0x1000u )
        {
          *(_WORD *)(v22 + 32) = v61 - 4096;
LABEL_74:
          v63 = v62;
          *(_QWORD *)(v7 + 56) = (v62 - 1LL) ^ ((v62 - 1LL) ^ v22) & 0xFFFFFFFFFFFFF000uLL;
        }
        else
        {
          *(_WORD *)(v22 + 32) = 0;
          v62 = v61;
          if ( v61 > 1 )
            goto LABEL_74;
          v63 = v61;
        }
        v64 = v179;
        if ( v179 )
        {
          v65 = (_RTL_SRWLOCK *)(v7 + 16);
          if ( v179 == 2 )
            RtlReleaseSRWLockExclusive(v65);
          else
            RtlReleaseSRWLockShared(v65);
          v64 = 0;
          v179 = 0;
        }
        v66 = v181;
        v67 = *(unsigned __int8 *)v181 >> 1;
        if ( (unsigned int)v67 < 0x7E )
        {
          v68 = *((unsigned __int16 *)v16 + v67);
          v69 = (volatile signed __int16 *)v16 + v67;
          while ( 1 )
          {
            v70 = v63 + v68;
            if ( v63 + v68 >= 0xFFFF )
              v70 = 0xFFFF;
            if ( v70 == v68 )
              break;
            if ( v16 != (volatile signed __int32 *)(v5 + 192) )
            {
              *v69 = v70;
              break;
            }
            v71 = (unsigned __int16)_InterlockedCompareExchange16(v69, v70, v68);
            if ( v71 == v68 )
              break;
            v68 = v71;
          }
          v66 = v181;
        }
        if ( (volatile signed __int32 *)v9 == v16 )
        {
LABEL_88:
          if ( v64 )
          {
            v134 = (_RTL_SRWLOCK *)(v7 + 16);
            if ( v64 == 2 )
              RtlReleaseSRWLockExclusive(v134);
            else
              RtlReleaseSRWLockShared(v134);
            v179 = 0;
          }
          v72 = NtCurrentTeb();
          v73 = 0x100000001LL;
          v74 = qword_1801CCEC8 ^ *(_DWORD *)(v22 + 40) ^ (v22 >> 12);
          v75 = v72->RngState[0];
          v76 = v72->RngState[1];
          v77 = v76 + v75;
          if ( !*(_WORD *)(v7 + 4) )
          {
            v78 = *(unsigned __int8 *)(v22 + 24);
            v79 = v22 + 64;
            v80 = (unsigned __int16)v74;
            v180 = qword_1801CCEC8 ^ *(_DWORD *)(v22 + 40) ^ (v22 >> 12);
            if ( v202 >= (unsigned __int16)v74 )
              v73 = 1LL;
            LODWORD(v194) = (unsigned __int16)v74;
            v81 = v75 ^ v76;
            v82 = BYTE4(v77);
            v72->RngState[1] = __ROL8__(v81, 37);
            v72->RngState[0] = v81 ^ (v81 << 16) ^ __ROL8__(v75, 24);
            v83 = *(_BYTE *)(v22 + 39);
            v84 = *(unsigned __int8 *)(v22 + 50);
            v85 = (volatile signed __int64 *)(v79 + 8 * ((unsigned int)(v78 - 8) - 1LL));
            v86 = (volatile signed __int64 *)(v79 + 8LL * *(unsigned __int8 *)(v22 + 36));
LABEL_93:
            v87 = *v86;
            LODWORD(v88) = *v86;
            do
            {
              LODWORD(v88) = ~(_DWORD)v88;
              _RDX = (unsigned int)v88;
              if ( !(_DWORD)v88 )
              {
                if ( v86 == v85 )
                  v86 = (volatile signed __int64 *)(v22 + 64);
                else
                  ++v86;
                goto LABEL_93;
              }
              if ( (qword_1801CCEE8 & 4) != 0 )
              {
                _RCX = 1LL << ((unsigned __int16)(v82 * __popcnt((unsigned int)v88)) >> 8);
                __asm
                {
                  pdep    rdx, rcx, rdx
                  tzcnt   rdx, rdx
                }
                v92 = v73 << _RDX;
              }
              else
              {
                if ( v84 != 32 || v86 == v85 )
                {
                  __asm { tzcnt   rcx, rdx }
                  _BitScanReverse64((unsigned __int64 *)&v88, (unsigned int)v88);
                  v195 = v88;
                  LODWORD(v88) = v88 - _RCX + 1;
                  if ( v84 < (unsigned int)v88 )
                    LODWORD(v88) = v84;
                  v82 = _RCX + ((unsigned int)(v88 * v82) >> 8);
                  _RDX = __ROR8__(_RDX, v82);
                  __asm { tzcnt   rdx, rdx }
                  LODWORD(_RDX) = v82 + _RDX;
                }
                else
                {
                  _RAX = (unsigned int)__ROR4__(v88, v82);
                  __asm { tzcnt   rdx, rax }
                  LODWORD(_RDX) = ((_BYTE)v82 + (_BYTE)_RDX) & 0x1F;
                }
                v92 = v73 << _RDX;
              }
              v93 = v87;
              v88 = _InterlockedCompareExchange64(v86, v87 | v92, v87);
              v87 = v88;
            }
            while ( v88 != v93 );
            v94 = (unsigned int)((_DWORD)v86 - v79);
            v95 = _RDX + 4 * v94;
            *(_BYTE *)(v22 + 36) = v95 >> 5;
            LODWORD(v185) = v95;
            v96 = HIWORD(v180) + v95 * v80;
            if ( v83 <= 1u )
            {
              v97 = a1;
              if ( v95 > *(unsigned __int16 *)(v22 + 48) )
                RtlpHpLfhSubsegmentPrefetch(a1, v22, v96, v80);
              goto LABEL_104;
            }
            v108 = *(_BYTE *)(v22 + 38);
            LODWORD(v109) = 0;
            v87 = v22 >> 12;
            v110 = 0;
            LOWORD(v87) = qword_1801CCEC8 ^ *(_WORD *)(v22 + 40) ^ (v22 >> 12);
            v111 = v22 + 8LL * *(unsigned __int8 *)(v22 + 24);
            v112 = (unsigned int)v96 >> 12 >> v108;
            v190 = 0;
            v186 = 0;
            v196 = v87;
            v178[0] = -1;
            v182 = 2 * v112;
            v113 = (signed __int16 *)(2 * v112 + v111);
            v180 = 0;
            _m_prefetchw(v113);
            v114 = 0;
            v176 = -1;
            v115 = (((unsigned int)v96 + (unsigned __int16)v87 - 1) >> 12 >> v108) - (unsigned int)v112 + 1;
            v94 = (unsigned __int64)&v113[v115];
            if ( (unsigned __int64)v113 >= v94 )
            {
              v97 = a1;
              goto LABEL_104;
            }
            v116 = &v113[v115];
            do
            {
              while ( 1 )
              {
                v117 = *v113;
                while ( v117 > 0 )
                {
                  v118 = v117;
                  v117 = _InterlockedCompareExchange16(v113, v117 + 1, v117);
                  if ( v118 == v117 )
                  {
                    v119 = v176;
                    v120 = v182;
                    goto LABEL_133;
                  }
                }
                if ( v110 )
                  break;
                v180 = 1;
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v22 + 56));
                v110 = 1;
              }
              v119 = v176;
              v120 = v182;
              if ( v117 )
              {
                ++v114;
                v109 = v182 >> 1;
                if ( v176 == -1 )
                  v119 = v182 >> 1;
                v176 = v119;
              }
              else
              {
                --v114;
              }
              *v113 = v117 + 1;
LABEL_133:
              ++v113;
              v182 = v120 + 2;
            }
            while ( v113 < v116 );
            v80 = v194;
            v121 = (unsigned int)v185;
            v97 = a1;
            if ( v114 )
            {
              RtlpHpLfhContextUpdateFreeCommitCount(a1, v22, (v114 << 12 << *(_BYTE *)(v22 + 38)) / 4096);
              v119 = v176;
              v110 = v180;
            }
            if ( v119 == -1 )
            {
              if ( v110 )
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v22 + 56));
              goto LABEL_104;
            }
            v135 = *(_BYTE *)(v22 + 38);
            v136 = *(_QWORD *)(a1 + 24);
            v137 = *(_QWORD *)a1;
            v190 = v109 - v119 + 1;
            v138 = v190 << 12 << v135;
            v177 = v119 << 12 << v135;
            v139 = (__int64 (__fastcall *)())(a1 ^ RtlpHpHeapGlobals ^ v136);
            v178[0] = -1;
            if ( v139 == RtlpHpSegLfhVsCommit )
            {
              v189 = 0;
              v140 = RtlpHpSegPageRangeCommit(v137, 0, (__int64)&v189);
              if ( v140 >= 0 )
                v186 = v189 << 12;
              v97 = a1;
            }
            else
            {
              v140 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, int *))v139)(
                       v137,
                       v22 + v177,
                       v138,
                       &v186);
            }
            if ( v140 < 0 )
            {
              RtlpHpLfhSubsegmentDecBlockCounts(v97, v22, (unsigned int)v96, (unsigned __int16)v196);
              RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v22 + 56));
              v98 = 0LL;
              if ( (_DWORD)v121 == -1 )
                goto LABEL_110;
              _InterlockedAnd64(
                (volatile signed __int64 *)(v22 + 8 * (v121 >> 5) + 64),
                __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v121 & 0x1F));
            }
            else
            {
              RtlpHpLfhSubsegmentIncBlockCounts(v97, v22, v177, v138, (__int64)&v190, 1, (__int64)v178);
              v141 = 3LL;
              if ( !v186 )
                v141 = 2LL;
              RtlpHpLfhSubsegmentPrefetchRange(v22, v177, v138, v141);
LABEL_104:
              v98 = v22 + v96;
              if ( (v203 & 2) != 0 )
                RtlHeapZero(v98, (v202 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
              if ( v202 < v80 )
              {
                v99 = v80 - v202;
                if ( v80 - v202 == 1 )
                  v99 = 0x8000;
                *(_WORD *)(v80 + v98 - 2) = v99;
              }
LABEL_110:
              if ( v98 )
              {
LABEL_111:
                v7 = v200;
LABEL_112:
                v4 = (unsigned __int8 *)v181;
                goto LABEL_113;
              }
            }
            v149 = *(_QWORD *)(v22 + 16);
            v94 = 2LL;
            do
            {
              v185 = v149;
              v150 = BYTE6(v149);
              v182 = v149;
              if ( BYTE6(v149) == 1 )
                v150 = 2;
              ++WORD1(v185);
              BYTE6(v185) = v150;
              v151 = v185;
              v152 = (unsigned __int64)*(unsigned __int16 *)(v22 + 44) << 6;
              v153 = v149;
              v149 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 16), v185, v149);
            }
            while ( v153 != v149 );
            if ( !*(_BYTE *)(v152 + v97 + 92) )
            {
              *(_BYTE *)(v152 + v97 + 92) = 1;
              if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v151, v152, 2LL, v87) )
                RtlpHpEnvCompactionSchedule();
            }
            if ( BYTE6(v182) == 1 )
            {
              v87 = v97 + (WORD2(v182) << 6);
              _m_prefetchw((const void *)(v87 + 8));
              v154 = *(_QWORD *)(v87 + 8);
              v155 = *(_QWORD *)(v22 + 24);
              v94 = v155 & 0xFFF;
              *(_QWORD *)(v22 + 24) = v94 | (v154 - (v154 & 0xFFF));
              v157 = v154;
              v156 = _InterlockedCompareExchange64((volatile signed __int64 *)(v87 + 8), v154 & 0xFFF | v22, v154);
              if ( v157 != v156 )
              {
                do
                {
                  v94 = v156;
                  *(_QWORD *)(v22 + 24) = v155 ^ (v156 ^ v155) & 0xFFFFFFFFFFFFF000uLL;
                  v156 = _InterlockedCompareExchange64((volatile signed __int64 *)(v87 + 8), v22 | v156 & 0xFFF, v156);
                }
                while ( v156 != v94 );
              }
            }
            goto LABEL_111;
          }
          v158 = *(unsigned __int8 *)(v22 + 24);
          v159 = (unsigned __int16)v74;
          v201 = ((unsigned int)qword_1801CCEC8 ^ *(_DWORD *)(v22 + 40) ^ (unsigned int)(v22 >> 12)) >> 16;
          if ( v202 >= (unsigned __int16)v74 )
            v73 = 1LL;
          v160 = v75 ^ v76;
          v161 = BYTE4(v77);
          v72->RngState[1] = __ROL8__(v160, 37);
          v72->RngState[0] = v160 ^ (v160 << 16) ^ __ROL8__(v75, 24);
          v87 = v22 + 64;
          v162 = (_DWORD *)(v22 + 64 + 8LL * *(unsigned __int8 *)(v22 + 36));
          while ( *v162 == -1 )
          {
            if ( v162 == (_DWORD *)(v22 + 64 + 8 * ((unsigned int)(v158 - 8) - 1LL)) )
              v162 = (_DWORD *)(v22 + 64);
            else
              v162 += 2;
          }
          _RAX = 1LL << ((unsigned __int16)(v161 * __popcnt((unsigned int)~*v162)) >> 8);
          __asm
          {
            pdep    rcx, rax, rcx
            tzcnt   rdx, rcx
          }
          *(_QWORD *)v162 |= v73 << _RDX;
          v94 = (unsigned int)((_DWORD)v162 - v87);
          v166 = _RDX + 4 * v94;
          *(_BYTE *)(v22 + 36) = v166 >> 5;
          v98 = v22 + v201 + v166 * (unsigned int)v159;
          if ( (v203 & 2) != 0 )
            RtlHeapZero(v22 + v201 + v166 * (unsigned int)v159, (v202 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( v202 < (unsigned int)v159 )
          {
            v167 = v159 - v202;
            if ( (_DWORD)v159 - v202 == 1 )
              v167 = 0x8000;
            *(_WORD *)(v159 + v98 - 2) = v167;
          }
          goto LABEL_112;
        }
        RtlpHpLfhHeatMapUpdate(v5, v9, v66, v62);
LABEL_143:
        v64 = v179;
        goto LABEL_88;
      }
      RtlpHpLfhOwnerRunMaintenance(v5, v7, &v183, 0LL);
    }
    while ( *(_BYTE *)(v7 + 1) );
    if ( v179 )
    {
      v130 = (_RTL_SRWLOCK *)(v7 + 16);
      if ( v179 == 2 )
        RtlReleaseSRWLockExclusive(v130);
      else
        RtlReleaseSRWLockShared(v130);
      v179 = 0;
    }
    RtlpHpLfhContextSlotStandbyProcess(v5, 0);
    if ( v16 == (volatile signed __int32 *)v9 )
    {
      v131 = v175;
    }
    else
    {
      v131 = RtlpHpLfhHeatMapQuery(v5, v16, v4);
      if ( v131 >= 1 )
        v131 = 1;
    }
    Subsegment = RtlpHpLfhBucketGetSubsegment(v5, (_RTL_SRWLOCK *)v181, v131);
    if ( Subsegment )
    {
      v4 = (unsigned __int8 *)v181;
      goto LABEL_194;
    }
    v4 = (unsigned __int8 *)v181;
    Subsegment = RtlpHpLfhSubsegmentCreate(v5, v181);
    if ( !Subsegment )
      break;
LABEL_194:
    if ( !*(_WORD *)(v7 + 4) )
    {
      v179 = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v7 + 16));
    }
    if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(v5, v7, Subsegment, 0, 0) )
    {
      if ( *(_WORD *)(Subsegment + 32) == *(_WORD *)(Subsegment + 34) )
      {
        v133 = v183;
        if ( *(__int64 **)(v183 + 8) != &v183 )
          goto LABEL_165;
        *(_QWORD *)Subsegment = v183;
        *(_QWORD *)(Subsegment + 8) = &v183;
        *(_QWORD *)(v133 + 8) = Subsegment;
        v183 = Subsegment;
      }
      else
      {
        v172 = v184;
        if ( (__int64 *)*v184 != &v183 )
LABEL_165:
          __fastfail(3u);
        *(_QWORD *)(Subsegment + 8) = v184;
        *(_QWORD *)Subsegment = &v183;
        *v172 = Subsegment;
        v184 = (__int64 *)Subsegment;
      }
    }
  }
  v98 = 0LL;
LABEL_113:
  if ( v179 )
  {
    v173 = (_RTL_SRWLOCK *)(v7 + 16);
    if ( v179 == 2 )
      RtlReleaseSRWLockExclusive(v173);
    else
      RtlReleaseSRWLockShared(v173);
  }
  if ( v191 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, v4, v94, v87);
  v100 = (__int64 *)v183;
  if ( (__int64 *)v183 != &v183 )
  {
    do
    {
      v101 = v100;
      v100 = (__int64 *)*v100;
      if ( *((_WORD *)v101 + 16) == *((_WORD *)v101 + 17) )
      {
        v102 = (__int64 **)v101[1];
        if ( (__int64 *)v100[1] != v101 || *v102 != v101 )
          goto LABEL_165;
        v103 = v181;
        *v102 = v100;
        v100[1] = (__int64)v102;
        RtlpHpLfhSubsegmentFree(a1, v101, v103);
      }
      else if ( (*((_BYTE *)v101 + 51) & 1) != 0 )
      {
        *((_BYTE *)v101 + 51) &= ~1u;
      }
    }
    while ( v100 != &v183 );
    if ( (__int64 *)v183 != &v183 )
    {
      v104 = (_RTL_SRWLOCK *)v181;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v181 + 16));
      v106 = v183;
      do
      {
        v105 = *(_QWORD *)v106;
        if ( *(__int64 **)(v106 + 8) != &v183 || *(_QWORD *)(v105 + 8) != v106 )
          goto LABEL_165;
        v183 = *(_QWORD *)v106;
        *(_QWORD *)(v105 + 8) = &v183;
        RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)v104, v106, 0, 0);
        v106 = v183;
      }
      while ( (__int64 *)v183 != &v183 );
      RtlReleaseSRWLockExclusive(v104 + 2);
    }
  }
  return v98;
}
