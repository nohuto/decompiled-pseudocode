/*
 * XREFs of ExFreeHeapPool @ 0x1402B0E50
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x1402C2E9C (ExAllocateContiguousHeapPool.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     PspReturnResourceQuota @ 0x14024B468 (PspReturnResourceQuota.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpFreePoolChecks @ 0x1402B0D90 (ExpFreePoolChecks.c)
 *     RtlpHpFreeHeap @ 0x1402B2660 (RtlpHpFreeHeap.c)
 *     MmDeterminePoolType @ 0x1402B2B50 (MmDeterminePoolType.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402B2BA0 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     ExpPoolTrackerReturnLimit @ 0x1402B2E60 (ExpPoolTrackerReturnLimit.c)
 *     RtlpHpVsContextFree @ 0x1402B2F20 (RtlpHpVsContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1402B381C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     ExIsSpecialPoolAddress @ 0x1402B4928 (ExIsSpecialPoolAddress.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402BC4B0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402C27C8 (RtlpHpVaMgrCtxQuery.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     EtwTracePool @ 0x1403AA0C8 (EtwTracePool.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     ExpCheckForWorker @ 0x1403D3B6C (ExpCheckForWorker.c)
 *     RtlpHpLargeFree @ 0x140420C64 (RtlpHpLargeFree.c)
 *     ExpCheckForResource @ 0x140491810 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x140499BEC (ExpCheckForLookaside.c)
 *     KeCheckForTimer @ 0x1404CEC7C (KeCheckForTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C (RtlpHpLfhThreadDataInitializeSet.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B744E0 (ExpPoolFlagsToPoolType.c)
 *     ViFreeTrackedPool @ 0x140BA8FD0 (ViFreeTrackedPool.c)
 *     VfPtFreePoolNotification @ 0x140BA96EC (VfPtFreePoolNotification.c)
 */

unsigned __int64 __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // r12
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // r13
  char v9; // al
  ULONG_PTR v10; // rsi
  char v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // r14
  __int16 v21; // ax
  __int16 v22; // r15
  volatile CCHAR v23; // al
  __int64 v24; // rax
  int v25; // r9d
  __int64 v26; // r11
  unsigned int v27; // edx
  unsigned int v28; // r10d
  int v29; // eax
  __int64 v30; // r8
  unsigned __int8 v31; // di
  unsigned int k; // edx
  char *v33; // r8
  __int64 *i; // rax
  int v35; // r9d
  volatile signed __int64 *v36; // rdx
  volatile signed __int64 *v37; // rax
  ULONG_PTR v38; // r10
  signed __int64 v39; // rcx
  ULONG_PTR v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rax
  ULONG_PTR v44; // rdx
  char v45; // r10
  ULONG_PTR v46; // r8
  ULONG_PTR v47; // r8
  char v48; // r11
  ULONG_PTR v49; // rdi
  __int64 v50; // rsi
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rbx
  unsigned __int64 result; // rax
  unsigned int v55; // eax
  unsigned int v56; // ecx
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // r8
  char v64; // cl
  int v65; // edx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rtt
  __int64 v68; // r9
  signed __int64 v69; // rax
  __int64 v70; // r10
  signed __int64 v71; // rtt
  unsigned __int64 v72; // r8
  unsigned int v73; // r9d
  volatile signed __int64 *v74; // rdx
  volatile signed __int64 *v75; // rax
  __int64 v76; // r10
  ULONG_PTR v77; // rbx
  signed __int64 v78; // rcx
  __int64 v79; // r11
  signed __int64 v80; // rax
  unsigned __int64 v81; // r9
  signed __int64 v82; // rbx
  signed __int64 v83; // rtt
  __int64 v84; // rsi
  unsigned __int64 v85; // rdi
  int v86; // r8d
  __int64 v87; // r11
  unsigned int v88; // edx
  unsigned int v89; // r10d
  int v90; // eax
  __int64 v91; // r9
  unsigned __int64 v92; // rcx
  __int64 v93; // rcx
  __int16 v94; // r14
  ULONG_PTR v95; // rdx
  __int16 v96; // ax
  unsigned int v97; // esi
  ULONG_PTR v98; // rbx
  ULONG_PTR v99; // rdi
  struct _KPROCESS *v100; // rdi
  __int64 v101; // r14
  ULONG_PTR v102; // r15
  char v103; // r13
  unsigned __int64 *v104; // r12
  unsigned __int64 v105; // r14
  unsigned __int64 v106; // rax
  unsigned __int64 *v107; // r8
  unsigned __int64 v108; // rdx
  ULONG_PTR v109; // r8
  unsigned __int64 v110; // r9
  signed __int64 v111; // rdx
  bool v112; // zf
  signed __int64 v113; // rax
  signed __int64 v114; // rsi
  bool v115; // cc
  signed __int64 v116; // rsi
  ULONG_PTR v117; // r14
  unsigned __int8 v118; // r15
  int v119; // r10d
  unsigned int v120; // edx
  char *v121; // rcx
  unsigned int v122; // eax
  unsigned int v123; // r14d
  ULONG_PTR v124; // rdi
  __int64 v125; // r9
  ULONG_PTR v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r10
  signed __int64 v129; // rcx
  signed __int64 v130; // rdx
  signed __int32 v131; // eax
  signed __int32 v132; // ett
  int v133; // eax
  __int64 v134; // rax
  int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rax
  unsigned __int64 v138; // rtt
  __int64 v139; // r8
  __int64 *v140; // r13
  ULONG_PTR v141; // r12
  unsigned __int64 *v142; // r14
  unsigned __int64 v143; // r15
  unsigned __int64 v144; // rax
  __int64 v145; // r8
  ULONG_PTR v146; // rdx
  ULONG_PTR v147; // r8
  unsigned __int64 v148; // r9
  signed __int64 v149; // rdx
  signed __int64 v150; // rax
  signed __int64 v151; // rsi
  signed __int64 BugCheckParameter4; // rsi
  unsigned __int64 v153; // rax
  volatile signed __int64 *v154; // rcx
  unsigned __int64 v155; // rtt
  __int64 v156; // r8
  __int64 v157; // rcx
  volatile CCHAR v158; // al
  volatile CCHAR v159; // al
  volatile CCHAR v160; // al
  int v161; // edx
  char *v162; // r11
  signed __int64 v163; // rax
  unsigned __int64 v164; // r10
  signed __int64 v165; // rbx
  signed __int64 v166; // rtt
  int v167; // edx
  __int64 v168; // rdx
  __int64 v169; // rax
  __int64 v170; // r10
  __int64 v171; // rax
  __int64 v172; // rcx
  __int64 v173; // rdx
  __int64 v174; // rdx
  __int64 v175; // r8
  _BYTE *v176; // r8
  int v177; // ecx
  _BYTE *j; // r8
  __int64 v179; // rdi
  _WORD *v180; // rbx
  ULONG_PTR v181; // rsi
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v183; // rdx
  unsigned __int64 v184; // r14
  _BYTE *v185; // rbx
  char v186[8]; // [rsp+30h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-71h]
  __int64 v188; // [rsp+40h] [rbp-69h]
  int v189; // [rsp+48h] [rbp-61h] BYREF
  int v190; // [rsp+4Ch] [rbp-5Dh] BYREF
  _DWORD v191[2]; // [rsp+50h] [rbp-59h] BYREF
  ULONG_PTR v192; // [rsp+58h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v194[4]; // [rsp+78h] [rbp-31h]
  __int128 v195; // [rsp+88h] [rbp-21h]
  __int128 v196; // [rsp+98h] [rbp-11h] BYREF
  __int128 v197; // [rsp+A8h] [rbp-1h]
  __int64 retaddr; // [rsp+108h] [rbp+5Fh]
  ULONG_PTR v199; // [rsp+110h] [rbp+67h] BYREF
  __int64 v200; // [rsp+118h] [rbp+6Fh] BYREF
  char v201; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 SchedulingGroup; // [rsp+128h] [rbp+7Fh]

  v199 = BugCheckParameter1;
  v4 = 0;
  v5 = BugCheckParameter1;
  v195 = 0LL;
  LOWORD(v195) = 259;
  BYTE2(v195) = 0;
  if ( (_WORD)BugCheckParameter1 )
  {
    v6 = 0;
LABEL_3:
    v194[0] = 0x100000;
    v194[1] = 0x1000000;
    v7 = (unsigned int)v194[v6];
    v8 = (RtlpHpHeapGlobals ^ *(_QWORD *)((v5 & ~(v7 - 1)) + 0x10) ^ v5 & ~(v7 - 1)) - 192LL * v6 - 320;
    goto LABEL_4;
  }
  v137 = RtlCSparseBitmapBitmaskRead(&dword_140E68310, 2 * ((BugCheckParameter1 - qword_140E68308) >> 20));
  if ( v137 )
  {
    v6 = v137 - 1;
    if ( v6 != 2 )
      goto LABEL_3;
  }
  v196 = 0LL;
  v197 = 0LL;
  RtlpHpVaMgrCtxQuery(&unk_140E68358, v5, &v196);
  v8 = *(_QWORD *)v197;
LABEL_4:
  v200 = v8;
  if ( !v8 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, v5, 0LL);
  if ( ExpSpecialAllocations )
  {
    for ( i = qword_140EEEC40; (__int64)i < (__int64)qword_140EEEC60; ++i )
    {
      if ( v8 == *i )
      {
        _InterlockedDecrement(&ExpSpecialAllocations);
        v179 = MmDeterminePoolType(v5, a2, a3, a4);
        v180 = (_WORD *)(v5 & 0xFFFFFFFFFFFFF000uLL);
        if ( byte_140FCDC28 )
        {
          if ( (unsigned __int64)v180 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v5 & 0xFFFFFFFFFFFFF000uLL, 0LL);
          if ( v180 + 2048 < v180 )
            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v5 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL);
          memset_0((void *)(KasaniShadow + ((unsigned __int64)(v180 + 0x400000000000LL) >> 3)), 0, 0x200uLL);
        }
        v181 = 4096 - (unsigned int)(v5 & 0xFFF);
        ExpFreePoolChecks(v5, *(_DWORD *)((v5 & 0xFFFFFFFFFFFFF000uLL) + 4), v181, 128, v5);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > (unsigned __int8)(((v179 & 0x100) == 0) + 1) )
          KeBugCheckEx(0xC1u, CurrentIrql, 0x100uLL, v5, 0x31uLL);
        v183 = *v180 & 0x1FFF;
        v184 = (v183 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v184 != v181 )
          KeBugCheckEx(0xC1u, v5, *v180 & 0x1FFF, v181, 0x21uLL);
        v176 = v180 + 8;
        v177 = HIWORD(*(_DWORD *)v180);
        if ( (*(_DWORD *)v180 & 0x4000) != 0 )
          v176 = v180 + 12;
        while ( (unsigned __int64)v176 < v5 )
        {
          if ( *v176 != (_BYTE)v177 )
            KeBugCheckEx(0xC1u, v5, (ULONG_PTR)v176, *(unsigned int *)v180, 0x23uLL);
          ++v176;
        }
        for ( j = (_BYTE *)(v183 + v5); (unsigned __int64)j < ((v5 + 4095) & 0xFFFFFFFFFFFFF000uLL); ++j )
        {
          if ( *j != (_BYTE)v177 )
            KeBugCheckEx(0xC1u, v5, (ULONG_PTR)j, *(unsigned int *)v180, 0x24uLL);
        }
        if ( (*(_DWORD *)v180 & 0x4000) != 0 )
          ViFreeTrackedPool(v5, v183);
        v84 = *(unsigned int *)((v5 & 0xFFFFFFFFFFFFF000uLL) + 4);
        v189 = 0;
        LOBYTE(v199) = 0;
        v201 = 0;
        if ( (_DWORD)v84 == PoolHitTag )
          __debugbreak();
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
          && (int)ExpPoolFlagsToPoolType(v179, v179 & 0x10, (unsigned int)&v189, (unsigned int)&v199, (__int64)&v201) >= 0 )
        {
          v167 = v189;
          if ( (_BYTE)v199 )
          {
            v167 = v189 | 8;
            v189 |= 8u;
          }
          EtwTracePool(3618, v167, v84, v5, v184);
        }
        v85 = v179 & 0xFFFFFFFFFFFFFFFBuLL;
        v86 = PoolTrackTableMask;
        v87 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
        v88 = PoolTrackTableMask & ((40543 * v84) ^ ((unsigned __int64)(40543 * v84) >> 32));
        v89 = v88;
        while ( 1 )
        {
          v90 = *(_DWORD *)(v87 + 80LL * v88);
          v91 = v87 + 80LL * v88;
          if ( v90 == (_DWORD)v84 )
            break;
          if ( v90 || (v135 = *(_DWORD *)(PoolTrackTable + 80LL * v88)) == 0 )
          {
            v88 = v86 & (v88 + 1);
            if ( v88 == v89 )
            {
              ExpRemovePoolTrackerExpansion((unsigned int)v84, v184, v85, v91);
              return RtlpHpFreeHeap(v8, v5 & 0xFFFFFFFFFFFFF000uLL);
            }
          }
          else
          {
            *(_DWORD *)v91 = v135;
            v136 = *(_QWORD *)(PoolTrackTable + 80LL * v88 + 72);
            if ( v136 )
              *(_QWORD *)(v91 + 72) = v136;
          }
        }
        ExpPoolTrackerReturnLimit((v85 & 0x100) == 0, v184, v87 + 80LL * v88);
        return RtlpHpFreeHeap(v8, v5 & 0xFFFFFFFFFFFFF000uLL);
      }
    }
  }
  if ( (v5 & 0xFFF) != 0 )
  {
    v9 = *(_BYTE *)(v5 - 13);
    v10 = v5 - 16;
    SchedulingGroup = v5 - 16;
    if ( (v9 & 8) != 0 )
    {
      v92 = v5 - 16;
      if ( (v9 & 4) != 0 )
        v92 = v10 - 16LL * (unsigned __int8)*(_WORD *)v10;
      v93 = ExpPoolQuotaCookie ^ *(_QWORD *)(v92 + 8) ^ v92;
      if ( v93 && v93 != -1 && (!ExpSpecialAllocations || !(unsigned int)ExIsSpecialPoolAddress(v5)) )
      {
        if ( v5 >= 0xFFFF800000000000uLL && byte_140E389A8[((v5 >> 39) & 0x1FF) - 256] == 5 )
          v94 = 256;
        else
          v94 = 64;
        v95 = v5 - 16;
        if ( (*(_BYTE *)(v10 + 3) & 4) != 0 )
          v95 = -16LL * (unsigned __int8)*(_WORD *)v10 + v10;
        v96 = *(_WORD *)(v95 + 2);
        v97 = *(_DWORD *)(v95 + 4);
        v98 = 16LL * (unsigned __int8)v96;
        if ( (v96 & 0x800) != 0 )
        {
          v99 = *(_QWORD *)(v95 + 8) ^ v95;
          *(_QWORD *)(v95 + 8) = ExpPoolQuotaCookie ^ v95;
          v100 = (struct _KPROCESS *)(ExpPoolQuotaCookie ^ v99);
          if ( v100 )
          {
            if ( v100 != (struct _KPROCESS *)-1LL )
            {
              if ( (unsigned __int64)v100 < 0xFFFF800000000000uLL || (v100->Header.Type & 0x7F) != 3 )
              {
                if ( v95 )
                  v4 = v97;
                KeBugCheckEx(0xC2u, 0xDuLL, v5, v4, (ULONG_PTR)v100);
              }
              v101 = v94 & 0x100;
              if ( v100 != PsInitialSystemProcess )
              {
                SchedulingGroup = (unsigned __int64)v100[1].SchedulingGroup;
                v102 = v101 != 0;
                v192 = v102 << 7;
                v103 = PspResourceFlags[8 * v102];
                v104 = (unsigned __int64 *)(SchedulingGroup + (v102 << 7));
                _m_prefetchw(v104);
                v105 = *v104;
                v106 = v104[8];
                if ( v104[10] )
                {
                  if ( v106 > v105 )
                  {
                    v107 = (unsigned __int64 *)&qword_140F05848[7 * v102];
                    v108 = *v107;
                    if ( v106 - v105 > *v107 )
                    {
                      if ( v108 > v98 )
                        v108 = v98;
                      v138 = v104[8];
                      if ( v138 == _InterlockedCompareExchange64((volatile signed __int64 *)v104 + 8, v106 - v108, v106)
                        && _InterlockedExchangeAdd64((volatile signed __int64 *)v104 + 9, v108) + v108 > *v107 )
                      {
                        v139 = _InterlockedExchange64((volatile __int64 *)v104 + 9, 0LL);
                        if ( v139 )
                          PspReturnResourceQuota(v102, (__int64)v104, v139, 0);
                      }
                    }
                  }
                }
                v109 = v98;
                while ( 1 )
                {
                  do
                  {
                    v110 = v105;
                    if ( v98 < v105 )
                      v110 = v98;
                    v111 = 0LL;
                    if ( v98 < v105 )
                      v111 = v105 - v98;
                    v113 = _InterlockedCompareExchange64((volatile signed __int64 *)v104, v111, v105);
                    v112 = v105 == v113;
                    v105 = v113;
                  }
                  while ( !v112 );
                  v98 -= v110;
                  if ( !v98 )
                    break;
                  if ( (__int64 *)SchedulingGroup == &PspSystemQuotaBlock )
                    KeBugCheckEx(0x21u, (ULONG_PTR)v100, v102, v109, v98);
                  SchedulingGroup = (unsigned __int64)&PspSystemQuotaBlock;
                  v104 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v192);
                  _m_prefetchw((char *)&PspSystemQuotaBlock + v192);
                  v105 = *(__int64 *)((char *)&PspSystemQuotaBlock + v192);
                }
                if ( (v103 & 4) != 0 )
                  _InterlockedAdd64((volatile signed __int64 *)&v100[1].ThreadListHead.Blink + v102, -(__int64)v109);
                v5 = v199;
                v8 = v200;
              }
              if ( ObpTraceFlags )
                ObpPushStackInfo((_DWORD)v100 - 48);
              v114 = _InterlockedExchangeAdd64(
                       (volatile signed __int64 *)&v100[-1].ExtendedFeatureDisableMask,
                       0xFFFFFFFFFFFFFFFFuLL);
              v115 = v114 <= 1;
              v116 = v114 - 1;
              if ( v115 )
              {
                if ( *(_QWORD *)&v100[-1].PrimaryGroup )
                  KeBugCheckEx(
                    0x18u,
                    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v100[-1].CpuPartitionList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v100 - 48) >> 8)],
                    (ULONG_PTR)v100,
                    3uLL,
                    *(_QWORD *)&v100[-1].PrimaryGroup);
                if ( v116 < 0 )
                  KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v100, 4uLL, v116);
                ObpDeferObjectDeletion(&v100[-1].ExtendedFeatureDisableMask);
              }
            }
          }
        }
        v10 = v5 - 16;
      }
    }
    if ( (*(_BYTE *)(v10 + 3) & 4) != 0 )
    {
      v10 += -16LL * (unsigned __int8)*(_WORD *)v10;
      *(_BYTE *)(v10 + 3) |= 4u;
    }
    v11 = *(_BYTE *)(v10 + 3);
    v12 = 256LL;
    v13 = *(_DWORD *)(v10 + 4);
    if ( (v11 & 1) == 0 )
      v12 = 128LL;
    v14 = v12 | 4;
    if ( (v11 & 0x20) == 0 )
      v14 = v12;
    v15 = v14 | 2;
    v188 = v15;
    if ( (v11 & 8) != 0 )
    {
      v15 |= 1uLL;
      v188 = v15;
    }
    SchedulingGroup = v10;
    if ( (v11 & 0xDE) != 0 )
    {
      v16 = v15 | 8;
      if ( (v11 & 4) == 0 )
        v16 = v15;
      v17 = v16 | 0x200;
      if ( v11 >= 0 )
        v17 = v16;
      v18 = v17 | 0x400;
      if ( (v11 & 0x40) == 0 )
        v18 = v17;
      v188 = v18;
      if ( (v11 & 8) == 0 )
      {
        v188 = v18;
        if ( (v11 & 0x10) != 0 )
          v188 = v18 | 0x20;
      }
    }
    v19 = v10 + 16;
    v20 = 16LL * (unsigned __int8)*(_WORD *)(v10 + 2);
    BugCheckParameter3 = v20;
  }
  else
  {
    if ( v5 >= 0xFFFF800000000000uLL && byte_140E389A8[((v5 >> 39) & 0x1FF) - 256] == 5 )
      v117 = 256LL;
    else
      v117 = 64LL;
    v118 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v118, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&ExpLargePoolTableLock);
      v131 = ExpLargePoolTableLock & 0x7FFFFFFF;
      while ( 1 )
      {
        v132 = v131;
        v131 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v131 + 1, v131);
        if ( v132 == v131 )
          break;
        if ( v131 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, v118);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, v118);
    }
    v119 = 1;
    v120 = (((40543 * (v5 >> 12)) >> 32) ^ (40543 * (v5 >> 12))) & (PoolBigPageTableSize - 1);
    while ( 1 )
    {
      v121 = (char *)PoolBigPageTable + 32 * v120;
      if ( *(_QWORD *)v121 == v5 )
        break;
      if ( ++v120 >= (unsigned __int64)PoolBigPageTableSize )
      {
        if ( !v119 )
          goto LABEL_154;
        v120 = 0;
        v119 = 0;
      }
    }
    if ( !v121 )
LABEL_154:
      KeBugCheckEx(0x19u, 0x22uLL, v5, v117, 0LL);
    v122 = *((_DWORD *)v121 + 3);
    v13 = *((_DWORD *)v121 + 2);
    v123 = (v122 >> 8) & 0xFFF;
    BugCheckParameter3 = *((_QWORD *)v121 + 2);
    v188 = v123;
    if ( (v122 & 0x100) != 0 )
      v124 = v5 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v121 + 3);
    else
      v124 = -1LL;
    _InterlockedDecrement(&ExpPoolBigEntriesInUse);
    *((_QWORD *)v121 + 3) = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v121);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpLargePoolTableLock);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v118);
    __writecr8(v118);
    if ( v124 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( (PEPROCESS)v124 != PsInitialSystemProcess )
      {
        v140 = *(__int64 **)(v124 + 760);
        v141 = (v123 & 0x100) != 0LL;
        LOBYTE(SchedulingGroup) = PspResourceFlags[8 * v141];
        v192 = v141 << 7;
        v142 = (unsigned __int64 *)&v140[16 * v141];
        _m_prefetchw(v142);
        v143 = *v142;
        v144 = v142[8];
        if ( v142[10] )
        {
          v145 = 7 * v141;
          if ( v144 > v143 )
          {
            v146 = qword_140F05848[v145];
            if ( v144 - v143 > v146 )
            {
              if ( v146 > BugCheckParameter3 )
                v146 = BugCheckParameter3;
              v155 = v142[8];
              if ( v155 == _InterlockedCompareExchange64((volatile signed __int64 *)v142 + 8, v144 - v146, v144)
                && _InterlockedExchangeAdd64((volatile signed __int64 *)v142 + 9, v146) + v146 > qword_140F05848[v145] )
              {
                v156 = _InterlockedExchange64((volatile __int64 *)v142 + 9, 0LL);
                if ( v156 )
                  PspReturnResourceQuota(v141, (__int64)v142, v156, 0);
              }
            }
          }
        }
        v147 = BugCheckParameter3;
        while ( 1 )
        {
          do
          {
            v148 = v143;
            if ( v147 < v143 )
              v148 = v147;
            v149 = 0LL;
            if ( v147 < v143 )
              v149 = v143 - v147;
            v150 = _InterlockedCompareExchange64((volatile signed __int64 *)v142, v149, v143);
            v112 = v143 == v150;
            v143 = v150;
          }
          while ( !v112 );
          v147 -= v148;
          if ( !v147 )
            break;
          if ( v140 == &PspSystemQuotaBlock )
            KeBugCheckEx(0x21u, v124, v141, BugCheckParameter3, v147);
          v140 = &PspSystemQuotaBlock;
          v142 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v192);
          _m_prefetchw((char *)&PspSystemQuotaBlock + v192);
          v143 = *(__int64 *)((char *)&PspSystemQuotaBlock + v192);
        }
        if ( (SchedulingGroup & 4) != 0 )
          _InterlockedAdd64((volatile signed __int64 *)(v124 + 8 * v141 + 512), -(__int64)BugCheckParameter3);
        v5 = v199;
        v8 = v200;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v124 - 48);
      v151 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v124 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v115 = v151 <= 1;
      BugCheckParameter4 = v151 - 1;
      if ( v115 )
      {
        if ( *(_QWORD *)(v124 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v124 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v124 - 48) >> 8)],
            v124,
            3uLL,
            *(_QWORD *)(v124 - 40));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, v124, 4uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v124 - 48);
      }
    }
    v20 = BugCheckParameter3;
    v10 = v5;
    SchedulingGroup = v5;
    v19 = v5;
  }
  v21 = *(_WORD *)&KeNumberProcessorsGroup0[9];
  v22 = v188;
  if ( (v21 & 0x207) != 0 )
  {
    if ( (v188 & 0xC0) != 0 && (v21 & 0x200) != 0 )
      ExpCheckForLookaside(v10, v20);
    v158 = KeNumberProcessorsGroup0[9];
    if ( (v158 & 1) != 0 )
      KeCheckForTimer(v10);
    v159 = KeNumberProcessorsGroup0[9];
    if ( (v159 & 4) != 0 )
      ExpCheckForResource(v10, v20);
    v160 = KeNumberProcessorsGroup0[9];
    if ( (v160 & 2) != 0 )
      ExpCheckForWorker(v10);
  }
  v23 = KeNumberProcessorsGroup0[9];
  if ( (v23 & 0x10) != 0 )
    VfPtFreePoolNotification(v10, v13, v20, v5);
  v190 = 0;
  LOBYTE(v200) = 0;
  v186[0] = 0;
  if ( v13 == PoolHitTag )
    __debugbreak();
  v24 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v24 = ExpPoolFlagsToPoolType(v188, v188 & 0x10, (unsigned int)&v190, (unsigned int)&v200, (__int64)v186);
    if ( (int)v24 >= 0 )
    {
      v161 = v190;
      if ( (_BYTE)v200 )
      {
        v161 = v190 | 8;
        v190 |= 8u;
      }
      v24 = EtwTracePool(3618, v161, v13, v19, BugCheckParameter3);
    }
  }
  LODWORD(v24) = KeGetPcr()->Prcb.Number;
  v25 = PoolTrackTableMask;
  v26 = (__int64)*(&ExPoolTagTables + v24);
  v27 = PoolTrackTableMask & ((40543 * v13) ^ ((40543 * (unsigned __int64)v13) >> 32));
  v28 = v27;
  while ( 1 )
  {
    v29 = *(_DWORD *)(v26 + 80LL * v27);
    v30 = v26 + 80LL * v27;
    if ( v29 == v13 )
      break;
    if ( v29 || (v133 = *(_DWORD *)(PoolTrackTable + 80LL * v27)) == 0 )
    {
      v27 = v25 & (v27 + 1);
      if ( v27 == v28 )
      {
        LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
        LockHandle.LockQueue.Next = 0LL;
        *(_QWORD *)&LockHandle.OldIrql = 0LL;
        v31 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v31, 2LL);
        LockHandle.OldIrql = v31;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle) )
            KxWaitForLockOwnerShip(&LockHandle);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
        }
        for ( k = 0; ; ++k )
        {
          if ( k >= (unsigned __int64)PoolTrackTableExpansionSize )
          {
LABEL_228:
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v153 = -(__int64)BugCheckParameter3;
            v154 = (volatile signed __int64 *)((char *)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number)
                                             + 80 * (unsigned int)(PoolTrackTableSize - 1));
            if ( (v22 & 0x100) != 0 )
            {
              _InterlockedIncrement64(v154 + 6);
              _InterlockedAdd64(v154 + 4, v153);
            }
            else
            {
              _InterlockedIncrement64(v154 + 3);
              _InterlockedAdd64(v154 + 1, v153);
            }
            goto LABEL_56;
          }
          v33 = (char *)PoolTrackTableExpansion + 80 * k;
          if ( *(_DWORD *)v33 == v13 )
            break;
          if ( !*(_DWORD *)v33 )
            goto LABEL_228;
        }
        if ( (v22 & 0x100) != 0 )
        {
          v35 = 0;
          v36 = (volatile signed __int64 *)(v33 + 32);
          v37 = (volatile signed __int64 *)(v33 + 48);
        }
        else
        {
          v35 = 1;
          v36 = (volatile signed __int64 *)(v33 + 8);
          v37 = (volatile signed __int64 *)(v33 + 24);
        }
        _InterlockedIncrement64(v37);
        v38 = BugCheckParameter3;
        v39 = _InterlockedExchangeAdd64(v36, -(__int64)BugCheckParameter3);
        if ( *((_QWORD *)v33 + 9) )
        {
          v162 = &v33[8 * v35];
          if ( (v162[56] & 1) == 0 )
          {
            v163 = *((_QWORD *)v162 + 7);
            v164 = (4 * v38 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
            if ( v164 == 64 )
              v164 = 128LL;
            while ( 1 )
            {
              v165 = v164 + v39;
              if ( v39 >= v163 || v165 >= v163 )
                break;
              v166 = v163;
              v163 = _InterlockedCompareExchange64((volatile signed __int64 *)v162 + 7, v165, v163);
              if ( v166 == v163 )
              {
                v168 = *((_QWORD *)v33 + 9);
                v169 = v163 - v165;
                v170 = -v169;
                if ( v169 >= 0 )
                  v170 = v169;
                if ( *(_QWORD *)(v168 + 24LL * v35 + 16) || *(_QWORD *)(v168 + 24LL * v35 + 24) )
                  _InterlockedAdd64((volatile signed __int64 *)(v168 + 24LL * v35 + 32), -v170);
                break;
              }
              v39 = *v36;
            }
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_56;
      }
    }
    else
    {
      *(_DWORD *)v30 = v133;
      v134 = *(_QWORD *)(PoolTrackTable + 80LL * v27 + 72);
      if ( v134 )
        *(_QWORD *)(v30 + 72) = v134;
    }
  }
  if ( (v22 & 0x100) != 0 )
  {
    v73 = 0;
    v74 = (volatile signed __int64 *)(v30 + 32);
    v75 = (volatile signed __int64 *)(v30 + 48);
    v76 = 0LL;
  }
  else
  {
    v73 = 1;
    v74 = (volatile signed __int64 *)(v30 + 8);
    v75 = (volatile signed __int64 *)(v30 + 24);
    v76 = 24LL;
  }
  _InterlockedIncrement64(v75);
  v77 = BugCheckParameter3;
  v78 = _InterlockedExchangeAdd64(v74, -(__int64)BugCheckParameter3);
  if ( *(_QWORD *)(v30 + 72) )
  {
    v79 = v30 + 8LL * v73;
    if ( (*(_BYTE *)(v79 + 56) & 1) == 0 )
    {
      v80 = *(_QWORD *)(v79 + 56);
      v81 = (4 * v77 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v81 == 64 )
        v81 = 128LL;
      while ( 1 )
      {
        v82 = v81 + v78;
        if ( v78 >= v80 || v82 >= v80 )
          break;
        v83 = v80;
        v80 = _InterlockedCompareExchange64((volatile signed __int64 *)(v79 + 56), v82, v80);
        if ( v83 == v80 )
        {
          v171 = v80 - v82;
          v172 = -v171;
          if ( v171 >= 0 )
            v172 = v171;
          v173 = v76 + *(_QWORD *)(v30 + 72);
          if ( *(_QWORD *)(v173 + 16) || *(_QWORD *)(v173 + 24) )
            _InterlockedAdd64((volatile signed __int64 *)(v173 + 32), -v172);
          break;
        }
        v78 = *v74;
      }
    }
  }
LABEL_56:
  if ( (v22 & 0x400) != 0 )
  {
    v40 = BugCheckParameter3;
    ViFreeTrackedPool(v5, BugCheckParameter3);
  }
  else
  {
    v40 = BugCheckParameter3;
  }
  if ( byte_140FCDC28 )
  {
    if ( v10 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v10, 0LL);
    if ( (v10 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v10, 8uLL);
    if ( v40 + v10 < v10 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v10, v40);
    v185 = (_BYTE *)(KasaniShadow + ((v10 + 0x800000000000LL) >> 3));
    if ( v40 >> 3 )
    {
      memset_0((void *)(KasaniShadow + ((v10 + 0x800000000000LL) >> 3)), 0, v40 >> 3);
      v185 += v40 >> 3;
    }
    if ( (v40 & 7) != 0 )
      *v185 = v40 & 7;
  }
  v41 = *(_QWORD *)(v8 + 56);
  if ( v40 - 513 > 0xD7F
    || !v41
    || ((v157 = v41
              + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v40 + 15) >> 4)) - 33 + 1LL) << 6),
         ++*(_DWORD *)(v157 + 28),
         *(_WORD *)v157 >= *(_WORD *)(v157 + 16))
      ? (++*(_DWORD *)(v157 + 32), result = 0LL)
      : (RtlpInterlockedPushEntrySList((PSLIST_HEADER)v157, (PSLIST_ENTRY)v10), result = 1LL),
        !(_DWORD)result) )
  {
    if ( (_WORD)v10 )
    {
      v42 = v8 + 320;
    }
    else
    {
      v43 = RtlCSparseBitmapBitmaskRead(&dword_140E68310, 2 * ((v10 - qword_140E68308) >> 20));
      if ( !v43 || (_DWORD)v43 == 3 )
        return RtlpHpLargeFree(v8, v10);
      v42 = v8 + 320;
      if ( (_DWORD)v43 == 2 )
        v42 = v8 + 512;
    }
    v44 = v10 & *(_QWORD *)v42;
    if ( !(RtlpHpHeapGlobals ^ v44 ^ *(_QWORD *)(v44 + 0x10) ^ v42) )
    {
      v45 = *(_BYTE *)(v42 + 8);
      v46 = v44 + 32LL * ((unsigned int)(v10 - v44) >> v45);
      v47 = -32LL * *(unsigned __int8 *)(v46 + 26) + v46;
      v48 = *(_BYTE *)(v47 + 24);
      v49 = v44 + ((__int64)(v47 - v44) >> 5 << v45);
      if ( (v49 == v10) + v48 == 11 )
      {
        v50 = *(_QWORD *)(v42 + 24);
        v51 = SchedulingGroup;
        v52 = (unsigned __int64)*(unsigned __int16 *)(v49 + 44) << 6;
        v53 = (((unsigned int)SchedulingGroup
              - ((_DWORD)v49
               + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v49 + 40) ^ (unsigned int)(v49 >> 12)) >> 16)))
             * (unsigned __int64)*(unsigned int *)(v52 + v50 + 72)) >> 32;
        result = (unsigned int)((unsigned __int16)(qword_140E28208 ^ *(_WORD *)(v49 + 40) ^ (v49 >> 12))
                              * ((((unsigned int)SchedulingGroup
                                 - ((_DWORD)v49
                                  + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v49 + 40) ^ (unsigned int)(v49 >> 12)) >> 16)))
                                * (unsigned __int64)*(unsigned int *)(v52 + v50 + 72)) >> 32));
        if ( (_DWORD)SchedulingGroup
           - ((_DWORD)v49
            + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v49 + 40) ^ (unsigned int)(v49 >> 12)) >> 16)) != (_DWORD)result )
          return result;
        v55 = (*(_DWORD *)(v50 + 76) >> 13) & 0x3FFFF;
        _BitScanReverse(&v56, v55);
        v57 = (*(_DWORD *)(v50 + 76) >> 4) & 0x1FF;
        v58 = 1 << v56;
        v59 = v56 - 2;
        v191[1] = v59;
        v60 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v59) + 8LL * (v55 ^ v58) + 8)
                        + 8 * v57);
        if ( !v60 )
          LOWORD(v60) = RtlpHpLfhThreadDataInitializeSet(v50);
        if ( (_WORD)v60 != *(_WORD *)(v49 + 46) || *(_BYTE *)(v49 + 22) == 1 )
        {
          v61 = v53;
          v62 = *(_QWORD *)(v49 + 8 * (v53 >> 6) + 64);
          if ( _bittest64(&v62, v53 & 0x3F) )
          {
            result = *(_QWORD *)(v49 + 16);
            do
            {
              v188 = result;
              SchedulingGroup = result;
              if ( BYTE6(result) == 1 )
                BYTE6(SchedulingGroup) = 2;
              if ( v51 )
              {
                v63 = *(_QWORD *)(v50 + 80);
                v64 = SchedulingGroup;
                *(_WORD *)v51 = SchedulingGroup;
                v65 = __ROL4__(*(_DWORD *)v51 ^ v63, v64);
                LOWORD(SchedulingGroup) = v53 + 1;
                *(_DWORD *)(v51 + 8) = v51 ^ HIDWORD(v63) ^ v65;
              }
              ++WORD1(SchedulingGroup);
              v66 = (unsigned __int64)*(unsigned __int16 *)(v49 + 44) << 6;
              v67 = result;
              result = _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 16), SchedulingGroup, result);
            }
            while ( v67 != result );
            if ( !*(_BYTE *)(v66 + v50 + 92) )
            {
              *(_BYTE *)(v66 + v50 + 92) = 1;
              result = BYTE1(**(_QWORD **)(*(_QWORD *)v50 + 56LL)) == 1
                     ? (unsigned int)ExpHpGCScheduledNonPaged
                     : (unsigned int)ExpHpGCScheduledPaged;
              if ( !(_DWORD)result )
                result = RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)v50 + 56LL));
            }
            if ( BYTE6(v188) == 1 )
            {
              v68 = v50 + (WORD2(v188) << 6);
              _m_prefetchw((const void *)(v68 + 8));
              v69 = *(_QWORD *)(v68 + 8);
              v70 = *(_QWORD *)(v49 + 24);
              *(_QWORD *)(v49 + 24) = v70 & 0xFFF | (v69 - (v69 & 0xFFF));
              v71 = v69;
              result = _InterlockedCompareExchange64((volatile signed __int64 *)(v68 + 8), v69 & 0xFFF | v49, v69);
              if ( v71 != result )
              {
                do
                {
                  v72 = result;
                  *(_QWORD *)(v49 + 24) = v70 ^ (result ^ v70) & 0xFFFFFFFFFFFFF000uLL;
                  result = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v68 + 8),
                             v49 | result & 0xFFF,
                             result);
                }
                while ( result != v72 );
              }
            }
            return result;
          }
        }
        else
        {
          v174 = *(_QWORD *)(v49 + 8 * (v53 >> 6) + 64);
          v175 = __ROL8__(-2LL, v53 & 0x3F);
          v61 = v53;
          result = v174 & v175;
          *(_QWORD *)(v49 + 8 * (v53 >> 6) + 64) = v174 & v175;
          if ( (~v175 & v174) != 0 )
          {
            ++*(_WORD *)(v49 + 32);
            return result;
          }
        }
        return RtlpLogHeapFailure(17, *(_QWORD *)v50, v51, v49, v61, 0LL);
      }
      v125 = v47 & *(_QWORD *)v42;
      v191[0] = 0;
      v126 = v125 + ((__int64)(v47 - v125) >> 5 << v45);
      if ( (v48 & 3) == 3 )
      {
        if ( v10 == v126 )
          return RtlpHpSegPageRangeShrink(v42, v47);
        if ( v48 == 15 )
        {
          if ( v10 > v126 )
          {
            result = RtlpHpVsContextFree(*(_QWORD *)(v42 + 32), v126, v10, v191);
            if ( (_DWORD)result )
            {
              v127 = *(_QWORD *)(v42 + 24);
              result = *(unsigned __int16 *)(v127 + 68);
              if ( v191[0] < (unsigned int)result )
              {
                v128 = v127
                     + 8LL
                     * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                      + ((unsigned __int64)(unsigned int)(v191[0] + 15) >> 4))
                      - 1);
                do
                {
                  SchedulingGroup = *(_QWORD *)(v128 + 448);
                  v129 = SchedulingGroup;
                  result = SchedulingGroup >> 16;
                  v130 = SchedulingGroup;
                  if ( (SchedulingGroup & 1) == 0 )
                    break;
                  if ( WORD1(SchedulingGroup) > 1u )
                  {
                    --WORD1(SchedulingGroup);
                    v130 = SchedulingGroup;
                  }
                  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v128 + 448), v130, v129);
                }
                while ( result != v129 );
              }
            }
            return result;
          }
          return RtlpHpSegPageRangeShrink(v42, v47);
        }
      }
    }
    return RtlpLogHeapFailure(9, *(_QWORD *)(v42 + 56), v10, 0, 0LL, 0LL);
  }
  return result;
}
