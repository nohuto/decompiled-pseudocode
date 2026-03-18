/*
 * XREFs of MiLockWorkingSetOptimal @ 0x1402424F0
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MiDirtyPte @ 0x140241184 (MiDirtyPte.c)
 *     MiObtainSystemCacheView @ 0x140241D90 (MiObtainSystemCacheView.c)
 *     MiMakeSystemCacheRangeValid @ 0x140243570 (MiMakeSystemCacheRangeValid.c)
 *     MiAddMappedPtes @ 0x140243C60 (MiAddMappedPtes.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402D24DC (MiReturnSystemCacheRegionsToKva.c)
 *     MmMapViewInSystemCache @ 0x1402D5CA4 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiExpandSystemCache @ 0x1403A7378 (MiExpandSystemCache.c)
 *     MiMakeSystemCachePteValid @ 0x14046F7A8 (MiMakeSystemCachePteValid.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1404A903C (MiFinishLastForkPageTable.c)
 *     MiAddMappedPtesPadding @ 0x1404D0B44 (MiAddMappedPtesPadding.c)
 *     MiInitializeDynamicBitmap @ 0x1406794B8 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x14067FECC (MiMarkBootGuardPage.c)
 *     MiMapDummyPages @ 0x140C4FC6C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C50154 (MiProtectSharedUserPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  _DWORD *v8; // rdi
  unsigned __int8 v9; // r14
  unsigned int v10; // r12d
  _DWORD *MmInternal; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdx
  char v14; // cl
  volatile __int64 *v15; // rbp
  _KSPIN_LOCK_QUEUE *volatile *v16; // rcx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  unsigned __int64 v19; // rcx
  unsigned int v20; // r14d
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  bool v23; // zf
  signed __int64 v24; // rax
  unsigned int v26; // r14d
  unsigned __int64 v27; // rdi
  char v28; // r15
  unsigned __int32 v29; // edx
  volatile signed __int32 *v30; // rdi
  int v31; // r12d
  __int64 v32; // rcx
  signed __int32 v33; // eax
  signed __int64 v34; // rdi
  signed __int64 v35; // rax
  int v36; // ecx
  signed __int32 v37; // eax

  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xFu) >= 6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v10 = 2;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v6 = &unk_140E38740;
    else
      v6 = (_QWORD *)(a1 + 192);
    v7 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v8 = (_DWORD *)(*v6 + ((unsigned __int64)v7 << 6));
    v9 = KeGetCurrentIrql();
    v10 = 2;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v9, 2LL, a3);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v8);
      v17 = *v8 & 0x7FFFFFFF;
      while ( 1 )
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange(v8, v17 + 1, v17);
        if ( v18 == v17 )
          break;
        if ( v17 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v8, v9);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v8, v9);
    }
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v7;
    CurrentIrql = v9;
  }
  *a3 = CurrentIrql;
  if ( v5 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v14 )
    {
      if ( v14 == 7 )
      {
        v10 = 1;
      }
      else
      {
        v10 = 3;
        if ( v14 == 5 )
          v10 = 0;
      }
      v15 = (volatile __int64 *)(&MiState + 2 * v10 + 3232);
    }
    else
    {
      v15 = (volatile __int64 *)(a1 + 176);
    }
    v16 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v10 + v10;
    *((_QWORD *)v16 + 1) = v15;
    *v16 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64(v15, (__int64)v16) )
        KxWaitForLockOwnerShip(v16);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v16, v15);
    }
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
         && v5 >= 0xFFFFF6FB7DBED000uLL
         && v5 <= 0xFFFFF6FB7DBEDFFFuLL
         && (v19 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v19 + 4 * ((v5 >> 3) & 0x1FF)));
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v26 = 0;
    v27 = (unsigned __int64)(2 * (unsigned int)((__int64)(v5 + 0x90482413000LL) >> 3)) >> 5;
    v28 = (2 * ((__int64)(v5 + 0x90482413000LL) >> 3)) & 0x1F;
    v29 = *(&MiState + v27 + 2459);
    v30 = (volatile signed __int32 *)(&MiState + v27 + 2459);
    v31 = 2 << v28;
    do
    {
      while ( 1 )
      {
        v32 = (2 * (unsigned __int8)((__int64)(v5 + 0x90482413000LL) >> 3)) & 0x1F;
        if ( ((v29 >> v28) & 1) == 0 )
          break;
        if ( ((v29 >> v28) & 2) != 0 )
        {
          do
          {
            if ( (++v26 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v32) )
            {
              HvlNotifyLongSpinWait(v26);
            }
            else
            {
              _mm_pause();
            }
            v29 = *v30;
            v32 = (2 * (unsigned __int8)((__int64)(v5 + 0x90482413000LL) >> 3)) & 0x1F;
          }
          while ( (((unsigned __int32)*v30 >> v28) & 1) != 0 );
        }
        else
        {
          v36 = v29 | v31;
          v37 = _InterlockedCompareExchange(v30, v29 | v31, v29);
          v23 = v29 == v37;
          v29 = v37;
          if ( v23 )
            v29 = v36;
        }
      }
      v33 = _InterlockedCompareExchange(v30, ~(2 << v28) & (v29 | (1 << v28)), v29);
      v23 = v29 == v33;
      v29 = v33;
    }
    while ( !v23 );
  }
  else
  {
    v20 = 0;
    v21 = MI_READ_PTE_LOCK_FREE(v5);
LABEL_28:
    v22 = 0x1000000000LL;
    while ( (v21 & 1) != 0 )
    {
      if ( (v21 & 0x1000000000000000LL) == 0 )
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v24 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)v5,
                v21 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                v21);
        v23 = v21 == v24;
        v21 = v24;
        if ( !v23 )
          goto LABEL_28;
        return v5;
      }
      if ( ((v21 >> 60) & 2) != 0 )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22) )
          {
            HvlNotifyLongSpinWait(v20);
          }
          else
          {
            _mm_pause();
          }
          v21 = *(_QWORD *)v5;
        }
        while ( (*(_QWORD *)v5 & 0x1000000000000000LL) != 0 );
        goto LABEL_28;
      }
      v34 = v21 | 0x2000000000000000LL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( (MiFlags & 0x1000000000LL) != 0 && (v21 & 0x21) == 1 && v5 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit(v5, v21 | 0x2000000000000000LL, 128);
        v22 = 0x1000000000LL;
      }
      v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v34, v21);
      v23 = v21 == v35;
      v21 = v35;
      if ( v23 )
        v21 = v34;
    }
  }
  return v5;
}
