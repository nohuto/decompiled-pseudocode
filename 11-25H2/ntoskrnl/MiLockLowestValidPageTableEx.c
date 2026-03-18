/*
 * XREFs of MiLockLowestValidPageTableEx @ 0x1402B7890
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402197A8 (MiSynchronizeSystemVa.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiLockPoolCommitPageTable @ 0x1402C3CB8 (MiLockPoolCommitPageTable.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiDecommitLockNewPageTable @ 0x140383410 (MiDecommitLockNewPageTable.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     MiRelockFaultState @ 0x14043A310 (MiRelockFaultState.c)
 *     MmUpdateUserShadowStackValue @ 0x14048789C (MmUpdateUserShadowStackValue.c)
 *     MiConvertAndFlushWsleVas @ 0x14048B024 (MiConvertAndFlushWsleVas.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C24 (MiSplitReducedCommitClonePage.c)
 *     MiDeleteBootRange @ 0x14065D60C (MiDeleteBootRange.c)
 *     MiSetGraphicsPtes @ 0x140666BE8 (MiSetGraphicsPtes.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiComputeIdealLargePage @ 0x140686B50 (MiComputeIdealLargePage.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTableEx(__int64 a1, ULONG_PTR a2, ULONG_PTR *a3, int a4)
{
  __int64 v5; // r9
  unsigned __int64 v6; // r13
  struct _KPRCB *CurrentPrcb; // r8
  char v8; // al
  unsigned int v9; // ecx
  volatile __int64 *v10; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v11; // rcx
  __int64 v12; // rax
  __int64 i; // r14
  ULONG_PTR v14; // rsi
  signed __int64 Process; // rcx
  signed __int64 v16; // rbx
  int v17; // ebp
  unsigned __int64 v18; // rdi
  struct _KPRCB *v19; // r8
  char v20; // al
  unsigned int v21; // ecx
  volatile __int64 *v22; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v26; // rbx
  unsigned int v27; // ebp
  bool v28; // zf
  signed __int64 v29; // rax
  char v30; // cl
  unsigned __int64 v31; // rcx
  __int64 v32; // r13
  int v33; // eax
  volatile signed __int32 *v34; // rcx
  struct _KPRCB *v35; // rdx
  char v36; // al
  __int64 v37; // rcx
  volatile signed __int64 **v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  bool v41; // bl
  __int64 v42; // r8
  __int64 v43; // rcx
  struct _KPRCB *v44; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v46; // rdx
  __int64 v47; // rax
  signed __int64 v48; // rdi
  signed __int64 v49; // rax
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned int v54; // r12d
  char v55; // di
  volatile signed __int32 *v56; // rbx
  int v57; // r15d
  unsigned __int32 v58; // edx
  __int64 v59; // rcx
  signed __int32 v60; // eax
  int v61; // ecx
  signed __int32 v62; // eax
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
      v10 = (volatile __int64 *)((char *)&unk_140E2FA80 + 8 * v9);
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
      v12 = _InterlockedExchange64(v10, (__int64)v11);
      if ( v12 )
      {
        KxWaitForLockOwnerShip(v11, v12, CurrentPrcb, v5);
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
    v14 = *(&BugCheckParameter2 + i);
    Process = 0xFFFFF6FB7DBED7F8uLL;
    v16 = *(_QWORD *)v14;
    v65 = i;
    if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v16 & 1) == 0 )
        break;
      LOBYTE(Process) = (v16 & 0x42) != 0;
      if ( ((unsigned __int8)Process & ((v16 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
      {
        Process = (signed __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 352) != 1 )
        {
          v46 = *(_QWORD *)(Process + 1288);
          if ( v46 )
          {
            v47 = *(_QWORD *)(v46 + 8 * ((v14 >> 3) & 0x1FF));
            if ( (v47 & 0x20) != 0 )
              v16 |= 0x20uLL;
            Process = v16;
            v16 |= 0x42uLL;
            if ( (v47 & 0x42) == 0 )
              v16 = Process;
          }
        }
      }
    }
    if ( (v16 & 1) == 0 || (v16 & 0x80u) != 0LL )
      break;
    if ( (v16 & 0x20) == 0 )
    {
      v17 = 0;
      v18 = (__int64)(v14 << 25) >> 16;
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 && v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v17 = 1;
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37180);
        v5 = a1;
      }
      if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        MiWriteValidPteNewProtection(v14);
        v5 = a1;
      }
      else
      {
        do
        {
          v63 = v16;
          Process = v16 | 0x20;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, Process, v16);
        }
        while ( v16 != v63 );
      }
      if ( v17 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E37180);
        v5 = a1;
      }
    }
    if ( v14 == v6 )
      goto LABEL_21;
    if ( v14 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0
        && v14 >= 0xFFFFF6FB7DBED000uLL
        && v14 <= 0xFFFFF6FB7DBEDFFFuLL
        && (Process = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(Process + 4LL * (((unsigned int)v14 >> 3) & 0x1FF)));
      }
      else
      {
        if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 && v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v54 = 0;
          v55 = (2 * ((__int64)(v14 + 0x90482413000LL) >> 3)) & 0x1F;
          v56 = (volatile signed __int32 *)(0x140000000LL
                                          + 4
                                          * ((unsigned __int64)(2 * (unsigned int)((__int64)(v14 + 0x90482413000LL) >> 3)) >> 5)
                                          + 14872172);
          v57 = 2 << v55;
          v58 = *v56;
          do
          {
            while ( 1 )
            {
              v59 = (2 * (unsigned __int8)((__int64)(v14 + 0x90482413000LL) >> 3)) & 0x1F;
              if ( ((v58 >> v55) & 1) == 0 )
                break;
              if ( ((v58 >> v55) & 2) != 0 )
              {
                do
                {
                  if ( (++v54 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v59) )
                  {
                    HvlNotifyLongSpinWait(v54);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v58 = *v56;
                  v59 = (2 * (unsigned __int8)((__int64)(v14 + 0x90482413000LL) >> 3)) & 0x1F;
                }
                while ( (((unsigned __int32)*v56 >> v55) & 1) != 0 );
              }
              else
              {
                v61 = v57 | v58;
                v62 = _InterlockedCompareExchange(v56, v57 | v58, v58);
                v28 = v58 == v62;
                v58 = v62;
                if ( v28 )
                  v58 = v61;
              }
            }
            v60 = _InterlockedCompareExchange(v56, ~(2 << v55) & ((1 << v55) | v58), v58);
            v28 = v58 == v60;
            v58 = v60;
          }
          while ( !v28 );
        }
        else
        {
          v26 = *(_QWORD *)v14;
          v27 = 0;
          if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL && (v26 & 1) != 0 )
          {
            LOBYTE(Process) = (v26 & 0x42) != 0;
            if ( ((unsigned __int8)Process & ((v26 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              Process = (signed __int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(Process + 352) != 1 )
              {
                v52 = *(_QWORD *)(Process + 1288);
                if ( v52 )
                {
                  v53 = *(_QWORD *)(v52 + 8 * ((v14 >> 3) & 0x1FF));
                  if ( (v53 & 0x20) != 0 )
                    v26 |= 0x20uLL;
                  Process = v26;
                  v26 |= 0x42uLL;
                  if ( (v53 & 0x42) == 0 )
                    v26 = Process;
                }
              }
            }
          }
          while ( (v26 & 1) != 0 )
          {
            if ( (v26 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v26 >> 60) & 2) != 0 )
              {
                do
                {
                  if ( (++v27 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process) )
                  {
                    HvlNotifyLongSpinWait(v27);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v26 = *(_QWORD *)v14;
                }
                while ( (*(_QWORD *)v14 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                v48 = v26 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( _bittest64(&MiFlags, 0x24u) )
                {
                  if ( (v26 & 0x21) == 1 )
                  {
                    Process = 0x4000000000LL;
                    if ( v14 >= 0xFFFFF6C000000000uLL )
                      MiCheckLinearProtectedPteAccessedBit(v14, v26 | 0x2000000000000000LL);
                  }
                }
                v49 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, v48, v26);
                v28 = v26 == v49;
                v26 = v49;
                if ( v28 )
                  v26 = v48;
              }
            }
            else
            {
              Process = v26 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              v29 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, Process, v26);
              v28 = v26 == v29;
              v26 = v29;
              if ( v28 )
                break;
            }
          }
          v6 = v66;
        }
        i = v65;
      }
      goto LABEL_46;
    }
    v19 = KeGetCurrentPrcb();
    v20 = *(_DWORD *)(v5 + 184) & 0xF;
    if ( v20 )
    {
      if ( v20 == 7 )
      {
        v21 = 1;
        v22 = (volatile __int64 *)(0x140000000LL + 14875272);
      }
      else
      {
        v21 = 3;
        if ( v20 == 5 )
          v21 = 0;
        v22 = (volatile __int64 *)(0x140000000LL + 8LL * v21 + 14875264);
      }
    }
    else
    {
      v21 = 2;
      v22 = (volatile __int64 *)(v5 + 176);
    }
    v23 = &v19->SelfmapLockHandle[0].LockQueue.Next + 2 * v21 + v21;
    *((_QWORD *)v23 + 1) = v22;
    *v23 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    {
      KiAcquireQueuedSpinLockInstrumented(v23, v22);
      goto LABEL_46;
    }
    v24 = _InterlockedExchange64(v22, (__int64)v23);
    if ( v24 )
    {
      KxWaitForLockOwnerShip(v23, v24, v19, v5);
LABEL_46:
      v5 = a1;
    }
    if ( a4 && v6 == 0xFFFFF6FB7DBEDF68uLL )
      goto LABEL_55;
    if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v35 = KeGetCurrentPrcb();
      v36 = *(_DWORD *)(v5 + 184) & 0xF;
      if ( v36 )
      {
        if ( v36 == 7 )
        {
          v37 = 1LL;
        }
        else
        {
          v37 = 3LL;
          if ( v36 == 5 )
            v37 = 0LL;
        }
      }
      else
      {
        v37 = 2LL;
      }
      v38 = (volatile signed __int64 **)&v35->SelfmapLockHandle[v37];
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v38);
        v39 = (__int64)*v38;
        if ( !*v38 )
        {
          if ( v38 == (volatile signed __int64 **)_InterlockedCompareExchange64(v38[1], 0LL, (signed __int64)v38) )
            goto LABEL_55;
          v39 = KxWaitForLockChainValid((__int64 *)v38);
        }
        *v38 = 0LL;
        v40 = (__int64)v38[1];
        if ( (((unsigned __int8)v40 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v39 + 8), v40)) & 4) == 0 )
          goto LABEL_55;
        _InterlockedOr(v64, 0);
        v41 = KeDisableInterrupts();
        KiHaltOnAddressWakeEntireList(v43, _InterlockedExchange64(&KiHaltOnAddressHashTable[v42], 0LL));
        if ( !v41 )
          goto LABEL_55;
        v44 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v44->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v50 = *SchedulerAssist;
          do
          {
            v51 = v50;
            v50 = _InterlockedCompareExchange(SchedulerAssist, v50 & 0xFFDFFFFF, v50);
          }
          while ( v51 != v50 );
          if ( (v50 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v44);
        }
        _enable();
        v6 = v14;
        v66 = v14;
      }
      else
      {
        KiReleaseQueuedSpinLockInstrumented(v38, retaddr);
        v6 = v14;
        v66 = v14;
      }
    }
    else
    {
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0
        || v6 < 0xFFFFF6FB7DBED000uLL
        || v6 > 0xFFFFF6FB7DBEDFFFuLL
        || (v31 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v30 = (2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
          _InterlockedAnd(
            &dword_140E2EE6C[(unsigned __int64)(2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3)) >> 5],
            ~(2 << v30) & ~(1 << v30));
          v6 = v14;
          v66 = v14;
          goto LABEL_21;
        }
        _InterlockedAnd64((volatile signed __int64 *)v6, 0xCFFFFFFFFFFFFFFFuLL);
LABEL_55:
        v6 = v14;
        v66 = v14;
        goto LABEL_21;
      }
      v32 = (v6 >> 3) & 0x1FF;
      v33 = *(_DWORD *)(v31 + 4 * v32);
      v34 = (volatile signed __int32 *)(v31 + 4 * v32);
      if ( (v33 & 0x3FFFFFFF) != 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v34, 0xBFFFFFFF);
          _InterlockedDecrement(v34);
          v6 = v14;
          v66 = v14;
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v34, retaddr);
          v6 = v14;
          v66 = v14;
        }
      }
      else
      {
        if ( v33 >= 0 )
          KeBugCheckEx(0x10u, (ULONG_PTR)v34, 0x100uLL, 0LL, 0LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          v66 = v14;
          *v34 = 0;
          v6 = v14;
        }
        else
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v34, retaddr);
          v6 = v14;
          v66 = v14;
        }
      }
    }
LABEL_21:
    if ( !i )
    {
      v14 = a2;
      break;
    }
    v5 = a1;
  }
  *a3 = v14;
  return v6;
}
