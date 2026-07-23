/*
 * XREFs of MiLockLowestValidPageTableEx @ 0x1402454B0
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiDecommitLockNewPageTable @ 0x1402999C0 (MiDecommitLockNewPageTable.c)
 *     MiSynchronizeSystemVa @ 0x1402FDFC8 (MiSynchronizeSystemVa.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiLockPoolCommitPageTable @ 0x14034BC80 (MiLockPoolCommitPageTable.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiRelockFaultState @ 0x140427570 (MiRelockFaultState.c)
 *     MiConvertAndFlushWsleVas @ 0x140481E60 (MiConvertAndFlushWsleVas.c)
 *     MmUpdateUserShadowStackValue @ 0x140482448 (MmUpdateUserShadowStackValue.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C58 (MiSplitReducedCommitClonePage.c)
 *     MiDeleteBootRange @ 0x14066A308 (MiDeleteBootRange.c)
 *     MiSetGraphicsPtes @ 0x140673868 (MiSetGraphicsPtes.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiComputeIdealLargePage @ 0x140693080 (MiComputeIdealLargePage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTableEx(
        __int64 a1,
        unsigned __int64 KernelWaitTime,
        ULONG_PTR *a3,
        int a4)
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
  unsigned __int64 v16; // r8
  int v17; // ebp
  unsigned __int64 v18; // rdi
  struct _KPRCB *v19; // r8
  char v20; // al
  unsigned int v21; // ecx
  _KSPIN_LOCK_QUEUE *volatile *v22; // rcx
  __int64 v23; // rax
  _KPROCESS *Process; // rcx
  __int64 v26; // rax
  signed __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned int v29; // ebp
  bool v30; // zf
  signed __int64 v31; // rax
  char v32; // al
  __int64 v33; // rcx
  volatile signed __int64 **v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  char v37; // bl
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r9
  struct _KPRCB *v41; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int64 v43; // rcx
  __int64 v44; // r13
  int v45; // eax
  volatile signed __int32 *v46; // rcx
  char v47; // cl
  __int64 v48; // rax
  signed __int64 v49; // rdi
  signed __int64 v50; // rax
  unsigned int v51; // r12d
  char v52; // di
  volatile signed __int32 *v53; // rbx
  int v54; // r15d
  __int64 v55; // rcx
  unsigned __int32 v56; // eax
  unsigned int v57; // ecx
  unsigned __int32 v58; // eax
  unsigned __int32 v59; // eax
  unsigned __int32 v60; // ett
  signed __int32 v61[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+30h] [rbp-78h]
  unsigned __int64 v63; // [rsp+38h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-68h]
  ULONG_PTR v65; // [rsp+48h] [rbp-60h]
  unsigned __int64 v66; // [rsp+50h] [rbp-58h]
  __int64 v67; // [rsp+58h] [rbp-50h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  ULONG_PTR v70; // [rsp+B8h] [rbp+10h]

  v70 = KernelWaitTime;
  v5 = a1;
  *a3 = 0LL;
  BugCheckParameter2 = ((KernelWaitTime >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v65 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v66 = ((v65 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v67 = ((v66 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FB7DBEDF68uLL;
  v63 = 0xFFFFF6FB7DBEDF68uLL;
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
      v10 = (volatile __int64 *)((char *)&unk_140E2FE00 + 8 * v9);
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
      KernelWaitTime = _InterlockedExchange64(v10, (__int64)v11);
      if ( KernelWaitTime )
      {
        KxWaitForLockOwnerShip(v11, KernelWaitTime);
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
    v16 = 0xFFFFF6FB7DBED000uLL;
    v62 = i;
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
        ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
        v5 = a1;
        v16 = 0xFFFFF6FB7DBED000uLL;
      }
      if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        MiWriteValidPteNewProtection(v13);
        v5 = a1;
        v16 = 0xFFFFF6FB7DBED000uLL;
      }
      else
      {
        do
        {
          KernelWaitTime = v15;
          v14 = v15 | 0x20;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v13, v14, v15);
        }
        while ( v15 != KernelWaitTime );
      }
      if ( v17 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
        v5 = a1;
        v16 = 0xFFFFF6FB7DBED000uLL;
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
          v51 = 0;
          v52 = (2 * ((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F;
          v53 = (volatile signed __int32 *)(0x140000000LL
                                          + 4
                                          * ((unsigned __int64)(2 * (unsigned int)((__int64)(v13 + 0x90482413000LL) >> 3)) >> 5)
                                          + 14873068);
          v54 = 2 << v52;
          KernelWaitTime = *(unsigned int *)v53;
          do
          {
            while ( 1 )
            {
              v55 = (2 * (unsigned __int8)((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F;
              if ( (((unsigned int)KernelWaitTime >> v52) & 1) == 0 )
                break;
              if ( (((unsigned int)KernelWaitTime >> v52) & 2) != 0 )
              {
                do
                {
                  if ( (++v51 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v55, KernelWaitTime, v16, v5) )
                  {
                    HvlNotifyLongSpinWait(v51);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  KernelWaitTime = *(unsigned int *)v53;
                  v55 = (2 * (unsigned __int8)((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F;
                }
                while ( (((unsigned __int32)*v53 >> v52) & 1) != 0 );
              }
              else
              {
                v57 = v54 | KernelWaitTime;
                v58 = _InterlockedCompareExchange(v53, v54 | KernelWaitTime, KernelWaitTime);
                v30 = (_DWORD)KernelWaitTime == v58;
                KernelWaitTime = v58;
                if ( v30 )
                  KernelWaitTime = v57;
              }
            }
            v56 = _InterlockedCompareExchange(v53, ~(2 << v52) & ((1 << v52) | KernelWaitTime), KernelWaitTime);
            v30 = (_DWORD)KernelWaitTime == v56;
            KernelWaitTime = v56;
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
                KernelWaitTime = *(_QWORD *)(v14 + 1288);
                if ( KernelWaitTime )
                {
                  v48 = *(_QWORD *)(KernelWaitTime + 8 * ((v13 >> 3) & 0x1FF));
                  if ( (v48 & 0x20) != 0 )
                    v28 |= 0x20uLL;
                  v14 = v28;
                  v28 |= 0x42uLL;
                  if ( (v48 & 0x42) == 0 )
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
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, KernelWaitTime, v16, v5) )
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
                v49 = v28 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( _bittest64(&MiFlags, 0x24u) )
                {
                  if ( (v28 & 0x21) == 1 )
                  {
                    v14 = 0x4000000000LL;
                    if ( v13 >= 0xFFFFF6C000000000uLL )
                      MiCheckLinearProtectedPteAccessedBit(v13, v28 | 0x2000000000000000LL, 128LL);
                  }
                }
                v50 = _InterlockedCompareExchange64((volatile signed __int64 *)v13, v49, v28);
                v30 = v28 == v50;
                v28 = v50;
                if ( v30 )
                  v28 = v49;
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
          v6 = v63;
        }
        i = v62;
      }
      goto LABEL_61;
    }
    v19 = KeGetCurrentPrcb();
    v20 = *(_DWORD *)(v5 + 184) & 0xF;
    if ( v20 )
    {
      if ( v20 == 7 )
      {
        v21 = 1;
        KernelWaitTime = 0x140000000LL + 14876168;
      }
      else
      {
        v21 = 3;
        if ( v20 == 5 )
          v21 = 0;
        KernelWaitTime = 0x140000000LL + 8LL * v21 + 14876160;
      }
    }
    else
    {
      v21 = 2;
      KernelWaitTime = v5 + 176;
    }
    v22 = &v19->SelfmapLockHandle[0].LockQueue.Next + 2 * v21 + v21;
    *((_QWORD *)v22 + 1) = KernelWaitTime;
    *v22 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    {
      KiAcquireQueuedSpinLockInstrumented(v22, KernelWaitTime);
      goto LABEL_61;
    }
    v23 = _InterlockedExchange64((volatile __int64 *)KernelWaitTime, (__int64)v22);
    if ( v23 )
    {
      KxWaitForLockOwnerShip(v22, v23);
LABEL_61:
      v5 = a1;
    }
    if ( a4 && v6 == 0xFFFFF6FB7DBEDF68uLL )
      goto LABEL_68;
    if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
    {
      KernelWaitTime = (unsigned __int64)KeGetCurrentPrcb();
      v32 = *(_DWORD *)(v5 + 184) & 0xF;
      if ( v32 )
      {
        if ( v32 == 7 )
        {
          v33 = 24LL;
        }
        else
        {
          v33 = 72LL;
          if ( v32 == 5 )
            v33 = 0LL;
        }
      }
      else
      {
        v33 = 48LL;
      }
      v34 = (volatile signed __int64 **)(v33 + KernelWaitTime + 40000);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v34);
        v35 = (__int64)*v34;
        if ( !*v34 )
        {
          if ( v34 == (volatile signed __int64 **)_InterlockedCompareExchange64(v34[1], 0LL, (signed __int64)v34) )
            goto LABEL_68;
          v35 = KxWaitForLockChainValid(v34);
        }
        *v34 = 0LL;
        v36 = (__int64)v34[1];
        if ( (((unsigned __int8)v36 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v35 + 8), v36)) & 4) == 0 )
          goto LABEL_68;
        _InterlockedOr(v61, 0);
        v37 = KeDisableInterrupts(v36, KernelWaitTime, ((unsigned __int64)(v35 + 8) >> 5) & 0x7F, v5);
        KiHaltOnAddressWakeEntireList(v39, _InterlockedExchange64(&KiHaltOnAddressHashTable[v38], 0LL));
        if ( !v37 )
          goto LABEL_68;
        v41 = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)v41->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v59 = *SchedulerAssist;
          do
          {
            KernelWaitTime = v59;
            LODWORD(KernelWaitTime) = v59 & 0xFFDFFFFF;
            v60 = v59;
            v59 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v59 & 0xFFDFFFFF, v59);
          }
          while ( v60 != v59 );
          if ( (v59 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v41, KernelWaitTime, SchedulerAssist, v40);
        }
        _enable();
        v6 = v13;
        v63 = v13;
      }
      else
      {
        KiReleaseQueuedSpinLockInstrumented(v34, retaddr);
        v6 = v13;
        v63 = v13;
      }
    }
    else
    {
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 )
      {
        KernelWaitTime = 0xFFFFF6FB7DBEDFFFuLL;
      }
      else
      {
        KernelWaitTime = 0xFFFFF6FB7DBEDFFFuLL;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v43 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
          if ( v43 )
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
                v63 = v13;
              }
              else
              {
                ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v46, retaddr);
                v6 = v13;
                v63 = v13;
              }
            }
            else
            {
              if ( v45 >= 0 )
                KeBugCheckEx(0x10u, (ULONG_PTR)v46, 0x100uLL, 0LL, 0LL);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              {
                v63 = v13;
                *v46 = 0;
                v6 = v13;
              }
              else
              {
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v46, retaddr);
                v6 = v13;
                v63 = v13;
              }
            }
            goto LABEL_25;
          }
        }
      }
      if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0 || v6 < 0xFFFFF6FB7DBED000uLL || v6 > 0xFFFFF6FB7DBEDFFFuLL )
      {
        _InterlockedAnd64((volatile signed __int64 *)v6, 0xCFFFFFFFFFFFFFFFuLL);
LABEL_68:
        v6 = v13;
        v63 = v13;
        goto LABEL_25;
      }
      v47 = (2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
      KernelWaitTime = (unsigned int)~(2 << v47);
      LODWORD(KernelWaitTime) = KernelWaitTime & ~(1 << v47);
      _InterlockedAnd(
        &dword_140E2F1EC[(unsigned __int64)(2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3)) >> 5],
        KernelWaitTime);
      v6 = v13;
      v63 = v13;
    }
LABEL_25:
    if ( !i )
    {
      v13 = v70;
      break;
    }
    v5 = a1;
  }
  *a3 = v13;
  return v6;
}
