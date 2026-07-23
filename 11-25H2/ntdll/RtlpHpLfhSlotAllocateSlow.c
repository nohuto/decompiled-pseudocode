/*
 * XREFs of RtlpHpLfhSlotAllocateSlow @ 0x180030120
 * Callers:
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x180009B7C (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18000AF44 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x18000CA10 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180011CC0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180011E60 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCommit @ 0x1800125C0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18002DB5C (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18002FEB0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180031BF0 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180031FA0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180032300 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180032AD0 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180032EB0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180033000 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1800334C4 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhHeatMapQuery @ 0x180033740 (RtlpHpLfhHeatMapQuery.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800B8200 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800CCFA0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhHeatMapUpdate @ 0x1800D9950 (RtlpHpLfhHeatMapUpdate.c)
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x1800DEFF0 (RtlpHpLfhSubsegmentPrefetchRange.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180114104 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180143DB4 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlHeapZero @ 0x180168590 (RtlHeapZero.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSlotAllocateSlow(unsigned __int64 a1, __int64 a2, unsigned int a3, char a4)
{
  volatile signed __int8 *v4; // rdi
  __int64 v5; // r13
  unsigned int v6; // ecx
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // r12
  __int64 v10; // r11
  volatile signed __int32 *v11; // r9
  signed __int32 v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  signed int v16; // ecx
  unsigned __int64 *v17; // r14
  volatile signed __int32 *v18; // rdx
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // r9d
  volatile signed __int32 **v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int16 v25; // r10
  int v26; // r11d
  int v27; // r8d
  unsigned __int32 v28; // eax
  int v29; // r14d
  unsigned __int32 v30; // r8d
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rbx
  int v33; // edx
  unsigned int v34; // ecx
  unsigned __int64 v35; // r13
  int v36; // eax
  char v37; // r14
  unsigned __int16 v38; // r15
  signed __int32 v39; // ett
  __int64 v40; // rax
  __int64 v41; // r8
  char v42; // r10
  unsigned int v43; // ebx
  unsigned __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned __int64 v48; // r8
  char v49; // cl
  __int64 v50; // r8
  int v51; // r9d
  __int64 v52; // r8
  char *v53; // rdx
  char *v54; // rcx
  int v55; // r9d
  __int64 v56; // r14
  signed __int16 v57; // ax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // r8
  _QWORD *v60; // rcx
  _QWORD *v61; // rax
  _QWORD *v62; // rcx
  unsigned __int64 *v63; // rax
  unsigned int v64; // eax
  unsigned __int16 v65; // bx
  unsigned int v66; // edi
  int v67; // r10d
  _RTL_SRWLOCK *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // edx
  volatile signed __int16 *v72; // r8
  int v73; // ecx
  int v74; // ecx
  struct _TEB *v75; // r9
  __int64 v76; // rbx
  int v77; // eax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // r8
  int v81; // r14d
  unsigned __int64 v82; // r11
  unsigned int v83; // edi
  unsigned __int64 v84; // rdx
  int v85; // r12d
  unsigned __int8 v86; // r15
  unsigned int v87; // r13d
  volatile signed __int64 *v88; // r14
  volatile signed __int64 *v89; // r8
  signed __int64 v90; // r9
  signed __int64 v91; // rax
  __int64 v95; // r10
  signed __int64 v96; // rcx
  unsigned int v97; // r14d
  __int64 v98; // rbx
  __int64 v99; // r15
  unsigned __int64 v100; // rbx
  __int16 v101; // cx
  unsigned __int64 *v102; // rdi
  __int64 v103; // rcx
  unsigned __int64 **v104; // rax
  __int64 v105; // r8
  _RTL_SRWLOCK *v106; // rdi
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // r8
  char v110; // cl
  __int64 v111; // r12
  int v112; // r11d
  unsigned __int64 v113; // r15
  __int64 v114; // r8
  signed __int16 *v115; // r15
  int v116; // r13d
  __int64 v117; // rdx
  signed __int16 *v118; // rdi
  signed __int16 v119; // ax
  signed __int16 v120; // tt
  int v121; // edx
  __int64 v122; // r10
  unsigned __int64 v123; // r14
  signed __int64 j; // rsi
  signed __int64 v125; // rax
  _QWORD *v128; // rax
  unsigned __int64 *v129; // rax
  _QWORD *v130; // rax
  _QWORD *v131; // rax
  _RTL_SRWLOCK *v132; // rcx
  int v133; // edi
  unsigned __int64 Subsegment; // rbx
  int v135; // r8d
  unsigned __int64 v136; // rax
  _RTL_SRWLOCK *v137; // rcx
  char v138; // cl
  __int64 v139; // rax
  __int64 v140; // r11
  unsigned int v141; // r12d
  __int64 (__fastcall *v142)(int, __int64, __int64, int *); // rax
  unsigned __int64 v143; // r10
  __int64 v144; // r15
  __int64 v145; // r8
  unsigned __int64 v146; // r8
  char v147; // cl
  unsigned __int64 v148; // rdx
  __int64 v149; // rdx
  char v150; // r9
  int v151; // ecx
  __int64 v152; // r9
  struct _TEB *v155; // r9
  unsigned __int64 v156; // rcx
  unsigned __int64 v157; // rdx
  unsigned __int64 v158; // r8
  unsigned __int64 v159; // rdx
  void **TlsExpansionSlots; // rdx
  signed __int64 v161; // rax
  char v162; // dl
  signed __int64 v163; // rcx
  unsigned __int64 v164; // rdx
  signed __int64 v165; // rtt
  __int64 v166; // r9
  signed __int64 v167; // rax
  __int64 v168; // r10
  signed __int64 v169; // rax
  signed __int64 v170; // rtt
  signed __int64 v171; // r8
  int v172; // r10d
  __int64 v173; // rdi
  unsigned __int64 v174; // rdx
  __int16 v175; // r11
  _DWORD *v176; // r8
  unsigned int v180; // ecx
  __int16 v181; // cx
  char v182; // r10
  volatile signed __int32 *v183; // rax
  volatile signed __int32 *v184; // rax
  __int64 v185; // rax
  unsigned __int64 *v186; // rax
  _RTL_SRWLOCK *v187; // rcx
  char v188; // [rsp+40h] [rbp-E8h]
  int v189; // [rsp+44h] [rbp-E4h]
  int v190; // [rsp+44h] [rbp-E4h]
  unsigned int v191; // [rsp+44h] [rbp-E4h]
  char v192[4]; // [rsp+48h] [rbp-E0h] BYREF
  int v193; // [rsp+4Ch] [rbp-DCh]
  int v194; // [rsp+50h] [rbp-D8h]
  __int64 v195; // [rsp+58h] [rbp-D0h]
  __int64 v196; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v197; // [rsp+68h] [rbp-C0h] BYREF
  unsigned __int64 *v198; // [rsp+70h] [rbp-B8h]
  signed __int64 v199; // [rsp+78h] [rbp-B0h]
  int v200; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD *v201; // [rsp+88h] [rbp-A0h] BYREF
  _QWORD *v202; // [rsp+90h] [rbp-98h]
  int v203; // [rsp+98h] [rbp-90h] BYREF
  int v204; // [rsp+9Ch] [rbp-8Ch] BYREF
  int v205; // [rsp+A0h] [rbp-88h]
  _QWORD *v206; // [rsp+A8h] [rbp-80h] BYREF
  unsigned __int64 *v207; // [rsp+B0h] [rbp-78h]
  unsigned __int64 *v208; // [rsp+B8h] [rbp-70h]
  int v209; // [rsp+C0h] [rbp-68h]
  signed __int64 v210; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v211; // [rsp+D8h] [rbp-50h]
  unsigned __int64 *v212; // [rsp+E0h] [rbp-48h]
  __int64 v214; // [rsp+138h] [rbp+10h]
  unsigned __int16 v215; // [rsp+13Ah] [rbp+12h]

  v214 = a2;
  v4 = (volatile signed __int8 *)(a1 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) << 6));
  v198 = &v197;
  v5 = a1;
  v205 = 0;
  v6 = *(unsigned __int16 *)(a1 + 76);
  v197 = (unsigned __int64)&v197;
  v7 = a2;
  v195 = (__int64)v4;
  if ( v6 < 0x40 )
  {
    v8 = __readgsqword(8 * v6 + 5248);
    goto LABEL_3;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v8 = (unsigned __int64)TlsExpansionSlots[v6 - 64];
LABEL_3:
    if ( v8 )
      goto LABEL_4;
  }
  v8 = RtlpHpLfhThreadDataInitializeSet(v5);
LABEL_4:
  v9 = (unsigned __int64 *)(v5 + ((unsigned __int64)WORD1(v8) << 6));
  v10 = *(unsigned __int8 *)v4 >> 1;
  v208 = v9;
  if ( (unsigned int)v10 >= 0x7E )
  {
    v14 = 0;
  }
  else
  {
    v11 = (volatile signed __int32 *)v9 + 63;
    v12 = *((_DWORD *)v9 + 63);
    while ( 1 )
    {
      v13 = (MEMORY[0x7FFE0008] >> 20) - v12;
      if ( !v13 )
        break;
      v39 = v12;
      v12 = _InterlockedCompareExchange(v11, MEMORY[0x7FFE0008] >> 20, v12);
      if ( v39 == v12 )
      {
        if ( v13 > 0x1E )
        {
          v184 = (volatile signed __int32 *)(v5 + ((unsigned __int64)WORD1(v8) << 6));
          if ( v9 < (unsigned __int64 *)v11 )
          {
            do
            {
              *(_WORD *)v184 = 0;
              v184 = (volatile signed __int32 *)((char *)v184 + 2);
            }
            while ( v184 < v11 );
          }
        }
        else
        {
          v40 = 3LL;
          v41 = 1LL;
          v42 = v13;
          while ( 1 )
          {
            if ( (v13 & 1) != 0 )
              v41 *= v40;
            LOBYTE(v13) = (unsigned __int8)v13 >> 1;
            if ( !(_BYTE)v13 )
              break;
            v40 *= v40;
          }
          v182 = 2 * v42;
          v183 = (volatile signed __int32 *)(v5 + ((unsigned __int64)WORD1(v8) << 6));
          if ( v9 < (unsigned __int64 *)v11 )
          {
            do
            {
              *(_WORD *)v183 = (v41 * (unsigned __int64)*(unsigned __int16 *)v183) >> v182;
              v183 = (volatile signed __int32 *)((char *)v183 + 2);
            }
            while ( v183 < v11 );
          }
        }
        break;
      }
    }
    v14 = *((unsigned __int16 *)v9 + v10);
  }
  v15 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v15 )
  {
    if ( v15 == 2 )
    {
      v16 = 2;
    }
    else if ( v15 == 1 )
    {
      v16 = 1;
    }
    else
    {
      v155 = NtCurrentTeb();
      v156 = v155->RngState[0];
      v157 = v155->RngState[1];
      v158 = v157 + v156;
      v159 = v156 ^ v157;
      v155->RngState[0] = v159 ^ (v159 << 16) ^ __ROL8__(v156, 24);
      v155->RngState[1] = __ROL8__(v159, 37);
      v16 = BYTE4(v158) % 3u;
    }
  }
  else if ( (RtlpHpLfhPerfFlags & 1) != 0 )
  {
    if ( v14 < *((unsigned __int16 *)v4 + 38) )
    {
      v16 = 0;
    }
    else if ( v14 >= *((unsigned __int16 *)v4 + 39) )
    {
      v16 = ((*(_BYTE *)(v5 + 72) & 1) != 0) + 1;
    }
    else
    {
      v16 = 1;
    }
  }
  else
  {
    v16 = 0;
  }
  v17 = (unsigned __int64 *)(v5 + 192);
  v189 = v16;
  v212 = (unsigned __int64 *)(v5 + 192);
  if ( v9 == (unsigned __int64 *)(v5 + 192) && v16 >= 1 )
  {
    v9 = RtlpHpLfhContextPrivateHeatMapCreate(v5, v8);
    v208 = v9;
    v189 = 1;
    goto LABEL_15;
  }
  if ( v16 != 2 )
  {
LABEL_15:
    if ( *(_WORD *)(v7 + 4) )
      v7 = RtlpHpLfhPrivateSlotShutdown(v5, v7, v8, 0LL);
    v214 = v7;
    goto LABEL_18;
  }
  if ( *(_WORD *)(v7 + 4) )
    goto LABEL_278;
  v185 = RtlpHpLfhPrivateSlotCreate(v5, v8, v4);
  if ( v185 )
  {
    v7 = v185;
    v214 = v185;
  }
  else
  {
    v189 = 1;
  }
LABEL_18:
  if ( *(_WORD *)(v7 + 4) )
  {
LABEL_278:
    v17 = v9;
    v212 = v9;
    v193 = 0;
    goto LABEL_27;
  }
  v18 = (volatile signed __int32 *)(v7 + 16);
  v193 = 2;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v21 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
      if ( !*v21 )
      {
        if ( v21 )
          *v21 = v18;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v18, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((PVOID)(v7 + 16));
  while ( 1 )
  {
    do
    {
LABEL_27:
      if ( !*(_WORD *)(v7 + 4) )
      {
        _m_prefetchw((const void *)(v7 + 56));
        for ( j = *(_QWORD *)(v7 + 56); ; j = v125 )
        {
          if ( (j & 0xFFF) == 0 )
            goto LABEL_28;
          v125 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 56), j - 1, j);
          if ( j == v125 )
            break;
          v205 = 1;
        }
        v24 = j & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_143;
      }
LABEL_28:
      v22 = *(_QWORD **)(v7 + 24);
      v207 = (unsigned __int64 *)&v206;
      v206 = &v206;
      v23 = &v201;
      v202 = &v201;
LABEL_29:
      v201 = v23;
      while ( v22 != (_QWORD *)(v7 + 24) )
      {
        v24 = (unsigned __int64)v22;
        v22 = (_QWORD *)*v22;
        v25 = *(_WORD *)(v24 + 18);
        v26 = *(unsigned __int16 *)(v24 + 32);
        v27 = v26 + v25;
        if ( v27 )
        {
          if ( v27 != *(unsigned __int16 *)(v24 + 34) )
          {
            if ( v25 && v25 >= (unsigned __int16)v26 )
            {
              v196 = 0LL;
              v28 = _InterlockedExchange((volatile __int32 *)(v24 + 16), 0);
              v29 = *(unsigned __int16 *)(v24 + 34);
              LODWORD(v196) = v28;
              v30 = v28;
              v188 = *(_BYTE *)(v24 + 51) & 1;
              v31 = v24 >> 12;
              v32 = (unsigned __int64)v28 >> 16;
              v33 = (unsigned __int16)(qword_1801CFEC8 ^ *(_WORD *)(v24 + 40) ^ (v24 >> 12));
              v34 = HIWORD(v28);
              v35 = v24
                  + ((unsigned __int64)((unsigned int)qword_1801CFEC8 ^ *(_DWORD *)(v24 + 40) ^ (unsigned int)(v24 >> 12)) >> 16);
              v36 = HIWORD(v28) + *(unsigned __int16 *)(v24 + 32);
              v210 = (unsigned int)v196;
              v199 = v24 >> 12;
              v194 = v33;
              v211 = (unsigned __int64)(unsigned int)v196 >> 16;
              if ( v29 == v36 && *(_BYTE *)(v24 + 39) == 1 )
              {
                memset_thunk_772440563353939046((void *)(v24 + 64), 0, 8LL * ((unsigned int)(v29 + 31) >> 5));
                *(_QWORD *)(v24 + 8LL * (((unsigned int)(v29 + 31) >> 5) - 1) + 64) = (unsigned int)~(0xFFFFFFFFuLL >> ((32 - (v29 & 0x1F)) & 0x1F));
                *(_BYTE *)(v24 + 36) = 0;
                goto LABEL_64;
              }
              v37 = v188;
              if ( *(_BYTE *)(v24 + 39) != 1 || v188 || v34 <= (unsigned int)*(unsigned __int8 *)(v24 + 24) - 8 )
              {
                if ( (_WORD)v196 )
                {
                  v38 = v210;
                  do
                  {
                    v43 = v38 - 1;
                    v44 = v35 + v33 * v43;
                    v38 = *(_WORD *)v44;
                    if ( *(_DWORD *)(v44 + 8) != ((unsigned int)v44 ^ HIDWORD(*(_QWORD *)(a1 + 80)) ^ __ROL4__(*(_DWORD *)v44 ^ *(_QWORD *)(a1 + 80), *(_WORD *)v44)) )
                    {
                      RtlpLogHeapFailure(23, a1, v44, v24, v43, 0LL);
                      NT_ASSERT("0");
                    }
                    if ( v37 )
                    {
                      v45 = v43 >> 5;
                      v46 = *(_QWORD *)(v24 + 8 * v45 + 64);
                      v47 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v43 & 0x1F);
                      *(_QWORD *)(v24 + 8 * v45 + 64) = v47 & v46;
                      v48 = (unsigned int)v46 & (unsigned __int64)~v47;
                    }
                    else
                    {
                      if ( *(_BYTE *)(v24 + 39) > 1u )
                      {
                        v49 = *(_BYTE *)(v24 + 38);
                        v50 = (unsigned int)(v44 - v24) >> 12 >> v49;
                        v51 = (((*(unsigned __int16 *)(v24 + 40) ^ (unsigned __int16)qword_1801CFEC8 ^ (unsigned int)(unsigned __int16)v31)
                              - 1
                              + (_DWORD)v44
                              - (_DWORD)v24) >> 12 >> v49)
                            - v50;
                        v52 = 2 * v50;
                        v53 = (char *)(v52 + v24 + 8LL * *(unsigned __int8 *)(v24 + 24));
                        _m_prefetchw(v53);
                        v54 = &v53[2 * (v51 + 1)];
                        v55 = 0;
                        LODWORD(v56) = -1;
                        if ( v53 < v54 )
                        {
                          do
                          {
                            v57 = _InterlockedDecrement16((volatile signed __int16 *)v53);
                            if ( v57 )
                            {
                              if ( v57 == -1 )
                                --v55;
                            }
                            else
                            {
                              ++v55;
                              if ( (_DWORD)v56 == -1 )
                                v56 = v52 >> 1;
                            }
                            v53 += 2;
                            v52 += 2LL;
                          }
                          while ( v53 < v54 );
                          if ( v55 )
                            RtlpHpLfhContextUpdateFreeCommitCount(a1, v24, (v55 << 12 << *(_BYTE *)(v24 + 38)) / 4096);
                          if ( (_DWORD)v56 != -1 )
                            RtlpHpLfhSubsegmentDecommitPages(a1, v24, (unsigned int)v56, 2LL);
                        }
                        v37 = v188;
                      }
                      v58 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v43 & 0x1F);
                      v59 = v24 + 8LL * (v43 >> 5);
                      _m_prefetchw((const void *)(v59 + 64));
                      v48 = ~v58 & (unsigned int)_InterlockedAnd64((volatile signed __int64 *)(v59 + 64), v58);
                    }
                    if ( !v48 )
                    {
                      RtlpLogHeapFailure(17, *(_QWORD *)a1, v44, v24, v43, 0LL);
                      NT_ASSERT("0");
                    }
                    LOWORD(v31) = v199;
                    v33 = v194;
                  }
                  while ( v38 );
                  v9 = v208;
                  v7 = v214;
LABEL_64:
                  LOWORD(v32) = v211;
                }
              }
              else
              {
                RtlpHpLfhSubsegmentDelayFreeListBatch(a1, v24, v30, v35, v33);
              }
              *(_WORD *)(v24 + 32) += v32;
              v17 = v212;
              v5 = a1;
              v4 = (volatile signed __int8 *)v195;
LABEL_66:
              v23 = v201;
            }
            goto LABEL_67;
          }
          v130 = *(_QWORD **)(v24 + 8);
          if ( v22[1] != v24 )
            goto LABEL_165;
          if ( *v130 != v24 )
            goto LABEL_165;
          *v130 = v22;
          v22[1] = v130;
          v131 = v201;
          if ( (_QWORD **)v201[1] != &v201 )
            goto LABEL_165;
          *(_QWORD *)v24 = v201;
          *(_QWORD *)(v24 + 8) = &v201;
          v23 = (_QWORD *)v24;
          v131[1] = v24;
          goto LABEL_29;
        }
        v128 = *(_QWORD **)(v24 + 8);
        if ( v22[1] != v24 )
          goto LABEL_165;
        if ( *v128 != v24 )
          goto LABEL_165;
        *v128 = v22;
        v22[1] = v128;
        v129 = v207;
        if ( (_QWORD **)*v207 != &v206 )
          goto LABEL_165;
        *(_QWORD *)(v24 + 8) = v207;
        *(_QWORD *)v24 = &v206;
        *v129 = v24;
        v23 = v201;
        v207 = (unsigned __int64 *)v24;
      }
      if ( v23 != &v201 )
      {
        v24 = (unsigned __int64)v23;
        RtlpHpLfhSubsegmentDelayFreeProcess(v5, v23, 1LL);
        goto LABEL_66;
      }
      v24 = 0LL;
LABEL_67:
      if ( v23 != &v201 )
      {
        v60 = *(_QWORD **)(v7 + 32);
        *v60 = v23;
        v61 = v202;
        *(_QWORD *)(v7 + 32) = v202;
        *v61 = v7 + 24;
        v201[1] = v60;
      }
      if ( v206 != &v206 )
      {
        v62 = *(_QWORD **)(v7 + 32);
        *v62 = v206;
        v63 = v207;
        *(_QWORD *)(v7 + 32) = v207;
        *v63 = v7 + 24;
        v206[1] = v62;
      }
      if ( v24 )
      {
        v64 = *(unsigned __int16 *)(v24 + 32);
        v65 = 4096;
        if ( (unsigned __int16)v64 > 0x1000u )
        {
          *(_WORD *)(v24 + 32) = v64 - 4096;
LABEL_74:
          v66 = v65;
          *(_QWORD *)(v7 + 56) = (v65 - 1LL) ^ ((v65 - 1LL) ^ v24) & 0xFFFFFFFFFFFFF000uLL;
        }
        else
        {
          *(_WORD *)(v24 + 32) = 0;
          v65 = v64;
          if ( v64 > 1 )
            goto LABEL_74;
          v66 = v64;
        }
        v67 = v193;
        if ( v193 )
        {
          v68 = (_RTL_SRWLOCK *)(v7 + 16);
          if ( v193 == 2 )
            RtlReleaseSRWLockExclusive(v68);
          else
            RtlReleaseSRWLockShared(v68);
          v67 = 0;
          v193 = 0;
        }
        v69 = v195;
        v70 = *(unsigned __int8 *)v195 >> 1;
        if ( (unsigned int)v70 < 0x7E )
        {
          v71 = *((unsigned __int16 *)v17 + v70);
          v72 = (volatile signed __int16 *)v17 + v70;
          while ( 1 )
          {
            v73 = v66 + v71;
            if ( v66 + v71 >= 0xFFFF )
              v73 = 0xFFFF;
            if ( v73 == v71 )
              break;
            if ( v17 != (unsigned __int64 *)(v5 + 192) )
            {
              *v72 = v73;
              break;
            }
            v74 = (unsigned __int16)_InterlockedCompareExchange16(v72, v73, v71);
            if ( v74 == v71 )
              break;
            v71 = v74;
          }
          v69 = v195;
        }
        if ( v9 == v17 )
        {
LABEL_88:
          if ( v67 )
          {
            v137 = (_RTL_SRWLOCK *)(v7 + 16);
            if ( v67 == 2 )
              RtlReleaseSRWLockExclusive(v137);
            else
              RtlReleaseSRWLockShared(v137);
            v193 = 0;
          }
          v75 = NtCurrentTeb();
          v76 = 0x100000001LL;
          v77 = qword_1801CFEC8 ^ *(_DWORD *)(v24 + 40) ^ (v24 >> 12);
          v78 = v75->RngState[0];
          v79 = v75->RngState[1];
          v80 = v79 + v78;
          if ( !*(_WORD *)(v7 + 4) )
          {
            v81 = *(unsigned __int8 *)(v24 + 24);
            v82 = v24 + 64;
            v83 = (unsigned __int16)v77;
            v194 = qword_1801CFEC8 ^ *(_DWORD *)(v24 + 40) ^ (v24 >> 12);
            if ( a3 >= (unsigned __int16)v77 )
              v76 = 1LL;
            LODWORD(v208) = (unsigned __int16)v77;
            v84 = v78 ^ v79;
            v85 = BYTE4(v80);
            v75->RngState[1] = __ROL8__(v84, 37);
            v75->RngState[0] = v84 ^ (v84 << 16) ^ __ROL8__(v78, 24);
            v86 = *(_BYTE *)(v24 + 39);
            v87 = *(unsigned __int8 *)(v24 + 50);
            v88 = (volatile signed __int64 *)(v82 + 8 * ((unsigned int)(v81 - 8) - 1LL));
            v89 = (volatile signed __int64 *)(v82 + 8LL * *(unsigned __int8 *)(v24 + 36));
LABEL_93:
            v90 = *v89;
            LODWORD(v91) = *v89;
            do
            {
              LODWORD(v91) = ~(_DWORD)v91;
              _RDX = (unsigned int)v91;
              if ( !(_DWORD)v91 )
              {
                if ( v89 == v88 )
                  v89 = (volatile signed __int64 *)(v24 + 64);
                else
                  ++v89;
                goto LABEL_93;
              }
              if ( (qword_1801CFEE8 & 4) != 0 )
              {
                _RCX = 1LL << ((unsigned __int16)(v85 * __popcnt((unsigned int)v91)) >> 8);
                __asm
                {
                  pdep    rdx, rcx, rdx
                  tzcnt   rdx, rdx
                }
                v95 = v76 << _RDX;
              }
              else
              {
                if ( v87 != 32 || v89 == v88 )
                {
                  __asm { tzcnt   rcx, rdx }
                  _BitScanReverse64((unsigned __int64 *)&v91, (unsigned int)v91);
                  v209 = v91;
                  LODWORD(v91) = v91 - _RCX + 1;
                  if ( v87 < (unsigned int)v91 )
                    LODWORD(v91) = v87;
                  v85 = _RCX + ((unsigned int)(v91 * v85) >> 8);
                  _RDX = __ROR8__(_RDX, v85);
                  __asm { tzcnt   rdx, rdx }
                  LODWORD(_RDX) = v85 + _RDX;
                }
                else
                {
                  _RAX = (unsigned int)__ROR4__(v91, v85);
                  __asm { tzcnt   rdx, rax }
                  LODWORD(_RDX) = ((_BYTE)v85 + (_BYTE)_RDX) & 0x1F;
                }
                v95 = v76 << _RDX;
              }
              v96 = v90;
              v91 = _InterlockedCompareExchange64(v89, v90 | v95, v90);
              v90 = v91;
            }
            while ( v91 != v96 );
            v97 = _RDX + 4 * ((_DWORD)v89 - v82);
            *(_BYTE *)(v24 + 36) = v97 >> 5;
            LODWORD(v199) = v97;
            v98 = HIWORD(v194) + v97 * v83;
            if ( v86 <= 1u )
            {
              v99 = a1;
              if ( v97 > *(unsigned __int16 *)(v24 + 48) )
                RtlpHpLfhSubsegmentPrefetch(a1, v24, v98, v83);
              goto LABEL_104;
            }
            v110 = *(_BYTE *)(v24 + 38);
            LODWORD(v111) = 0;
            v90 = v24 >> 12;
            v112 = 0;
            LOWORD(v90) = qword_1801CFEC8 ^ *(_WORD *)(v24 + 40) ^ (v24 >> 12);
            v113 = v24 + 8LL * *(unsigned __int8 *)(v24 + 24);
            v114 = (unsigned int)v98 >> 12 >> v110;
            v204 = 0;
            v200 = 0;
            v210 = v90;
            v192[0] = -1;
            v196 = 2 * v114;
            v115 = (signed __int16 *)(2 * v114 + v113);
            v194 = 0;
            _m_prefetchw(v115);
            v116 = 0;
            v190 = -1;
            v117 = (((unsigned int)v98 + (unsigned __int16)v90 - 1) >> 12 >> v110) - (unsigned int)v114 + 1;
            if ( v115 >= &v115[v117] )
            {
              v99 = a1;
              goto LABEL_104;
            }
            v118 = &v115[v117];
            do
            {
              while ( 1 )
              {
                v119 = *v115;
                while ( v119 > 0 )
                {
                  v120 = v119;
                  v119 = _InterlockedCompareExchange16(v115, v119 + 1, v119);
                  if ( v120 == v119 )
                  {
                    v121 = v190;
                    v122 = v196;
                    goto LABEL_133;
                  }
                }
                if ( v112 )
                  break;
                v194 = 1;
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v24 + 56));
                v112 = 1;
              }
              v121 = v190;
              v122 = v196;
              if ( v119 )
              {
                ++v116;
                v111 = v196 >> 1;
                if ( v190 == -1 )
                  v121 = v196 >> 1;
                v190 = v121;
              }
              else
              {
                --v116;
              }
              *v115 = v119 + 1;
LABEL_133:
              ++v115;
              v196 = v122 + 2;
            }
            while ( v115 < v118 );
            v83 = (unsigned int)v208;
            v123 = (unsigned int)v199;
            v99 = a1;
            if ( v116 )
            {
              RtlpHpLfhContextUpdateFreeCommitCount(a1, v24, (v116 << 12 << *(_BYTE *)(v24 + 38)) / 4096);
              v121 = v190;
              v112 = v194;
            }
            if ( v121 == -1 )
            {
              if ( v112 )
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v24 + 56));
              goto LABEL_104;
            }
            v138 = *(_BYTE *)(v24 + 38);
            v139 = *(_QWORD *)(a1 + 24);
            v140 = *(_QWORD *)a1;
            v204 = v111 - v121 + 1;
            v141 = v204 << 12 << v138;
            v191 = v121 << 12 << v138;
            v142 = (__int64 (__fastcall *)(int, __int64, __int64, int *))(a1 ^ RtlpHpHeapGlobals ^ v139);
            v143 = v24 + v191;
            v192[0] = -1;
            if ( v142 == RtlpHpSegLfhVsCommit )
            {
              v144 = *(_QWORD *)v140;
              v145 = *(_QWORD *)v140;
              v203 = 0;
              v146 = v143 & v145;
              if ( RtlpHpHeapGlobals ^ v140 ^ *(_QWORD *)(v146 + 16) ^ v146
                || (v147 = *(_BYTE *)(v140 + 8),
                    v148 = v146 + 32 * ((unsigned __int64)(unsigned int)(v143 - v146) >> v147),
                    v149 = -32LL * *(unsigned __int8 *)(v148 + 26) + v148,
                    v150 = *(_BYTE *)(v149 + 24),
                    (v150 & 3) != 3)
                || v146 + ((__int64)(v149 - v146) >> 5 << v147) != v143 && (v150 & 0xCu) < 8 )
              {
                v149 = 0LL;
              }
              v151 = RtlpHpSegPageRangeCommit(
                       v140,
                       v149,
                       ((_DWORD)v143
                      - ((unsigned int)v149 & (unsigned int)v144)
                      - (unsigned int)((v149 - (v149 & v144)) >> 5 << *(_BYTE *)(v140 + 8))) >> 12,
                       v141 >> 12,
                       0,
                       &v203);
              if ( v151 >= 0 )
                v200 = v203 << 12;
              v99 = a1;
            }
            else
            {
              v151 = v142(v140, v143, v141, &v200);
            }
            if ( v151 < 0 )
            {
              RtlpHpLfhSubsegmentDecBlockCounts(v99, v24, (unsigned int)v98, (unsigned __int16)v210);
              RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v24 + 56));
              v100 = 0LL;
              if ( (_DWORD)v123 == -1 )
                goto LABEL_110;
              _InterlockedAnd64(
                (volatile signed __int64 *)(v24 + 8 * (v123 >> 5) + 64),
                __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v123 & 0x1F));
            }
            else
            {
              RtlpHpLfhSubsegmentIncBlockCounts(v99, v24, v191, v141, &v204, 1, v192);
              v152 = 3LL;
              if ( !v200 )
                v152 = 2LL;
              RtlpHpLfhSubsegmentPrefetchRange(v24, v191, v141, v152);
LABEL_104:
              v100 = v24 + v98;
              if ( (a4 & 2) != 0 )
                RtlHeapZero(v100, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
              if ( a3 < v83 )
              {
                v101 = v83 - a3;
                if ( v83 - a3 == 1 )
                  v101 = 0x8000;
                *(_WORD *)(v83 + v100 - 2) = v101;
              }
LABEL_110:
              if ( v100 )
              {
LABEL_111:
                v7 = v214;
LABEL_112:
                v4 = (volatile signed __int8 *)v195;
                goto LABEL_113;
              }
            }
            v161 = *(_QWORD *)(v24 + 16);
            do
            {
              v199 = v161;
              v162 = BYTE6(v161);
              v196 = v161;
              if ( BYTE6(v161) == 1 )
                v162 = 2;
              ++WORD1(v199);
              BYTE6(v199) = v162;
              v163 = v199;
              v164 = (unsigned __int64)*(unsigned __int16 *)(v24 + 44) << 6;
              v165 = v161;
              v161 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 16), v199, v161);
            }
            while ( v165 != v161 );
            if ( !*(_BYTE *)(v164 + v99 + 92) )
            {
              *(_BYTE *)(v164 + v99 + 92) = 1;
              if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v163, v164, 2LL, v90) )
                RtlpHpEnvCompactionSchedule();
            }
            if ( BYTE6(v196) == 1 )
            {
              v166 = v99 + (WORD2(v196) << 6);
              _m_prefetchw((const void *)(v166 + 8));
              v167 = *(_QWORD *)(v166 + 8);
              v168 = *(_QWORD *)(v24 + 24);
              *(_QWORD *)(v24 + 24) = v168 & 0xFFF | (v167 - (v167 & 0xFFF));
              v170 = v167;
              v169 = _InterlockedCompareExchange64((volatile signed __int64 *)(v166 + 8), v167 & 0xFFF | v24, v167);
              if ( v170 != v169 )
              {
                do
                {
                  v171 = v169;
                  *(_QWORD *)(v24 + 24) = v168 ^ (v169 ^ v168) & 0xFFFFFFFFFFFFF000uLL;
                  v169 = _InterlockedCompareExchange64((volatile signed __int64 *)(v166 + 8), v24 | v169 & 0xFFF, v169);
                }
                while ( v169 != v171 );
              }
            }
            goto LABEL_111;
          }
          v172 = *(unsigned __int8 *)(v24 + 24);
          v173 = (unsigned __int16)v77;
          v215 = ((unsigned int)qword_1801CFEC8 ^ *(_DWORD *)(v24 + 40) ^ (unsigned int)(v24 >> 12)) >> 16;
          if ( a3 >= (unsigned __int16)v77 )
            v76 = 1LL;
          v174 = v78 ^ v79;
          v175 = BYTE4(v80);
          v75->RngState[1] = __ROL8__(v174, 37);
          v75->RngState[0] = v174 ^ (v174 << 16) ^ __ROL8__(v78, 24);
          v176 = (_DWORD *)(v24 + 64 + 8LL * *(unsigned __int8 *)(v24 + 36));
          while ( *v176 == -1 )
          {
            if ( v176 == (_DWORD *)(v24 + 64 + 8 * ((unsigned int)(v172 - 8) - 1LL)) )
              v176 = (_DWORD *)(v24 + 64);
            else
              v176 += 2;
          }
          _RAX = 1LL << ((unsigned __int16)(v175 * __popcnt((unsigned int)~*v176)) >> 8);
          __asm
          {
            pdep    rcx, rax, rcx
            tzcnt   rdx, rcx
          }
          *(_QWORD *)v176 |= v76 << _RDX;
          v180 = _RDX + 4 * ((_DWORD)v176 - (v24 + 64));
          *(_BYTE *)(v24 + 36) = v180 >> 5;
          v100 = v24 + v215 + v180 * (unsigned int)v173;
          if ( (a4 & 2) != 0 )
            RtlHeapZero(v24 + v215 + v180 * (unsigned int)v173, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( a3 < (unsigned int)v173 )
          {
            v181 = v173 - a3;
            if ( (_DWORD)v173 - a3 == 1 )
              v181 = 0x8000;
            *(_WORD *)(v173 + v100 - 2) = v181;
          }
          goto LABEL_112;
        }
        RtlpHpLfhHeatMapUpdate(v5, v9, v69, v65);
LABEL_143:
        v67 = v193;
        goto LABEL_88;
      }
      RtlpHpLfhOwnerRunMaintenance(v5, v7, &v197, 0LL);
    }
    while ( *(_BYTE *)(v7 + 1) );
    if ( v193 )
    {
      v132 = (_RTL_SRWLOCK *)(v7 + 16);
      if ( v193 == 2 )
        RtlReleaseSRWLockExclusive(v132);
      else
        RtlReleaseSRWLockShared(v132);
      v193 = 0;
    }
    RtlpHpLfhContextSlotStandbyProcess(v5, 0LL);
    if ( v17 == v9 )
    {
      v133 = v189;
    }
    else
    {
      v133 = RtlpHpLfhHeatMapQuery(v5, v17, v4);
      if ( v133 >= 1 )
        v133 = 1;
    }
    Subsegment = RtlpHpLfhBucketGetSubsegment(v5, v195, (unsigned int)v133);
    if ( Subsegment )
    {
      v4 = (volatile signed __int8 *)v195;
      goto LABEL_194;
    }
    v135 = v133;
    v4 = (volatile signed __int8 *)v195;
    Subsegment = RtlpHpLfhSubsegmentCreate(v5, (unsigned __int8 *)v195, v135);
    if ( !Subsegment )
      break;
LABEL_194:
    if ( !*(_WORD *)(v7 + 4) )
    {
      v193 = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v7 + 16));
    }
    if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(v5, v7, Subsegment, 0, 0) )
    {
      if ( *(_WORD *)(Subsegment + 32) == *(_WORD *)(Subsegment + 34) )
      {
        v136 = v197;
        if ( *(unsigned __int64 **)(v197 + 8) != &v197 )
          goto LABEL_165;
        *(_QWORD *)Subsegment = v197;
        *(_QWORD *)(Subsegment + 8) = &v197;
        *(_QWORD *)(v136 + 8) = Subsegment;
        v197 = Subsegment;
      }
      else
      {
        v186 = v198;
        if ( (unsigned __int64 *)*v198 != &v197 )
LABEL_165:
          __fastfail(3u);
        *(_QWORD *)(Subsegment + 8) = v198;
        *(_QWORD *)Subsegment = &v197;
        *v186 = Subsegment;
        v198 = (unsigned __int64 *)Subsegment;
      }
    }
  }
  v100 = 0LL;
LABEL_113:
  if ( v193 )
  {
    v187 = (_RTL_SRWLOCK *)(v7 + 16);
    if ( v193 == 2 )
      RtlReleaseSRWLockExclusive(v187);
    else
      RtlReleaseSRWLockShared(v187);
  }
  if ( v205 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, v4);
  v102 = (unsigned __int64 *)v197;
  if ( (unsigned __int64 *)v197 != &v197 )
  {
    do
    {
      v103 = (__int64)v102;
      v102 = (unsigned __int64 *)*v102;
      if ( *(_WORD *)(v103 + 32) == *(_WORD *)(v103 + 34) )
      {
        v104 = *(unsigned __int64 ***)(v103 + 8);
        if ( v102[1] != v103 || *v104 != (unsigned __int64 *)v103 )
          goto LABEL_165;
        v105 = v195;
        *v104 = v102;
        v102[1] = (unsigned __int64)v104;
        RtlpHpLfhSubsegmentFree(a1, v103, v105);
      }
      else if ( (*(_BYTE *)(v103 + 51) & 1) != 0 )
      {
        *(_BYTE *)(v103 + 51) &= ~1u;
      }
    }
    while ( v102 != &v197 );
    if ( (unsigned __int64 *)v197 != &v197 )
    {
      v106 = (_RTL_SRWLOCK *)v195;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v195 + 16));
      v108 = v197;
      do
      {
        v107 = *(_QWORD *)v108;
        if ( *(unsigned __int64 **)(v108 + 8) != &v197 || *(_QWORD *)(v107 + 8) != v108 )
          goto LABEL_165;
        v197 = *(_QWORD *)v108;
        *(_QWORD *)(v107 + 8) = &v197;
        RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)v106, v108, 0, 0);
        v108 = v197;
      }
      while ( (unsigned __int64 *)v197 != &v197 );
      RtlReleaseSRWLockExclusive(v106 + 2);
    }
  }
  return v100;
}
