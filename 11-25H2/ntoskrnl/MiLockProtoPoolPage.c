/*
 * XREFs of MiLockProtoPoolPage @ 0x140240A70
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteMergedPte @ 0x14033FD38 (MiDeleteMergedPte.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiAllocateInPageSupport @ 0x14037C3C0 (MiAllocateInPageSupport.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiInsertLargeVadMapping @ 0x1403EC828 (MiInsertLargeVadMapping.c)
 *     MiReplaceLockedPage @ 0x1403FE3AC (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiGetPageFileSectionForReservation @ 0x140492424 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022BAA0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiWriteValidPteVolatile @ 0x14037C940 (MiWriteValidPteVolatile.c)
 *     MiSpinForProtoPoolLock @ 0x1404324F0 (MiSpinForProtoPoolLock.c)
 *     MiGetLeafPfnBuddy @ 0x140437F30 (MiGetLeafPfnBuddy.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  _DWORD *v2; // rbp
  unsigned __int64 *v4; // r14
  unsigned int v5; // r13d
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v14; // esi
  unsigned __int64 v15; // rax
  int v16; // edx
  int *v17; // rsi
  __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  _QWORD *v21; // rbx
  bool v22; // zf
  int v23; // eax
  unsigned int v25; // esi
  char v26; // r14
  ULONG *v27; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v30; // ett
  int IsDecayPfn; // eax
  __int64 LeafPfnBuddy; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  _DWORD v35[16]; // [rsp+60h] [rbp+0h] BYREF

  v2 = (_DWORD *)((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( a2 )
    *a2 = 17;
  v4 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = 0;
LABEL_4:
  v6 = 0xFFFFFFFFFFLL;
LABEL_5:
  v7 = 2LL;
  v8 = 0xFFFFDE0000000000uLL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *v4;
        if ( (*v4 & 1) == 0 || (v9 & 0x200) != 0 )
          return 0LL;
        v10 = (v9 >> 12) & 0xFFFFFFFFFFLL;
        if ( v10 <= qword_140E2D9A0 )
        {
          v11 = 6 * v10;
          if ( (*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
      v12 = v8 + 48 * v10;
      if ( !a2 )
      {
        CurrentIrql = 17;
        v25 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v25 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
            {
              HvlNotifyLongSpinWait(v25);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v12 + 24) < 0 );
        }
        break;
      }
      if ( v10 > qword_140E2D9A0 )
      {
        IsDecayPfn = MiIsDecayPfn(v10, 0xFFFFFFFFFFLL, v8);
        v6 = 0xFFFFFFFFFFLL;
        if ( !IsDecayPfn )
          continue;
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v7);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      if ( (*(_QWORD *)(v12 + 40) & 0x40000000000000LL) == 0 && !(unsigned int)MiIsDecayPfn(v10, v6, v8) )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        goto LABEL_4;
      }
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      v8 = 0xFFFFDE0000000000uLL;
      v6 = 0xFFFFFFFFFFLL;
      v7 = 2LL;
      if ( CurrentIrql != 17 )
        break;
    }
    v15 = *v4;
    if ( (*v4 & 1) == 0 || (v15 & 0x200) != 0 )
    {
      if ( CurrentIrql == 17 )
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      else
        MiUnlockPage(v12, CurrentIrql);
      return 0LL;
    }
    v6 = 0xFFFFFFFFFFLL;
    if ( v10 == ((v15 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = 0xFFFFDE0000000000uLL;
    v7 = 2LL;
    if ( CurrentIrql <= 1u )
    {
      if ( KiIrqlFlags )
      {
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        v6 = 0xFFFFFFFFFFLL;
      }
      __writecr8(CurrentIrql);
      goto LABEL_5;
    }
  }
  if ( (*(_QWORD *)(v12 + 40) & 0x10000000000LL) != 0 || _bittest64((const signed __int64 *)(v12 + 40), 0x35u) )
    goto LABEL_28;
  v16 = *(_DWORD *)(v12 + 32);
  v17 = (int *)(v12 + 32);
  v18 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v19 = 0;
  if ( (_WORD)v16 )
  {
    if ( (_WORD)v16 == 1 )
    {
      if ( v18 || (*(_BYTE *)(v12 + 34) & 8) != 0 )
        v19 = 1;
      if ( !v19 )
        goto LABEL_28;
    }
    else if ( (_WORD)v16 != 2 || !v18 || (*(_BYTE *)(v12 + 34) & 8) == 0 )
    {
      goto LABEL_28;
    }
  }
  v26 = 0;
  if ( *(__int64 *)(v12 + 40) < 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
  {
LABEL_73:
    v26 = 1;
    v27 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
    if ( (unsigned int)MiChargeCommit((__int64)v27, 1uLL, 4) )
      goto LABEL_55;
  }
  else
  {
    if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
    {
      if ( (*(_BYTE *)(v12 + 35) & 0x20) != 0 )
        goto LABEL_73;
      v27 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
    }
    else
    {
      v27 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
    }
LABEL_55:
    if ( v27 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
      {
        v30 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v30 == CachedResidentAvailable )
          goto LABEL_28;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)v27, 1uLL, 0xFFFFFFFFLL) )
    {
LABEL_28:
      v20 = *(_DWORD *)(v12 + 32);
      v17 = (int *)(v12 + 32);
      *v2 = v20;
      *(_WORD *)v2 = v20 + 1;
      *(_DWORD *)(v12 + 32) = *v2;
    }
    else if ( v26 )
    {
      MiReturnCommit(v27, 1LL, 0LL);
    }
  }
  if ( CurrentIrql != 17 )
    *a2 = CurrentIrql;
  v21 = (_QWORD *)(*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL);
  v22 = (*(_BYTE *)(v12 + 34) & 0x20) == 0;
  *(_OWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_OWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  *(_OWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
  *(_OWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
  if ( v22 )
  {
    v23 = *v17;
    *v2 = *v17;
    *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = BYTE2(v23) | 0x20;
    *(_DWORD *)(v12 + 32) = *v2;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
    LeafPfnBuddy = MiGetLeafPfnBuddy(v12, 1LL);
    if ( LeafPfnBuddy )
    {
      v34 = *(_QWORD **)(LeafPfnBuddy + 8);
      if ( *v34 != LeafPfnBuddy )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v34;
      *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
      *v34 = v2 + 16;
      *(_QWORD *)(LeafPfnBuddy + 8) = v2 + 16;
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)v12 = ((unsigned __int64)(v2 + 16) >> 3) ^ (*(_QWORD *)v12 ^ ((unsigned __int64)(v2 + 16) >> 3)) & 0xFFFFF00000000001uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiSpinForProtoPoolLock(v2 + 16);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v33) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
  }
  if ( (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 && (*v21 & 0x20) == 0 )
    MiWriteValidPteVolatile((ULONG_PTR)v21);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v12;
}
