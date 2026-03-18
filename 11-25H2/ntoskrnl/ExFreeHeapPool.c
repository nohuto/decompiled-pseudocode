/*
 * XREFs of ExFreeHeapPool @ 0x1402DECE0
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x1402F7F74 (ExAllocateContiguousHeapPool.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     MmDeterminePoolType @ 0x1402DAA10 (MmDeterminePoolType.c)
 *     ExpFreePoolChecks @ 0x1402DE730 (ExpFreePoolChecks.c)
 *     RtlpHpFreeHeap @ 0x1402DE7F0 (RtlpHpFreeHeap.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402E0260 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpHpLfhContextFree @ 0x1402E04D0 (RtlpHpLfhContextFree.c)
 *     ExpPoolTrackerReturnLimit @ 0x1402E0770 (ExpPoolTrackerReturnLimit.c)
 *     RtlpHpVsContextFree @ 0x1402E0830 (RtlpHpVsContextFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402E0DA0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402FA31C (RtlpHpVaMgrCtxQuery.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     EtwTracePool @ 0x1402FE3D8 (EtwTracePool.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     ExpCheckForWorker @ 0x1403BD890 (ExpCheckForWorker.c)
 *     PspReturnResourceQuota @ 0x1403C651C (PspReturnResourceQuota.c)
 *     ExIsSpecialPoolAddress @ 0x1403C6C50 (ExIsSpecialPoolAddress.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1403C7D9C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x1403CB4FC (RtlpHpLargeFree.c)
 *     ExpCheckForResource @ 0x140492604 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x140499B14 (ExpCheckForLookaside.c)
 *     KeCheckForTimer @ 0x1404CEE18 (KeCheckForTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B64240 (ExpPoolFlagsToPoolType.c)
 *     ViFreeTrackedPool @ 0x140B98FF0 (ViFreeTrackedPool.c)
 *     VfPtFreePoolNotification @ 0x140B99718 (VfPtFreePoolNotification.c)
 */

void __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r15d
  ULONG_PTR v5; // r12
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // r13
  char v9; // al
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // r8
  ULONG_PTR v12; // rcx
  char v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // r15
  __int16 v23; // r14
  __int64 v24; // r9
  __int64 v25; // r11
  unsigned int v26; // edx
  unsigned int v27; // r10d
  int v28; // eax
  __int64 v29; // r8
  unsigned __int8 v30; // di
  __int64 v31; // rdx
  unsigned int k; // edx
  char *v33; // r8
  __int64 *i; // rax
  int v35; // r9d
  volatile signed __int64 *v36; // rdx
  volatile signed __int64 *v37; // rax
  ULONG_PTR v38; // r10
  signed __int64 v39; // rcx
  ULONG_PTR v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r11
  ULONG_PTR v45; // r8
  char v46; // cl
  ULONG_PTR v47; // rdx
  ULONG_PTR v48; // rdx
  ULONG_PTR v49; // r9
  char v50; // r8
  unsigned int v51; // r9d
  volatile signed __int64 *v52; // rdx
  volatile signed __int64 *v53; // rax
  __int64 v54; // r10
  ULONG_PTR v55; // rbx
  signed __int64 v56; // rcx
  __int64 v57; // r11
  signed __int64 v58; // rax
  unsigned __int64 v59; // r9
  signed __int64 v60; // rbx
  signed __int64 v61; // rtt
  ULONG_PTR v62; // r14
  unsigned __int8 v63; // r15
  signed __int32 v64; // eax
  signed __int32 v65; // ett
  unsigned __int64 v66; // r8
  unsigned __int64 v67; // r9
  int v68; // r10d
  unsigned int v69; // edx
  char *v70; // rcx
  unsigned int v71; // eax
  ULONG_PTR v72; // rdx
  unsigned int v73; // r14d
  ULONG_PTR v74; // rdi
  __int64 v75; // rsi
  unsigned __int64 v76; // rdi
  int v77; // r8d
  __int64 v78; // r11
  unsigned int v79; // edx
  unsigned int v80; // r10d
  int v81; // eax
  __int64 v82; // r9
  unsigned int v83; // r8d
  unsigned __int64 v84; // r10
  __int64 v85; // r8
  __int64 v86; // r10
  signed __int64 v87; // rcx
  signed __int64 v88; // rdx
  __int64 v89; // rcx
  __int16 v90; // r14
  signed __int64 v91; // rdx
  __int16 v92; // ax
  unsigned int v93; // esi
  ULONG_PTR v94; // rbx
  signed __int64 v95; // rdi
  struct _KPROCESS *v96; // rdi
  __int64 v97; // r14
  ULONG_PTR v98; // r15
  char v99; // r13
  unsigned __int64 *v100; // r12
  unsigned __int64 v101; // r14
  unsigned __int64 v102; // rax
  unsigned __int64 *v103; // r8
  unsigned __int64 v104; // rdx
  bool v105; // zf
  signed __int64 v106; // rax
  signed __int64 v107; // rsi
  bool v108; // cc
  signed __int64 v109; // rsi
  int v110; // eax
  __int64 v111; // rax
  int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rax
  unsigned __int64 v115; // rtt
  __int64 v116; // r8
  __int64 *v117; // r13
  ULONG_PTR v118; // r12
  unsigned __int64 *v119; // r14
  unsigned __int64 v120; // r15
  unsigned __int64 v121; // rax
  ULONG_PTR *v122; // rdx
  ULONG_PTR v123; // r8
  signed __int64 v124; // rax
  signed __int64 v125; // rsi
  signed __int64 BugCheckParameter4; // rsi
  unsigned __int64 v127; // rax
  volatile signed __int64 *v128; // rcx
  unsigned __int64 v129; // rtt
  __int64 v130; // r8
  __int64 v131; // rcx
  int v132; // eax
  int v133; // edx
  char *v134; // r11
  signed __int64 v135; // rax
  unsigned __int64 v136; // r10
  signed __int64 v137; // rbx
  signed __int64 v138; // rtt
  int v139; // edx
  __int64 v140; // rdx
  __int64 v141; // rax
  __int64 v142; // r10
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rdx
  _BYTE *v146; // r8
  int v147; // ecx
  _BYTE *j; // r8
  __int64 v149; // rdi
  _WORD *v150; // rbx
  ULONG_PTR v151; // rsi
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v153; // rdx
  unsigned __int64 v154; // r14
  _BYTE *v155; // rbx
  char v156[8]; // [rsp+30h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-71h]
  int v158; // [rsp+40h] [rbp-69h] BYREF
  int v159; // [rsp+44h] [rbp-65h] BYREF
  __int64 v160; // [rsp+48h] [rbp-61h]
  unsigned int v161; // [rsp+50h] [rbp-59h] BYREF
  ULONG_PTR v162; // [rsp+58h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v164[2]; // [rsp+78h] [rbp-31h]
  __int128 v165; // [rsp+80h] [rbp-29h]
  __int128 v166; // [rsp+98h] [rbp-11h] BYREF
  __int128 v167; // [rsp+A8h] [rbp-1h]
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+5Fh]
  ULONG_PTR v169; // [rsp+110h] [rbp+67h] BYREF
  __int64 v170; // [rsp+118h] [rbp+6Fh] BYREF
  char v171; // [rsp+120h] [rbp+77h] BYREF
  _KSCHEDULING_GROUP *SchedulingGroup; // [rsp+128h] [rbp+7Fh]

  v169 = BugCheckParameter1;
  v4 = 0;
  v5 = BugCheckParameter1;
  v165 = 0LL;
  LOWORD(v165) = 259;
  BYTE2(v165) = 0;
  if ( (_WORD)BugCheckParameter1 )
  {
    v6 = 0;
LABEL_3:
    v164[0] = 0x100000;
    v164[1] = 0x1000000;
    v7 = (unsigned int)v164[v6];
    v8 = (RtlpHpHeapGlobals ^ *(_QWORD *)((v5 & ~(v7 - 1)) + 0x10) ^ v5 & ~(v7 - 1)) - 192LL * v6 - 320;
    goto LABEL_4;
  }
  v114 = RtlCSparseBitmapBitmaskRead(&dword_140E68050, 2 * ((BugCheckParameter1 - qword_140E68048) >> 20));
  if ( v114 )
  {
    v6 = v114 - 1;
    if ( v6 != 2 )
      goto LABEL_3;
  }
  v166 = 0LL;
  v167 = 0LL;
  RtlpHpVaMgrCtxQuery(&unk_140E68098, v5, &v166);
  v8 = *(_QWORD *)v167;
LABEL_4:
  v170 = v8;
  if ( !v8 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, v5, 0LL);
  if ( ExpSpecialAllocations )
  {
    for ( i = qword_140EEE980; (__int64)i < (__int64)qword_140EEE9A0; ++i )
    {
      if ( v8 == *i )
      {
        _InterlockedDecrement(&ExpSpecialAllocations);
        v149 = MmDeterminePoolType(v5);
        v150 = (_WORD *)(v5 & 0xFFFFFFFFFFFFF000uLL);
        if ( byte_140FCDC68 )
        {
          if ( (unsigned __int64)v150 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v5 & 0xFFFFFFFFFFFFF000uLL, 0LL);
          if ( v150 + 2048 < v150 )
            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v5 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL);
          memset_0((void *)(KasaniShadow + ((unsigned __int64)(v150 + 0x400000000000LL) >> 3)), 0, 0x200uLL);
        }
        v151 = 4096 - (unsigned int)(v5 & 0xFFF);
        ExpFreePoolChecks(v5, *(_DWORD *)((v5 & 0xFFFFFFFFFFFFF000uLL) + 4), v151, 128, v5);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > (unsigned __int8)(((v149 & 0x100) == 0) + 1) )
          KeBugCheckEx(0xC1u, CurrentIrql, 0x100uLL, v5, 0x31uLL);
        v153 = *v150 & 0x1FFF;
        v154 = (v153 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v154 != v151 )
          KeBugCheckEx(0xC1u, v5, *v150 & 0x1FFF, v151, 0x21uLL);
        v146 = v150 + 8;
        v147 = HIWORD(*(_DWORD *)v150);
        if ( (*(_DWORD *)v150 & 0x4000) != 0 )
          v146 = v150 + 12;
        while ( (unsigned __int64)v146 < v5 )
        {
          if ( *v146 != (_BYTE)v147 )
            KeBugCheckEx(0xC1u, v5, (ULONG_PTR)v146, *(unsigned int *)v150, 0x23uLL);
          ++v146;
        }
        for ( j = (_BYTE *)(v153 + v5); (unsigned __int64)j < ((v5 + 4095) & 0xFFFFFFFFFFFFF000uLL); ++j )
        {
          if ( *j != (_BYTE)v147 )
            KeBugCheckEx(0xC1u, v5, (ULONG_PTR)j, *(unsigned int *)v150, 0x24uLL);
        }
        if ( (*(_DWORD *)v150 & 0x4000) != 0 )
          ViFreeTrackedPool(v5, v153);
        v75 = *(unsigned int *)((v5 & 0xFFFFFFFFFFFFF000uLL) + 4);
        v158 = 0;
        LOBYTE(v169) = 0;
        v171 = 0;
        if ( (_DWORD)v75 == PoolHitTag )
          __debugbreak();
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
          && (int)ExpPoolFlagsToPoolType(v149, v149 & 0x10, (unsigned int)&v158, (unsigned int)&v169, (__int64)&v171) >= 0 )
        {
          v139 = v158;
          if ( (_BYTE)v169 )
          {
            v139 = v158 | 8;
            v158 |= 8u;
          }
          EtwTracePool(3618, v139, v75, v5, v154);
        }
        v76 = v149 & 0xFFFFFFFFFFFFFFFBuLL;
        v77 = PoolTrackTableMask;
        v78 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
        v79 = PoolTrackTableMask & ((40543 * v75) ^ ((unsigned __int64)(40543 * v75) >> 32));
        v80 = v79;
        while ( 1 )
        {
          v81 = *(_DWORD *)(v78 + 80LL * v79);
          v82 = v78 + 80LL * v79;
          if ( v81 == (_DWORD)v75 )
            break;
          if ( v81 || (v112 = *(_DWORD *)(PoolTrackTable + 80LL * v79)) == 0 )
          {
            v79 = v77 & (v79 + 1);
            if ( v79 == v80 )
            {
              ExpRemovePoolTrackerExpansion((unsigned int)v75, v154, v76, v82);
              goto LABEL_111;
            }
          }
          else
          {
            *(_DWORD *)v82 = v112;
            v113 = *(_QWORD *)(PoolTrackTable + 80LL * v79 + 72);
            if ( v113 )
              *(_QWORD *)(v82 + 72) = v113;
          }
        }
        ExpPoolTrackerReturnLimit((v76 & 0x100) == 0, v154, v78 + 80LL * v79);
LABEL_111:
        RtlpHpFreeHeap(v8, v5 & 0xFFFFFFFFFFFFF000uLL, v83);
        return;
      }
    }
  }
  if ( (v5 & 0xFFF) != 0 )
  {
    v9 = *(_BYTE *)(v5 - 13);
    v10 = v5 - 16;
    v11 = 0x140000000uLL;
    v12 = v5 - 16;
    if ( (v9 & 8) == 0 )
      goto LABEL_9;
    if ( (v9 & 4) != 0 )
      v12 -= 16LL * (unsigned __int8)*(_WORD *)v10;
    v89 = ExpPoolQuotaCookie ^ *(_QWORD *)(v12 + 8) ^ v12;
    if ( !v89 || v89 == -1 )
      goto LABEL_9;
    if ( ExpSpecialAllocations )
    {
      if ( (unsigned int)ExIsSpecialPoolAddress(v5, 128LL, 0x140000000uLL, a4) )
      {
LABEL_9:
        if ( (*(_BYTE *)(v10 + 3) & 4) != 0 )
        {
          v10 += -16LL * (unsigned __int8)*(_WORD *)v10;
          *(_BYTE *)(v10 + 3) |= 4u;
        }
        v13 = *(_BYTE *)(v10 + 3);
        v14 = 256LL;
        v15 = *(_DWORD *)(v10 + 4);
        if ( (v13 & 1) == 0 )
          v14 = 128LL;
        v16 = v14 | 4;
        if ( (v13 & 0x20) == 0 )
          v16 = v14;
        v17 = v16 | 2;
        v160 = v17;
        if ( (v13 & 8) != 0 )
        {
          v17 |= 1uLL;
          v160 = v17;
        }
        if ( (v13 & 0xDE) != 0 )
        {
          v18 = v17 | 8;
          if ( (v13 & 4) == 0 )
            v18 = v17;
          v19 = v18 | 0x200;
          if ( v13 >= 0 )
            v19 = v18;
          v20 = v19 | 0x400;
          if ( (v13 & 0x40) == 0 )
            v20 = v19;
          v160 = v20;
          if ( (v13 & 8) == 0 )
          {
            v160 = v20;
            if ( (v13 & 0x10) != 0 )
              v160 = v20 | 0x20;
          }
        }
        v21 = v10 + 16;
        v22 = 16LL * (unsigned __int8)*(_WORD *)(v10 + 2);
        BugCheckParameter3 = v22;
        goto LABEL_28;
      }
      v11 = 0x140000000uLL;
    }
    if ( v5 >= 0xFFFF800000000000uLL && byte_140E38768[((v5 >> 39) & 0x1FF) - 256] == 5 )
      v90 = 256;
    else
      v90 = 64;
    v91 = v5 - 16;
    if ( (*(_BYTE *)(v10 + 3) & 4) != 0 )
      v91 = -16LL * (unsigned __int8)*(_WORD *)v10 + v10;
    v92 = *(_WORD *)(v91 + 2);
    v93 = *(_DWORD *)(v91 + 4);
    v94 = 16LL * (unsigned __int8)v92;
    if ( (v92 & 0x800) != 0 )
    {
      v95 = *(_QWORD *)(v91 + 8) ^ v91;
      *(_QWORD *)(v91 + 8) = ExpPoolQuotaCookie ^ v91;
      v96 = (struct _KPROCESS *)(ExpPoolQuotaCookie ^ v95);
      if ( v96 )
      {
        if ( v96 != (struct _KPROCESS *)-1LL )
        {
          if ( (unsigned __int64)v96 < 0xFFFF800000000000uLL || (v96->Header.Type & 0x7F) != 3 )
          {
            if ( v91 )
              v4 = v93;
            KeBugCheckEx(0xC2u, 0xDuLL, v5, v4, (ULONG_PTR)v96);
          }
          v97 = v90 & 0x100;
          if ( v96 != PsInitialSystemProcess )
          {
            SchedulingGroup = v96[1].SchedulingGroup;
            v98 = v97 != 0;
            v162 = v98 << 7;
            v99 = PspResourceFlags[8 * v98];
            v100 = (unsigned __int64 *)(&SchedulingGroup->Policy + 16 * v98);
            _m_prefetchw(v100);
            v101 = *v100;
            v102 = v100[8];
            if ( v100[10] )
            {
              if ( v102 > v101 )
              {
                v103 = (unsigned __int64 *)&qword_140F05468[7 * v98];
                v104 = *v103;
                if ( v102 - v101 > *v103 )
                {
                  if ( v104 > v94 )
                    v104 = v94;
                  v115 = v100[8];
                  if ( v115 == _InterlockedCompareExchange64((volatile signed __int64 *)v100 + 8, v102 - v104, v102)
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 9, v104) + v104 > *v103 )
                  {
                    v116 = _InterlockedExchange64((volatile __int64 *)v100 + 9, 0LL);
                    if ( v116 )
                      PspReturnResourceQuota((unsigned int)v98, v100, v116, 0LL);
                  }
                }
              }
            }
            v11 = v94;
            while ( 1 )
            {
              do
              {
                a4 = v101;
                if ( v94 < v101 )
                  a4 = v94;
                v91 = 0LL;
                if ( v94 < v101 )
                  v91 = v101 - v94;
                v106 = _InterlockedCompareExchange64((volatile signed __int64 *)v100, v91, v101);
                v105 = v101 == v106;
                v101 = v106;
              }
              while ( !v105 );
              v94 -= a4;
              if ( !v94 )
                break;
              if ( SchedulingGroup == (_KSCHEDULING_GROUP *)&PspSystemQuotaBlock )
                KeBugCheckEx(0x21u, (ULONG_PTR)v96, v98, v11, v94);
              SchedulingGroup = (_KSCHEDULING_GROUP *)&PspSystemQuotaBlock;
              v100 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v162);
              _m_prefetchw((char *)&PspSystemQuotaBlock + v162);
              v101 = *(__int64 *)((char *)&PspSystemQuotaBlock + v162);
            }
            if ( (v99 & 4) != 0 )
            {
              v11 = -(__int64)v11;
              _InterlockedAdd64((volatile signed __int64 *)&v96[1].ThreadListHead.Blink + v98, v11);
            }
            v5 = v169;
            v8 = v170;
          }
          if ( ObpTraceFlags )
            ObpPushStackInfo((__int64)&v96[-1].ExtendedFeatureDisableMask, 0, 1u, v93);
          v107 = _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)&v96[-1].ExtendedFeatureDisableMask,
                   0xFFFFFFFFFFFFFFFFuLL);
          v108 = v107 <= 1;
          v109 = v107 - 1;
          if ( v108 )
          {
            if ( *(_QWORD *)&v96[-1].PrimaryGroup )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v96[-1].CpuPartitionList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v96 - 48) >> 8)],
                (ULONG_PTR)v96,
                3uLL,
                *(_QWORD *)&v96[-1].PrimaryGroup);
            if ( v109 < 0 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v96, 4uLL, v109);
            ObpDeferObjectDeletion(&v96[-1].ExtendedFeatureDisableMask, v91, v11, a4);
          }
        }
      }
    }
    v10 = v5 - 16;
    goto LABEL_9;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_140E38768[((v5 >> 39) & 0x1FF) - 256] == 5 )
    v62 = 256LL;
  else
    v62 = 64LL;
  v63 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v63);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v64 = ExpLargePoolTableLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v65 = v64;
      v64 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v64 + 1, v64);
      if ( v65 == v64 )
        break;
      if ( v64 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, v63);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, v63);
  }
  v66 = PoolBigPageTableSize;
  v67 = (unsigned __int64)PoolBigPageTable;
  v68 = 1;
  v69 = (((40543 * (v5 >> 12)) >> 32) ^ (40543 * (v5 >> 12))) & (PoolBigPageTableSize - 1);
  while ( 1 )
  {
    v70 = (char *)PoolBigPageTable + 32 * v69;
    if ( *(_QWORD *)v70 == v5 )
      break;
    if ( ++v69 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v68 )
        goto LABEL_91;
      v69 = 0;
      v68 = 0;
    }
  }
  if ( !v70 )
LABEL_91:
    KeBugCheckEx(0x19u, 0x22uLL, v5, v62, 0LL);
  v71 = *((_DWORD *)v70 + 3);
  v72 = *((_QWORD *)v70 + 2);
  v15 = *((_DWORD *)v70 + 2);
  v73 = (v71 >> 8) & 0xFFF;
  BugCheckParameter3 = v72;
  v160 = v73;
  if ( (v71 & 0x100) != 0 )
    v74 = v5 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v70 + 3);
  else
    v74 = -1LL;
  _InterlockedDecrement(&ExpPoolBigEntriesInUse);
  *((_QWORD *)v70 + 3) = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v70);
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
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v63);
  __writecr8(v63);
  if ( v74 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (PEPROCESS)v74 != PsInitialSystemProcess )
    {
      v117 = *(__int64 **)(v74 + 760);
      v118 = (v73 & 0x100) != 0LL;
      LOBYTE(SchedulingGroup) = PspResourceFlags[8 * v118];
      v162 = v118 << 7;
      v119 = (unsigned __int64 *)&v117[16 * v118];
      _m_prefetchw(v119);
      v120 = *v119;
      v121 = v119[8];
      if ( v119[10] )
      {
        if ( v121 > v120 )
        {
          v122 = (ULONG_PTR *)&qword_140F05468[7 * v118];
          v123 = *v122;
          if ( v121 - v120 > *v122 )
          {
            if ( v123 > BugCheckParameter3 )
              v123 = BugCheckParameter3;
            v129 = v119[8];
            if ( v129 == _InterlockedCompareExchange64((volatile signed __int64 *)v119 + 8, v121 - v123, v121)
              && _InterlockedExchangeAdd64((volatile signed __int64 *)v119 + 9, v123) + v123 > *v122 )
            {
              v130 = _InterlockedExchange64((volatile __int64 *)v119 + 9, 0LL);
              if ( v130 )
                PspReturnResourceQuota((unsigned int)v118, v119, v130, 0LL);
            }
          }
        }
      }
      v66 = BugCheckParameter3;
      while ( 1 )
      {
        do
        {
          v67 = v120;
          if ( v66 < v120 )
            v67 = v66;
          v72 = 0LL;
          if ( v66 < v120 )
            v72 = v120 - v66;
          v124 = _InterlockedCompareExchange64((volatile signed __int64 *)v119, v72, v120);
          v105 = v120 == v124;
          v120 = v124;
        }
        while ( !v105 );
        v66 -= v67;
        if ( !v66 )
          break;
        if ( v117 == &PspSystemQuotaBlock )
          KeBugCheckEx(0x21u, v74, v118, BugCheckParameter3, v66);
        v117 = &PspSystemQuotaBlock;
        v119 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v162);
        _m_prefetchw((char *)&PspSystemQuotaBlock + v162);
        v120 = *(__int64 *)((char *)&PspSystemQuotaBlock + v162);
      }
      if ( ((unsigned __int8)SchedulingGroup & 4) != 0 )
        _InterlockedAdd64((volatile signed __int64 *)(v74 + 8 * v118 + 512), -(__int64)BugCheckParameter3);
      v5 = v169;
      v8 = v170;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo(v74 - 48, 0, 1u, v15);
    v125 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v74 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v108 = v125 <= 1;
    BugCheckParameter4 = v125 - 1;
    if ( v108 )
    {
      if ( *(_QWORD *)(v74 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v74 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v74 - 48) >> 8)],
          v74,
          3uLL,
          *(_QWORD *)(v74 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v74, 4uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v74 - 48, v72, v66, v67);
    }
  }
  v22 = BugCheckParameter3;
  v10 = v5;
  v21 = v5;
LABEL_28:
  v23 = v160;
  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (v160 & 0xC0) != 0 && (ExpPoolFlags & 0x200) != 0 )
      ExpCheckForLookaside(v10, v22);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(v10);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(v10, v22);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(v10);
  }
  if ( (ExpPoolFlags & 0x10) != 0 )
    VfPtFreePoolNotification(v10, v15, v22, v5);
  v159 = 0;
  LOBYTE(v170) = 0;
  v156[0] = 0;
  if ( v15 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
    && (int)ExpPoolFlagsToPoolType(v160, v160 & 0x10, (unsigned int)&v159, (unsigned int)&v170, (__int64)v156) >= 0 )
  {
    v133 = v159;
    if ( (_BYTE)v170 )
    {
      v133 = v159 | 8;
      v159 |= 8u;
    }
    EtwTracePool(3618, v133, v15, v21, BugCheckParameter3);
  }
  v24 = PoolTrackTableMask;
  v25 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  v26 = PoolTrackTableMask & ((40543 * v15) ^ ((40543 * (unsigned __int64)v15) >> 32));
  v27 = v26;
  while ( 1 )
  {
    v28 = *(_DWORD *)(v25 + 80LL * v26);
    v29 = v25 + 80LL * v26;
    if ( v28 == v15 )
      break;
    if ( v28 || (v110 = *(_DWORD *)(PoolTrackTable + 80LL * v26)) == 0 )
    {
      v26 = v24 & (v26 + 1);
      if ( v26 == v27 )
      {
        LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
        LockHandle.LockQueue.Next = 0LL;
        *(_QWORD *)&LockHandle.OldIrql = 0LL;
        v30 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v30);
        LockHandle.OldIrql = v30;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v31 = _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
          if ( v31 )
            KxWaitForLockOwnerShip(&LockHandle, v31, v29, v24);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
        }
        for ( k = 0; ; ++k )
        {
          if ( k >= (unsigned __int64)PoolTrackTableExpansionSize )
          {
LABEL_207:
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v127 = -(__int64)BugCheckParameter3;
            v128 = (volatile signed __int64 *)((char *)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number)
                                             + 80 * (unsigned int)(PoolTrackTableSize - 1));
            if ( (v23 & 0x100) != 0 )
            {
              _InterlockedIncrement64(v128 + 6);
              _InterlockedAdd64(v128 + 4, v127);
            }
            else
            {
              _InterlockedIncrement64(v128 + 3);
              _InterlockedAdd64(v128 + 1, v127);
            }
            goto LABEL_56;
          }
          v33 = (char *)PoolTrackTableExpansion + 80 * k;
          if ( *(_DWORD *)v33 == v15 )
            break;
          if ( !*(_DWORD *)v33 )
            goto LABEL_207;
        }
        if ( (v23 & 0x100) != 0 )
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
          v134 = &v33[8 * v35];
          if ( (v134[56] & 1) == 0 )
          {
            v135 = *((_QWORD *)v134 + 7);
            v136 = (4 * v38 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
            if ( v136 == 64 )
              v136 = 128LL;
            while ( 1 )
            {
              v137 = v136 + v39;
              if ( v39 >= v135 || v137 >= v135 )
                break;
              v138 = v135;
              v135 = _InterlockedCompareExchange64((volatile signed __int64 *)v134 + 7, v137, v135);
              if ( v138 == v135 )
              {
                v140 = *((_QWORD *)v33 + 9);
                v141 = v135 - v137;
                v142 = -v141;
                if ( v141 >= 0 )
                  v142 = v141;
                if ( *(_QWORD *)(v140 + 24LL * v35 + 16) || *(_QWORD *)(v140 + 24LL * v35 + 24) )
                  _InterlockedAdd64((volatile signed __int64 *)(v140 + 24LL * v35 + 32), -v142);
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
      *(_DWORD *)v29 = v110;
      v111 = *(_QWORD *)(PoolTrackTable + 80LL * v26 + 72);
      if ( v111 )
        *(_QWORD *)(v29 + 72) = v111;
    }
  }
  if ( (v23 & 0x100) != 0 )
  {
    v51 = 0;
    v52 = (volatile signed __int64 *)(v29 + 32);
    v53 = (volatile signed __int64 *)(v29 + 48);
    v54 = 0LL;
  }
  else
  {
    v51 = 1;
    v52 = (volatile signed __int64 *)(v29 + 8);
    v53 = (volatile signed __int64 *)(v29 + 24);
    v54 = 24LL;
  }
  _InterlockedIncrement64(v53);
  v55 = BugCheckParameter3;
  v56 = _InterlockedExchangeAdd64(v52, -(__int64)BugCheckParameter3);
  if ( *(_QWORD *)(v29 + 72) )
  {
    v57 = v29 + 8LL * v51;
    if ( (*(_BYTE *)(v57 + 56) & 1) == 0 )
    {
      v58 = *(_QWORD *)(v57 + 56);
      v59 = (4 * v55 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v59 == 64 )
        v59 = 128LL;
      while ( 1 )
      {
        v60 = v59 + v56;
        if ( v56 >= v58 || v60 >= v58 )
          break;
        v61 = v58;
        v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 56), v60, v58);
        if ( v61 == v58 )
        {
          v143 = v58 - v60;
          v144 = -v143;
          if ( v143 >= 0 )
            v144 = v143;
          v145 = v54 + *(_QWORD *)(v29 + 72);
          if ( *(_QWORD *)(v145 + 16) || *(_QWORD *)(v145 + 24) )
            _InterlockedAdd64((volatile signed __int64 *)(v145 + 32), -v144);
          break;
        }
        v56 = *v52;
      }
    }
  }
LABEL_56:
  if ( (v23 & 0x400) != 0 )
  {
    v40 = BugCheckParameter3;
    ViFreeTrackedPool(v5, BugCheckParameter3);
  }
  else
  {
    v40 = BugCheckParameter3;
  }
  if ( byte_140FCDC68 )
  {
    if ( v10 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v10, 0LL);
    if ( (v10 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v10, 8uLL);
    if ( v40 + v10 < v10 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v10, v40);
    v155 = (_BYTE *)(KasaniShadow + ((v10 + 0x800000000000LL) >> 3));
    if ( v40 >> 3 )
    {
      memset_0((void *)(KasaniShadow + ((v10 + 0x800000000000LL) >> 3)), 0, v40 >> 3);
      v155 += v40 >> 3;
    }
    if ( (v40 & 7) != 0 )
      *v155 = v40 & 7;
  }
  v41 = *(_QWORD *)(v8 + 56);
  if ( v40 - 513 > 0xD7F
    || !v41
    || ((v131 = v41
              + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v40 + 15) >> 4)) - 33 + 1LL) << 6),
         ++*(_DWORD *)(v131 + 28),
         *(_WORD *)v131 >= *(_WORD *)(v131 + 16))
      ? (++*(_DWORD *)(v131 + 32), v132 = 0)
      : (RtlpInterlockedPushEntrySList((PSLIST_HEADER)v131, (PSLIST_ENTRY)v10), v132 = 1),
        !v132) )
  {
    if ( (_WORD)v10 )
    {
      v42 = v8 + 320;
    }
    else
    {
      v43 = RtlCSparseBitmapBitmaskRead(&dword_140E68050, 2 * ((v10 - qword_140E68048) >> 20));
      if ( !v43 || (_DWORD)v43 == 3 )
      {
        RtlpHpLargeFree(v8, v10);
        return;
      }
      v42 = v8 + 320;
      if ( (_DWORD)v43 == 2 )
        v42 = v8 + 512;
    }
    v44 = *(_QWORD *)v42;
    v45 = v10 & *(_QWORD *)v42;
    if ( !(RtlpHpHeapGlobals ^ v45 ^ *(_QWORD *)(v45 + 0x10) ^ v42) )
    {
      v46 = *(_BYTE *)(v42 + 8);
      v47 = v45 + 32 * ((unsigned __int64)(unsigned int)(v10 - v45) >> v46);
      v48 = -32LL * *(unsigned __int8 *)(v47 + 26) + v47;
      v49 = v45 + ((__int64)(v48 - v45) >> 5 << v46);
      v50 = *(_BYTE *)(v48 + 24);
      if ( v50 + (v49 == v10) == 11 )
      {
        RtlpHpLfhContextFree(*(_QWORD *)(v42 + 24), v49, v10);
        return;
      }
      v161 = 0;
      v84 = (v48 & v44) + ((__int64)(v48 - (v48 & v44)) >> 5 << v46);
      if ( (v50 & 3) == 3 )
      {
        if ( v10 == v84 )
          goto LABEL_164;
        if ( v50 == 15 )
        {
          if ( v10 > v84 )
          {
            if ( (unsigned int)RtlpHpVsContextFree(*(_QWORD *)(v42 + 32), v84, v10, &v161) )
            {
              v85 = *(_QWORD *)(v42 + 24);
              if ( v161 < *(unsigned __int16 *)(v85 + 68) )
              {
                v86 = v85
                    + 8LL
                    * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(v161 + 15) >> 4))
                     - 1);
                do
                {
                  SchedulingGroup = *(_KSCHEDULING_GROUP **)(v86 + 448);
                  v87 = (signed __int64)SchedulingGroup;
                  v88 = (signed __int64)SchedulingGroup;
                  if ( ((unsigned __int8)SchedulingGroup & 1) == 0 )
                    break;
                  if ( WORD1(SchedulingGroup) > 1u )
                  {
                    --WORD1(SchedulingGroup);
                    v88 = (signed __int64)SchedulingGroup;
                  }
                }
                while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v86 + 448), v88, v87) != v87 );
              }
            }
            return;
          }
LABEL_164:
          RtlpHpSegPageRangeShrink(v42, v48);
          return;
        }
      }
    }
    RtlpLogHeapFailure(9, *(_QWORD *)(v42 + 56), v10, 0LL, 0LL, 0LL);
  }
}
