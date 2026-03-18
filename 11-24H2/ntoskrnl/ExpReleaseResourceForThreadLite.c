/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x1402D6BE0
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x1402D6820 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     RtlRemoveHeadCircularList @ 0x140428AD0 (RtlRemoveHeadCircularList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter3)
{
  volatile __int64 *v2; // rdi
  KIRQL v3; // r15
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v7; // rdx
  struct _KTHREAD *CurrentThread; // r8
  __int64 v9; // rdx
  bool v10; // r12
  unsigned int v11; // r15d
  unsigned int v12; // r15d
  unsigned int v13; // eax
  ULONG_PTR v14; // rdi
  char v15; // si
  KIRQL v16; // r14
  _QWORD *v17; // r15
  signed __int64 v18; // rax
  bool v19; // cc
  signed __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // ecx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  unsigned __int64 v26; // rdi
  int v27; // esi
  __int64 Pool2; // rax
  __int64 v29; // rax
  volatile signed __int64 *v30; // rcx
  char v31; // di
  __int64 v32; // r8
  __int64 v33; // r10
  __int64 v34; // rcx
  struct _KPRCB *v35; // rcx
  signed __int32 *SchedulerAssist; // r8
  bool v37; // r13
  unsigned int v38; // eax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  ULONG_PTR v42; // rdi
  unsigned int v43; // r13d
  unsigned __int64 v44; // rdi
  struct _KPRCB *v45; // r14
  struct _KTHREAD *v46; // r13
  unsigned int v47; // r12d
  __int64 Object; // rsi
  int v49; // edx
  unsigned int *v50; // rdi
  unsigned int j; // ecx
  int v52; // r8d
  unsigned int v53; // r15d
  unsigned __int64 v54; // r8
  volatile signed __int64 *v55; // rcx
  unsigned int v56; // r9d
  char v57; // di
  __int64 v58; // r8
  __int64 v59; // r10
  __int64 v60; // rcx
  struct _KPRCB *v61; // rcx
  _DWORD *v62; // r8
  _QWORD *v63; // rcx
  __int64 v64; // rdx
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  struct _KPRCB *CurrentPrcb; // r13
  _QWORD *v68; // r12
  _QWORD *i; // rax
  _DWORD *v70; // r9
  struct _KPRCB *v71; // rcx
  struct _KPRCB *v72; // rax
  _QWORD *v73; // rdx
  struct _KPRCB *v74; // rax
  _KTHREAD *v75; // rcx
  unsigned int v76; // eax
  ULONG_PTR v77; // rsi
  char v78; // r14
  _QWORD *v79; // r12
  signed __int64 v80; // rax
  signed __int64 v81; // rax
  __int64 v82; // rsi
  int v83; // ecx
  int v84; // eax
  int v85; // eax
  unsigned __int64 v86; // rdi
  int v87; // esi
  __int64 v88; // rax
  volatile signed __int64 *v89; // rcx
  unsigned int v90; // r9d
  char v91; // di
  __int64 v92; // r8
  __int64 v93; // r10
  __int64 v94; // rcx
  struct _KPRCB *v95; // rcx
  signed __int32 *v96; // r8
  unsigned int v97; // eax
  unsigned __int64 v98; // rdi
  struct _KPRCB *v99; // r14
  struct _KTHREAD *v100; // r15
  unsigned int v101; // r12d
  __int64 v102; // rsi
  int v103; // r13d
  unsigned int *v104; // rdi
  unsigned int k; // ecx
  int v106; // edx
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // r9
  unsigned int v109; // ecx
  unsigned int v110; // r10d
  unsigned __int64 v111; // rax
  char *v112; // r9
  unsigned int v113; // ecx
  unsigned int v114; // r10d
  unsigned __int64 v115; // r8
  volatile signed __int64 *v116; // rcx
  char v117; // di
  __int64 v118; // r8
  __int64 v119; // r10
  __int64 v120; // rcx
  struct _KPRCB *v121; // rcx
  _DWORD *v122; // r8
  char NextThread; // cl
  char v124; // al
  bool v125; // zf
  _QWORD *v126; // rax
  unsigned __int64 v127; // rax
  _QWORD *v128; // r12
  _QWORD *v129; // rax
  _QWORD *v130; // r13
  _QWORD *v131; // r12
  _DWORD *v132; // r9
  _QWORD *v133; // rdx
  _QWORD *v134; // rax
  _QWORD *v135; // rcx
  char v136; // cl
  char v137; // al
  struct _KPRCB *v138; // r14
  int v139; // ett
  signed __int32 v140; // eax
  signed __int32 v141; // ett
  _QWORD *v142; // rdx
  _QWORD *v143; // rax
  int v144; // ett
  signed __int32 v145; // eax
  signed __int32 v146; // ett
  _QWORD *v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  volatile signed __int64 *v150; // rcx
  volatile signed __int64 *v151; // rcx
  _QWORD *v152; // rcx
  __int64 **v153; // rsi
  __int64 *v154; // rcx
  __int64 **v155; // rsi
  __int64 *v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rax
  _QWORD *v159; // rcx
  __int64 **v160; // r14
  __int64 *v161; // rcx
  __int64 **v162; // r14
  __int64 *v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rax
  signed __int32 v167[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  char v169; // [rsp+30h] [rbp-D0h]
  PVOID SystemArgument1; // [rsp+38h] [rbp-C8h]
  __int16 Group; // [rsp+40h] [rbp-C0h]
  unsigned int v172; // [rsp+44h] [rbp-BCh]
  struct _KPRCB *v173; // [rsp+48h] [rbp-B8h]
  __int64 v174; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int64 *v175; // [rsp+58h] [rbp-A8h]
  __int64 v176; // [rsp+60h] [rbp-A0h]
  _QWORD *v177; // [rsp+68h] [rbp-98h]
  _QWORD *v178; // [rsp+70h] [rbp-90h]
  _QWORD *v179; // [rsp+78h] [rbp-88h]
  _QWORD *v180; // [rsp+80h] [rbp-80h]
  unsigned __int64 v181; // [rsp+88h] [rbp-78h]
  __int128 v182; // [rsp+90h] [rbp-70h] BYREF
  __int128 v183; // [rsp+A0h] [rbp-60h]
  __int128 v184; // [rsp+B0h] [rbp-50h]
  __int128 v185; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v186; // [rsp+D0h] [rbp-30h]
  __int128 v187; // [rsp+E0h] [rbp-20h]
  __int128 *v188; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v189; // [rsp+F8h] [rbp-8h]
  __int64 retaddr; // [rsp+148h] [rbp+48h]

  v2 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v176 = 0LL;
  v3 = 0;
  v175 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v174 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v176 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LOBYTE(v176) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v7 = (_QWORD *)_InterlockedExchange64(v2, (__int64)&v174);
    if ( v7 )
      KxWaitForLockOwnerShip((__int64)&v174, v7);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v174, v2);
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(unsigned __int16 *)(BugCheckParameter1 + 26);
  if ( ((v9 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (BugCheckParameter3 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter3 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter3, 0LL);
  }
  if ( (v9 & 0x80u) != 0LL )
  {
    v177 = 0LL;
    v10 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    v169 = v10;
    if ( ((v9 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter3 )
    {
      KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter3, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
    }
    v11 = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | (8 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 3) - 8);
    *(_DWORD *)(BugCheckParameter1 + 56) = v11;
    v12 = v11 >> 3;
    if ( !v12 )
    {
      v13 = *(_DWORD *)(BugCheckParameter1 + 56);
      v14 = *(_QWORD *)(BugCheckParameter1 + 48);
      if ( (v13 & 2) != 0 )
      {
        v14 &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      else if ( (v14 & 3) != 0 )
      {
        goto LABEL_29;
      }
      if ( !v14 )
        goto LABEL_29;
      if ( (v13 & 1) == 0 )
      {
LABEL_22:
        if ( (v13 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v14 + 1508));
          v13 = *(_DWORD *)(BugCheckParameter1 + 56) & 0xFFFFFFFB;
          *(_DWORD *)(BugCheckParameter1 + 56) = v13;
        }
        if ( (v13 & 2) != 0 )
        {
          if ( ObpTraceFlags )
            ObpPushStackInfo(v14 - 48);
          v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 48), 0xFFFFFFFFFFFFFFFFuLL);
          v19 = v18 <= 1;
          v20 = v18 - 1;
          if ( v19 )
          {
            if ( *(_QWORD *)(v14 - 40) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)],
                v14,
                3uLL,
                *(_QWORD *)(v14 - 40));
            if ( v20 < 0 )
              KeBugCheckEx(0x18u, 0LL, v14, 4uLL, v20);
            ObpDeferObjectDeletion(v14 - 48);
          }
          *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
        }
LABEL_29:
        *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
        v21 = 0LL;
        v22 = *(_DWORD *)(BugCheckParameter1 + 72);
        v172 = *(_DWORD *)(BugCheckParameter1 + 68);
        if ( v22 )
        {
          v23 = *(_QWORD **)(BugCheckParameter1 + 32);
          *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
          *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
          v177 = v23;
          *(_DWORD *)(BugCheckParameter1 + 72) = 0;
LABEL_31:
          v24 = (unsigned int)(v22 + *(_DWORD *)(BugCheckParameter1 + 64) - 1);
LABEL_32:
          *(_DWORD *)(BugCheckParameter1 + 64) = v24;
          if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
            *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
          if ( v21 )
          {
            v25 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
            *(_QWORD *)(BugCheckParameter1 + 48) = v21;
            *(_DWORD *)(BugCheckParameter1 + 56) = v25 | 8;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
          {
            KiReleaseQueuedSpinLockInstrumented(&v174, retaddr);
LABEL_40:
            v26 = (unsigned __int8)v176;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v176);
            __writecr8(v26);
            if ( v177 )
            {
              v66 = (_QWORD *)KeGetCurrentIrql();
              v178 = v66;
              __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v66, 2LL);
              CurrentPrcb = KeGetCurrentPrcb();
              v68 = v177;
              for ( i = (_QWORD *)*v177; ; i = (_QWORD *)*v180 )
              {
                v180 = i;
                KiAcquireKobjectLockSafe(v68 + 3);
                v70 = v68 + 3;
                *((_DWORD *)v68 + 7) = 1;
                v71 = (struct _KPRCB *)v68[4];
                v72 = (struct _KPRCB *)(v68 + 4);
                v173 = (struct _KPRCB *)(v68 + 4);
                while ( v71 != v72 )
                {
                  v73 = *(_QWORD **)&v71->MxCsr;
                  v74 = v71;
                  v75 = v71->CurrentThread;
                  SystemArgument1 = v73;
                  if ( (struct _KPRCB *)v73[1] != v74 || *(struct _KPRCB **)&v75->Header.Lock != v74 )
                    goto LABEL_126;
                  *(_QWORD *)&v75->Header.Lock = v73;
                  v73[1] = v75;
                  NextThread = (char)v74->NextThread;
                  if ( NextThread == 1 )
                  {
                    v124 = KiTryUnwaitThread(CurrentPrcb, v74, WORD1(v74->NextThread), 0LL);
                    v71 = (struct _KPRCB *)SystemArgument1;
                    v70 = v68 + 3;
                    v125 = v124 == 0;
                    v72 = v173;
                    if ( !v125 )
                    {
                      v125 = (*((_DWORD *)v68 + 7))-- == 1;
                      v70 = v68 + 3;
                      if ( v125 )
                        break;
                    }
                  }
                  else if ( NextThread == 2 )
                  {
                    BYTE1(v74->NextThread) = 5;
                    KiInsertQueueInternal(v74->IdleThread, v74);
                    v125 = (*((_DWORD *)v68 + 7))-- == 1;
                    v70 = v68 + 3;
                    if ( v125 )
                      break;
                    v71 = (struct _KPRCB *)SystemArgument1;
                    v72 = v173;
                  }
                  else
                  {
                    if ( NextThread == 4 )
                    {
                      BYTE1(v74->NextThread) = 5;
                      v70[1] = 0;
                      KeInsertQueueDpc((PRKDPC)v74->IdleThread, v70, v74);
                    }
                    else
                    {
                      KiTryUnwaitThread(CurrentPrcb, v74, 256LL, 0LL);
                    }
                    v71 = (struct _KPRCB *)SystemArgument1;
                    v70 = v68 + 3;
                    v72 = v173;
                  }
                }
                _InterlockedAnd((volatile signed __int32 *)v68 + 6, 0xFFFFFF7F);
                if ( v180 == v177 )
                  break;
                v68 = v180;
              }
              KiRemoveBoostThread(CurrentPrcb);
              KiExitDispatcher(CurrentPrcb, (char)v178);
              v10 = v169;
            }
            v27 = 65570;
            LOBYTE(Pool2) = 0;
            LODWORD(SystemArgument1) = 65570;
            v12 = 0;
LABEL_67:
            __incgsdword(0x906Cu);
            if ( !v10 )
              return Pool2;
            v182 = 0LL;
            v183 = 0LL;
            v184 = 0LL;
            v45 = KeGetCurrentPrcb();
            v178 = (_QWORD *)__rdtsc();
            ++v45->SynchCounters.ExEtwSynchTrackingNotificationsCount;
            Group = v45->Group;
            LOBYTE(Pool2) = v45->GroupIndex;
            v169 = Pool2;
            if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
              return Pool2;
            v46 = KeGetCurrentThread();
            v47 = v27 & 0xFFFF0000;
            LODWORD(Pool2) = *((_DWORD *)&v46[1].SwapListEntry + 2);
            if ( (Pool2 & 1) != 0 )
              return Pool2;
            Object = (__int64)v46[1].WaitBlock[0].Object;
            v49 = EtwpEthreadSyncTrackingSequence;
            LODWORD(v173) = EtwpEthreadSyncTrackingSequence;
            if ( !Object )
            {
              Pool2 = ExAllocatePool2(0x48uLL);
              v50 = (unsigned int *)Pool2;
              if ( !Pool2 )
                return Pool2;
              *(_QWORD *)(Pool2 + 16) = BugCheckParameter1;
              *(_DWORD *)(Pool2 + 28) = v47;
              *(_DWORD *)(Pool2 + 32) = 0;
              *(_DWORD *)(Pool2 + 40) = (_DWORD)v173;
              Pool2 = _InterlockedCompareExchange64((volatile signed __int64 *)&v46[1].WaitBlock[0].Object, Pool2, 0LL);
              Object = Pool2;
              if ( !Pool2 )
                goto LABEL_86;
              ExFreePoolWithTag(v50, 0);
              v49 = (int)v173;
            }
            Pool2 = 0LL;
            for ( j = 0; j < 8; ++j )
            {
              v52 = *(_DWORD *)(Object + 28);
              if ( v52 == v47 && *(_QWORD *)(Object + 16) == BugCheckParameter1 && *(_DWORD *)(Object + 40) == v49 )
                goto LABEL_85;
              if ( !Pool2 )
              {
                if ( v52 )
                {
                  if ( *(_DWORD *)(Object + 40) < v49 )
                  {
                    Pool2 = Object;
                    break;
                  }
                }
                else
                {
                  Pool2 = Object;
                }
              }
              Object += 64LL;
            }
            Object = Pool2;
            if ( Pool2 )
            {
              *(_QWORD *)(Pool2 + 16) = BugCheckParameter1;
              *(_DWORD *)(Pool2 + 28) = v47;
              *(_QWORD *)(Pool2 + 32) = 0LL;
              *(_QWORD *)Pool2 = 0LL;
              *(_QWORD *)(Pool2 + 8) = 0LL;
              *(_DWORD *)(Pool2 + 24) = 0;
              *(_DWORD *)(Pool2 + 40) = v49;
              *(_DWORD *)(Pool2 + 44) = 0;
            }
LABEL_85:
            v50 = (unsigned int *)Object;
            if ( !Object )
              return Pool2;
LABEL_86:
            if ( v50[8] )
            {
              ++v45->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
              v53 = v12 + 1;
              if ( v50[9] < v53 )
                v50[9] = v53;
              if ( (_DWORD)SystemArgument1 != 65570 )
              {
                if ( (_DWORD)SystemArgument1 == 65586 )
                  v50[8] = 2;
                return Pool2;
              }
              v111 = *((_QWORD *)v50 + 1);
              if ( v111 > 2 && *((_WORD *)v50 + 12) == Group && *((_BYTE *)v50 + 26) == v169 )
                v112 = (char *)v178 - v111;
              else
                v112 = 0LL;
              if ( *(_QWORD *)v50 <= 1uLL
                || (v45->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                  + v45->SynchCounters.ExecutiveResourceReleaseSharedCount)
                 % EtwpExecutiveResourceContentionSampleRate )
              {
                v113 = v50[11];
                v114 = v172;
                if ( v172 <= v113 || (v172 - v113) % EtwpExecutiveResourceContentionSampleRate )
                {
                  LODWORD(Pool2) = (v45->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                                  + v45->SynchCounters.ExecutiveResourceReleaseSharedCount)
                                 / EtwpExecutiveResourceReleaseSampleRate;
                  if ( (v45->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                      + v45->SynchCounters.ExecutiveResourceReleaseSharedCount)
                     % EtwpExecutiveResourceReleaseSampleRate )
                  {
                    goto LABEL_212;
                  }
                }
              }
              else
              {
                v114 = v172;
              }
              DWORD2(v184) = 65570;
              *(_QWORD *)&v184 = BugCheckParameter1;
              *(_QWORD *)&v182 = *((_QWORD *)v50 + 1);
              DWORD2(v183) = v50[9];
              *((_QWORD *)&v182 + 1) = v112;
              *(_QWORD *)&v183 = *(_QWORD *)v50;
              HIDWORD(v184) = v114 - v50[11];
              v189 = 48LL;
              LODWORD(BugCheckParameter4) = 23074818;
              HIDWORD(v183) = KeGetCurrentThread()[1].CurrentRunTime;
              v188 = &v182;
              LOBYTE(Pool2) = EtwTraceKernelEvent((int)&v188, 1, 0x20020000u, 1323, 23074818);
            }
LABEL_212:
            v50[7] = 0;
            return Pool2;
          }
          _m_prefetchw(&v174);
          v29 = v174;
          if ( !v174 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64(v175, 0LL, (signed __int64)&v174) == &v174 )
              goto LABEL_40;
            v29 = KxWaitForLockChainValid(&v174);
          }
          v174 = 0LL;
          v30 = v175;
          if ( (((unsigned __int8)v30 ^ (unsigned __int8)_InterlockedExchange64(
                                                           (volatile __int64 *)(v29 + 8),
                                                           (__int64)v175)) & 4) != 0 )
          {
            _InterlockedOr(v167, 0);
            v31 = KeDisableInterrupts(v30, v24, ((unsigned __int64)(v29 + 8) >> 5) & 0x7F);
            KiHaltOnAddressWakeEntireList(
              v34,
              _InterlockedExchange64((volatile __int64 *)(v33 + 8 * v32 + 15863072), 0LL));
            if ( v31 )
            {
              v35 = KeGetCurrentPrcb();
              SchedulerAssist = (signed __int32 *)v35->SchedulerAssist;
              if ( SchedulerAssist )
              {
                _m_prefetchw(SchedulerAssist);
                v140 = *SchedulerAssist;
                do
                {
                  v141 = v140;
                  v140 = _InterlockedCompareExchange(SchedulerAssist, v140 & 0xFFDFFFFF, v140);
                }
                while ( v141 != v140 );
                if ( (v140 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick((__int64)v35);
              }
              _enable();
            }
          }
          goto LABEL_40;
        }
        if ( !*(_DWORD *)(BugCheckParameter1 + 76) )
        {
          *(_WORD *)(BugCheckParameter1 + 24) = 0;
          *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
          v24 = 0LL;
          goto LABEL_32;
        }
        v63 = *(_QWORD **)(BugCheckParameter1 + 40);
        if ( v63 )
        {
          if ( (_QWORD *)*v63 == v63 )
          {
            *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
          }
          else
          {
            *(_QWORD *)(BugCheckParameter1 + 40) = *v63;
            v64 = *v63;
            v65 = (_QWORD *)v63[1];
            if ( *(_QWORD **)(*v63 + 8LL) != v63 || (_QWORD *)*v65 != v63 )
              goto LABEL_126;
            *v65 = v64;
            *(_QWORD *)(v64 + 8) = v65;
          }
          v126 = v177;
          v21 = v63[2];
          if ( v177 )
          {
            v142 = (_QWORD *)v177[1];
            if ( (_QWORD *)*v142 == v177 )
            {
              *v63 = v177;
              v63[1] = v142;
              *v142 = v63;
              v126[1] = v63;
              --*(_DWORD *)(BugCheckParameter1 + 76);
              v177 = v63;
              v22 = 1;
              goto LABEL_31;
            }
LABEL_126:
            __fastfail(3u);
          }
          v63[1] = v63;
          *v63 = v63;
          v177 = v63;
        }
        --*(_DWORD *)(BugCheckParameter1 + 76);
        v22 = 1;
        goto LABEL_31;
      }
      v15 = 0;
      v16 = 0;
      v17 = 0LL;
      if ( PspAlwaysTrackIoBoosting )
      {
        v15 = 1;
        v148 = ExAllocatePool2(0x40uLL);
        v17 = (_QWORD *)v148;
        if ( v148 )
        {
          RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v148 + 16), 0LL);
          v17[12] = KeGetCurrentThread();
          v17[13] = 0LL;
        }
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 1552));
      }
      if ( *(_DWORD *)(v14 + 1504) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v14 + 1504));
        if ( !v15 )
        {
LABEL_21:
          v13 = *(_DWORD *)(BugCheckParameter1 + 56) & 0xFFFFFFFE;
          *(_DWORD *)(BugCheckParameter1 + 56) = v13;
          goto LABEL_22;
        }
        if ( *(_DWORD *)(v14 + 1504) )
        {
          if ( v17 )
          {
            v152 = *(_QWORD **)(v14 + 1544);
            if ( *v152 != v14 + 1536 )
              goto LABEL_126;
            *v17 = v14 + 1536;
            v17[1] = v152;
            *v152 = v17;
            *(_QWORD *)(v14 + 1544) = v17;
          }
        }
        else
        {
          if ( v17 )
            ExFreePoolWithTag(v17, 0x736F6F42u);
          v153 = (__int64 **)(v14 + 1520);
          while ( 1 )
          {
            v154 = *v153;
            if ( *v153 == (__int64 *)v153 )
              break;
            v158 = *v154;
            if ( (__int64 **)v154[1] != v153 || *(__int64 **)(v158 + 8) != v154 )
              goto LABEL_126;
            *v153 = (__int64 *)v158;
            *(_QWORD *)(v158 + 8) = v153;
            ExFreePoolWithTag(v154, 0x736F6F42u);
          }
          v155 = (__int64 **)(v14 + 1536);
          while ( 1 )
          {
            v156 = *v155;
            if ( *v155 == (__int64 *)v155 )
              break;
            v157 = *v156;
            if ( (__int64 **)v156[1] != v155 || *(__int64 **)(v157 + 8) != v156 )
              goto LABEL_126;
            *v155 = (__int64 *)v157;
            *(_QWORD *)(v157 + 8) = v155;
            ExFreePoolWithTag(v156, 0x736F6F42u);
          }
        }
      }
      else if ( !v15 )
      {
        goto LABEL_21;
      }
      v150 = (volatile signed __int64 *)(v14 + 1552);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64(v150, 0LL);
      else
        KiReleaseSpinLockInstrumented(v150, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
      __writecr8(v16);
      goto LABEL_21;
    }
    v27 = 65586;
    v43 = *(_DWORD *)(BugCheckParameter1 + 68);
    LODWORD(SystemArgument1) = 65586;
    v172 = v43;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      LOBYTE(Pool2) = KiReleaseQueuedSpinLockInstrumented(&v174, retaddr);
LABEL_64:
      v44 = (unsigned __int8)v176;
      if ( KiIrqlFlags )
        LOBYTE(Pool2) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v176);
      __writecr8(v44);
      goto LABEL_67;
    }
    _m_prefetchw(&v174);
    Pool2 = v174;
    if ( !v174 )
    {
      Pool2 = _InterlockedCompareExchange64(v175, 0LL, (signed __int64)&v174);
      if ( (__int64 *)Pool2 == &v174 )
        goto LABEL_64;
      Pool2 = KxWaitForLockChainValid(&v174);
    }
    v54 = Pool2 + 8;
    v174 = 0LL;
    v55 = v175;
    LOBYTE(Pool2) = (unsigned __int8)v55 ^ _InterlockedExchange64((volatile __int64 *)(Pool2 + 8), (__int64)v175);
    if ( (Pool2 & 4) != 0 )
    {
      _InterlockedOr(v167, 0);
      v57 = KeDisableInterrupts(v55, v9, (v54 >> 5) & 0x7F);
      LOBYTE(Pool2) = KiHaltOnAddressWakeEntireList(
                        v60,
                        _InterlockedExchange64((volatile __int64 *)(v59 + 8 * v58 + 15863072), v56));
      if ( v57 )
      {
        v61 = KeGetCurrentPrcb();
        v62 = v61->SchedulerAssist;
        if ( v62 )
        {
          _m_prefetchw(v62);
          LODWORD(Pool2) = *v62;
          do
          {
            v139 = Pool2;
            LODWORD(Pool2) = _InterlockedCompareExchange(v62, Pool2 & 0xFFDFFFFF, Pool2);
          }
          while ( v139 != (_DWORD)Pool2 );
          if ( (Pool2 & 0x200000) != 0 )
            LOBYTE(Pool2) = KiRemoveSystemWorkPriorityKick((__int64)v61);
        }
        _enable();
      }
    }
    goto LABEL_64;
  }
  v179 = 0LL;
  v37 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v169 = v37;
  if ( (BugCheckParameter3 & 3) != 0 )
    v38 = 0;
  else
    v38 = *(unsigned __int8 *)(BugCheckParameter3 + 1120);
  v39 = *(_QWORD *)(BugCheckParameter1 + 48);
  v40 = BugCheckParameter1 + 48;
  if ( v39 != BugCheckParameter3 )
  {
    v41 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
    if ( !v38
      || (v39 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v38 >= *(_DWORD *)(v39 + 8)
      || (v40 = v39 + 16LL * v38, *(_QWORD *)v40 != BugCheckParameter3) )
    {
      v42 = *(_QWORD *)(BugCheckParameter1 + 16);
      v39 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( v42 )
      {
        CurrentThread = (struct _KTHREAD *)(v42 + 16LL * *(unsigned int *)(v42 + 8));
        v40 = v42 + 16;
        if ( v41 < v39 )
        {
          while ( *(_QWORD *)v40 != BugCheckParameter3 )
          {
            if ( !*(_QWORD *)v40 || (++v41, v41 != v39) )
            {
              v40 += 16LL;
              if ( (struct _KTHREAD *)v40 != CurrentThread )
                continue;
            }
            goto LABEL_113;
          }
          KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v40 - *(_DWORD *)(BugCheckParameter1 + 16)) >> 4;
          goto LABEL_131;
        }
LABEL_113:
        v42 = *(_QWORD *)(BugCheckParameter1 + 16);
      }
      KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter3, v42, 2uLL);
    }
  }
LABEL_131:
  v76 = *(_DWORD *)(v40 + 8) & 7 | (8 * (*(_DWORD *)(v40 + 8) >> 3) - 8);
  *(_DWORD *)(v40 + 8) = v76;
  LODWORD(SystemArgument1) = v76 >> 3;
  if ( v76 >> 3 )
  {
    v87 = 65618;
    v97 = *(_DWORD *)(BugCheckParameter1 + 68);
    LODWORD(v173) = 65618;
    v172 = v97;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      LOBYTE(Pool2) = KiReleaseQueuedSpinLockInstrumented(&v174, retaddr);
LABEL_175:
      v98 = (unsigned __int8)v176;
      if ( KiIrqlFlags )
        LOBYTE(Pool2) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v176);
      __writecr8(v98);
      goto LABEL_178;
    }
    _m_prefetchw(&v174);
    Pool2 = v174;
    if ( !v174 )
    {
      Pool2 = _InterlockedCompareExchange64(v175, 0LL, (signed __int64)&v174);
      if ( (__int64 *)Pool2 == &v174 )
        goto LABEL_175;
      Pool2 = KxWaitForLockChainValid(&v174);
    }
    v115 = Pool2 + 8;
    v174 = 0LL;
    v116 = v175;
    LOBYTE(Pool2) = (unsigned __int8)v116 ^ _InterlockedExchange64((volatile __int64 *)(Pool2 + 8), (__int64)v175);
    if ( (Pool2 & 4) != 0 )
    {
      _InterlockedOr(v167, 0);
      v117 = KeDisableInterrupts(v116, v39, (v115 >> 5) & 0x7F);
      LOBYTE(Pool2) = KiHaltOnAddressWakeEntireList(
                        v120,
                        _InterlockedExchange64((volatile __int64 *)(v119 + 8 * v118 + 15863072), 0LL));
      if ( v117 )
      {
        v121 = KeGetCurrentPrcb();
        v122 = v121->SchedulerAssist;
        if ( v122 )
        {
          _m_prefetchw(v122);
          LODWORD(Pool2) = *v122;
          do
          {
            v144 = Pool2;
            LODWORD(Pool2) = _InterlockedCompareExchange(v122, Pool2 & 0xFFDFFFFF, Pool2);
          }
          while ( v144 != (_DWORD)Pool2 );
          if ( (Pool2 & 0x200000) != 0 )
            LOBYTE(Pool2) = KiRemoveSystemWorkPriorityKick((__int64)v121);
        }
        _enable();
      }
    }
    goto LABEL_175;
  }
  v77 = *(_QWORD *)v40;
  if ( (v76 & 2) != 0 )
  {
    v77 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v77 & 3) != 0 )
  {
    goto LABEL_147;
  }
  if ( !v77 )
    goto LABEL_147;
  if ( (v76 & 1) != 0 )
  {
    v78 = 0;
    v79 = 0LL;
    if ( PspAlwaysTrackIoBoosting )
    {
      v78 = 1;
      v149 = ExAllocatePool2(0x40uLL);
      v79 = (_QWORD *)v149;
      if ( v149 )
      {
        RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v149 + 16), 0LL);
        v79[12] = KeGetCurrentThread();
        v79[13] = 0LL;
      }
      v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v77 + 1552));
    }
    if ( *(_DWORD *)(v77 + 1504) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v77 + 1504));
      if ( !v78 )
      {
LABEL_139:
        v76 = *(_DWORD *)(v40 + 8) & 0xFFFFFFFE;
        *(_DWORD *)(v40 + 8) = v76;
        goto LABEL_140;
      }
      if ( *(_DWORD *)(v77 + 1504) )
      {
        if ( v79 )
        {
          v159 = *(_QWORD **)(v77 + 1544);
          if ( *v159 != v77 + 1536 )
            goto LABEL_126;
          *v79 = v77 + 1536;
          v79[1] = v159;
          *v159 = v79;
          *(_QWORD *)(v77 + 1544) = v79;
        }
      }
      else
      {
        if ( v79 )
          ExFreePoolWithTag(v79, 0x736F6F42u);
        v160 = (__int64 **)(v77 + 1520);
        while ( 1 )
        {
          v161 = *v160;
          if ( *v160 == (__int64 *)v160 )
            break;
          v165 = *v161;
          if ( (__int64 **)v161[1] != v160 || *(__int64 **)(v165 + 8) != v161 )
            goto LABEL_126;
          *v160 = (__int64 *)v165;
          *(_QWORD *)(v165 + 8) = v160;
          ExFreePoolWithTag(v161, 0x736F6F42u);
        }
        v162 = (__int64 **)(v77 + 1536);
        while ( 1 )
        {
          v163 = *v162;
          if ( *v162 == (__int64 *)v162 )
            break;
          v164 = *v163;
          if ( (__int64 **)v163[1] != v162 || *(__int64 **)(v164 + 8) != v163 )
            goto LABEL_126;
          *v162 = (__int64 *)v164;
          *(_QWORD *)(v164 + 8) = v162;
          ExFreePoolWithTag(v163, 0x736F6F42u);
        }
      }
    }
    else if ( !v78 )
    {
      goto LABEL_139;
    }
    v151 = (volatile signed __int64 *)(v77 + 1552);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v151, 0LL);
    else
      KiReleaseSpinLockInstrumented(v151, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
    goto LABEL_139;
  }
LABEL_140:
  if ( (v76 & 4) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v77 + 1508));
    v76 = *(_DWORD *)(v40 + 8) & 0xFFFFFFFB;
    *(_DWORD *)(v40 + 8) = v76;
  }
  if ( (v76 & 2) != 0 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v77 - 48);
    v80 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v77 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v19 = v80 <= 1;
    v81 = v80 - 1;
    if ( v19 )
    {
      if ( *(_QWORD *)(v77 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v77 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v77 - 48) >> 8)],
          v77,
          3uLL,
          *(_QWORD *)(v77 - 40));
      if ( v81 < 0 )
        KeBugCheckEx(0x18u, 0LL, v77, 4uLL, v81);
      ObpDeferObjectDeletion(v77 - 48);
    }
    *(_DWORD *)(v40 + 8) &= ~2u;
  }
LABEL_147:
  *(_QWORD *)v40 = 0LL;
  v82 = 0LL;
  v19 = *(_DWORD *)(BugCheckParameter1 + 64) <= 1u;
  v172 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( !v19 )
  {
LABEL_150:
    v83 = 0;
    goto LABEL_151;
  }
  if ( *(_DWORD *)(BugCheckParameter1 + 76) )
  {
    v143 = (_QWORD *)RtlRemoveHeadCircularList(BugCheckParameter1 + 40, v39, CurrentThread);
    if ( v143 )
    {
      v82 = v143[2];
      v143[1] = v143;
      *v143 = v143;
      v179 = v143;
    }
    --*(_DWORD *)(BugCheckParameter1 + 76);
    *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
    v83 = 1;
  }
  else
  {
    v83 = *(_DWORD *)(BugCheckParameter1 + 72);
    if ( !v83 )
      goto LABEL_150;
    v147 = *(_QWORD **)(BugCheckParameter1 + 32);
    *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
    v179 = v147;
    *(_DWORD *)(BugCheckParameter1 + 72) = 0;
  }
LABEL_151:
  v84 = *(_DWORD *)(BugCheckParameter1 + 64) - 1;
  *(_DWORD *)(BugCheckParameter1 + 64) = v84 + v83;
  if ( !(v84 + v83) )
    *(_WORD *)(BugCheckParameter1 + 24) = 0;
  if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
    *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
  if ( v82 )
  {
    v85 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
    *(_QWORD *)(BugCheckParameter1 + 48) = v82;
    *(_DWORD *)(BugCheckParameter1 + 56) = v85 | 8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&v174);
    v88 = v174;
    if ( !v174 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v175, 0LL, (signed __int64)&v174) == &v174 )
        goto LABEL_161;
      v88 = KxWaitForLockChainValid(&v174);
    }
    v174 = 0LL;
    v89 = v175;
    if ( (((unsigned __int8)v89 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v88 + 8), (__int64)v175)) & 4) != 0 )
    {
      _InterlockedOr(v167, 0);
      v91 = KeDisableInterrupts(v89, v39, ((unsigned __int64)(v88 + 8) >> 5) & 0x7F);
      KiHaltOnAddressWakeEntireList(v94, _InterlockedExchange64((volatile __int64 *)(v93 + 8 * v92 + 15863072), v90));
      if ( v91 )
      {
        v95 = KeGetCurrentPrcb();
        v96 = (signed __int32 *)v95->SchedulerAssist;
        if ( v96 )
        {
          _m_prefetchw(v96);
          v145 = *v96;
          do
          {
            v146 = v145;
            v145 = _InterlockedCompareExchange(v96, v145 & 0xFFDFFFFF, v145);
          }
          while ( v146 != v145 );
          if ( (v145 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v95);
        }
        _enable();
      }
    }
    goto LABEL_161;
  }
  KiReleaseQueuedSpinLockInstrumented(&v174, retaddr);
LABEL_161:
  v86 = (unsigned __int8)v176;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v176);
  __writecr8(v86);
  if ( !v179 )
    goto LABEL_164;
  v127 = KeGetCurrentIrql();
  v181 = v127;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v127, 2LL);
  v128 = v179;
  v173 = KeGetCurrentPrcb();
  v129 = (_QWORD *)*v179;
  while ( 2 )
  {
    v178 = v129;
    v180 = v128;
    SystemArgument1 = v128 + 3;
    KiAcquireKobjectLockSafe(v128 + 3);
    v130 = v128 + 4;
    *((_DWORD *)v128 + 7) = 1;
    v131 = (_QWORD *)v128[4];
LABEL_240:
    v132 = SystemArgument1;
    while ( v131 != v130 )
    {
      v133 = (_QWORD *)*v131;
      v134 = v131;
      v131 = v133;
      v135 = (_QWORD *)v134[1];
      if ( (_QWORD *)v133[1] != v134 || (_QWORD *)*v135 != v134 )
        goto LABEL_126;
      *v135 = v133;
      v133[1] = v135;
      v136 = *((_BYTE *)v134 + 16);
      if ( v136 == 1 )
      {
        v137 = KiTryUnwaitThread(v173, v134, *((unsigned __int16 *)v134 + 9), 0LL);
        v132 = SystemArgument1;
        if ( v137 )
          goto LABEL_246;
      }
      else
      {
        if ( v136 != 2 )
        {
          if ( v136 == 4 )
          {
            *((_BYTE *)v134 + 17) = 5;
            v132[1] = 0;
            KeInsertQueueDpc((PRKDPC)v134[3], v132, v134);
          }
          else
          {
            KiTryUnwaitThread(v173, v134, 256LL, 0LL);
          }
          goto LABEL_240;
        }
        *((_BYTE *)v134 + 17) = 5;
        KiInsertQueueInternal(v134[3], v134);
        v132 = SystemArgument1;
LABEL_246:
        v125 = v132[1]-- == 1;
        if ( v125 )
          break;
      }
    }
    _InterlockedAnd((volatile signed __int32 *)v180 + 6, 0xFFFFFF7F);
    if ( v178 != v179 )
    {
      v128 = v178;
      v129 = (_QWORD *)*v178;
      continue;
    }
    break;
  }
  v138 = v173;
  KiRemoveBoostThread(v173);
  KiExitDispatcher(v138, v181);
  v37 = v169;
LABEL_164:
  v87 = 65602;
  LOBYTE(Pool2) = 0;
  LODWORD(v173) = 65602;
  LODWORD(SystemArgument1) = 0;
LABEL_178:
  __incgsdword(0x9070u);
  if ( v37 )
  {
    v185 = 0LL;
    v186 = 0LL;
    v187 = 0LL;
    v99 = KeGetCurrentPrcb();
    v181 = __rdtsc();
    ++v99->SynchCounters.ExEtwSynchTrackingNotificationsCount;
    Group = v99->Group;
    LOBYTE(Pool2) = v99->GroupIndex;
    v169 = Pool2;
    if ( KeGetCurrentThread()[1].WaitBlock[0].Object )
    {
      v100 = KeGetCurrentThread();
      v101 = v87 & 0xFFFF0000;
      LODWORD(Pool2) = *((_DWORD *)&v100[1].SwapListEntry + 2);
      if ( (Pool2 & 1) == 0 )
      {
        v102 = (__int64)v100[1].WaitBlock[0].Object;
        v103 = EtwpEthreadSyncTrackingSequence;
        if ( v102 )
        {
LABEL_185:
          Pool2 = 0LL;
          for ( k = 0; k < 8; ++k )
          {
            v106 = *(_DWORD *)(v102 + 28);
            if ( v106 == v101 && *(_QWORD *)(v102 + 16) == BugCheckParameter1 && *(_DWORD *)(v102 + 40) == v103 )
              goto LABEL_196;
            if ( !Pool2 )
            {
              if ( v106 )
              {
                if ( *(_DWORD *)(v102 + 40) < v103 )
                {
                  Pool2 = v102;
                  break;
                }
              }
              else
              {
                Pool2 = v102;
              }
            }
            v102 += 64LL;
          }
          v102 = Pool2;
          if ( Pool2 )
          {
            *(_QWORD *)(Pool2 + 16) = BugCheckParameter1;
            *(_DWORD *)(Pool2 + 28) = v101;
            *(_QWORD *)(Pool2 + 32) = 0LL;
            *(_QWORD *)Pool2 = 0LL;
            *(_QWORD *)(Pool2 + 8) = 0LL;
            *(_DWORD *)(Pool2 + 24) = 0;
            *(_DWORD *)(Pool2 + 40) = v103;
            *(_DWORD *)(Pool2 + 44) = 0;
          }
LABEL_196:
          v104 = (unsigned int *)v102;
          if ( v102 )
            goto LABEL_197;
        }
        else
        {
          Pool2 = ExAllocatePool2(0x48uLL);
          v104 = (unsigned int *)Pool2;
          if ( Pool2 )
          {
            *(_QWORD *)(Pool2 + 16) = BugCheckParameter1;
            *(_DWORD *)(Pool2 + 28) = v101;
            *(_DWORD *)(Pool2 + 32) = 0;
            *(_DWORD *)(Pool2 + 40) = v103;
            Pool2 = _InterlockedCompareExchange64((volatile signed __int64 *)&v100[1].WaitBlock[0].Object, Pool2, 0LL);
            v102 = Pool2;
            if ( Pool2 )
            {
              ExFreePoolWithTag(v104, 0);
              goto LABEL_185;
            }
LABEL_197:
            if ( !v104[8] )
              goto LABEL_206;
            ++v99->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
            LODWORD(Pool2) = (_DWORD)SystemArgument1 + 1;
            if ( v104[9] < (int)SystemArgument1 + 1 )
              v104[9] = Pool2;
            if ( (_DWORD)v173 == 65602 )
            {
              v107 = *((_QWORD *)v104 + 1);
              if ( v107 > 2 && *((_WORD *)v104 + 12) == Group && *((_BYTE *)v104 + 26) == v169 )
                v108 = v181 - v107;
              else
                v108 = 0LL;
              if ( *(_QWORD *)v104 > 1uLL
                && !((v99->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                    + v99->SynchCounters.ExecutiveResourceReleaseSharedCount)
                   % EtwpExecutiveResourceContentionSampleRate) )
              {
                v110 = v172;
                goto LABEL_285;
              }
              v109 = v104[11];
              v110 = v172;
              if ( v172 > v109 && !((v172 - v109) % EtwpExecutiveResourceContentionSampleRate)
                || (LODWORD(Pool2) = (v99->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                                    + v99->SynchCounters.ExecutiveResourceReleaseSharedCount)
                                   / EtwpExecutiveResourceReleaseSampleRate,
                    !((v99->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                     + v99->SynchCounters.ExecutiveResourceReleaseSharedCount)
                    % EtwpExecutiveResourceReleaseSampleRate)) )
              {
LABEL_285:
                DWORD2(v187) = 65602;
                *(_QWORD *)&v187 = BugCheckParameter1;
                *(_QWORD *)&v185 = *((_QWORD *)v104 + 1);
                DWORD2(v186) = v104[9];
                *((_QWORD *)&v185 + 1) = v108;
                *(_QWORD *)&v186 = *(_QWORD *)v104;
                HIDWORD(v187) = v110 - v104[11];
                v189 = 48LL;
                LODWORD(BugCheckParameter4) = 23074818;
                HIDWORD(v186) = KeGetCurrentThread()[1].CurrentRunTime;
                v188 = &v185;
                LOBYTE(Pool2) = EtwTraceKernelEvent((int)&v188, 1, 0x20020000u, 1323, 23074818);
              }
LABEL_206:
              v104[7] = 0;
            }
            else if ( (_DWORD)v173 == 65618 )
            {
              v104[8] = 2;
            }
          }
        }
      }
    }
  }
  return Pool2;
}
