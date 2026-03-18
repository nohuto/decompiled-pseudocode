/*
 * XREFs of MiLockProtoPoolPage @ 0x14022E920
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiDeleteMergedPte @ 0x14023E00C (MiDeleteMergedPte.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiReplaceLockedPage @ 0x14039F10C (MiReplaceLockedPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiInsertLargeVadMapping @ 0x1403F3B88 (MiInsertLargeVadMapping.c)
 *     MiAllocateInPageSupport @ 0x140444CE0 (MiAllocateInPageSupport.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MiGetPageFileSectionForReservation @ 0x14049161C (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     MiWriteValidPteVolatile @ 0x140232800 (MiWriteValidPteVolatile.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 *     MiSpinForProtoPoolLock @ 0x14042C460 (MiSpinForProtoPoolLock.c)
 *     MiGetLeafPfnBuddy @ 0x14043A990 (MiGetLeafPfnBuddy.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  _DWORD *v2; // rbp
  unsigned __int64 *v4; // r14
  unsigned int v5; // r13d
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v12; // esi
  unsigned __int64 v13; // rax
  int v14; // edx
  int *v15; // rsi
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  _QWORD *v19; // rbx
  bool v20; // zf
  int v21; // eax
  unsigned int v23; // esi
  char v24; // r14
  ULONG *v25; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v28; // ett
  __int64 LeafPfnBuddy; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  _DWORD v32[16]; // [rsp+60h] [rbp+0h] BYREF

  v2 = (_DWORD *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( a2 )
    *a2 = 17;
  v4 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = 0;
LABEL_4:
  v6 = 0xFFFFFFFFFFLL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *v4;
        if ( (*v4 & 1) == 0 || (v7 & 0x200) != 0 )
          return 0LL;
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        if ( v8 <= qword_140E2DBE0 )
        {
          v9 = 6 * v8;
          if ( (*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
      v10 = 48 * v8 - 0x220000000000LL;
      if ( !a2 )
      {
        CurrentIrql = 17;
        v23 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v23 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
            {
              HvlNotifyLongSpinWait(v23);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v10 + 24) < 0 );
        }
        break;
      }
      if ( v8 <= qword_140E2DBE0 || v8 >= qword_140E35B00 && v8 < qword_140E35B00 + 2048 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v6) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v6, 0xFFFFDE0000000000uLL);
        }
        if ( (*(_QWORD *)(v10 + 40) & 0x40000000000000LL) == 0 && !(unsigned int)MiIsDecayPfn(v8) )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          goto LABEL_4;
        }
        v12 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v12 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
            {
              HvlNotifyLongSpinWait(v12);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v10 + 24) < 0 );
        }
        v6 = 0xFFFFFFFFFFLL;
        if ( CurrentIrql != 17 )
          break;
      }
    }
    v13 = *v4;
    if ( (*v4 & 1) == 0 || (v13 & 0x200) != 0 )
    {
      if ( CurrentIrql == 17 )
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      else
        MiUnlockPage(v10, CurrentIrql);
      return 0LL;
    }
    v6 = 0xFFFFFFFFFFLL;
    if ( v8 == ((v13 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql <= 1u )
    {
      if ( KiIrqlFlags )
      {
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        v6 = 0xFFFFFFFFFFLL;
      }
      __writecr8(CurrentIrql);
    }
  }
  if ( (*(_QWORD *)(v10 + 40) & 0x10000000000LL) != 0 || _bittest64((const signed __int64 *)(v10 + 40), 0x35u) )
    goto LABEL_27;
  v14 = *(_DWORD *)(v10 + 32);
  v15 = (int *)(v10 + 32);
  v16 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v17 = 0;
  if ( (_WORD)v14 )
  {
    if ( (_WORD)v14 == 1 )
    {
      if ( v16 || (*(_BYTE *)(v10 + 34) & 8) != 0 )
        v17 = 1;
      if ( !v17 )
        goto LABEL_27;
    }
    else if ( (_WORD)v14 != 2 || !v16 || (*(_BYTE *)(v10 + 34) & 8) == 0 )
    {
      goto LABEL_27;
    }
  }
  v24 = 0;
  if ( *(__int64 *)(v10 + 40) < 0 && (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
  {
LABEL_73:
    v24 = 1;
    v25 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
    if ( (unsigned int)MiChargeCommit((__int64)v25, 1uLL, 4) )
      goto LABEL_58;
  }
  else
  {
    if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
    {
      if ( (*(_BYTE *)(v10 + 35) & 0x20) != 0 )
        goto LABEL_73;
      v25 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
    }
    else
    {
      v25 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
    }
LABEL_58:
    if ( v25 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
      {
        v28 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v28 == CachedResidentAvailable )
          goto LABEL_27;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(v25, 1LL, 0xFFFFFFFFLL) )
    {
LABEL_27:
      v18 = *(_DWORD *)(v10 + 32);
      v15 = (int *)(v10 + 32);
      *v2 = v18;
      *(_WORD *)v2 = v18 + 1;
      *(_DWORD *)(v10 + 32) = *v2;
    }
    else if ( v24 )
    {
      MiReturnCommit(v25, 1LL, 0LL);
    }
  }
  if ( CurrentIrql != 17 )
    *a2 = CurrentIrql;
  v19 = (_QWORD *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
  v20 = (*(_BYTE *)(v10 + 34) & 0x20) == 0;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
  if ( v20 )
  {
    v21 = *v15;
    *v2 = *v15;
    *(_BYTE *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = BYTE2(v21) | 0x20;
    *(_DWORD *)(v10 + 32) = *v2;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
    LeafPfnBuddy = MiGetLeafPfnBuddy(v10, 1LL);
    if ( LeafPfnBuddy )
    {
      v31 = *(_QWORD **)(LeafPfnBuddy + 8);
      if ( *v31 != LeafPfnBuddy )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v31;
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
      *v31 = v2 + 16;
      *(_QWORD *)(LeafPfnBuddy + 8) = v2 + 16;
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)v10 = ((unsigned __int64)(v2 + 16) >> 3) ^ (*(_QWORD *)v10 ^ ((unsigned __int64)(v2 + 16) >> 3)) & 0xFFFFF00000000001uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiSpinForProtoPoolLock(v2 + 16);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
  }
  if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 && (*v19 & 0x20) == 0 )
    MiWriteValidPteVolatile((ULONG_PTR)v19);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v10;
}
