/*
 * XREFs of ExFreeHeapPool @ 0x140359950
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x140396AFC (ExAllocateContiguousHeapPool.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpCheckForWorker @ 0x140261AEC (ExpCheckForWorker.c)
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpFreePoolChecks @ 0x14035B160 (ExpFreePoolChecks.c)
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     MmDeterminePoolType @ 0x14035B710 (MmDeterminePoolType.c)
 *     ExpRemovePoolTrackerExpansion @ 0x14035B760 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     ExpPoolTrackerReturnLimit @ 0x14035BA20 (ExpPoolTrackerReturnLimit.c)
 *     RtlpHpVsContextFree @ 0x14035BAE0 (RtlpHpVsContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14035C3DC (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14035D9AC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegPageRangeShrink @ 0x140363BF0 (RtlpHpSegPageRangeShrink.c)
 *     EtwTracePool @ 0x1403971E8 (EtwTracePool.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 *     ExIsSpecialPoolAddress @ 0x14048BD64 (ExIsSpecialPoolAddress.c)
 *     ExpCheckForResource @ 0x14048C4AC (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14049464C (ExpCheckForLookaside.c)
 *     KeCheckForTimer @ 0x1404C7E48 (KeCheckForTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B76080 (ExpPoolFlagsToPoolType.c)
 *     ViFreeTrackedPool @ 0x140BAAFD0 (ViFreeTrackedPool.c)
 *     VfPtFreePoolNotification @ 0x140BAB6EC (VfPtFreePoolNotification.c)
 */

unsigned __int64 __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // r12
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // r8
  char v10; // al
  ULONG_PTR v11; // rsi
  char v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // r14
  __int16 v22; // ax
  __int16 v23; // r15
  volatile CCHAR v24; // al
  __int64 v25; // rax
  int v26; // r9d
  __int64 v27; // r11
  unsigned int v28; // edx
  unsigned int v29; // r10d
  int v30; // eax
  __int64 v31; // r8
  unsigned __int8 v32; // di
  _QWORD *v33; // rdx
  unsigned int k; // edx
  char *v35; // r8
  __int64 *i; // rax
  int v37; // r9d
  volatile signed __int64 *v38; // rdx
  volatile signed __int64 *v39; // rax
  ULONG_PTR v40; // r10
  signed __int64 v41; // rcx
  ULONG_PTR v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rax
  ULONG_PTR v46; // rdx
  char v47; // r10
  ULONG_PTR v48; // r8
  ULONG_PTR v49; // r8
  char v50; // r11
  ULONG_PTR v51; // rdi
  __int64 v52; // rsi
  unsigned __int64 v53; // r15
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rbx
  unsigned __int64 result; // rax
  unsigned int v57; // eax
  unsigned int v58; // ecx
  unsigned __int64 v59; // r8
  int v60; // r9d
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // rax
  unsigned __int64 v65; // r8
  char v66; // cl
  int v67; // edx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rtt
  __int64 v70; // r9
  signed __int64 v71; // rax
  __int64 v72; // r10
  signed __int64 v73; // rtt
  unsigned __int64 v74; // r8
  unsigned int v75; // r9d
  volatile signed __int64 *v76; // rdx
  volatile signed __int64 *v77; // rax
  __int64 v78; // r10
  ULONG_PTR v79; // rbx
  signed __int64 v80; // rcx
  __int64 v81; // r11
  signed __int64 v82; // rax
  unsigned __int64 v83; // r9
  signed __int64 v84; // rbx
  signed __int64 v85; // rtt
  __int64 v86; // rsi
  unsigned __int64 v87; // rdi
  int v88; // r8d
  __int64 v89; // r11
  unsigned int v90; // edx
  unsigned int v91; // r10d
  int v92; // eax
  __int64 v93; // r9
  unsigned __int64 v94; // rcx
  __int64 v95; // rcx
  __int16 v96; // r14
  ULONG_PTR v97; // rdx
  __int16 v98; // ax
  unsigned int v99; // esi
  ULONG_PTR v100; // rbx
  ULONG_PTR v101; // rdi
  struct _KPROCESS *v102; // rdi
  __int64 v103; // r14
  ULONG_PTR v104; // r15
  char v105; // r13
  unsigned __int64 *v106; // r12
  unsigned __int64 v107; // r14
  unsigned __int64 v108; // rax
  unsigned __int64 *v109; // r8
  unsigned __int64 v110; // rdx
  ULONG_PTR v111; // r8
  unsigned __int64 v112; // r9
  signed __int64 v113; // rdx
  bool v114; // zf
  signed __int64 v115; // rax
  signed __int64 v116; // rsi
  bool v117; // cc
  signed __int64 v118; // rsi
  ULONG_PTR v119; // r14
  unsigned __int8 v120; // r15
  int v121; // r10d
  unsigned int v122; // edx
  char *v123; // rcx
  unsigned int v124; // eax
  unsigned int v125; // r14d
  ULONG_PTR v126; // rdi
  __int64 v127; // r9
  ULONG_PTR v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r10
  signed __int64 v131; // rcx
  signed __int64 v132; // rdx
  signed __int32 v133; // eax
  signed __int32 v134; // ett
  int v135; // eax
  __int64 v136; // rax
  int v137; // eax
  __int64 v138; // rax
  __int64 v139; // rax
  unsigned __int64 v140; // rtt
  __int64 v141; // r8
  __int64 *v142; // r13
  ULONG_PTR v143; // r12
  unsigned __int64 *v144; // r14
  unsigned __int64 v145; // r15
  unsigned __int64 v146; // rax
  __int64 v147; // r8
  ULONG_PTR v148; // rdx
  ULONG_PTR v149; // r8
  unsigned __int64 v150; // r9
  signed __int64 v151; // rdx
  signed __int64 v152; // rax
  signed __int64 v153; // rsi
  signed __int64 BugCheckParameter4; // rsi
  unsigned __int64 v155; // rax
  volatile signed __int64 *v156; // rcx
  unsigned __int64 v157; // rtt
  __int64 v158; // r8
  __int64 v159; // rcx
  volatile CCHAR v160; // al
  volatile CCHAR v161; // al
  volatile CCHAR v162; // al
  int v163; // edx
  char *v164; // r11
  signed __int64 v165; // rax
  unsigned __int64 v166; // r10
  signed __int64 v167; // rbx
  signed __int64 v168; // rtt
  int v169; // edx
  __int64 v170; // rdx
  __int64 v171; // rax
  __int64 v172; // r10
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rdx
  __int64 v177; // r8
  _BYTE *v178; // r8
  int v179; // ecx
  _BYTE *j; // r8
  __int64 v181; // rdi
  _WORD *v182; // rbx
  ULONG_PTR v183; // rsi
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v185; // rdx
  unsigned __int64 v186; // r14
  _BYTE *v187; // rbx
  char v188[8]; // [rsp+30h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-71h]
  __int64 v190; // [rsp+40h] [rbp-69h]
  int v191; // [rsp+48h] [rbp-61h] BYREF
  int v192; // [rsp+4Ch] [rbp-5Dh] BYREF
  _DWORD v193[2]; // [rsp+50h] [rbp-59h] BYREF
  ULONG_PTR v194; // [rsp+58h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v196[4]; // [rsp+78h] [rbp-31h]
  __int128 v197; // [rsp+88h] [rbp-21h]
  __int128 v198; // [rsp+98h] [rbp-11h] BYREF
  __int128 v199; // [rsp+A8h] [rbp-1h]
  __int64 retaddr; // [rsp+108h] [rbp+5Fh]
  ULONG_PTR v201; // [rsp+110h] [rbp+67h] BYREF
  __int64 v202; // [rsp+118h] [rbp+6Fh] BYREF
  char v203; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 SchedulingGroup; // [rsp+128h] [rbp+7Fh]

  v201 = BugCheckParameter1;
  v4 = 0;
  v5 = BugCheckParameter1;
  v197 = 0LL;
  LOWORD(v197) = 259;
  BYTE2(v197) = 0;
  if ( (_WORD)BugCheckParameter1 )
  {
    v6 = 0;
LABEL_3:
    v196[0] = 0x100000;
    v196[1] = 0x1000000;
    v7 = (unsigned int)v196[v6];
    v8 = (RtlpHpHeapGlobals ^ *(_QWORD *)((v5 & ~(v7 - 1)) + 0x10) ^ v5 & ~(v7 - 1)) - 192LL * v6 - 320;
    goto LABEL_4;
  }
  v139 = RtlCSparseBitmapBitmaskRead(&dword_140E68510, 2 * ((BugCheckParameter1 - qword_140E68508) >> 20));
  if ( v139 )
  {
    v6 = v139 - 1;
    if ( v6 != 2 )
      goto LABEL_3;
  }
  v198 = 0LL;
  v199 = 0LL;
  RtlpHpVaMgrCtxQuery(&unk_140E68558, v5, &v198);
  v8 = *(_QWORD *)v199;
LABEL_4:
  v202 = v8;
  if ( !v8 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, v5, 0LL);
  if ( ExpSpecialAllocations )
  {
    for ( i = &qword_140EEEE40; (__int64)i < (__int64)qword_140EEEE60; ++i )
    {
      if ( v8 == *i )
      {
        _InterlockedDecrement(&ExpSpecialAllocations);
        v181 = MmDeterminePoolType(v5);
        v182 = (_WORD *)(v5 & 0xFFFFFFFFFFFFF000uLL);
        if ( byte_140FCECA8 )
        {
          if ( (unsigned __int64)v182 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v5 & 0xFFFFFFFFFFFFF000uLL, 0LL);
          if ( v182 + 2048 < v182 )
            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v5 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL);
          memset_0((void *)(KasaniShadow + ((unsigned __int64)(v182 + 0x400000000000LL) >> 3)), 0, 0x200uLL);
        }
        v183 = 4096 - (unsigned int)(v5 & 0xFFF);
        ExpFreePoolChecks(v5, v5);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > (unsigned __int8)(((v181 & 0x100) == 0) + 1) )
          KeBugCheckEx(0xC1u, CurrentIrql, 0x100uLL, v5, 0x31uLL);
        v185 = *v182 & 0x1FFF;
        v186 = (v185 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v186 != v183 )
          KeBugCheckEx(0xC1u, v5, *v182 & 0x1FFF, v183, 0x21uLL);
        v178 = v182 + 8;
        v179 = HIWORD(*(_DWORD *)v182);
        if ( (*(_DWORD *)v182 & 0x4000) != 0 )
          v178 = v182 + 12;
        while ( (unsigned __int64)v178 < v5 )
        {
          if ( *v178 != (_BYTE)v179 )
            KeBugCheckEx(0xC1u, v5, (ULONG_PTR)v178, *(unsigned int *)v182, 0x23uLL);
          ++v178;
        }
        for ( j = (_BYTE *)(v185 + v5); (unsigned __int64)j < ((v5 + 4095) & 0xFFFFFFFFFFFFF000uLL); ++j )
        {
          if ( *j != (_BYTE)v179 )
            KeBugCheckEx(0xC1u, v5, (ULONG_PTR)j, *(unsigned int *)v182, 0x24uLL);
        }
        if ( (*(_DWORD *)v182 & 0x4000) != 0 )
          ViFreeTrackedPool(v5, v185);
        v86 = *(unsigned int *)((v5 & 0xFFFFFFFFFFFFF000uLL) + 4);
        v191 = 0;
        LOBYTE(v201) = 0;
        v203 = 0;
        if ( (_DWORD)v86 == PoolHitTag )
          __debugbreak();
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
          && (int)ExpPoolFlagsToPoolType(v181, v181 & 0x10, (unsigned int)&v191, (unsigned int)&v201, (__int64)&v203) >= 0 )
        {
          v169 = v191;
          if ( (_BYTE)v201 )
          {
            v169 = v191 | 8;
            v191 |= 8u;
          }
          EtwTracePool(3618, v169, v86, v5, v186);
        }
        v87 = v181 & 0xFFFFFFFFFFFFFFFBuLL;
        v88 = PoolTrackTableMask;
        v89 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
        v90 = PoolTrackTableMask & ((40543 * v86) ^ ((unsigned __int64)(40543 * v86) >> 32));
        v91 = v90;
        while ( 1 )
        {
          v92 = *(_DWORD *)(v89 + 80LL * v90);
          v93 = v89 + 80LL * v90;
          if ( v92 == (_DWORD)v86 )
            break;
          if ( v92 || (v137 = *(_DWORD *)(PoolTrackTable + 80LL * v90)) == 0 )
          {
            v90 = v88 & (v90 + 1);
            if ( v90 == v91 )
            {
              ExpRemovePoolTrackerExpansion((unsigned int)v86, v186, v87);
              return RtlpHpFreeHeap(v8, v5 & 0xFFFFFFFFFFFFF000uLL);
            }
          }
          else
          {
            *(_DWORD *)v93 = v137;
            v138 = *(_QWORD *)(PoolTrackTable + 80LL * v90 + 72);
            if ( v138 )
              *(_QWORD *)(v93 + 72) = v138;
          }
        }
        ExpPoolTrackerReturnLimit((v87 & 0x100) == 0, v186);
        return RtlpHpFreeHeap(v8, v5 & 0xFFFFFFFFFFFFF000uLL);
      }
    }
  }
  v9 = 2LL;
  if ( (v5 & 0xFFF) != 0 )
  {
    v10 = *(_BYTE *)(v5 - 13);
    v11 = v5 - 16;
    SchedulingGroup = v5 - 16;
    if ( (v10 & 8) != 0 )
    {
      v94 = v5 - 16;
      if ( (v10 & 4) != 0 )
        v94 = v11 - 16LL * (unsigned __int8)*(_WORD *)v11;
      v95 = ExpPoolQuotaCookie ^ *(_QWORD *)(v94 + 8) ^ v94;
      if ( v95 && v95 != -1 && (!ExpSpecialAllocations || !(unsigned int)ExIsSpecialPoolAddress(v5)) )
      {
        if ( v5 >= 0xFFFF800000000000uLL && byte_140E38AE8[((v5 >> 39) & 0x1FF) - 256] == 5 )
          v96 = 256;
        else
          v96 = 64;
        v97 = v5 - 16;
        if ( (*(_BYTE *)(v11 + 3) & 4) != 0 )
          v97 = -16LL * (unsigned __int8)*(_WORD *)v11 + v11;
        v98 = *(_WORD *)(v97 + 2);
        v99 = *(_DWORD *)(v97 + 4);
        v100 = 16LL * (unsigned __int8)v98;
        if ( (v98 & 0x800) != 0 )
        {
          v101 = *(_QWORD *)(v97 + 8) ^ v97;
          *(_QWORD *)(v97 + 8) = ExpPoolQuotaCookie ^ v97;
          v102 = (struct _KPROCESS *)(ExpPoolQuotaCookie ^ v101);
          if ( v102 )
          {
            if ( v102 != (struct _KPROCESS *)-1LL )
            {
              if ( (unsigned __int64)v102 < 0xFFFF800000000000uLL || (v102->Header.Type & 0x7F) != 3 )
              {
                if ( v97 )
                  v4 = v99;
                KeBugCheckEx(0xC2u, 0xDuLL, v5, v4, (ULONG_PTR)v102);
              }
              v103 = v96 & 0x100;
              if ( v102 != PsInitialSystemProcess )
              {
                SchedulingGroup = (unsigned __int64)v102[1].SchedulingGroup;
                v104 = v103 != 0;
                v194 = v104 << 7;
                v105 = PspResourceFlags[8 * v104];
                v106 = (unsigned __int64 *)(SchedulingGroup + (v104 << 7));
                _m_prefetchw(v106);
                v107 = *v106;
                v108 = v106[8];
                if ( v106[10] )
                {
                  if ( v108 > v107 )
                  {
                    v109 = (unsigned __int64 *)&qword_140F05B28[7 * v104];
                    v110 = *v109;
                    if ( v108 - v107 > *v109 )
                    {
                      if ( v110 > v100 )
                        v110 = v100;
                      v140 = v106[8];
                      if ( v140 == _InterlockedCompareExchange64((volatile signed __int64 *)v106 + 8, v108 - v110, v108)
                        && _InterlockedExchangeAdd64((volatile signed __int64 *)v106 + 9, v110) + v110 > *v109 )
                      {
                        v141 = _InterlockedExchange64((volatile __int64 *)v106 + 9, 0LL);
                        if ( v141 )
                          PspReturnResourceQuota(v104, (__int64)v106, v141, 0);
                      }
                    }
                  }
                }
                v111 = v100;
                while ( 1 )
                {
                  do
                  {
                    v112 = v107;
                    if ( v100 < v107 )
                      v112 = v100;
                    v113 = 0LL;
                    if ( v100 < v107 )
                      v113 = v107 - v100;
                    v115 = _InterlockedCompareExchange64((volatile signed __int64 *)v106, v113, v107);
                    v114 = v107 == v115;
                    v107 = v115;
                  }
                  while ( !v114 );
                  v100 -= v112;
                  if ( !v100 )
                    break;
                  if ( (__int64 *)SchedulingGroup == &PspSystemQuotaBlock )
                    KeBugCheckEx(0x21u, (ULONG_PTR)v102, v104, v111, v100);
                  SchedulingGroup = (unsigned __int64)&PspSystemQuotaBlock;
                  v106 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v194);
                  _m_prefetchw((char *)&PspSystemQuotaBlock + v194);
                  v107 = *(__int64 *)((char *)&PspSystemQuotaBlock + v194);
                }
                if ( (v105 & 4) != 0 )
                  _InterlockedAdd64((volatile signed __int64 *)&v102[1].ThreadListHead.Blink + v104, -(__int64)v111);
                v5 = v201;
                v8 = v202;
              }
              if ( ObpTraceFlags )
                ObpPushStackInfo((__int64)&v102[-1].ExtendedFeatureDisableMask, 0, 1u, v99);
              v116 = _InterlockedExchangeAdd64(
                       (volatile signed __int64 *)&v102[-1].ExtendedFeatureDisableMask,
                       0xFFFFFFFFFFFFFFFFuLL);
              v117 = v116 <= 1;
              v118 = v116 - 1;
              if ( v117 )
              {
                if ( *(_QWORD *)&v102[-1].PrimaryGroup )
                  KeBugCheckEx(
                    0x18u,
                    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v102[-1].CpuPartitionList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v102 - 48) >> 8)],
                    (ULONG_PTR)v102,
                    3uLL,
                    *(_QWORD *)&v102[-1].PrimaryGroup);
                if ( v118 < 0 )
                  KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v102, 4uLL, v118);
                ObpDeferObjectDeletion(&v102[-1].ExtendedFeatureDisableMask);
              }
            }
          }
        }
        v11 = v5 - 16;
      }
    }
    if ( (*(_BYTE *)(v11 + 3) & 4) != 0 )
    {
      v11 += -16LL * (unsigned __int8)*(_WORD *)v11;
      *(_BYTE *)(v11 + 3) |= 4u;
    }
    v12 = *(_BYTE *)(v11 + 3);
    v13 = 256LL;
    v14 = *(_DWORD *)(v11 + 4);
    if ( (v12 & 1) == 0 )
      v13 = 128LL;
    v15 = v13 | 4;
    if ( (v12 & 0x20) == 0 )
      v15 = v13;
    v16 = v15 | 2;
    v190 = v16;
    if ( (v12 & 8) != 0 )
    {
      v16 |= 1uLL;
      v190 = v16;
    }
    SchedulingGroup = v11;
    if ( (v12 & 0xDE) != 0 )
    {
      v17 = v16 | 8;
      if ( (v12 & 4) == 0 )
        v17 = v16;
      v18 = v17 | 0x200;
      if ( v12 >= 0 )
        v18 = v17;
      v19 = v18 | 0x400;
      if ( (v12 & 0x40) == 0 )
        v19 = v18;
      v190 = v19;
      if ( (v12 & 8) == 0 )
      {
        v190 = v19;
        if ( (v12 & 0x10) != 0 )
          v190 = v19 | 0x20;
      }
    }
    v20 = v11 + 16;
    v21 = 16LL * (unsigned __int8)*(_WORD *)(v11 + 2);
    BugCheckParameter3 = v21;
  }
  else
  {
    if ( v5 >= 0xFFFF800000000000uLL && byte_140E38AE8[((v5 >> 39) & 0x1FF) - 256] == 5 )
      v119 = 256LL;
    else
      v119 = 64LL;
    v120 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v120, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&ExpLargePoolTableLock);
      v133 = ExpLargePoolTableLock & 0x7FFFFFFF;
      while ( 1 )
      {
        v134 = v133;
        v133 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v133 + 1, v133);
        if ( v134 == v133 )
          break;
        if ( v133 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, v120, v9, a4);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, v120);
    }
    v121 = 1;
    v122 = (((40543 * (v5 >> 12)) >> 32) ^ (40543 * (v5 >> 12))) & (PoolBigPageTableSize - 1);
    while ( 1 )
    {
      v123 = (char *)PoolBigPageTable + 32 * v122;
      if ( *(_QWORD *)v123 == v5 )
        break;
      if ( ++v122 >= (unsigned __int64)PoolBigPageTableSize )
      {
        if ( !v121 )
          goto LABEL_154;
        v122 = 0;
        v121 = 0;
      }
    }
    if ( !v123 )
LABEL_154:
      KeBugCheckEx(0x19u, 0x22uLL, v5, v119, 0LL);
    v124 = *((_DWORD *)v123 + 3);
    v14 = *((_DWORD *)v123 + 2);
    v125 = (v124 >> 8) & 0xFFF;
    BugCheckParameter3 = *((_QWORD *)v123 + 2);
    v190 = v125;
    if ( (v124 & 0x100) != 0 )
      v126 = v5 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v123 + 3);
    else
      v126 = -1LL;
    _InterlockedDecrement(&ExpPoolBigEntriesInUse);
    *((_QWORD *)v123 + 3) = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v123);
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
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v120);
    __writecr8(v120);
    if ( v126 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( (PEPROCESS)v126 != PsInitialSystemProcess )
      {
        v142 = *(__int64 **)(v126 + 760);
        v143 = (v125 & 0x100) != 0LL;
        LOBYTE(SchedulingGroup) = PspResourceFlags[8 * v143];
        v194 = v143 << 7;
        v144 = (unsigned __int64 *)&v142[16 * v143];
        _m_prefetchw(v144);
        v145 = *v144;
        v146 = v144[8];
        if ( v144[10] )
        {
          v147 = 7 * v143;
          if ( v146 > v145 )
          {
            v148 = qword_140F05B28[v147];
            if ( v146 - v145 > v148 )
            {
              if ( v148 > BugCheckParameter3 )
                v148 = BugCheckParameter3;
              v157 = v144[8];
              if ( v157 == _InterlockedCompareExchange64((volatile signed __int64 *)v144 + 8, v146 - v148, v146)
                && _InterlockedExchangeAdd64((volatile signed __int64 *)v144 + 9, v148) + v148 > qword_140F05B28[v147] )
              {
                v158 = _InterlockedExchange64((volatile __int64 *)v144 + 9, 0LL);
                if ( v158 )
                  PspReturnResourceQuota(v143, (__int64)v144, v158, 0);
              }
            }
          }
        }
        v149 = BugCheckParameter3;
        while ( 1 )
        {
          do
          {
            v150 = v145;
            if ( v149 < v145 )
              v150 = v149;
            v151 = 0LL;
            if ( v149 < v145 )
              v151 = v145 - v149;
            v152 = _InterlockedCompareExchange64((volatile signed __int64 *)v144, v151, v145);
            v114 = v145 == v152;
            v145 = v152;
          }
          while ( !v114 );
          v149 -= v150;
          if ( !v149 )
            break;
          if ( v142 == &PspSystemQuotaBlock )
            KeBugCheckEx(0x21u, v126, v143, BugCheckParameter3, v149);
          v142 = &PspSystemQuotaBlock;
          v144 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v194);
          _m_prefetchw((char *)&PspSystemQuotaBlock + v194);
          v145 = *(__int64 *)((char *)&PspSystemQuotaBlock + v194);
        }
        if ( (SchedulingGroup & 4) != 0 )
          _InterlockedAdd64((volatile signed __int64 *)(v126 + 8 * v143 + 512), -(__int64)BugCheckParameter3);
        v5 = v201;
        v8 = v202;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v126 - 48, 0, 1u, v14);
      v153 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v126 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v117 = v153 <= 1;
      BugCheckParameter4 = v153 - 1;
      if ( v117 )
      {
        if ( *(_QWORD *)(v126 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v126 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v126 - 48) >> 8)],
            v126,
            3uLL,
            *(_QWORD *)(v126 - 40));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, v126, 4uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v126 - 48);
      }
    }
    v21 = BugCheckParameter3;
    v11 = v5;
    SchedulingGroup = v5;
    v20 = v5;
  }
  v22 = *(_WORD *)&KeNumberProcessorsGroup0[9];
  v23 = v190;
  if ( (v22 & 0x207) != 0 )
  {
    if ( (v190 & 0xC0) != 0 && (v22 & 0x200) != 0 )
      ExpCheckForLookaside(v11, v21);
    v160 = KeNumberProcessorsGroup0[9];
    if ( (v160 & 1) != 0 )
      KeCheckForTimer(v11);
    v161 = KeNumberProcessorsGroup0[9];
    if ( (v161 & 4) != 0 )
      ExpCheckForResource(v11, v21);
    v162 = KeNumberProcessorsGroup0[9];
    if ( (v162 & 2) != 0 )
      ExpCheckForWorker(v11, v21);
  }
  v24 = KeNumberProcessorsGroup0[9];
  if ( (v24 & 0x10) != 0 )
    VfPtFreePoolNotification(v11, v14, v21, v5);
  v192 = 0;
  LOBYTE(v202) = 0;
  v188[0] = 0;
  if ( v14 == PoolHitTag )
    __debugbreak();
  v25 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v25 = ExpPoolFlagsToPoolType(v190, v190 & 0x10, (unsigned int)&v192, (unsigned int)&v202, (__int64)v188);
    if ( (int)v25 >= 0 )
    {
      v163 = v192;
      if ( (_BYTE)v202 )
      {
        v163 = v192 | 8;
        v192 |= 8u;
      }
      v25 = EtwTracePool(3618, v163, v14, v20, BugCheckParameter3);
    }
  }
  LODWORD(v25) = KeGetPcr()->Prcb.Number;
  v26 = PoolTrackTableMask;
  v27 = (__int64)*(&ExPoolTagTables + v25);
  v28 = PoolTrackTableMask & ((40543 * v14) ^ ((40543 * (unsigned __int64)v14) >> 32));
  v29 = v28;
  while ( 1 )
  {
    v30 = *(_DWORD *)(v27 + 80LL * v28);
    v31 = v27 + 80LL * v28;
    if ( v30 == v14 )
      break;
    if ( v30 || (v135 = *(_DWORD *)(PoolTrackTable + 80LL * v28)) == 0 )
    {
      v28 = v26 & (v28 + 1);
      if ( v28 == v29 )
      {
        LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
        LockHandle.LockQueue.Next = 0LL;
        *(_QWORD *)&LockHandle.OldIrql = 0LL;
        v32 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v32, 2LL);
        LockHandle.OldIrql = v32;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v33 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
          if ( v33 )
            KxWaitForLockOwnerShip((__int64)&LockHandle, v33);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&ExpTaggedPoolLock);
        }
        for ( k = 0; ; ++k )
        {
          if ( k >= (unsigned __int64)PoolTrackTableExpansionSize )
          {
LABEL_228:
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v155 = -(__int64)BugCheckParameter3;
            v156 = (volatile signed __int64 *)((char *)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number)
                                             + 80 * (unsigned int)(PoolTrackTableSize - 1));
            if ( (v23 & 0x100) != 0 )
            {
              _InterlockedIncrement64(v156 + 6);
              _InterlockedAdd64(v156 + 4, v155);
            }
            else
            {
              _InterlockedIncrement64(v156 + 3);
              _InterlockedAdd64(v156 + 1, v155);
            }
            goto LABEL_56;
          }
          v35 = (char *)PoolTrackTableExpansion + 80 * k;
          if ( *(_DWORD *)v35 == v14 )
            break;
          if ( !*(_DWORD *)v35 )
            goto LABEL_228;
        }
        if ( (v23 & 0x100) != 0 )
        {
          v37 = 0;
          v38 = (volatile signed __int64 *)(v35 + 32);
          v39 = (volatile signed __int64 *)(v35 + 48);
        }
        else
        {
          v37 = 1;
          v38 = (volatile signed __int64 *)(v35 + 8);
          v39 = (volatile signed __int64 *)(v35 + 24);
        }
        _InterlockedIncrement64(v39);
        v40 = BugCheckParameter3;
        v41 = _InterlockedExchangeAdd64(v38, -(__int64)BugCheckParameter3);
        if ( *((_QWORD *)v35 + 9) )
        {
          v164 = &v35[8 * v37];
          if ( (v164[56] & 1) == 0 )
          {
            v165 = *((_QWORD *)v164 + 7);
            v166 = (4 * v40 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
            if ( v166 == 64 )
              v166 = 128LL;
            while ( 1 )
            {
              v167 = v166 + v41;
              if ( v41 >= v165 || v167 >= v165 )
                break;
              v168 = v165;
              v165 = _InterlockedCompareExchange64((volatile signed __int64 *)v164 + 7, v167, v165);
              if ( v168 == v165 )
              {
                v170 = *((_QWORD *)v35 + 9);
                v171 = v165 - v167;
                v172 = -v171;
                if ( v171 >= 0 )
                  v172 = v171;
                if ( *(_QWORD *)(v170 + 24LL * v37 + 16) || *(_QWORD *)(v170 + 24LL * v37 + 24) )
                  _InterlockedAdd64((volatile signed __int64 *)(v170 + 24LL * v37 + 32), -v172);
                break;
              }
              v41 = *v38;
            }
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_56;
      }
    }
    else
    {
      *(_DWORD *)v31 = v135;
      v136 = *(_QWORD *)(PoolTrackTable + 80LL * v28 + 72);
      if ( v136 )
        *(_QWORD *)(v31 + 72) = v136;
    }
  }
  if ( (v23 & 0x100) != 0 )
  {
    v75 = 0;
    v76 = (volatile signed __int64 *)(v31 + 32);
    v77 = (volatile signed __int64 *)(v31 + 48);
    v78 = 0LL;
  }
  else
  {
    v75 = 1;
    v76 = (volatile signed __int64 *)(v31 + 8);
    v77 = (volatile signed __int64 *)(v31 + 24);
    v78 = 24LL;
  }
  _InterlockedIncrement64(v77);
  v79 = BugCheckParameter3;
  v80 = _InterlockedExchangeAdd64(v76, -(__int64)BugCheckParameter3);
  if ( *(_QWORD *)(v31 + 72) )
  {
    v81 = v31 + 8LL * v75;
    if ( (*(_BYTE *)(v81 + 56) & 1) == 0 )
    {
      v82 = *(_QWORD *)(v81 + 56);
      v83 = (4 * v79 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v83 == 64 )
        v83 = 128LL;
      while ( 1 )
      {
        v84 = v83 + v80;
        if ( v80 >= v82 || v84 >= v82 )
          break;
        v85 = v82;
        v82 = _InterlockedCompareExchange64((volatile signed __int64 *)(v81 + 56), v84, v82);
        if ( v85 == v82 )
        {
          v173 = v82 - v84;
          v174 = -v173;
          if ( v173 >= 0 )
            v174 = v173;
          v175 = v78 + *(_QWORD *)(v31 + 72);
          if ( *(_QWORD *)(v175 + 16) || *(_QWORD *)(v175 + 24) )
            _InterlockedAdd64((volatile signed __int64 *)(v175 + 32), -v174);
          break;
        }
        v80 = *v76;
      }
    }
  }
LABEL_56:
  if ( (v23 & 0x400) != 0 )
  {
    v42 = BugCheckParameter3;
    ViFreeTrackedPool(v5, BugCheckParameter3);
  }
  else
  {
    v42 = BugCheckParameter3;
  }
  if ( byte_140FCECA8 )
  {
    if ( v11 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v11, 0LL);
    if ( (v11 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v11, 8uLL);
    if ( v42 + v11 < v11 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v11, v42);
    v187 = (_BYTE *)(KasaniShadow + ((v11 + 0x800000000000LL) >> 3));
    if ( v42 >> 3 )
    {
      memset_0((void *)(KasaniShadow + ((v11 + 0x800000000000LL) >> 3)), 0, v42 >> 3);
      v187 += v42 >> 3;
    }
    if ( (v42 & 7) != 0 )
      *v187 = v42 & 7;
  }
  v43 = *(_QWORD *)(v8 + 56);
  if ( v42 - 513 > 0xD7F
    || !v43
    || ((v159 = v43
              + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v42 + 15) >> 4)) - 33 + 1LL) << 6),
         ++*(_DWORD *)(v159 + 28),
         *(_WORD *)v159 >= *(_WORD *)(v159 + 16))
      ? (++*(_DWORD *)(v159 + 32), result = 0LL)
      : (RtlpInterlockedPushEntrySList((PSLIST_HEADER)v159, (PSLIST_ENTRY)v11), result = 1LL),
        !(_DWORD)result) )
  {
    if ( (_WORD)v11 )
    {
      v44 = v8 + 320;
    }
    else
    {
      v45 = RtlCSparseBitmapBitmaskRead(&dword_140E68510, 2 * ((v11 - qword_140E68508) >> 20));
      if ( !v45 || (_DWORD)v45 == 3 )
        return RtlpHpLargeFree(v8, v11);
      v44 = v8 + 320;
      if ( (_DWORD)v45 == 2 )
        v44 = v8 + 512;
    }
    v46 = v11 & *(_QWORD *)v44;
    if ( !(RtlpHpHeapGlobals ^ v46 ^ *(_QWORD *)(v46 + 0x10) ^ v44) )
    {
      v47 = *(_BYTE *)(v44 + 8);
      v48 = v46 + 32LL * ((unsigned int)(v11 - v46) >> v47);
      v49 = -32LL * *(unsigned __int8 *)(v48 + 26) + v48;
      v50 = *(_BYTE *)(v49 + 24);
      v51 = v46 + ((__int64)(v49 - v46) >> 5 << v47);
      if ( (v51 == v11) + v50 == 11 )
      {
        v52 = *(_QWORD *)(v44 + 24);
        v53 = SchedulingGroup;
        v54 = (unsigned __int64)*(unsigned __int16 *)(v51 + 44) << 6;
        v55 = (((unsigned int)SchedulingGroup
              - ((_DWORD)v51
               + (((unsigned int)qword_140E28348 ^ *(_DWORD *)(v51 + 40) ^ (unsigned int)(v51 >> 12)) >> 16)))
             * (unsigned __int64)*(unsigned int *)(v54 + v52 + 72)) >> 32;
        result = (unsigned int)((unsigned __int16)(qword_140E28348 ^ *(_WORD *)(v51 + 40) ^ (v51 >> 12))
                              * ((((unsigned int)SchedulingGroup
                                 - ((_DWORD)v51
                                  + (((unsigned int)qword_140E28348 ^ *(_DWORD *)(v51 + 40) ^ (unsigned int)(v51 >> 12)) >> 16)))
                                * (unsigned __int64)*(unsigned int *)(v54 + v52 + 72)) >> 32));
        if ( (_DWORD)SchedulingGroup
           - ((_DWORD)v51
            + (((unsigned int)qword_140E28348 ^ *(_DWORD *)(v51 + 40) ^ (unsigned int)(v51 >> 12)) >> 16)) != (_DWORD)result )
          return result;
        v57 = (*(_DWORD *)(v52 + 76) >> 13) & 0x3FFFF;
        _BitScanReverse(&v58, v57);
        v59 = (*(_DWORD *)(v52 + 76) >> 4) & 0x1FF;
        v60 = 1 << v58;
        v61 = v58 - 2;
        v193[1] = v61;
        v62 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v61) + 8LL * (v57 ^ v60) + 8)
                        + 8 * v59);
        if ( !v62 )
          LOWORD(v62) = RtlpHpLfhThreadDataInitializeSet(v52);
        if ( (_WORD)v62 != *(_WORD *)(v51 + 46) || *(_BYTE *)(v51 + 22) == 1 )
        {
          v63 = v55;
          v64 = *(_QWORD *)(v51 + 8 * (v55 >> 6) + 64);
          if ( _bittest64(&v64, v55 & 0x3F) )
          {
            result = *(_QWORD *)(v51 + 16);
            do
            {
              v190 = result;
              SchedulingGroup = result;
              if ( BYTE6(result) == 1 )
                BYTE6(SchedulingGroup) = 2;
              if ( v53 )
              {
                v65 = *(_QWORD *)(v52 + 80);
                v66 = SchedulingGroup;
                *(_WORD *)v53 = SchedulingGroup;
                v67 = __ROL4__(*(_DWORD *)v53 ^ v65, v66);
                v59 = HIDWORD(v65);
                LOWORD(SchedulingGroup) = v55 + 1;
                *(_DWORD *)(v53 + 8) = v53 ^ v59 ^ v67;
              }
              ++WORD1(SchedulingGroup);
              v68 = (unsigned __int64)*(unsigned __int16 *)(v51 + 44) << 6;
              v69 = result;
              result = _InterlockedCompareExchange64((volatile signed __int64 *)(v51 + 16), SchedulingGroup, result);
            }
            while ( v69 != result );
            if ( !*(_BYTE *)(v68 + v52 + 92) )
            {
              *(_BYTE *)(v68 + v52 + 92) = 1;
              result = BYTE1(**(_QWORD **)(*(_QWORD *)v52 + 56LL)) == 1
                     ? (unsigned int)ExpHpGCScheduledNonPaged
                     : (unsigned int)ExpHpGCScheduledPaged;
              if ( !(_DWORD)result )
                result = RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)v52 + 56LL), v68, v59);
            }
            if ( BYTE6(v190) == 1 )
            {
              v70 = v52 + (WORD2(v190) << 6);
              _m_prefetchw((const void *)(v70 + 8));
              v71 = *(_QWORD *)(v70 + 8);
              v72 = *(_QWORD *)(v51 + 24);
              *(_QWORD *)(v51 + 24) = v72 & 0xFFF | (v71 - (v71 & 0xFFF));
              v73 = v71;
              result = _InterlockedCompareExchange64((volatile signed __int64 *)(v70 + 8), v71 & 0xFFF | v51, v71);
              if ( v73 != result )
              {
                do
                {
                  v74 = result;
                  *(_QWORD *)(v51 + 24) = v72 ^ (result ^ v72) & 0xFFFFFFFFFFFFF000uLL;
                  result = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v70 + 8),
                             v51 | result & 0xFFF,
                             result);
                }
                while ( result != v74 );
              }
            }
            return result;
          }
        }
        else
        {
          v176 = *(_QWORD *)(v51 + 8 * (v55 >> 6) + 64);
          v177 = __ROL8__(-2LL, v55 & 0x3F);
          v63 = v55;
          result = v176 & v177;
          *(_QWORD *)(v51 + 8 * (v55 >> 6) + 64) = v176 & v177;
          if ( (~v177 & v176) != 0 )
          {
            ++*(_WORD *)(v51 + 32);
            return result;
          }
        }
        return RtlpLogHeapFailure(17, *(_QWORD *)v52, v53, v51, v63, 0LL);
      }
      v127 = v49 & *(_QWORD *)v44;
      v193[0] = 0;
      v128 = v127 + ((__int64)(v49 - v127) >> 5 << v47);
      if ( (v50 & 3) == 3 )
      {
        if ( v11 == v128 )
          return RtlpHpSegPageRangeShrink(v44, v49);
        if ( v50 == 15 )
        {
          if ( v11 > v128 )
          {
            result = RtlpHpVsContextFree(*(_QWORD *)(v44 + 32), v128, v11, v193);
            if ( (_DWORD)result )
            {
              v129 = *(_QWORD *)(v44 + 24);
              result = *(unsigned __int16 *)(v129 + 68);
              if ( v193[0] < (unsigned int)result )
              {
                v130 = v129
                     + 8LL
                     * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                      + ((unsigned __int64)(unsigned int)(v193[0] + 15) >> 4))
                      - 1);
                do
                {
                  SchedulingGroup = *(_QWORD *)(v130 + 448);
                  v131 = SchedulingGroup;
                  result = SchedulingGroup >> 16;
                  v132 = SchedulingGroup;
                  if ( (SchedulingGroup & 1) == 0 )
                    break;
                  if ( WORD1(SchedulingGroup) > 1u )
                  {
                    --WORD1(SchedulingGroup);
                    v132 = SchedulingGroup;
                  }
                  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v130 + 448), v132, v131);
                }
                while ( result != v131 );
              }
            }
            return result;
          }
          return RtlpHpSegPageRangeShrink(v44, v49);
        }
      }
    }
    return RtlpLogHeapFailure(9, *(_QWORD *)(v44 + 56), v11, 0, 0LL, 0LL);
  }
  return result;
}
