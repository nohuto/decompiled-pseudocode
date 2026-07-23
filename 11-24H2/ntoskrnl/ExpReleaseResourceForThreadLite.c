/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x140357E60
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x140357AA0 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     RtlRemoveHeadCircularList @ 0x14041CA50 (RtlRemoveHeadCircularList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter3)
{
  volatile __int64 *v2; // rdi
  KIRQL v3; // r15
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v7; // rdx
  struct _KTHREAD *CurrentThread; // r8
  __int16 v9; // dx
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
  int v24; // edx
  signed int v25; // r15d
  int v26; // eax
  unsigned __int64 v27; // rdi
  bool v28; // zf
  char v29; // di
  unsigned int v30; // esi
  int v31; // esi
  __int64 Pool2; // rax
  volatile signed __int64 *v33; // rax
  unsigned __int8 v34; // cl
  bool v35; // di
  __int64 v36; // r8
  __int64 v37; // r10
  __int64 v38; // rcx
  struct _KPRCB *v39; // rcx
  signed __int32 *SchedulerAssist; // r8
  bool v41; // r13
  unsigned int v42; // eax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rcx
  ULONG_PTR v46; // rdi
  unsigned int v47; // r13d
  unsigned __int64 v48; // rdi
  struct _KPRCB *v49; // r14
  struct _KTHREAD *v50; // r13
  unsigned int v51; // r12d
  __int64 Object; // rsi
  int v53; // edx
  unsigned int *v54; // rdi
  unsigned int j; // ecx
  int v56; // r8d
  unsigned int v57; // r15d
  char v58; // cl
  unsigned int v59; // r9d
  bool v60; // di
  __int64 v61; // r8
  __int64 v62; // r10
  __int64 v63; // rcx
  struct _KPRCB *v64; // rcx
  _DWORD *v65; // r8
  _QWORD *v66; // rcx
  __int64 v67; // rdx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  struct _KPRCB *CurrentPrcb; // r13
  _QWORD *v71; // r12
  _QWORD *i; // rax
  _DWORD *v73; // r9
  struct _KPRCB *v74; // rcx
  struct _KPRCB *v75; // rax
  _QWORD *v76; // rdx
  __int64 v77; // rax
  _KTHREAD *v78; // rcx
  unsigned int v79; // eax
  ULONG_PTR v80; // rsi
  char v81; // r14
  _QWORD *v82; // r12
  signed __int64 v83; // rax
  signed __int64 v84; // rax
  __int64 v85; // rsi
  int v86; // ecx
  int v87; // eax
  signed int v88; // r15d
  int v89; // eax
  unsigned __int64 v90; // rdi
  char v91; // di
  unsigned int v92; // esi
  int v93; // esi
  volatile signed __int64 *v94; // rax
  unsigned __int8 v95; // cl
  unsigned int v96; // r9d
  bool v97; // di
  __int64 v98; // r8
  __int64 v99; // r10
  __int64 v100; // rcx
  struct _KPRCB *v101; // rcx
  signed __int32 *v102; // r8
  unsigned int v103; // eax
  unsigned __int64 v104; // rdi
  struct _KPRCB *v105; // r14
  struct _KTHREAD *v106; // r15
  unsigned int v107; // r12d
  __int64 v108; // rsi
  int v109; // r13d
  unsigned int *v110; // rdi
  unsigned int k; // ecx
  int v112; // edx
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // r9
  unsigned int v115; // ecx
  unsigned int v116; // r10d
  unsigned __int64 v117; // rax
  char *v118; // r9
  unsigned int v119; // ecx
  unsigned int v120; // r10d
  char v121; // cl
  bool v122; // di
  __int64 v123; // r8
  __int64 v124; // r10
  __int64 v125; // rcx
  struct _KPRCB *v126; // rcx
  _DWORD *v127; // r8
  char v128; // cl
  char v129; // al
  signed int v130; // eax
  _QWORD *v131; // rax
  unsigned __int64 v132; // rax
  _QWORD *v133; // r12
  _QWORD *v134; // rax
  _QWORD *v135; // r13
  _QWORD *v136; // r12
  _DWORD *v137; // r9
  _QWORD *v138; // rdx
  __int64 v139; // rax
  _QWORD *v140; // rcx
  char v141; // cl
  char v142; // al
  struct _KPRCB *v143; // r14
  signed int v144; // eax
  int v145; // ett
  signed __int32 v146; // eax
  signed __int32 v147; // ett
  _QWORD *v148; // rdx
  _QWORD *v149; // rax
  int v150; // ett
  signed __int32 v151; // eax
  signed __int32 v152; // ett
  _QWORD *v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  volatile signed __int64 *v156; // rcx
  volatile signed __int64 *v157; // rcx
  _QWORD *v158; // rcx
  __int64 **v159; // rsi
  __int64 *v160; // rcx
  __int64 **v161; // rsi
  __int64 *v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rax
  _QWORD *v165; // rcx
  __int64 **v166; // r14
  __int64 *v167; // rcx
  __int64 **v168; // r14
  __int64 *v169; // rcx
  __int64 v170; // rax
  __int64 v171; // rax
  signed __int32 v173[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  char v175; // [rsp+30h] [rbp-D0h]
  PVOID SystemArgument1; // [rsp+38h] [rbp-C8h]
  __int16 Group; // [rsp+40h] [rbp-C0h]
  unsigned int v178; // [rsp+44h] [rbp-BCh]
  struct _KPRCB *v179; // [rsp+48h] [rbp-B8h]
  volatile signed __int64 *v180; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int64 *v181; // [rsp+58h] [rbp-A8h]
  __int64 v182; // [rsp+60h] [rbp-A0h]
  _QWORD *v183; // [rsp+68h] [rbp-98h]
  _QWORD *v184; // [rsp+70h] [rbp-90h]
  _QWORD *v185; // [rsp+78h] [rbp-88h]
  _QWORD *v186; // [rsp+80h] [rbp-80h]
  unsigned __int64 v187; // [rsp+88h] [rbp-78h]
  __int128 v188; // [rsp+90h] [rbp-70h] BYREF
  __int128 v189; // [rsp+A0h] [rbp-60h]
  __int128 v190; // [rsp+B0h] [rbp-50h]
  __int128 v191; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v192; // [rsp+D0h] [rbp-30h]
  __int128 v193; // [rsp+E0h] [rbp-20h]
  __int128 *v194; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v195; // [rsp+F8h] [rbp-8h]
  __int64 retaddr; // [rsp+148h] [rbp+48h]

  v2 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v182 = 0LL;
  v3 = 0;
  v181 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v180 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v182 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LOBYTE(v182) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v7 = (_QWORD *)_InterlockedExchange64(v2, (__int64)&v180);
    if ( v7 )
      KxWaitForLockOwnerShip((__int64)&v180, v7);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v180, v2);
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_WORD *)(BugCheckParameter1 + 26);
  if ( ((v9 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (BugCheckParameter3 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter3 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter3, 0LL);
  }
  if ( (v9 & 0x80u) != 0 )
  {
    v183 = 0LL;
    v10 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    v175 = v10;
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
            ObpPushStackInfo(v14 - 48, 0, 1u, 0x746C6644u);
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
        v178 = *(_DWORD *)(BugCheckParameter1 + 68);
        if ( v22 )
        {
          v23 = *(_QWORD **)(BugCheckParameter1 + 32);
          *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
          *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
          v183 = v23;
          *(_DWORD *)(BugCheckParameter1 + 72) = 0;
LABEL_31:
          v24 = v22 + *(_DWORD *)(BugCheckParameter1 + 64) - 1;
LABEL_32:
          *(_DWORD *)(BugCheckParameter1 + 64) = v24;
          if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
            *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
          v25 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
          if ( v21 )
          {
            v26 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
            *(_QWORD *)(BugCheckParameter1 + 48) = v21;
            *(_DWORD *)(BugCheckParameter1 + 56) = v26 | 8;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
          {
            KiReleaseQueuedSpinLockInstrumented(&v180, retaddr);
LABEL_40:
            v27 = (unsigned __int8)v182;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v182);
            __writecr8(v27);
            v28 = v21 == 0;
            v29 = 1;
            v30 = 1;
            if ( !v28 )
              v29 = 3;
            if ( v183 )
            {
              v69 = (_QWORD *)KeGetCurrentIrql();
              v184 = v69;
              __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v69, 2LL);
              CurrentPrcb = KeGetCurrentPrcb();
              v71 = v183;
              for ( i = (_QWORD *)*v183; ; i = (_QWORD *)*v186 )
              {
                v186 = i;
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v71 + 6);
                v73 = v71 + 3;
                *((_DWORD *)v71 + 7) = 1;
                v74 = (struct _KPRCB *)v71[4];
                v75 = (struct _KPRCB *)(v71 + 4);
                v179 = (struct _KPRCB *)(v71 + 4);
                while ( v74 != v75 )
                {
                  v76 = *(_QWORD **)&v74->MxCsr;
                  v77 = (__int64)v74;
                  v78 = v74->CurrentThread;
                  SystemArgument1 = v76;
                  if ( v76[1] != v77 || *(_QWORD *)&v78->Header.Lock != v77 )
                    goto LABEL_128;
                  *(_QWORD *)&v78->Header.Lock = v76;
                  v76[1] = v78;
                  v128 = *(_BYTE *)(v77 + 16);
                  if ( v128 == 1 )
                  {
                    v129 = KiTryUnwaitThread((__int64)CurrentPrcb, v77, *(unsigned __int16 *)(v77 + 18), 0LL);
                    v74 = (struct _KPRCB *)SystemArgument1;
                    v73 = v71 + 3;
                    v28 = v129 == 0;
                    v75 = v179;
                    if ( !v28 )
                    {
                      v28 = (*((_DWORD *)v71 + 7))-- == 1;
                      v73 = v71 + 3;
                      if ( v28 )
                        break;
                    }
                  }
                  else if ( v128 == 2 )
                  {
                    *(_BYTE *)(v77 + 17) = 5;
                    KiInsertQueueInternal(*(_QWORD *)(v77 + 24), (__int64 *)v77);
                    v28 = (*((_DWORD *)v71 + 7))-- == 1;
                    v73 = v71 + 3;
                    if ( v28 )
                      break;
                    v74 = (struct _KPRCB *)SystemArgument1;
                    v75 = v179;
                  }
                  else
                  {
                    if ( v128 == 4 )
                    {
                      *(_BYTE *)(v77 + 17) = 5;
                      v73[1] = 0;
                      KeInsertQueueDpc(*(PRKDPC *)(v77 + 24), v73, (PVOID)v77);
                    }
                    else
                    {
                      KiTryUnwaitThread((__int64)CurrentPrcb, v77, 256LL, 0LL);
                    }
                    v74 = (struct _KPRCB *)SystemArgument1;
                    v73 = v71 + 3;
                    v75 = v179;
                  }
                }
                _InterlockedAnd((volatile signed __int32 *)v71 + 6, 0xFFFFFF7F);
                if ( v186 == v183 )
                  break;
                v71 = v186;
              }
              v130 = KiRemoveBoostThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
              if ( v25 )
              {
                v30 = 2;
                if ( v130 > v25 )
                  v25 = v130;
              }
              if ( (v29 & 2) != 0 && v30 == 1 )
                v25 = 1;
              KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, v30, v25, (unsigned __int8)v184);
              v10 = v175;
            }
            v31 = 65570;
            LOBYTE(Pool2) = 0;
            LODWORD(SystemArgument1) = 65570;
            v12 = 0;
LABEL_69:
            __incgsdword(0x906Cu);
            if ( !v10 )
              return Pool2;
            v188 = 0LL;
            v189 = 0LL;
            v190 = 0LL;
            v49 = KeGetCurrentPrcb();
            v184 = (_QWORD *)__rdtsc();
            ++v49->SynchCounters.ExEtwSynchTrackingNotificationsCount;
            Group = v49->Group;
            LOBYTE(Pool2) = v49->GroupIndex;
            v175 = Pool2;
            if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
              return Pool2;
            v50 = KeGetCurrentThread();
            v51 = v31 & 0xFFFF0000;
            LODWORD(Pool2) = *((_DWORD *)&v50[1].SwapListEntry + 2);
            if ( (Pool2 & 1) != 0 )
              return Pool2;
            Object = (__int64)v50[1].WaitBlock[0].Object;
            v53 = EtwpEthreadSyncTrackingSequence;
            LODWORD(v179) = EtwpEthreadSyncTrackingSequence;
            if ( !Object )
            {
              Pool2 = ExAllocatePool2(0x48uLL, 0x200uLL, 0x72546552u);
              v54 = (unsigned int *)Pool2;
              if ( !Pool2 )
                return Pool2;
              *(_QWORD *)(Pool2 + 16) = BugCheckParameter1;
              *(_DWORD *)(Pool2 + 28) = v51;
              *(_DWORD *)(Pool2 + 32) = 0;
              *(_DWORD *)(Pool2 + 40) = (_DWORD)v179;
              Pool2 = _InterlockedCompareExchange64((volatile signed __int64 *)&v50[1].WaitBlock[0].Object, Pool2, 0LL);
              Object = Pool2;
              if ( !Pool2 )
                goto LABEL_88;
              ExFreePoolWithTag(v54, 0);
              v53 = (int)v179;
            }
            Pool2 = 0LL;
            for ( j = 0; j < 8; ++j )
            {
              v56 = *(_DWORD *)(Object + 28);
              if ( v56 == v51 && *(_QWORD *)(Object + 16) == BugCheckParameter1 && *(_DWORD *)(Object + 40) == v53 )
                goto LABEL_87;
              if ( !Pool2 )
              {
                if ( v56 )
                {
                  if ( *(_DWORD *)(Object + 40) < v53 )
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
              *(_DWORD *)(Pool2 + 28) = v51;
              *(_QWORD *)(Pool2 + 32) = 0LL;
              *(_QWORD *)Pool2 = 0LL;
              *(_QWORD *)(Pool2 + 8) = 0LL;
              *(_DWORD *)(Pool2 + 24) = 0;
              *(_DWORD *)(Pool2 + 40) = v53;
              *(_DWORD *)(Pool2 + 44) = 0;
            }
LABEL_87:
            v54 = (unsigned int *)Object;
            if ( !Object )
              return Pool2;
LABEL_88:
            if ( v54[8] )
            {
              ++v49->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
              v57 = v12 + 1;
              if ( v54[9] < v57 )
                v54[9] = v57;
              if ( (_DWORD)SystemArgument1 != 65570 )
              {
                if ( (_DWORD)SystemArgument1 == 65586 )
                  v54[8] = 2;
                return Pool2;
              }
              v117 = *((_QWORD *)v54 + 1);
              if ( v117 > 2 && *((_WORD *)v54 + 12) == Group && *((_BYTE *)v54 + 26) == v175 )
                v118 = (char *)v184 - v117;
              else
                v118 = 0LL;
              if ( *(_QWORD *)v54 <= 1uLL
                || (v49->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                  + v49->SynchCounters.ExecutiveResourceReleaseSharedCount)
                 % EtwpExecutiveResourceContentionSampleRate )
              {
                v119 = v54[11];
                v120 = v178;
                if ( v178 <= v119 || (v178 - v119) % EtwpExecutiveResourceContentionSampleRate )
                {
                  LODWORD(Pool2) = (v49->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                                  + v49->SynchCounters.ExecutiveResourceReleaseSharedCount)
                                 / EtwpExecutiveResourceReleaseSampleRate;
                  if ( (v49->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                      + v49->SynchCounters.ExecutiveResourceReleaseSharedCount)
                     % EtwpExecutiveResourceReleaseSampleRate )
                  {
                    goto LABEL_216;
                  }
                }
              }
              else
              {
                v120 = v178;
              }
              DWORD2(v190) = 65570;
              *(_QWORD *)&v190 = BugCheckParameter1;
              *(_QWORD *)&v188 = *((_QWORD *)v54 + 1);
              DWORD2(v189) = v54[9];
              *((_QWORD *)&v188 + 1) = v118;
              *(_QWORD *)&v189 = *(_QWORD *)v54;
              HIDWORD(v190) = v120 - v54[11];
              v195 = 48LL;
              LODWORD(BugCheckParameter4) = 23074818;
              HIDWORD(v189) = KeGetCurrentThread()[1].CurrentRunTime;
              v194 = &v188;
              LOBYTE(Pool2) = EtwTraceKernelEvent((int)&v194, 1, 0x20020000u, 1323, 23074818);
            }
LABEL_216:
            v54[7] = 0;
            return Pool2;
          }
          _m_prefetchw(&v180);
          v33 = v180;
          if ( !v180 )
          {
            if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v181, 0LL, (signed __int64)&v180) == &v180 )
              goto LABEL_40;
            v33 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v180);
          }
          v180 = 0LL;
          v34 = (unsigned __int8)v181;
          if ( ((v34 ^ (unsigned __int8)_InterlockedExchange64(v33 + 1, (__int64)v181)) & 4) != 0 )
          {
            _InterlockedOr(v173, 0);
            v35 = KeDisableInterrupts();
            KiHaltOnAddressWakeEntireList(
              v38,
              _InterlockedExchange64((volatile __int64 *)(v37 + 8 * v36 + 15863808), 0LL));
            if ( v35 )
            {
              v39 = KeGetCurrentPrcb();
              SchedulerAssist = (signed __int32 *)v39->SchedulerAssist;
              if ( SchedulerAssist )
              {
                _m_prefetchw(SchedulerAssist);
                v146 = *SchedulerAssist;
                do
                {
                  v147 = v146;
                  v146 = _InterlockedCompareExchange(SchedulerAssist, v146 & 0xFFDFFFFF, v146);
                }
                while ( v147 != v146 );
                if ( (v146 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick((__int64)v39);
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
          v24 = 0;
          goto LABEL_32;
        }
        v66 = *(_QWORD **)(BugCheckParameter1 + 40);
        if ( v66 )
        {
          if ( (_QWORD *)*v66 == v66 )
          {
            *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
          }
          else
          {
            *(_QWORD *)(BugCheckParameter1 + 40) = *v66;
            v67 = *v66;
            v68 = (_QWORD *)v66[1];
            if ( *(_QWORD **)(*v66 + 8LL) != v66 || (_QWORD *)*v68 != v66 )
              goto LABEL_128;
            *v68 = v67;
            *(_QWORD *)(v67 + 8) = v68;
          }
          v131 = v183;
          v21 = v66[2];
          if ( v183 )
          {
            v148 = (_QWORD *)v183[1];
            if ( (_QWORD *)*v148 == v183 )
            {
              *v66 = v183;
              v66[1] = v148;
              *v148 = v66;
              v131[1] = v66;
              --*(_DWORD *)(BugCheckParameter1 + 76);
              v183 = v66;
              v22 = 1;
              goto LABEL_31;
            }
LABEL_128:
            __fastfail(3u);
          }
          v66[1] = v66;
          *v66 = v66;
          v183 = v66;
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
        v154 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
        v17 = (_QWORD *)v154;
        if ( v154 )
        {
          RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v154 + 16), 0LL);
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
            v158 = *(_QWORD **)(v14 + 1544);
            if ( *v158 != v14 + 1536 )
              goto LABEL_128;
            *v17 = v14 + 1536;
            v17[1] = v158;
            *v158 = v17;
            *(_QWORD *)(v14 + 1544) = v17;
          }
        }
        else
        {
          if ( v17 )
            ExFreePoolWithTag(v17, 0x736F6F42u);
          v159 = (__int64 **)(v14 + 1520);
          while ( 1 )
          {
            v160 = *v159;
            if ( *v159 == (__int64 *)v159 )
              break;
            v164 = *v160;
            if ( (__int64 **)v160[1] != v159 || *(__int64 **)(v164 + 8) != v160 )
              goto LABEL_128;
            *v159 = (__int64 *)v164;
            *(_QWORD *)(v164 + 8) = v159;
            ExFreePoolWithTag(v160, 0x736F6F42u);
          }
          v161 = (__int64 **)(v14 + 1536);
          while ( 1 )
          {
            v162 = *v161;
            if ( *v161 == (__int64 *)v161 )
              break;
            v163 = *v162;
            if ( (__int64 **)v162[1] != v161 || *(__int64 **)(v163 + 8) != v162 )
              goto LABEL_128;
            *v161 = (__int64 *)v163;
            *(_QWORD *)(v163 + 8) = v161;
            ExFreePoolWithTag(v162, 0x736F6F42u);
          }
        }
      }
      else if ( !v15 )
      {
        goto LABEL_21;
      }
      v156 = (volatile signed __int64 *)(v14 + 1552);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64(v156, 0LL);
      else
        KiReleaseSpinLockInstrumented(v156, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
      __writecr8(v16);
      goto LABEL_21;
    }
    v31 = 65586;
    v47 = *(_DWORD *)(BugCheckParameter1 + 68);
    LODWORD(SystemArgument1) = 65586;
    v178 = v47;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      LOBYTE(Pool2) = KiReleaseQueuedSpinLockInstrumented(&v180, retaddr);
LABEL_66:
      v48 = (unsigned __int8)v182;
      if ( KiIrqlFlags )
        LOBYTE(Pool2) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v182);
      __writecr8(v48);
      goto LABEL_69;
    }
    _m_prefetchw(&v180);
    Pool2 = (__int64)v180;
    if ( !v180 )
    {
      Pool2 = _InterlockedCompareExchange64(v181, 0LL, (signed __int64)&v180);
      if ( (volatile signed __int64 **)Pool2 == &v180 )
        goto LABEL_66;
      Pool2 = KxWaitForLockChainValid((__int64 *)&v180);
    }
    v180 = 0LL;
    v58 = (char)v181;
    LOBYTE(Pool2) = v58 ^ _InterlockedExchange64((volatile __int64 *)(Pool2 + 8), (__int64)v181);
    if ( (Pool2 & 4) != 0 )
    {
      _InterlockedOr(v173, 0);
      v60 = KeDisableInterrupts();
      LOBYTE(Pool2) = (unsigned __int8)KiHaltOnAddressWakeEntireList(
                                         v63,
                                         _InterlockedExchange64((volatile __int64 *)(v62 + 8 * v61 + 15863808), v59));
      if ( v60 )
      {
        v64 = KeGetCurrentPrcb();
        v65 = v64->SchedulerAssist;
        if ( v65 )
        {
          _m_prefetchw(v65);
          LODWORD(Pool2) = *v65;
          do
          {
            v145 = Pool2;
            LODWORD(Pool2) = _InterlockedCompareExchange(v65, Pool2 & 0xFFDFFFFF, Pool2);
          }
          while ( v145 != (_DWORD)Pool2 );
          if ( (Pool2 & 0x200000) != 0 )
            LOBYTE(Pool2) = KiRemoveSystemWorkPriorityKick((__int64)v64);
        }
        _enable();
      }
    }
    goto LABEL_66;
  }
  v185 = 0LL;
  v41 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v175 = v41;
  if ( (BugCheckParameter3 & 3) != 0 )
    v42 = 0;
  else
    v42 = *(unsigned __int8 *)(BugCheckParameter3 + 1120);
  v43 = *(_QWORD *)(BugCheckParameter1 + 48);
  v44 = BugCheckParameter1 + 48;
  if ( v43 != BugCheckParameter3 )
  {
    v45 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
    if ( !v42
      || (v43 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v42 >= *(_DWORD *)(v43 + 8)
      || (v44 = v43 + 16LL * v42, *(_QWORD *)v44 != BugCheckParameter3) )
    {
      v46 = *(_QWORD *)(BugCheckParameter1 + 16);
      v43 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( v46 )
      {
        CurrentThread = (struct _KTHREAD *)(v46 + 16LL * *(unsigned int *)(v46 + 8));
        v44 = v46 + 16;
        if ( v45 < v43 )
        {
          while ( *(_QWORD *)v44 != BugCheckParameter3 )
          {
            if ( !*(_QWORD *)v44 || (++v45, v45 != v43) )
            {
              v44 += 16LL;
              if ( (struct _KTHREAD *)v44 != CurrentThread )
                continue;
            }
            goto LABEL_115;
          }
          KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v44 - *(_DWORD *)(BugCheckParameter1 + 16)) >> 4;
          goto LABEL_133;
        }
LABEL_115:
        v46 = *(_QWORD *)(BugCheckParameter1 + 16);
      }
      KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter3, v46, 2uLL);
    }
  }
LABEL_133:
  v79 = *(_DWORD *)(v44 + 8) & 7 | (8 * (*(_DWORD *)(v44 + 8) >> 3) - 8);
  *(_DWORD *)(v44 + 8) = v79;
  LODWORD(SystemArgument1) = v79 >> 3;
  if ( v79 >> 3 )
  {
    v93 = 65618;
    v103 = *(_DWORD *)(BugCheckParameter1 + 68);
    LODWORD(v179) = 65618;
    v178 = v103;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      LOBYTE(Pool2) = KiReleaseQueuedSpinLockInstrumented(&v180, retaddr);
LABEL_179:
      v104 = (unsigned __int8)v182;
      if ( KiIrqlFlags )
        LOBYTE(Pool2) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v182);
      __writecr8(v104);
      goto LABEL_182;
    }
    _m_prefetchw(&v180);
    Pool2 = (__int64)v180;
    if ( !v180 )
    {
      Pool2 = _InterlockedCompareExchange64(v181, 0LL, (signed __int64)&v180);
      if ( (volatile signed __int64 **)Pool2 == &v180 )
        goto LABEL_179;
      Pool2 = KxWaitForLockChainValid((__int64 *)&v180);
    }
    v180 = 0LL;
    v121 = (char)v181;
    LOBYTE(Pool2) = v121 ^ _InterlockedExchange64((volatile __int64 *)(Pool2 + 8), (__int64)v181);
    if ( (Pool2 & 4) != 0 )
    {
      _InterlockedOr(v173, 0);
      v122 = KeDisableInterrupts();
      LOBYTE(Pool2) = (unsigned __int8)KiHaltOnAddressWakeEntireList(
                                         v125,
                                         _InterlockedExchange64((volatile __int64 *)(v124 + 8 * v123 + 15863808), 0LL));
      if ( v122 )
      {
        v126 = KeGetCurrentPrcb();
        v127 = v126->SchedulerAssist;
        if ( v127 )
        {
          _m_prefetchw(v127);
          LODWORD(Pool2) = *v127;
          do
          {
            v150 = Pool2;
            LODWORD(Pool2) = _InterlockedCompareExchange(v127, Pool2 & 0xFFDFFFFF, Pool2);
          }
          while ( v150 != (_DWORD)Pool2 );
          if ( (Pool2 & 0x200000) != 0 )
            LOBYTE(Pool2) = KiRemoveSystemWorkPriorityKick((__int64)v126);
        }
        _enable();
      }
    }
    goto LABEL_179;
  }
  v80 = *(_QWORD *)v44;
  if ( (v79 & 2) != 0 )
  {
    v80 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v80 & 3) != 0 )
  {
    goto LABEL_149;
  }
  if ( !v80 )
    goto LABEL_149;
  if ( (v79 & 1) != 0 )
  {
    v81 = 0;
    v82 = 0LL;
    if ( PspAlwaysTrackIoBoosting )
    {
      v81 = 1;
      v155 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
      v82 = (_QWORD *)v155;
      if ( v155 )
      {
        RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v155 + 16), 0LL);
        v82[12] = KeGetCurrentThread();
        v82[13] = 0LL;
      }
      v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v80 + 1552));
    }
    if ( *(_DWORD *)(v80 + 1504) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v80 + 1504));
      if ( !v81 )
      {
LABEL_141:
        v79 = *(_DWORD *)(v44 + 8) & 0xFFFFFFFE;
        *(_DWORD *)(v44 + 8) = v79;
        goto LABEL_142;
      }
      if ( *(_DWORD *)(v80 + 1504) )
      {
        if ( v82 )
        {
          v165 = *(_QWORD **)(v80 + 1544);
          if ( *v165 != v80 + 1536 )
            goto LABEL_128;
          *v82 = v80 + 1536;
          v82[1] = v165;
          *v165 = v82;
          *(_QWORD *)(v80 + 1544) = v82;
        }
      }
      else
      {
        if ( v82 )
          ExFreePoolWithTag(v82, 0x736F6F42u);
        v166 = (__int64 **)(v80 + 1520);
        while ( 1 )
        {
          v167 = *v166;
          if ( *v166 == (__int64 *)v166 )
            break;
          v171 = *v167;
          if ( (__int64 **)v167[1] != v166 || *(__int64 **)(v171 + 8) != v167 )
            goto LABEL_128;
          *v166 = (__int64 *)v171;
          *(_QWORD *)(v171 + 8) = v166;
          ExFreePoolWithTag(v167, 0x736F6F42u);
        }
        v168 = (__int64 **)(v80 + 1536);
        while ( 1 )
        {
          v169 = *v168;
          if ( *v168 == (__int64 *)v168 )
            break;
          v170 = *v169;
          if ( (__int64 **)v169[1] != v168 || *(__int64 **)(v170 + 8) != v169 )
            goto LABEL_128;
          *v168 = (__int64 *)v170;
          *(_QWORD *)(v170 + 8) = v168;
          ExFreePoolWithTag(v169, 0x736F6F42u);
        }
      }
    }
    else if ( !v81 )
    {
      goto LABEL_141;
    }
    v157 = (volatile signed __int64 *)(v80 + 1552);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v157, 0LL);
    else
      KiReleaseSpinLockInstrumented(v157, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
    goto LABEL_141;
  }
LABEL_142:
  if ( (v79 & 4) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v80 + 1508));
    v79 = *(_DWORD *)(v44 + 8) & 0xFFFFFFFB;
    *(_DWORD *)(v44 + 8) = v79;
  }
  if ( (v79 & 2) != 0 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v80 - 48, 0, 1u, 0x746C6644u);
    v83 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v80 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v19 = v83 <= 1;
    v84 = v83 - 1;
    if ( v19 )
    {
      if ( *(_QWORD *)(v80 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v80 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v80 - 48) >> 8)],
          v80,
          3uLL,
          *(_QWORD *)(v80 - 40));
      if ( v84 < 0 )
        KeBugCheckEx(0x18u, 0LL, v80, 4uLL, v84);
      ObpDeferObjectDeletion(v80 - 48);
    }
    *(_DWORD *)(v44 + 8) &= ~2u;
  }
LABEL_149:
  *(_QWORD *)v44 = 0LL;
  v85 = 0LL;
  v19 = *(_DWORD *)(BugCheckParameter1 + 64) <= 1u;
  v178 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( !v19 )
  {
LABEL_152:
    v86 = 0;
    goto LABEL_153;
  }
  if ( *(_DWORD *)(BugCheckParameter1 + 76) )
  {
    v149 = (_QWORD *)RtlRemoveHeadCircularList(BugCheckParameter1 + 40, v43, CurrentThread);
    if ( v149 )
    {
      v85 = v149[2];
      v149[1] = v149;
      *v149 = v149;
      v185 = v149;
    }
    --*(_DWORD *)(BugCheckParameter1 + 76);
    *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
    v86 = 1;
  }
  else
  {
    v86 = *(_DWORD *)(BugCheckParameter1 + 72);
    if ( !v86 )
      goto LABEL_152;
    v153 = *(_QWORD **)(BugCheckParameter1 + 32);
    *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
    v185 = v153;
    *(_DWORD *)(BugCheckParameter1 + 72) = 0;
  }
LABEL_153:
  v87 = *(_DWORD *)(BugCheckParameter1 + 64) - 1;
  *(_DWORD *)(BugCheckParameter1 + 64) = v87 + v86;
  if ( !(v87 + v86) )
    *(_WORD *)(BugCheckParameter1 + 24) = 0;
  if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
    *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
  v88 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
  if ( v85 )
  {
    v89 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
    *(_QWORD *)(BugCheckParameter1 + 48) = v85;
    *(_DWORD *)(BugCheckParameter1 + 56) = v89 | 8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&v180);
    v94 = v180;
    if ( !v180 )
    {
      if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v181, 0LL, (signed __int64)&v180) == &v180 )
        goto LABEL_163;
      v94 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v180);
    }
    v180 = 0LL;
    v95 = (unsigned __int8)v181;
    if ( ((v95 ^ (unsigned __int8)_InterlockedExchange64(v94 + 1, (__int64)v181)) & 4) != 0 )
    {
      _InterlockedOr(v173, 0);
      v97 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v100, _InterlockedExchange64((volatile __int64 *)(v99 + 8 * v98 + 15863808), v96));
      if ( v97 )
      {
        v101 = KeGetCurrentPrcb();
        v102 = (signed __int32 *)v101->SchedulerAssist;
        if ( v102 )
        {
          _m_prefetchw(v102);
          v151 = *v102;
          do
          {
            v152 = v151;
            v151 = _InterlockedCompareExchange(v102, v151 & 0xFFDFFFFF, v151);
          }
          while ( v152 != v151 );
          if ( (v151 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v101);
        }
        _enable();
      }
    }
    goto LABEL_163;
  }
  KiReleaseQueuedSpinLockInstrumented(&v180, retaddr);
LABEL_163:
  v90 = (unsigned __int8)v182;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v182);
  __writecr8(v90);
  v28 = v85 == 0;
  v91 = 1;
  v92 = 1;
  if ( !v28 )
    v91 = 3;
  if ( !v185 )
    goto LABEL_168;
  v132 = KeGetCurrentIrql();
  v187 = v132;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v132, 2LL);
  v133 = v185;
  v179 = KeGetCurrentPrcb();
  v134 = (_QWORD *)*v185;
  while ( 2 )
  {
    v184 = v134;
    v186 = v133;
    SystemArgument1 = v133 + 3;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v133 + 6);
    v135 = v133 + 4;
    *((_DWORD *)v133 + 7) = 1;
    v136 = (_QWORD *)v133[4];
LABEL_246:
    v137 = SystemArgument1;
    while ( v136 != v135 )
    {
      v138 = (_QWORD *)*v136;
      v139 = (__int64)v136;
      v136 = v138;
      v140 = *(_QWORD **)(v139 + 8);
      if ( v138[1] != v139 || *v140 != v139 )
        goto LABEL_128;
      *v140 = v138;
      v138[1] = v140;
      v141 = *(_BYTE *)(v139 + 16);
      if ( v141 == 1 )
      {
        v142 = KiTryUnwaitThread((__int64)v179, v139, *(unsigned __int16 *)(v139 + 18), 0LL);
        v137 = SystemArgument1;
        if ( v142 )
          goto LABEL_252;
      }
      else
      {
        if ( v141 != 2 )
        {
          if ( v141 == 4 )
          {
            *(_BYTE *)(v139 + 17) = 5;
            v137[1] = 0;
            KeInsertQueueDpc(*(PRKDPC *)(v139 + 24), v137, (PVOID)v139);
          }
          else
          {
            KiTryUnwaitThread((__int64)v179, v139, 256LL, 0LL);
          }
          goto LABEL_246;
        }
        *(_BYTE *)(v139 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v139 + 24), (__int64 *)v139);
        v137 = SystemArgument1;
LABEL_252:
        v28 = v137[1]-- == 1;
        if ( v28 )
          break;
      }
    }
    _InterlockedAnd((volatile signed __int32 *)v186 + 6, 0xFFFFFF7F);
    if ( v184 != v185 )
    {
      v133 = v184;
      v134 = (_QWORD *)*v184;
      continue;
    }
    break;
  }
  v143 = v179;
  v144 = KiRemoveBoostThread(v179, (__int64)v179->CurrentThread);
  if ( v88 )
  {
    v92 = 2;
    if ( v144 > v88 )
      v88 = v144;
  }
  if ( (v91 & 2) != 0 && v92 == 1 )
    v88 = 1;
  KiExitDispatcher((unsigned __int64)v143, 0LL, v92, v88, v187);
  v41 = v175;
LABEL_168:
  v93 = 65602;
  LOBYTE(Pool2) = 0;
  LODWORD(v179) = 65602;
  LODWORD(SystemArgument1) = 0;
LABEL_182:
  __incgsdword(0x9070u);
  if ( v41 )
  {
    v191 = 0LL;
    v192 = 0LL;
    v193 = 0LL;
    v105 = KeGetCurrentPrcb();
    v187 = __rdtsc();
    ++v105->SynchCounters.ExEtwSynchTrackingNotificationsCount;
    Group = v105->Group;
    LOBYTE(Pool2) = v105->GroupIndex;
    v175 = Pool2;
    if ( KeGetCurrentThread()[1].WaitBlock[0].Object )
    {
      v106 = KeGetCurrentThread();
      v107 = v93 & 0xFFFF0000;
      LODWORD(Pool2) = *((_DWORD *)&v106[1].SwapListEntry + 2);
      if ( (Pool2 & 1) == 0 )
      {
        v108 = (__int64)v106[1].WaitBlock[0].Object;
        v109 = EtwpEthreadSyncTrackingSequence;
        if ( v108 )
        {
LABEL_189:
          Pool2 = 0LL;
          for ( k = 0; k < 8; ++k )
          {
            v112 = *(_DWORD *)(v108 + 28);
            if ( v112 == v107 && *(_QWORD *)(v108 + 16) == BugCheckParameter1 && *(_DWORD *)(v108 + 40) == v109 )
              goto LABEL_200;
            if ( !Pool2 )
            {
              if ( v112 )
              {
                if ( *(_DWORD *)(v108 + 40) < v109 )
                {
                  Pool2 = v108;
                  break;
                }
              }
              else
              {
                Pool2 = v108;
              }
            }
            v108 += 64LL;
          }
          v108 = Pool2;
          if ( Pool2 )
          {
            *(_QWORD *)(Pool2 + 16) = BugCheckParameter1;
            *(_DWORD *)(Pool2 + 28) = v107;
            *(_QWORD *)(Pool2 + 32) = 0LL;
            *(_QWORD *)Pool2 = 0LL;
            *(_QWORD *)(Pool2 + 8) = 0LL;
            *(_DWORD *)(Pool2 + 24) = 0;
            *(_DWORD *)(Pool2 + 40) = v109;
            *(_DWORD *)(Pool2 + 44) = 0;
          }
LABEL_200:
          v110 = (unsigned int *)v108;
          if ( v108 )
            goto LABEL_201;
        }
        else
        {
          Pool2 = ExAllocatePool2(0x48uLL, 0x200uLL, 0x72546552u);
          v110 = (unsigned int *)Pool2;
          if ( Pool2 )
          {
            *(_QWORD *)(Pool2 + 16) = BugCheckParameter1;
            *(_DWORD *)(Pool2 + 28) = v107;
            *(_DWORD *)(Pool2 + 32) = 0;
            *(_DWORD *)(Pool2 + 40) = v109;
            Pool2 = _InterlockedCompareExchange64((volatile signed __int64 *)&v106[1].WaitBlock[0].Object, Pool2, 0LL);
            v108 = Pool2;
            if ( Pool2 )
            {
              ExFreePoolWithTag(v110, 0);
              goto LABEL_189;
            }
LABEL_201:
            if ( !v110[8] )
              goto LABEL_210;
            ++v105->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
            LODWORD(Pool2) = (_DWORD)SystemArgument1 + 1;
            if ( v110[9] < (int)SystemArgument1 + 1 )
              v110[9] = Pool2;
            if ( (_DWORD)v179 == 65602 )
            {
              v113 = *((_QWORD *)v110 + 1);
              if ( v113 > 2 && *((_WORD *)v110 + 12) == Group && *((_BYTE *)v110 + 26) == v175 )
                v114 = v187 - v113;
              else
                v114 = 0LL;
              if ( *(_QWORD *)v110 > 1uLL
                && !((v105->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                    + v105->SynchCounters.ExecutiveResourceReleaseSharedCount)
                   % EtwpExecutiveResourceContentionSampleRate) )
              {
                v116 = v178;
                goto LABEL_299;
              }
              v115 = v110[11];
              v116 = v178;
              if ( v178 > v115 && !((v178 - v115) % EtwpExecutiveResourceContentionSampleRate)
                || (LODWORD(Pool2) = (v105->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                                    + v105->SynchCounters.ExecutiveResourceReleaseSharedCount)
                                   / EtwpExecutiveResourceReleaseSampleRate,
                    !((v105->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                     + v105->SynchCounters.ExecutiveResourceReleaseSharedCount)
                    % EtwpExecutiveResourceReleaseSampleRate)) )
              {
LABEL_299:
                DWORD2(v193) = 65602;
                *(_QWORD *)&v193 = BugCheckParameter1;
                *(_QWORD *)&v191 = *((_QWORD *)v110 + 1);
                DWORD2(v192) = v110[9];
                *((_QWORD *)&v191 + 1) = v114;
                *(_QWORD *)&v192 = *(_QWORD *)v110;
                HIDWORD(v193) = v116 - v110[11];
                v195 = 48LL;
                LODWORD(BugCheckParameter4) = 23074818;
                HIDWORD(v192) = KeGetCurrentThread()[1].CurrentRunTime;
                v194 = &v191;
                LOBYTE(Pool2) = EtwTraceKernelEvent((int)&v194, 1, 0x20020000u, 1323, 23074818);
              }
LABEL_210:
              v110[7] = 0;
            }
            else if ( (_DWORD)v179 == 65618 )
            {
              v110[8] = 2;
            }
          }
        }
      }
    }
  }
  return Pool2;
}
