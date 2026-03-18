/*
 * XREFs of MiLockLowestValidPageTableEx @ 0x140218760
 * Callers:
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     MiSynchronizeSystemVa @ 0x14022AD58 (MiSynchronizeSystemVa.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiDecommitLockNewPageTable @ 0x140289DC0 (MiDecommitLockNewPageTable.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiLockPoolCommitPageTable @ 0x1402EA640 (MiLockPoolCommitPageTable.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiRelockFaultState @ 0x1403967A0 (MiRelockFaultState.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertAndFlushWsleVas @ 0x140486DF0 (MiConvertAndFlushWsleVas.c)
 *     MmUpdateUserShadowStackValue @ 0x1404873D8 (MmUpdateUserShadowStackValue.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F9378 (MiSplitReducedCommitClonePage.c)
 *     MiDeleteBootRange @ 0x140669130 (MiDeleteBootRange.c)
 *     MiSetGraphicsPtes @ 0x140672698 (MiSetGraphicsPtes.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiComputeIdealLargePage @ 0x140691FB0 (MiComputeIdealLargePage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTableEx(__int64 a1, ULONG_PTR a2, ULONG_PTR *a3, int a4)
{
  __int64 v5; // r9
  unsigned __int64 v6; // r13
  struct _KPRCB *CurrentPrcb; // rdx
  char v8; // al
  unsigned int v9; // ecx
  volatile __int64 *v10; // r8
  _KSPIN_LOCK_QUEUE *volatile *v11; // rcx
  __int64 i; // r14
  ULONG_PTR v13; // rsi
  signed __int64 v14; // rcx
  signed __int64 v15; // rbx
  struct _KPRCB *v16; // r8
  int v17; // ebp
  unsigned __int64 v18; // rdi
  char v19; // al
  unsigned int v20; // ecx
  volatile __int64 *v21; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v22; // rcx
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v26; // rax
  signed __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned int v29; // ebp
  bool v30; // zf
  signed __int64 v31; // rax
  struct _KPRCB *v32; // rdx
  char v33; // al
  __int64 v34; // rcx
  volatile signed __int64 **v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  char v38; // bl
  __int64 v39; // r8
  __int64 v40; // rcx
  struct _KPRCB *v41; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v43; // rcx
  __int64 v44; // r13
  int v45; // eax
  volatile signed __int32 *v46; // rcx
  char v47; // cl
  __int64 v48; // rdx
  __int64 v49; // rax
  signed __int64 v50; // rdi
  signed __int64 v51; // rax
  unsigned int v52; // r12d
  char v53; // di
  volatile signed __int32 *v54; // rbx
  int v55; // r15d
  unsigned __int32 v56; // edx
  __int64 v57; // rcx
  signed __int32 v58; // eax
  int v59; // ecx
  signed __int32 v60; // eax
  signed __int32 v61; // eax
  signed __int32 v62; // ett
  signed __int64 v63; // rdx
  signed __int32 v64[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+30h] [rbp-78h]
  unsigned __int64 v66; // [rsp+38h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-68h]
  ULONG_PTR v68; // [rsp+48h] [rbp-60h]
  unsigned __int64 v69; // [rsp+50h] [rbp-58h]
  __int64 v70; // [rsp+58h] [rbp-50h]
  void *retaddr; // [rsp+A8h] [rbp+0h]

  v5 = a1;
  *a3 = 0LL;
  BugCheckParameter2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v68 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v69 = ((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v70 = ((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FB7DBEDF68uLL;
  v66 = 0xFFFFF6FB7DBEDF68uLL;
  if ( !a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v8 )
    {
      if ( v8 == 7 )
      {
        v9 = 1;
      }
      else
      {
        v9 = 3;
        if ( v8 == 5 )
          v9 = 0;
      }
      v10 = (volatile __int64 *)((char *)&unk_140E2FCC0 + 8 * v9);
    }
    else
    {
      v9 = 2;
      v10 = (volatile __int64 *)(v5 + 176);
    }
    v11 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v9 + v9;
    *((_QWORD *)v11 + 1) = v10;
    *v11 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64(v10, (__int64)v11) )
      {
        KxWaitForLockOwnerShip(v11);
        v5 = a1;
      }
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v11, v10);
      v5 = a1;
    }
  }
  for ( i = 2LL; ; --i )
  {
    v13 = *(&BugCheckParameter2 + i);
    v14 = 0xFFFFF6FFFFFFFFFFuLL;
    v15 = *(_QWORD *)v13;
    v16 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
    v65 = i;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v15 & 1) == 0 )
        break;
      if ( ((v15 & 0x42) == 0 || (v15 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v26 = *(_QWORD *)(KernelWaitTime + 8 * ((v13 >> 3) & 0x1FF));
            if ( (v26 & 0x20) != 0 )
              v15 |= 0x20uLL;
            v27 = v15;
            v15 |= 0x42uLL;
            if ( (v26 & 0x42) == 0 )
              v15 = v27;
          }
        }
      }
      v14 = 0xFFFFF6FFFFFFFFFFuLL;
    }
    if ( (v15 & 1) == 0 || (v15 & 0x80u) != 0LL )
      break;
    if ( (v15 & 0x20) == 0 )
    {
      v17 = 0;
      v18 = (__int64)(v13 << 25) >> 16;
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 && v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v17 = 1;
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
        v5 = a1;
        v16 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
      }
      if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        MiWriteValidPteNewProtection(v13);
        v5 = a1;
        v16 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
      }
      else
      {
        do
        {
          v63 = v15;
          v14 = v15 | 0x20;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v13, v14, v15);
        }
        while ( v15 != v63 );
      }
      if ( v17 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
        v5 = a1;
        v16 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
      }
    }
    if ( v13 == v6 )
      goto LABEL_25;
    if ( v13 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0
        && v13 >= 0xFFFFF6FB7DBED000uLL
        && v13 <= 0xFFFFF6FB7DBEDFFFuLL
        && (v14 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 4LL * (((unsigned int)v13 >> 3) & 0x1FF)));
      }
      else
      {
        if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 && v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v52 = 0;
          v53 = (2 * ((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F;
          v54 = (volatile signed __int32 *)(0x140000000LL
                                          + 4
                                          * ((unsigned __int64)(2 * (unsigned int)((__int64)(v13 + 0x90482413000LL) >> 3)) >> 5)
                                          + 14872748);
          v55 = 2 << v53;
          v56 = *v54;
          do
          {
            while ( 1 )
            {
              v57 = (2 * (unsigned __int8)((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F;
              if ( ((v56 >> v53) & 1) == 0 )
                break;
              if ( ((v56 >> v53) & 2) != 0 )
              {
                do
                {
                  if ( (++v52 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v57) )
                  {
                    HvlNotifyLongSpinWait(v52);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v56 = *v54;
                  v57 = (2 * (unsigned __int8)((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F;
                }
                while ( (((unsigned __int32)*v54 >> v53) & 1) != 0 );
              }
              else
              {
                v59 = v55 | v56;
                v60 = _InterlockedCompareExchange(v54, v55 | v56, v56);
                v30 = v56 == v60;
                v56 = v60;
                if ( v30 )
                  v56 = v59;
              }
            }
            v58 = _InterlockedCompareExchange(v54, ~(2 << v53) & ((1 << v53) | v56), v56);
            v30 = v56 == v58;
            v56 = v58;
          }
          while ( !v30 );
        }
        else
        {
          v28 = *(_QWORD *)v13;
          v29 = 0;
          if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL && (v28 & 1) != 0 )
          {
            LOBYTE(v14) = (v28 & 0x42) != 0;
            if ( ((unsigned __int8)v14 & ((v28 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              v14 = (signed __int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(v14 + 352) != 1 )
              {
                v48 = *(_QWORD *)(v14 + 1288);
                if ( v48 )
                {
                  v49 = *(_QWORD *)(v48 + 8 * ((v13 >> 3) & 0x1FF));
                  if ( (v49 & 0x20) != 0 )
                    v28 |= 0x20uLL;
                  v14 = v28;
                  v28 |= 0x42uLL;
                  if ( (v49 & 0x42) == 0 )
                    v28 = v14;
                }
              }
            }
          }
          while ( (v28 & 1) != 0 )
          {
            if ( (v28 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v28 >> 60) & 2) != 0 )
              {
                do
                {
                  if ( (++v29 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
                  {
                    HvlNotifyLongSpinWait(v29);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v28 = *(_QWORD *)v13;
                }
                while ( (*(_QWORD *)v13 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                v50 = v28 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( _bittest64(&MiFlags, 0x24u) )
                {
                  if ( (v28 & 0x21) == 1 )
                  {
                    v14 = 0x4000000000LL;
                    if ( v13 >= 0xFFFFF6C000000000uLL )
                      MiCheckLinearProtectedPteAccessedBit(v13, v28 | 0x2000000000000000LL);
                  }
                }
                v51 = _InterlockedCompareExchange64((volatile signed __int64 *)v13, v50, v28);
                v30 = v28 == v51;
                v28 = v51;
                if ( v30 )
                  v28 = v50;
              }
            }
            else
            {
              v14 = v28 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              v31 = _InterlockedCompareExchange64((volatile signed __int64 *)v13, v14, v28);
              v30 = v28 == v31;
              v28 = v31;
              if ( v30 )
                break;
            }
          }
          v6 = v66;
        }
        i = v65;
      }
      goto LABEL_61;
    }
    v16 = KeGetCurrentPrcb();
    v19 = *(_DWORD *)(v5 + 184) & 0xF;
    if ( v19 )
    {
      if ( v19 == 7 )
      {
        v20 = 1;
        v21 = (volatile __int64 *)(0x140000000LL + 14875848);
      }
      else
      {
        v20 = 3;
        if ( v19 == 5 )
          v20 = 0;
        v21 = (volatile __int64 *)(0x140000000LL + 8LL * v20 + 14875840);
      }
    }
    else
    {
      v20 = 2;
      v21 = (volatile __int64 *)(v5 + 176);
    }
    v22 = &v16->SelfmapLockHandle[0].LockQueue.Next + 2 * v20 + v20;
    *((_QWORD *)v22 + 1) = v21;
    *v22 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    {
      KiAcquireQueuedSpinLockInstrumented(v22, v21);
      goto LABEL_61;
    }
    if ( _InterlockedExchange64(v21, (__int64)v22) )
    {
      KxWaitForLockOwnerShip(v22);
LABEL_61:
      v5 = a1;
    }
    if ( a4 && v6 == 0xFFFFF6FB7DBEDF68uLL )
      goto LABEL_67;
    if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v32 = KeGetCurrentPrcb();
      v33 = *(_DWORD *)(v5 + 184) & 0xF;
      if ( v33 )
      {
        if ( v33 == 7 )
        {
          v34 = 1LL;
        }
        else
        {
          v34 = 3LL;
          if ( v33 == 5 )
            v34 = 0LL;
        }
      }
      else
      {
        v34 = 2LL;
      }
      v35 = (volatile signed __int64 **)&v32->SelfmapLockHandle[v34];
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v35);
        v36 = (__int64)*v35;
        if ( !*v35 )
        {
          if ( v35 == (volatile signed __int64 **)_InterlockedCompareExchange64(v35[1], 0LL, (signed __int64)v35) )
            goto LABEL_67;
          v36 = KxWaitForLockChainValid(v35, v32, v16, v5);
        }
        *v35 = 0LL;
        v37 = (__int64)v35[1];
        if ( (((unsigned __int8)v37 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v36 + 8), v37)) & 4) == 0 )
          goto LABEL_67;
        _InterlockedOr(v64, 0);
        v38 = KeDisableInterrupts(v37, v32, ((unsigned __int64)(v36 + 8) >> 5) & 0x7F);
        KiHaltOnAddressWakeEntireList(v40, _InterlockedExchange64(&KiHaltOnAddressHashTable[v39], 0LL));
        if ( !v38 )
          goto LABEL_67;
        v41 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v41->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v61 = *SchedulerAssist;
          do
          {
            v62 = v61;
            v61 = _InterlockedCompareExchange(SchedulerAssist, v61 & 0xFFDFFFFF, v61);
          }
          while ( v62 != v61 );
          if ( (v61 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
        _enable();
        v6 = v13;
        v66 = v13;
      }
      else
      {
        KiReleaseQueuedSpinLockInstrumented(v35, retaddr, v16, v5);
        v6 = v13;
        v66 = v13;
      }
    }
    else if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0
           || v6 < 0xFFFFF6FB7DBED000uLL
           || v6 > 0xFFFFF6FB7DBEDFFFuLL
           || (v43 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0 || v6 < 0xFFFFF6FB7DBED000uLL || v6 > 0xFFFFF6FB7DBEDFFFuLL )
      {
        _InterlockedAnd64((volatile signed __int64 *)v6, 0xCFFFFFFFFFFFFFFFuLL);
LABEL_67:
        v6 = v13;
        v66 = v13;
        goto LABEL_25;
      }
      v47 = (2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
      _InterlockedAnd(
        &dword_140E2F0AC[(unsigned __int64)(2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3)) >> 5],
        ~(2 << v47) & ~(1 << v47));
      v6 = v13;
      v66 = v13;
    }
    else
    {
      v44 = (v6 >> 3) & 0x1FF;
      v45 = *(_DWORD *)(v43 + 4 * v44);
      v46 = (volatile signed __int32 *)(v43 + 4 * v44);
      if ( (v45 & 0x3FFFFFFF) != 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v46, 0xBFFFFFFF);
          _InterlockedDecrement(v46);
          v6 = v13;
          v66 = v13;
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v46, retaddr);
          v6 = v13;
          v66 = v13;
        }
      }
      else
      {
        if ( v45 >= 0 )
          KeBugCheckEx(0x10u, (ULONG_PTR)v46, 0x100uLL, 0LL, 0LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          v66 = v13;
          *v46 = 0;
          v6 = v13;
        }
        else
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v46, retaddr);
          v6 = v13;
          v66 = v13;
        }
      }
    }
LABEL_25:
    if ( !i )
    {
      v13 = a2;
      break;
    }
    v5 = a1;
  }
  *a3 = v13;
  return v6;
}
