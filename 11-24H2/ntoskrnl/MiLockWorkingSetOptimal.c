/*
 * XREFs of MiLockWorkingSetOptimal @ 0x14020A640
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiDirtyPte @ 0x1402092D4 (MiDirtyPte.c)
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiMakeSystemCachePteValid @ 0x14021C440 (MiMakeSystemCachePteValid.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiExpandSystemCache @ 0x14026B918 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x140353754 (MiReturnSystemCacheRegionsToKva.c)
 *     MmMapViewInSystemCache @ 0x140356F24 (MmMapViewInSystemCache.c)
 *     MiAddMappedPtes @ 0x140391F90 (MiAddMappedPtes.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1404A345C (MiFinishLastForkPageTable.c)
 *     MiAddMappedPtesPadding @ 0x1404C9B84 (MiAddMappedPtesPadding.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x1406810CC (MiMarkBootGuardPage.c)
 *     MiMapDummyPages @ 0x140C51DFC (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C522E4 (MiProtectSharedUserPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

ULONG_PTR __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  ULONG_PTR v6; // rsi
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  _DWORD *v9; // rdi
  unsigned __int8 v10; // r14
  unsigned int v11; // r12d
  _DWORD *MmInternal; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdx
  char v15; // cl
  volatile __int64 *v16; // rbp
  _KSPIN_LOCK_QUEUE *volatile *v17; // rcx
  __int64 v18; // rdx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned int v23; // r14d
  unsigned __int64 v24; // rbx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  bool v29; // zf
  signed __int64 v30; // rax
  unsigned int v32; // r14d
  unsigned __int64 v33; // rdi
  char v34; // r15
  __int64 v35; // rdx
  volatile signed __int32 *v36; // rdi
  int v37; // r12d
  __int64 v38; // rcx
  unsigned __int32 v39; // eax
  signed __int64 v40; // rdi
  signed __int64 v41; // rax
  unsigned int v42; // ecx
  unsigned __int32 v43; // eax

  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xFu) >= 6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v11 = 2;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v7 = &unk_140E38880;
    else
      v7 = (_QWORD *)(a1 + 192);
    v8 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v9 = (_DWORD *)(*v7 + ((unsigned __int64)v8 << 6));
    v10 = KeGetCurrentIrql();
    v11 = 2;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v10, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v9);
      v19 = *v9 & 0x7FFFFFFF;
      while ( 1 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange(v9, v19 + 1, v19);
        if ( v20 == v19 )
          break;
        if ( v19 < 0 )
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
  *a3 = CurrentIrql;
  if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v15 )
    {
      if ( v15 == 7 )
      {
        v11 = 1;
      }
      else
      {
        v11 = 3;
        if ( v15 == 5 )
          v11 = 0;
      }
      v16 = (volatile __int64 *)(&MiState + 2 * v11 + 3232);
    }
    else
    {
      v16 = (volatile __int64 *)(a1 + 176);
    }
    v17 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v11 + v11;
    *((_QWORD *)v17 + 1) = v16;
    *v17 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v18 = _InterlockedExchange64(v16, (__int64)v17);
      if ( v18 )
        KxWaitForLockOwnerShip(v17, v18);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v17, v16);
    }
  }
  else
  {
    v21 = 0xFFFFF6FB7DBEDFFFuLL;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
      && v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBEDFFFuLL
      && (v22 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v22 + 4 * ((v6 >> 3) & 0x1FF)));
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v32 = 0;
      v33 = (unsigned __int64)(2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3)) >> 5;
      v34 = (2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
      v35 = *(&MiState + v33 + 2459);
      v36 = (volatile signed __int32 *)(&MiState + v33 + 2459);
      v37 = 2 << v34;
      do
      {
        while ( 1 )
        {
          v38 = (2 * (unsigned __int8)((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
          if ( (((unsigned int)v35 >> v34) & 1) == 0 )
            break;
          if ( (((unsigned int)v35 >> v34) & 2) != 0 )
          {
            do
            {
              if ( (++v32 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v38, v35, v21, a4) )
              {
                HvlNotifyLongSpinWait(v32);
              }
              else
              {
                _mm_pause();
              }
              v35 = *(unsigned int *)v36;
              v38 = (2 * (unsigned __int8)((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
            }
            while ( (((unsigned __int32)*v36 >> v34) & 1) != 0 );
          }
          else
          {
            v42 = v35 | v37;
            v43 = _InterlockedCompareExchange(v36, v35 | v37, v35);
            v29 = (_DWORD)v35 == v43;
            v35 = v43;
            if ( v29 )
              v35 = v42;
          }
        }
        v39 = _InterlockedCompareExchange(v36, ~(2 << v34) & (v35 | (1 << v34)), v35);
        v29 = (_DWORD)v35 == v39;
        v35 = v39;
      }
      while ( !v29 );
    }
    else
    {
      v23 = 0;
      v24 = MI_READ_PTE_LOCK_FREE(v6, 0xFFFFF6FB7DBED000uLL, 0xFFFFF6FB7DBEDFFFuLL);
LABEL_28:
      v26 = 0x4000000000LL;
      v27 = 0x2000000000000000LL;
LABEL_29:
      v28 = 0x1000000000LL;
      while ( (v24 & 1) != 0 )
      {
        if ( (v24 & 0x1000000000000000LL) == 0 )
        {
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v30 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)v6,
                  v24 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                  v24);
          v29 = v24 == v30;
          v24 = v30;
          if ( !v29 )
            goto LABEL_29;
          return v6;
        }
        if ( ((v24 >> 60) & 2) != 0 )
        {
          do
          {
            if ( (++v23 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28, v27, v26, v25) )
            {
              HvlNotifyLongSpinWait(v23);
            }
            else
            {
              _mm_pause();
            }
            v24 = *(_QWORD *)v6;
          }
          while ( (*(_QWORD *)v6 & 0x1000000000000000LL) != 0 );
          goto LABEL_28;
        }
        v40 = v24 | 0x2000000000000000LL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( (MiFlags & 0x1000000000LL) != 0 && (v24 & 0x21) == 1 && v6 >= 0xFFFFF6C000000000uLL )
        {
          MiCheckLinearProtectedPteAccessedBit(v6, v24 | 0x2000000000000000LL, 128LL);
          v28 = 0x1000000000LL;
          v27 = 0x2000000000000000LL;
          v26 = 0x4000000000LL;
        }
        v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v40, v24);
        v29 = v24 == v41;
        v24 = v41;
        if ( v29 )
          v24 = v40;
      }
    }
  }
  return v6;
}
