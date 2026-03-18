/*
 * XREFs of MiLockWorkingSetOptimal @ 0x1402C0690
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x140225760 (MiMakeSystemCachePteValid.c)
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1402C0010 (MiObtainSystemCacheView.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiAddMappedPtes @ 0x140323A90 (MiAddMappedPtes.c)
 *     MiExpandSystemCache @ 0x1403903C8 (MiExpandSystemCache.c)
 *     MmMapViewInSystemCache @ 0x1403B44EC (MmMapViewInSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403B6388 (MiReturnSystemCacheRegionsToKva.c)
 *     MiDirtyPte @ 0x1404516E0 (MiDirtyPte.c)
 *     MiFinishLastForkPageTable @ 0x1404AEE2C (MiFinishLastForkPageTable.c)
 *     MiAddMappedPtesPadding @ 0x14066B030 (MiAddMappedPtesPadding.c)
 *     MiInitializeDynamicBitmap @ 0x14066DC0C (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x1406746AC (MiMarkBootGuardPage.c)
 *     MiMapDummyPages @ 0x140C3EA3C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C3EF24 (MiProtectSharedUserPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned __int8 *v4; // r15
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rax
  unsigned int v8; // edi
  _DWORD *v9; // rbx
  unsigned __int8 v10; // r14
  unsigned int v11; // r12d
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  _DWORD *MmInternal; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdx
  char v17; // cl
  volatile __int64 *v18; // rbp
  _KSPIN_LOCK_QUEUE *volatile *v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r14d
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  bool v25; // zf
  signed __int64 v26; // rax
  signed __int64 v28; // rdi
  signed __int64 v29; // rax
  unsigned int v30; // r14d
  unsigned __int64 v31; // rdi
  char v32; // r15
  unsigned __int32 v33; // edx
  volatile signed __int32 *v34; // rdi
  int v35; // r12d
  __int64 v36; // rcx
  signed __int32 v37; // eax
  int v38; // ecx
  signed __int32 v39; // eax

  v4 = a3;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xFu) >= 6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v11 = 2;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v7 = &unk_140E38500;
    else
      v7 = (_QWORD *)(a1 + 192);
    v8 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v9 = (_DWORD *)(*v7 + ((unsigned __int64)v8 << 6));
    v10 = KeGetCurrentIrql();
    v11 = 2;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v10);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v9);
      v12 = *v9 & 0x7FFFFFFF;
      while ( 1 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(v9, v12 + 1, v12);
        if ( v13 == v12 )
          break;
        if ( v12 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v9, v10);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, v10);
    }
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v8;
    CurrentIrql = v10;
  }
  *v4 = CurrentIrql;
  if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v17 )
    {
      if ( v17 == 7 )
      {
        v11 = 1;
      }
      else
      {
        v11 = 3;
        if ( v17 == 5 )
          v11 = 0;
      }
      v18 = (volatile __int64 *)(&MiState + 2 * v11 + 3232);
    }
    else
    {
      v18 = (volatile __int64 *)(a1 + 176);
    }
    v19 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v11 + v11;
    *((_QWORD *)v19 + 1) = v18;
    *v19 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0
      || (a3 = (unsigned __int8 *)(unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      v20 = _InterlockedExchange64(v18, (__int64)v19);
      if ( v20 )
        KxWaitForLockOwnerShip(v19, v20, a3, a4);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v19, v18);
    }
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
         && v6 >= 0xFFFFF6FB7DBED000uLL
         && v6 <= 0xFFFFF6FB7DBEDFFFuLL
         && (v21 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v21 + 4 * ((v6 >> 3) & 0x1FF)));
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v30 = 0;
    v31 = (unsigned __int64)(2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3)) >> 5;
    v32 = (2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
    v33 = *(&MiState + v31 + 2459);
    v34 = (volatile signed __int32 *)(&MiState + v31 + 2459);
    v35 = 2 << v32;
    do
    {
      while ( 1 )
      {
        v36 = (2 * (unsigned __int8)((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
        if ( ((v33 >> v32) & 1) == 0 )
          break;
        if ( ((v33 >> v32) & 2) != 0 )
        {
          do
          {
            if ( (++v30 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v36) )
            {
              HvlNotifyLongSpinWait(v30);
            }
            else
            {
              _mm_pause();
            }
            v33 = *v34;
            v36 = (2 * (unsigned __int8)((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
          }
          while ( (((unsigned __int32)*v34 >> v32) & 1) != 0 );
        }
        else
        {
          v38 = v33 | v35;
          v39 = _InterlockedCompareExchange(v34, v33 | v35, v33);
          v25 = v33 == v39;
          v33 = v39;
          if ( v25 )
            v33 = v38;
        }
      }
      v37 = _InterlockedCompareExchange(v34, ~(2 << v32) & (v33 | (1 << v32)), v33);
      v25 = v33 == v37;
      v33 = v37;
    }
    while ( !v25 );
  }
  else
  {
    v22 = 0;
    v23 = MI_READ_PTE_LOCK_FREE(v6);
LABEL_26:
    v24 = 0x1000000000LL;
    while ( (v23 & 1) != 0 )
    {
      if ( (v23 & 0x1000000000000000LL) == 0 )
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v26 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)v6,
                v23 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                v23);
        v25 = v23 == v26;
        v23 = v26;
        if ( !v25 )
          goto LABEL_26;
        return v6;
      }
      if ( ((v23 >> 60) & 2) != 0 )
      {
        do
        {
          if ( (++v22 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v24) )
          {
            HvlNotifyLongSpinWait(v22);
          }
          else
          {
            _mm_pause();
          }
          v23 = *(_QWORD *)v6;
        }
        while ( (*(_QWORD *)v6 & 0x1000000000000000LL) != 0 );
        goto LABEL_26;
      }
      v28 = v23 | 0x2000000000000000LL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( (MiFlags & 0x1000000000LL) != 0 && (v23 & 0x21) == 1 && v6 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit(v6, v23 | 0x2000000000000000LL);
        v24 = 0x1000000000LL;
      }
      v29 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v28, v23);
      v25 = v23 == v29;
      v23 = v29;
      if ( v25 )
        v23 = v28;
    }
  }
  return v6;
}
