/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x1402FF6B0
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x1402FF5D0 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     RtlRemoveHeadCircularList @ 0x1402FF580 (RtlRemoveHeadCircularList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpReleaseResourceForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        __int64 a4)
{
  volatile __int64 *v4; // rdi
  KIRQL v5; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // r8
  __int64 v11; // rdx
  KIRQL v12; // r14
  bool v13; // r12
  unsigned int v14; // r15d
  unsigned int v15; // r15d
  unsigned int v16; // eax
  ULONG_PTR v17; // rdi
  char v18; // si
  _QWORD *v19; // r15
  signed __int64 v20; // rax
  bool v21; // cc
  signed __int64 v22; // rax
  volatile signed __int32 *v23; // rsi
  int v24; // ecx
  volatile signed __int32 *v25; // rax
  int v26; // edx
  int v27; // eax
  volatile signed __int64 *v28; // rax
  unsigned __int8 v29; // cl
  bool v30; // di
  __int64 v31; // r8
  __int64 v32; // r10
  __int64 v33; // rcx
  struct _KPRCB *v34; // rcx
  signed __int32 *v35; // r8
  unsigned __int64 v36; // rdi
  bool v37; // zf
  char v38; // di
  unsigned int v39; // esi
  int v40; // esi
  unsigned int v41; // eax
  volatile signed __int64 *v42; // rax
  unsigned __int8 v43; // cl
  bool v44; // di
  __int64 v45; // r8
  __int64 v46; // r10
  __int64 v47; // rcx
  struct _KPRCB *v48; // rcx
  signed __int32 *v49; // r8
  unsigned __int64 v50; // rdi
  struct _KPRCB *v51; // r14
  struct _KTHREAD *v52; // r13
  unsigned int v53; // r12d
  signed __int64 v54; // rsi
  int v55; // edx
  signed __int64 v56; // rax
  signed __int64 v57; // rdi
  signed __int64 v58; // rax
  unsigned int j; // ecx
  int v60; // r8d
  unsigned int v61; // r15d
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // r9
  unsigned int v64; // ecx
  unsigned int v65; // r10d
  bool v66; // r13
  unsigned int v67; // eax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rdi
  unsigned __int64 v70; // rcx
  ULONG_PTR v71; // rdi
  signed __int32 v72; // eax
  signed __int32 v73; // ett
  signed __int32 v74; // eax
  signed __int32 v75; // ett
  volatile signed __int32 **v76; // rcx
  volatile signed __int32 *v77; // rdx
  volatile signed __int32 ***v78; // rax
  unsigned __int64 v79; // rax
  volatile signed __int32 *v80; // r13
  volatile signed __int32 *v81; // rax
  volatile signed __int32 *v82; // r15
  _DWORD *v83; // r9
  volatile signed __int32 *v84; // rcx
  __int64 v85; // rax
  volatile signed __int32 **v86; // rdx
  char v87; // cl
  char v88; // al
  struct _KPRCB *v89; // r14
  signed int v90; // eax
  unsigned int v91; // r9d
  unsigned int v92; // eax
  ULONG_PTR v93; // rsi
  char v94; // r14
  _QWORD *v95; // r12
  signed __int64 v96; // rax
  signed __int64 v97; // rax
  __int64 v98; // rsi
  int v99; // ecx
  int v100; // eax
  int v101; // eax
  volatile signed __int64 *v102; // rax
  unsigned __int8 v103; // cl
  bool v104; // di
  __int64 v105; // r8
  __int64 v106; // r10
  __int64 v107; // rcx
  struct _KPRCB *v108; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v110; // rdi
  char v111; // di
  unsigned int v112; // esi
  int v113; // esi
  unsigned int v114; // r15d
  volatile signed __int64 *v115; // rax
  unsigned __int8 v116; // cl
  bool v117; // di
  __int64 v118; // r8
  __int64 v119; // r10
  __int64 v120; // rcx
  struct _KPRCB *v121; // rcx
  signed __int32 *v122; // r8
  unsigned __int64 v123; // rdi
  struct _KPRCB *CurrentPrcb; // r14
  struct _KTHREAD *v125; // r15
  unsigned int v126; // r12d
  signed __int64 Object; // rsi
  int v128; // r13d
  signed __int64 Pool2; // rax
  signed __int64 v130; // rdi
  signed __int64 v131; // rax
  unsigned int i; // ecx
  int v133; // edx
  signed __int32 v134; // eax
  signed __int32 v135; // ett
  signed __int32 v136; // eax
  signed __int32 v137; // ett
  volatile signed __int32 *v138; // rax
  unsigned __int64 v139; // rax
  volatile signed __int32 *v140; // r13
  volatile signed __int32 *v141; // rax
  volatile signed __int32 *v142; // r15
  _DWORD *v143; // r9
  volatile signed __int32 *v144; // rcx
  __int64 v145; // rax
  volatile signed __int32 **v146; // rdx
  char v147; // cl
  char v148; // al
  struct _KPRCB *v149; // r14
  signed int v150; // eax
  unsigned int v151; // r9d
  volatile signed __int32 *v152; // rax
  volatile signed __int32 **v153; // rdx
  unsigned __int64 v154; // rax
  unsigned __int64 v155; // r8
  unsigned int v156; // ecx
  unsigned int v157; // r10d
  volatile signed __int32 *v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  volatile signed __int64 *v161; // rcx
  volatile signed __int64 *v162; // rcx
  _QWORD *v163; // rcx
  __int64 **v164; // rsi
  __int64 *v165; // rcx
  __int64 **v166; // rsi
  __int64 *v167; // rcx
  __int64 v168; // rax
  __int64 v169; // rax
  _QWORD *v170; // rcx
  __int64 **v171; // r14
  __int64 *v172; // rcx
  __int64 **v173; // r14
  __int64 *v174; // rcx
  __int64 v175; // rax
  __int64 v176; // rax
  signed __int32 v177[8]; // [rsp+0h] [rbp-D9h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-B9h]
  char GroupIndex; // [rsp+30h] [rbp-A9h]
  int v180; // [rsp+34h] [rbp-A5h]
  __int16 Group; // [rsp+38h] [rbp-A1h]
  unsigned int v182; // [rsp+3Ch] [rbp-9Dh]
  volatile signed __int64 *v183; // [rsp+40h] [rbp-99h] BYREF
  volatile signed __int64 *v184; // [rsp+48h] [rbp-91h]
  __int64 v185; // [rsp+50h] [rbp-89h]
  struct _KPRCB *v186; // [rsp+58h] [rbp-81h]
  unsigned __int64 v187; // [rsp+60h] [rbp-79h]
  volatile signed __int32 *v188; // [rsp+68h] [rbp-71h]
  volatile signed __int32 *v189; // [rsp+70h] [rbp-69h]
  volatile signed __int32 *v190; // [rsp+78h] [rbp-61h]
  __int128 v191; // [rsp+80h] [rbp-59h] BYREF
  __int128 v192; // [rsp+90h] [rbp-49h]
  __int128 v193; // [rsp+A0h] [rbp-39h]
  __int128 v194; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v195; // [rsp+C0h] [rbp-19h]
  __int128 v196; // [rsp+D0h] [rbp-9h]
  __int128 *v197; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v198; // [rsp+E8h] [rbp+Fh]
  __int64 retaddr; // [rsp+138h] [rbp+5Fh]

  v4 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v185 = 0LL;
  v5 = 0;
  v184 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v183 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v185 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  LOBYTE(v185) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = _InterlockedExchange64(v4, (__int64)&v183);
    if ( v9 )
      KxWaitForLockOwnerShip(&v183, v9, a3, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v183, v4);
  }
  CurrentThread = KeGetCurrentThread();
  v11 = *(unsigned __int16 *)(BugCheckParameter1 + 26);
  if ( ((v11 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (BugCheckParameter3 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter3 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter3, 0LL);
  }
  if ( (v11 & 0x80u) == 0LL )
  {
    v189 = 0LL;
    v66 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    GroupIndex = v66;
    if ( (BugCheckParameter3 & 3) != 0 )
      v67 = 0;
    else
      v67 = *(unsigned __int8 *)(BugCheckParameter3 + 1120);
    v68 = *(_QWORD *)(BugCheckParameter1 + 48);
    v69 = BugCheckParameter1 + 48;
    if ( v68 == BugCheckParameter3 )
      goto LABEL_152;
    v70 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
    if ( v67 )
    {
      v68 = *(_QWORD *)(BugCheckParameter1 + 16);
      if ( v68 )
      {
        if ( v67 < *(_DWORD *)(v68 + 8) )
        {
          v69 = v68 + 16LL * v67;
          if ( *(_QWORD *)v69 == BugCheckParameter3 )
            goto LABEL_152;
        }
      }
    }
    v71 = *(_QWORD *)(BugCheckParameter1 + 16);
    v68 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
    if ( v71 )
    {
      CurrentThread = (struct _KTHREAD *)(v71 + 16LL * *(unsigned int *)(v71 + 8));
      v69 = v71 + 16;
      if ( v70 < v68 )
      {
        while ( *(_QWORD *)v69 != BugCheckParameter3 )
        {
          if ( !*(_QWORD *)v69 || (++v70, v70 != v68) )
          {
            v69 += 16LL;
            if ( (struct _KTHREAD *)v69 != CurrentThread )
              continue;
          }
          goto LABEL_138;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v69 - *(_DWORD *)(BugCheckParameter1 + 16)) >> 4;
LABEL_152:
        v92 = *(_DWORD *)(v69 + 8) & 7 | (8 * (*(_DWORD *)(v69 + 8) >> 3) - 8);
        *(_DWORD *)(v69 + 8) = v92;
        v180 = v92 >> 3;
        if ( !(v92 >> 3) )
        {
          v93 = *(_QWORD *)v69;
          if ( (v92 & 2) != 0 )
          {
            v93 &= 0xFFFFFFFFFFFFFFFCuLL;
          }
          else if ( (v93 & 3) != 0 )
          {
            goto LABEL_168;
          }
          if ( !v93 )
            goto LABEL_168;
          if ( (v92 & 1) == 0 )
          {
LABEL_161:
            if ( (v92 & 4) != 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v93 + 1508));
              v92 = *(_DWORD *)(v69 + 8) & 0xFFFFFFFB;
              *(_DWORD *)(v69 + 8) = v92;
            }
            if ( (v92 & 2) != 0 )
            {
              if ( ObpTraceFlags )
                ObpPushStackInfo(v93 - 48, 0, 1u, 0x746C6644u);
              v96 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v93 - 48), 0xFFFFFFFFFFFFFFFFuLL);
              v21 = v96 <= 1;
              v97 = v96 - 1;
              if ( v21 )
              {
                if ( *(_QWORD *)(v93 - 40) )
                  KeBugCheckEx(
                    0x18u,
                    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v93 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v93 - 48) >> 8)],
                    v93,
                    3uLL,
                    *(_QWORD *)(v93 - 40));
                if ( v97 < 0 )
                  KeBugCheckEx(0x18u, 0LL, v93, 4uLL, v97);
                ObpDeferObjectDeletion(v93 - 48, v68, CurrentThread, a4);
              }
              *(_DWORD *)(v69 + 8) &= ~2u;
            }
LABEL_168:
            *(_QWORD *)v69 = 0LL;
            v98 = 0LL;
            v21 = *(_DWORD *)(BugCheckParameter1 + 64) <= 1u;
            v182 = *(_DWORD *)(BugCheckParameter1 + 68);
            if ( v21 )
            {
              if ( *(_DWORD *)(BugCheckParameter1 + 76) )
              {
                v152 = (volatile signed __int32 *)RtlRemoveHeadCircularList((_QWORD **)(BugCheckParameter1 + 40));
                if ( v152 )
                {
                  v98 = *((_QWORD *)v152 + 2);
                  *((_QWORD *)v152 + 1) = v152;
                  *(_QWORD *)v152 = v152;
                  v189 = v152;
                }
                --*(_DWORD *)(BugCheckParameter1 + 76);
                *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
                v99 = 1;
              }
              else
              {
                v99 = *(_DWORD *)(BugCheckParameter1 + 72);
                if ( !v99 )
                  goto LABEL_171;
                v158 = *(volatile signed __int32 **)(BugCheckParameter1 + 32);
                *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
                v189 = v158;
                *(_DWORD *)(BugCheckParameter1 + 72) = 0;
              }
LABEL_172:
              v100 = *(_DWORD *)(BugCheckParameter1 + 64) - 1;
              *(_DWORD *)(BugCheckParameter1 + 64) = v100 + v99;
              if ( !(v100 + v99) )
                *(_WORD *)(BugCheckParameter1 + 24) = 0;
              if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
                *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
              v180 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
              if ( v98 )
              {
                v101 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
                *(_QWORD *)(BugCheckParameter1 + 48) = v98;
                *(_DWORD *)(BugCheckParameter1 + 56) = v101 | 8;
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
              {
                KiReleaseQueuedSpinLockInstrumented(&v183, retaddr);
                goto LABEL_187;
              }
              _m_prefetchw(&v183);
              v102 = v183;
              if ( !v183 )
              {
                if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v184, 0LL, (signed __int64)&v183) == &v183 )
                {
LABEL_187:
                  v110 = (unsigned __int8)v185;
                  if ( KiIrqlFlags )
                    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v185);
                  __writecr8(v110);
                  v37 = v98 == 0;
                  v111 = 1;
                  v112 = 1;
                  if ( !v37 )
                    v111 = 3;
                  if ( !v189 )
                  {
LABEL_192:
                    v113 = 65602;
                    v180 = 0;
                    LODWORD(v186) = 65602;
LABEL_204:
                    __incgsdword(0x9070u);
                    if ( !v66 )
                      return;
                    v194 = 0LL;
                    v195 = 0LL;
                    v196 = 0LL;
                    CurrentPrcb = KeGetCurrentPrcb();
                    v187 = __rdtsc();
                    ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
                    Group = CurrentPrcb->Group;
                    GroupIndex = CurrentPrcb->GroupIndex;
                    if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
                      return;
                    v125 = KeGetCurrentThread();
                    v126 = v113 & 0xFFFF0000;
                    if ( (*(_DWORD *)(&v125[1].SwapListEntry + 1) & 1) != 0 )
                      return;
                    Object = (signed __int64)v125[1].WaitBlock[0].Object;
                    v128 = EtwpEthreadSyncTrackingSequence;
                    if ( !Object )
                    {
                      Pool2 = ExAllocatePool2(0x48uLL);
                      v130 = Pool2;
                      if ( !Pool2 )
                        return;
                      *(_QWORD *)(Pool2 + 16) = BugCheckParameter1;
                      *(_DWORD *)(Pool2 + 28) = v126;
                      *(_DWORD *)(Pool2 + 32) = 0;
                      *(_DWORD *)(Pool2 + 40) = v128;
                      Object = _InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&v125[1].WaitBlock[0].Object,
                                 Pool2,
                                 0LL);
                      if ( !Object )
                        goto LABEL_223;
                      ExFreePoolWithTag((PVOID)Pool2, 0);
                    }
                    v131 = 0LL;
                    for ( i = 0; ; ++i )
                    {
                      if ( i >= 8 )
                        goto LABEL_220;
                      v133 = *(_DWORD *)(Object + 28);
                      if ( v133 == v126
                        && *(_QWORD *)(Object + 16) == BugCheckParameter1
                        && *(_DWORD *)(Object + 40) == v128 )
                      {
                        goto LABEL_222;
                      }
                      if ( !v131 )
                      {
                        if ( v133 )
                        {
                          if ( *(_DWORD *)(Object + 40) < v128 )
                          {
                            v131 = Object;
LABEL_220:
                            Object = v131;
                            if ( v131 )
                            {
                              *(_QWORD *)(v131 + 16) = BugCheckParameter1;
                              *(_DWORD *)(v131 + 28) = v126;
                              *(_QWORD *)(v131 + 32) = 0LL;
                              *(_QWORD *)v131 = 0LL;
                              *(_QWORD *)(v131 + 8) = 0LL;
                              *(_DWORD *)(v131 + 24) = 0;
                              *(_DWORD *)(v131 + 40) = v128;
                              *(_DWORD *)(v131 + 44) = 0;
                            }
LABEL_222:
                            v130 = Object;
                            if ( !Object )
                              return;
LABEL_223:
                            if ( *(_DWORD *)(v130 + 32) )
                            {
                              ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
                              if ( *(_DWORD *)(v130 + 36) < (unsigned int)(v180 + 1) )
                                *(_DWORD *)(v130 + 36) = v180 + 1;
                              if ( (_DWORD)v186 != 65602 )
                              {
                                if ( (_DWORD)v186 == 65618 )
                                  *(_DWORD *)(v130 + 32) = 2;
                                return;
                              }
                              v154 = *(_QWORD *)(v130 + 8);
                              if ( v154 > 2 && *(_WORD *)(v130 + 24) == Group && *(_BYTE *)(v130 + 26) == GroupIndex )
                                v155 = v187 - v154;
                              else
                                v155 = 0LL;
                              if ( *(_QWORD *)v130 > 1uLL
                                && !((CurrentPrcb->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                                    + CurrentPrcb->SynchCounters.ExecutiveResourceReleaseSharedCount)
                                   % EtwpExecutiveResourceContentionSampleRate) )
                              {
                                v157 = v182;
                                goto LABEL_297;
                              }
                              v156 = *(_DWORD *)(v130 + 44);
                              v157 = v182;
                              if ( v182 > v156 && !((v182 - v156) % EtwpExecutiveResourceContentionSampleRate)
                                || !((CurrentPrcb->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                                    + CurrentPrcb->SynchCounters.ExecutiveResourceReleaseSharedCount)
                                   % EtwpExecutiveResourceReleaseSampleRate) )
                              {
LABEL_297:
                                DWORD2(v196) = 65602;
                                *(_QWORD *)&v196 = BugCheckParameter1;
                                *(_QWORD *)&v194 = *(_QWORD *)(v130 + 8);
                                DWORD2(v195) = *(_DWORD *)(v130 + 36);
                                *((_QWORD *)&v194 + 1) = v155;
                                *(_QWORD *)&v195 = *(_QWORD *)v130;
                                HIDWORD(v196) = v157 - *(_DWORD *)(v130 + 44);
                                v198 = 48LL;
                                LODWORD(BugCheckParameter4) = 23074818;
                                HIDWORD(v195) = KeGetCurrentThread()[1].CurrentRunTime;
                                v197 = &v194;
                                EtwTraceKernelEvent((int)&v197, 1, 0x20020000u, 1323, 23074818);
                              }
                            }
                            *(_DWORD *)(v130 + 28) = 0;
                            return;
                          }
                        }
                        else
                        {
                          v131 = Object;
                        }
                      }
                      Object += 64LL;
                    }
                  }
                  v139 = KeGetCurrentIrql();
                  v187 = v139;
                  __writecr8(2uLL);
                  if ( KiIrqlFlags )
                    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v139);
                  v140 = v189;
                  v186 = KeGetCurrentPrcb();
                  v141 = *(volatile signed __int32 **)v189;
LABEL_249:
                  v190 = v141;
                  KiAcquireKobjectLockSafe(v140 + 6);
                  *((_DWORD *)v140 + 7) = 1;
                  v142 = (volatile signed __int32 *)*((_QWORD *)v140 + 4);
LABEL_250:
                  v143 = v140 + 6;
                  while ( 1 )
                  {
                    if ( v142 == v140 + 8 )
                    {
LABEL_257:
                      _InterlockedAnd(v140 + 6, 0xFFFFFF7F);
                      if ( v190 == v189 )
                      {
                        v149 = v186;
                        v150 = KiRemoveBoostThread(v186, (__int64)v186->CurrentThread);
                        v151 = v180;
                        if ( v180 )
                        {
                          v112 = 2;
                          if ( v150 > v180 )
                            v151 = v150;
                        }
                        if ( (v111 & 2) != 0 && v112 == 1 )
                          v151 = 1;
                        KiExitDispatcher(v149, 0LL, v112, v151, v187);
                        v66 = GroupIndex;
                        goto LABEL_192;
                      }
                      v140 = v190;
                      v141 = *(volatile signed __int32 **)v190;
                      goto LABEL_249;
                    }
                    v144 = *(volatile signed __int32 **)v142;
                    v145 = (__int64)v142;
                    v142 = v144;
                    v146 = *(volatile signed __int32 ***)(v145 + 8);
                    if ( *((_QWORD *)v144 + 1) != v145 || *v146 != (volatile signed __int32 *)v145 )
                      goto LABEL_132;
                    *v146 = v144;
                    *((_QWORD *)v144 + 1) = v146;
                    v147 = *(_BYTE *)(v145 + 16);
                    if ( v147 == 1 )
                    {
                      v148 = KiTryUnwaitThread((__int64)v186, v145, *(unsigned __int16 *)(v145 + 18), 0LL);
                      v143 = v140 + 6;
                      if ( v148 )
                        goto LABEL_256;
                    }
                    else
                    {
                      if ( v147 != 2 )
                      {
                        if ( v147 == 4 )
                        {
                          *(_BYTE *)(v145 + 17) = 5;
                          v143[1] = 0;
                          KeInsertQueueDpc(*(PRKDPC *)(v145 + 24), v143, (PVOID)v145);
                        }
                        else
                        {
                          KiTryUnwaitThread((__int64)v186, v145, 256LL, 0LL);
                        }
                        goto LABEL_250;
                      }
                      *(_BYTE *)(v145 + 17) = 5;
                      KiInsertQueueInternal(*(_QWORD *)(v145 + 24), (__int64 *)v145);
LABEL_256:
                      v37 = (*((_DWORD *)v140 + 7))-- == 1;
                      v143 = v140 + 6;
                      if ( v37 )
                        goto LABEL_257;
                    }
                  }
                }
                v102 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v183);
              }
              v183 = 0LL;
              v103 = (unsigned __int8)v184;
              if ( ((v103 ^ (unsigned __int8)_InterlockedExchange64(v102 + 1, (__int64)v184)) & 4) != 0 )
              {
                _InterlockedOr(v177, 0);
                v104 = KeDisableInterrupts();
                KiHaltOnAddressWakeEntireList(
                  v107,
                  _InterlockedExchange64((volatile __int64 *)(v106 + 8 * v105 + 15861120), 0LL));
                if ( v104 )
                {
                  v108 = KeGetCurrentPrcb();
                  SchedulerAssist = (signed __int32 *)v108->SchedulerAssist;
                  if ( SchedulerAssist )
                  {
                    _m_prefetchw(SchedulerAssist);
                    v136 = *SchedulerAssist;
                    do
                    {
                      v137 = v136;
                      v136 = _InterlockedCompareExchange(SchedulerAssist, v136 & 0xFFDFFFFF, v136);
                    }
                    while ( v137 != v136 );
                    if ( (v136 & 0x200000) != 0 )
                      KiRemoveSystemWorkPriorityKick((__int64)v108);
                  }
                  _enable();
                }
              }
              goto LABEL_187;
            }
LABEL_171:
            v99 = 0;
            goto LABEL_172;
          }
          v94 = 0;
          v95 = 0LL;
          if ( PspAlwaysTrackIoBoosting )
          {
            v94 = 1;
            v160 = ExAllocatePool2(0x40uLL);
            v95 = (_QWORD *)v160;
            if ( v160 )
            {
              RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v160 + 16), 0LL);
              v95[12] = KeGetCurrentThread();
              v95[13] = 0LL;
            }
            v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v93 + 1552));
          }
          if ( *(_DWORD *)(v93 + 1504) )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v93 + 1504));
            if ( !v94 )
            {
LABEL_160:
              v92 = *(_DWORD *)(v69 + 8) & 0xFFFFFFFE;
              *(_DWORD *)(v69 + 8) = v92;
              goto LABEL_161;
            }
            if ( *(_DWORD *)(v93 + 1504) )
            {
              if ( v95 )
              {
                v170 = *(_QWORD **)(v93 + 1544);
                if ( *v170 != v93 + 1536 )
                  goto LABEL_132;
                *v95 = v93 + 1536;
                v95[1] = v170;
                *v170 = v95;
                *(_QWORD *)(v93 + 1544) = v95;
              }
            }
            else
            {
              if ( v95 )
                ExFreePoolWithTag(v95, 0x736F6F42u);
              v171 = (__int64 **)(v93 + 1520);
              while ( 1 )
              {
                v172 = *v171;
                if ( *v171 == (__int64 *)v171 )
                  break;
                v176 = *v172;
                if ( (__int64 **)v172[1] != v171 || *(__int64 **)(v176 + 8) != v172 )
                  goto LABEL_132;
                *v171 = (__int64 *)v176;
                *(_QWORD *)(v176 + 8) = v171;
                ExFreePoolWithTag(v172, 0x736F6F42u);
              }
              v173 = (__int64 **)(v93 + 1536);
              while ( 1 )
              {
                v174 = *v173;
                if ( *v173 == (__int64 *)v173 )
                  break;
                v175 = *v174;
                if ( (__int64 **)v174[1] != v173 || *(__int64 **)(v175 + 8) != v174 )
                  goto LABEL_132;
                *v173 = (__int64 *)v175;
                *(_QWORD *)(v175 + 8) = v173;
                ExFreePoolWithTag(v174, 0x736F6F42u);
              }
            }
          }
          else if ( !v94 )
          {
            goto LABEL_160;
          }
          v162 = (volatile signed __int64 *)(v93 + 1552);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            _InterlockedAnd64(v162, 0LL);
          else
            KiReleaseSpinLockInstrumented(v162, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
          __writecr8(v5);
          goto LABEL_160;
        }
        v113 = 65618;
        v114 = *(_DWORD *)(BugCheckParameter1 + 68);
        LODWORD(v186) = 65618;
        v182 = v114;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(&v183, retaddr);
          goto LABEL_201;
        }
        _m_prefetchw(&v183);
        v115 = v183;
        if ( !v183 )
        {
          if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v184, 0LL, (signed __int64)&v183) == &v183 )
          {
LABEL_201:
            v123 = (unsigned __int8)v185;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v185);
            __writecr8(v123);
            goto LABEL_204;
          }
          v115 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v183);
        }
        v183 = 0LL;
        v116 = (unsigned __int8)v184;
        if ( ((v116 ^ (unsigned __int8)_InterlockedExchange64(v115 + 1, (__int64)v184)) & 4) != 0 )
        {
          _InterlockedOr(v177, 0);
          v117 = KeDisableInterrupts();
          KiHaltOnAddressWakeEntireList(
            v120,
            _InterlockedExchange64((volatile __int64 *)(v119 + 8 * v118 + 15861120), 0LL));
          if ( v117 )
          {
            v121 = KeGetCurrentPrcb();
            v122 = (signed __int32 *)v121->SchedulerAssist;
            if ( v122 )
            {
              _m_prefetchw(v122);
              v134 = *v122;
              do
              {
                v135 = v134;
                v134 = _InterlockedCompareExchange(v122, v134 & 0xFFDFFFFF, v134);
              }
              while ( v135 != v134 );
              if ( (v134 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v121);
            }
            _enable();
          }
        }
        goto LABEL_201;
      }
LABEL_138:
      v71 = *(_QWORD *)(BugCheckParameter1 + 16);
    }
    KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter3, v71, 2uLL);
  }
  v12 = 0;
  v188 = 0LL;
  v13 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  GroupIndex = v13;
  if ( ((v11 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter3 )
    KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter3, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
  v14 = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | (8 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 3) - 8);
  *(_DWORD *)(BugCheckParameter1 + 56) = v14;
  v15 = v14 >> 3;
  if ( v15 )
  {
    v40 = 65586;
    v41 = *(_DWORD *)(BugCheckParameter1 + 68);
    v180 = 65586;
    v182 = v41;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v183, retaddr);
      goto LABEL_58;
    }
    _m_prefetchw(&v183);
    v42 = v183;
    if ( !v183 )
    {
      if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v184, 0LL, (signed __int64)&v183) == &v183 )
      {
LABEL_58:
        v50 = (unsigned __int8)v185;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v185);
        __writecr8(v50);
        goto LABEL_61;
      }
      v42 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v183);
    }
    v183 = 0LL;
    v43 = (unsigned __int8)v184;
    if ( ((v43 ^ (unsigned __int8)_InterlockedExchange64(v42 + 1, (__int64)v184)) & 4) != 0 )
    {
      _InterlockedOr(v177, 0);
      v44 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v47, _InterlockedExchange64((volatile __int64 *)(v46 + 8 * v45 + 15861120), 0LL));
      if ( v44 )
      {
        v48 = KeGetCurrentPrcb();
        v49 = (signed __int32 *)v48->SchedulerAssist;
        if ( v49 )
        {
          _m_prefetchw(v49);
          v72 = *v49;
          do
          {
            v73 = v72;
            v72 = _InterlockedCompareExchange(v49, v72 & 0xFFDFFFFF, v72);
          }
          while ( v73 != v72 );
          if ( (v72 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v48);
        }
        _enable();
      }
    }
    goto LABEL_58;
  }
  v16 = *(_DWORD *)(BugCheckParameter1 + 56);
  v17 = *(_QWORD *)(BugCheckParameter1 + 48);
  if ( (v16 & 2) != 0 )
  {
    v17 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v17 & 3) != 0 )
  {
    goto LABEL_28;
  }
  if ( !v17 )
    goto LABEL_28;
  if ( (v16 & 1) != 0 )
  {
    v18 = 0;
    v19 = 0LL;
    if ( PspAlwaysTrackIoBoosting )
    {
      v18 = 1;
      v159 = ExAllocatePool2(0x40uLL);
      v19 = (_QWORD *)v159;
      if ( v159 )
      {
        RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v159 + 16), 0LL);
        v19[12] = KeGetCurrentThread();
        v19[13] = 0LL;
      }
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 1552));
    }
    if ( *(_DWORD *)(v17 + 1504) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v17 + 1504));
      if ( !v18 )
      {
LABEL_20:
        v16 = *(_DWORD *)(BugCheckParameter1 + 56) & 0xFFFFFFFE;
        *(_DWORD *)(BugCheckParameter1 + 56) = v16;
        goto LABEL_21;
      }
      if ( *(_DWORD *)(v17 + 1504) )
      {
        if ( v19 )
        {
          v163 = *(_QWORD **)(v17 + 1544);
          if ( *v163 != v17 + 1536 )
            goto LABEL_132;
          *v19 = v17 + 1536;
          v19[1] = v163;
          *v163 = v19;
          *(_QWORD *)(v17 + 1544) = v19;
        }
      }
      else
      {
        if ( v19 )
          ExFreePoolWithTag(v19, 0x736F6F42u);
        v164 = (__int64 **)(v17 + 1520);
        while ( 1 )
        {
          v165 = *v164;
          if ( *v164 == (__int64 *)v164 )
            break;
          v169 = *v165;
          if ( (__int64 **)v165[1] != v164 || *(__int64 **)(v169 + 8) != v165 )
            goto LABEL_132;
          *v164 = (__int64 *)v169;
          *(_QWORD *)(v169 + 8) = v164;
          ExFreePoolWithTag(v165, 0x736F6F42u);
        }
        v166 = (__int64 **)(v17 + 1536);
        while ( 1 )
        {
          v167 = *v166;
          if ( *v166 == (__int64 *)v166 )
            break;
          v168 = *v167;
          if ( (__int64 **)v167[1] != v166 || *(__int64 **)(v168 + 8) != v167 )
            goto LABEL_132;
          *v166 = (__int64 *)v168;
          *(_QWORD *)(v168 + 8) = v166;
          ExFreePoolWithTag(v167, 0x736F6F42u);
        }
      }
    }
    else if ( !v18 )
    {
      goto LABEL_20;
    }
    v161 = (volatile signed __int64 *)(v17 + 1552);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v161, 0LL);
    else
      KiReleaseSpinLockInstrumented(v161, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v12);
    goto LABEL_20;
  }
LABEL_21:
  if ( (v16 & 4) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v17 + 1508));
    v16 = *(_DWORD *)(BugCheckParameter1 + 56) & 0xFFFFFFFB;
    *(_DWORD *)(BugCheckParameter1 + 56) = v16;
  }
  if ( (v16 & 2) != 0 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v17 - 48, 0, 1u, 0x746C6644u);
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v21 = v20 <= 1;
    v22 = v20 - 1;
    if ( v21 )
    {
      if ( *(_QWORD *)(v17 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v17 - 48) >> 8)],
          v17,
          3uLL,
          *(_QWORD *)(v17 - 40));
      if ( v22 < 0 )
        KeBugCheckEx(0x18u, 0LL, v17, 4uLL, v22);
      ObpDeferObjectDeletion(v17 - 48, v11, CurrentThread, a4);
    }
    *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
  }
LABEL_28:
  *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
  v23 = 0LL;
  v24 = *(_DWORD *)(BugCheckParameter1 + 72);
  v182 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( !v24 )
  {
    if ( !*(_DWORD *)(BugCheckParameter1 + 76) )
    {
      *(_WORD *)(BugCheckParameter1 + 24) = 0;
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      v26 = 0;
      goto LABEL_31;
    }
    v76 = *(volatile signed __int32 ***)(BugCheckParameter1 + 40);
    if ( v76 )
    {
      if ( *v76 == (volatile signed __int32 *)v76 )
      {
        *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
      }
      else
      {
        *(_QWORD *)(BugCheckParameter1 + 40) = *v76;
        v77 = *v76;
        v78 = (volatile signed __int32 ***)v76[1];
        if ( *((volatile signed __int32 ***)*v76 + 1) != v76 || *v78 != v76 )
          goto LABEL_132;
        *v78 = (volatile signed __int32 **)v77;
        *((_QWORD *)v77 + 1) = v78;
      }
      v138 = v188;
      v23 = v76[2];
      if ( v188 )
      {
        v153 = (volatile signed __int32 **)*((_QWORD *)v188 + 1);
        if ( *v153 == v188 )
        {
          *v76 = v188;
          v76[1] = (volatile signed __int32 *)v153;
          *v153 = (volatile signed __int32 *)v76;
          *((_QWORD *)v138 + 1) = v76;
          --*(_DWORD *)(BugCheckParameter1 + 76);
          v188 = (volatile signed __int32 *)v76;
          v24 = 1;
          goto LABEL_30;
        }
LABEL_132:
        __fastfail(3u);
      }
      v76[1] = (volatile signed __int32 *)v76;
      *v76 = (volatile signed __int32 *)v76;
      v188 = (volatile signed __int32 *)v76;
    }
    --*(_DWORD *)(BugCheckParameter1 + 76);
    v24 = 1;
    goto LABEL_30;
  }
  v25 = *(volatile signed __int32 **)(BugCheckParameter1 + 32);
  *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
  *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
  v188 = v25;
  *(_DWORD *)(BugCheckParameter1 + 72) = 0;
LABEL_30:
  v26 = v24 + *(_DWORD *)(BugCheckParameter1 + 64) - 1;
LABEL_31:
  *(_DWORD *)(BugCheckParameter1 + 64) = v26;
  if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
    *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
  v180 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
  if ( v23 )
  {
    v27 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
    *(_QWORD *)(BugCheckParameter1 + 48) = v23;
    *(_DWORD *)(BugCheckParameter1 + 56) = v27 | 8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(&v183, retaddr);
    goto LABEL_44;
  }
  _m_prefetchw(&v183);
  v28 = v183;
  if ( v183 )
  {
LABEL_40:
    v183 = 0LL;
    v29 = (unsigned __int8)v184;
    if ( ((v29 ^ (unsigned __int8)_InterlockedExchange64(v28 + 1, (__int64)v184)) & 4) != 0 )
    {
      _InterlockedOr(v177, 0);
      v30 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v33, _InterlockedExchange64((volatile __int64 *)(v32 + 8 * v31 + 15861120), 0LL));
      if ( v30 )
      {
        v34 = KeGetCurrentPrcb();
        v35 = (signed __int32 *)v34->SchedulerAssist;
        if ( v35 )
        {
          _m_prefetchw(v35);
          v74 = *v35;
          do
          {
            v75 = v74;
            v74 = _InterlockedCompareExchange(v35, v74 & 0xFFDFFFFF, v74);
          }
          while ( v75 != v74 );
          if ( (v74 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v34);
        }
        _enable();
      }
    }
    goto LABEL_44;
  }
  if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v184, 0LL, (signed __int64)&v183) != &v183 )
  {
    v28 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v183);
    goto LABEL_40;
  }
LABEL_44:
  v36 = (unsigned __int8)v185;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v185);
  __writecr8(v36);
  v37 = v23 == 0LL;
  v38 = 1;
  v39 = 1;
  if ( !v37 )
    v38 = 3;
  if ( !v188 )
    goto LABEL_49;
  v79 = KeGetCurrentIrql();
  v187 = v79;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v79);
  v80 = v188;
  v186 = KeGetCurrentPrcb();
  v81 = *(volatile signed __int32 **)v188;
  while ( 2 )
  {
    v190 = v81;
    KiAcquireKobjectLockSafe(v80 + 6);
    *((_DWORD *)v80 + 7) = 1;
    v82 = (volatile signed __int32 *)*((_QWORD *)v80 + 4);
LABEL_128:
    v83 = v80 + 6;
    while ( v82 != v80 + 8 )
    {
      v84 = *(volatile signed __int32 **)v82;
      v85 = (__int64)v82;
      v82 = v84;
      v86 = *(volatile signed __int32 ***)(v85 + 8);
      if ( *((_QWORD *)v84 + 1) != v85 || *v86 != (volatile signed __int32 *)v85 )
        goto LABEL_132;
      *v86 = v84;
      *((_QWORD *)v84 + 1) = v86;
      v87 = *(_BYTE *)(v85 + 16);
      if ( v87 == 1 )
      {
        v88 = KiTryUnwaitThread((__int64)v186, v85, *(unsigned __int16 *)(v85 + 18), 0LL);
        v83 = v80 + 6;
        if ( v88 )
          goto LABEL_144;
      }
      else
      {
        if ( v87 != 2 )
        {
          if ( v87 == 4 )
          {
            *(_BYTE *)(v85 + 17) = 5;
            v83[1] = 0;
            KeInsertQueueDpc(*(PRKDPC *)(v85 + 24), v83, (PVOID)v85);
          }
          else
          {
            KiTryUnwaitThread((__int64)v186, v85, 256LL, 0LL);
          }
          goto LABEL_128;
        }
        *(_BYTE *)(v85 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v85 + 24), (__int64 *)v85);
LABEL_144:
        v37 = (*((_DWORD *)v80 + 7))-- == 1;
        v83 = v80 + 6;
        if ( v37 )
          break;
      }
    }
    _InterlockedAnd(v80 + 6, 0xFFFFFF7F);
    if ( v190 != v188 )
    {
      v80 = v190;
      v81 = *(volatile signed __int32 **)v190;
      continue;
    }
    break;
  }
  v89 = v186;
  v90 = KiRemoveBoostThread(v186, (__int64)v186->CurrentThread);
  v91 = v180;
  if ( v180 )
  {
    v39 = 2;
    if ( v90 > v180 )
      v91 = v90;
  }
  if ( (v38 & 2) != 0 && v39 == 1 )
    v91 = 1;
  KiExitDispatcher(v89, 0LL, v39, v91, v187);
  v13 = GroupIndex;
LABEL_49:
  v40 = 65570;
  v180 = 65570;
  v15 = 0;
LABEL_61:
  __incgsdword(0x906Cu);
  if ( v13 )
  {
    v191 = 0LL;
    v192 = 0LL;
    v193 = 0LL;
    v51 = KeGetCurrentPrcb();
    v187 = __rdtsc();
    ++v51->SynchCounters.ExEtwSynchTrackingNotificationsCount;
    Group = v51->Group;
    GroupIndex = v51->GroupIndex;
    if ( KeGetCurrentThread()[1].WaitBlock[0].Object )
    {
      v52 = KeGetCurrentThread();
      v53 = v40 & 0xFFFF0000;
      if ( (*(_DWORD *)(&v52[1].SwapListEntry + 1) & 1) == 0 )
      {
        v54 = (signed __int64)v52[1].WaitBlock[0].Object;
        v55 = EtwpEthreadSyncTrackingSequence;
        LODWORD(v186) = EtwpEthreadSyncTrackingSequence;
        if ( v54 )
        {
LABEL_68:
          v58 = 0LL;
          for ( j = 0; j < 8; ++j )
          {
            v60 = *(_DWORD *)(v54 + 28);
            if ( v60 == v53 && *(_QWORD *)(v54 + 16) == BugCheckParameter1 && *(_DWORD *)(v54 + 40) == v55 )
              goto LABEL_79;
            if ( !v58 )
            {
              if ( v60 )
              {
                if ( *(_DWORD *)(v54 + 40) < v55 )
                {
                  v58 = v54;
                  break;
                }
              }
              else
              {
                v58 = v54;
              }
            }
            v54 += 64LL;
          }
          v54 = v58;
          if ( v58 )
          {
            *(_QWORD *)(v58 + 16) = BugCheckParameter1;
            *(_DWORD *)(v58 + 28) = v53;
            *(_QWORD *)(v58 + 32) = 0LL;
            *(_QWORD *)v58 = 0LL;
            *(_QWORD *)(v58 + 8) = 0LL;
            *(_DWORD *)(v58 + 24) = 0;
            *(_DWORD *)(v58 + 40) = v55;
            *(_DWORD *)(v58 + 44) = 0;
          }
LABEL_79:
          v57 = v54;
          if ( v54 )
            goto LABEL_80;
        }
        else
        {
          v56 = ExAllocatePool2(0x48uLL);
          v57 = v56;
          if ( v56 )
          {
            *(_QWORD *)(v56 + 16) = BugCheckParameter1;
            *(_DWORD *)(v56 + 28) = v53;
            *(_DWORD *)(v56 + 32) = 0;
            *(_DWORD *)(v56 + 40) = (_DWORD)v186;
            v54 = _InterlockedCompareExchange64((volatile signed __int64 *)&v52[1].WaitBlock[0].Object, v56, 0LL);
            if ( v54 )
            {
              ExFreePoolWithTag((PVOID)v56, 0);
              v55 = (int)v186;
              goto LABEL_68;
            }
LABEL_80:
            if ( !*(_DWORD *)(v57 + 32) )
              goto LABEL_89;
            ++v51->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
            v61 = v15 + 1;
            if ( *(_DWORD *)(v57 + 36) < v61 )
              *(_DWORD *)(v57 + 36) = v61;
            if ( v180 == 65570 )
            {
              v62 = *(_QWORD *)(v57 + 8);
              if ( v62 > 2 && *(_WORD *)(v57 + 24) == Group && *(_BYTE *)(v57 + 26) == GroupIndex )
                v63 = v187 - v62;
              else
                v63 = 0LL;
              if ( *(_QWORD *)v57 > 1uLL
                && !((v51->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                    + v51->SynchCounters.ExecutiveResourceReleaseSharedCount)
                   % EtwpExecutiveResourceContentionSampleRate) )
              {
                v65 = v182;
                goto LABEL_272;
              }
              v64 = *(_DWORD *)(v57 + 44);
              v65 = v182;
              if ( v182 > v64 && !((v182 - v64) % EtwpExecutiveResourceContentionSampleRate)
                || !((v51->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                    + v51->SynchCounters.ExecutiveResourceReleaseSharedCount)
                   % EtwpExecutiveResourceReleaseSampleRate) )
              {
LABEL_272:
                DWORD2(v193) = 65570;
                *(_QWORD *)&v193 = BugCheckParameter1;
                *(_QWORD *)&v191 = *(_QWORD *)(v57 + 8);
                DWORD2(v192) = *(_DWORD *)(v57 + 36);
                *((_QWORD *)&v191 + 1) = v63;
                *(_QWORD *)&v192 = *(_QWORD *)v57;
                HIDWORD(v193) = v65 - *(_DWORD *)(v57 + 44);
                v198 = 48LL;
                LODWORD(BugCheckParameter4) = 23074818;
                HIDWORD(v192) = KeGetCurrentThread()[1].CurrentRunTime;
                v197 = &v191;
                EtwTraceKernelEvent((int)&v197, 1, 0x20020000u, 1323, 23074818);
              }
LABEL_89:
              *(_DWORD *)(v57 + 28) = 0;
            }
            else if ( v180 == 65586 )
            {
              *(_DWORD *)(v57 + 32) = 2;
            }
          }
        }
      }
    }
  }
}
