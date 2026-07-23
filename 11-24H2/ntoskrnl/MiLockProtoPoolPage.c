/*
 * XREFs of MiLockProtoPoolPage @ 0x140302230
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiDeleteMergedPte @ 0x140205D9C (MiDeleteMergedPte.c)
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiReplaceLockedPage @ 0x1402158AC (MiReplaceLockedPage.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiAllocateInPageSupport @ 0x140341520 (MiAllocateInPageSupport.c)
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiCombineWithStandbyExisting @ 0x1403F1098 (MiCombineWithStandbyExisting.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MiGetPageFileSectionForReservation @ 0x14048C2E0 (MiGetPageFileSectionForReservation.c)
 *     MiInsertLargeVadMapping @ 0x1404CE7F4 (MiInsertLargeVadMapping.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140203330 (MiWriteValidPteVolatile.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 *     MiSpinForProtoPoolLock @ 0x14041F210 (MiSpinForProtoPoolLock.c)
 *     MiGetLeafPfnBuddy @ 0x14042D1D0 (MiGetLeafPfnBuddy.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  _DWORD *v2; // rbp
  unsigned __int64 *v4; // r14
  unsigned int v5; // r13d
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v13; // esi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  int v16; // edx
  int *v17; // rsi
  __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  volatile signed __int64 *v21; // rbx
  bool v22; // zf
  int v23; // eax
  unsigned int v25; // esi
  char v26; // r14
  ULONG *v27; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v30; // ett
  __int64 LeafPfnBuddy; // rax
  _QWORD *v32; // rcx
  _DWORD v33[16]; // [rsp+60h] [rbp+0h] BYREF

  v2 = (_DWORD *)((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( a2 )
    *a2 = 17;
  v4 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = 0;
LABEL_4:
  v6 = 0xFFFFFFFFFFLL;
LABEL_5:
  v7 = 0xFFFFDE0000000000uLL;
  v8 = 2LL;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v9 = *v4;
        if ( (*v4 & 1) == 0 || (v9 & 0x200) != 0 )
          return 0LL;
        v10 = (v9 >> 12) & 0xFFFFFFFFFFLL;
      }
      while ( v10 > qword_140E2DD20 || (*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 );
      v11 = 48 * v10 - 0x220000000000LL;
      if ( !a2 )
      {
        CurrentIrql = 17;
        v25 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v25 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v25);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v11 + 24) < 0 );
        }
        break;
      }
      if ( v10 <= qword_140E2DD20 || v10 >= qword_140E35C40 && v10 < qword_140E35C40 + 2048 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v6) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v6);
        }
        if ( (*(_QWORD *)(v11 + 40) & 0x40000000000000LL) == 0 && !(unsigned int)MiIsDecayPfn(v10, v6, v7, v8) )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          goto LABEL_4;
        }
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v13);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v11 + 24) < 0 );
        }
        v7 = 0xFFFFDE0000000000uLL;
        v6 = 0xFFFFFFFFFFLL;
        v8 = 2LL;
        if ( CurrentIrql != 17 )
          break;
      }
    }
    v14 = *v4;
    if ( (*v4 & 1) == 0 || (v14 & 0x200) != 0 )
    {
      if ( CurrentIrql == 17 )
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      else
        MiUnlockPage(v11, CurrentIrql);
      return 0LL;
    }
    v6 = 0xFFFFFFFFFFLL;
    if ( v10 == ((v14 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = 0xFFFFDE0000000000uLL;
    v8 = 2LL;
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
  v15 = 0x8000000000000000uLL;
  if ( (*(_QWORD *)(v11 + 40) & 0x10000000000LL) != 0 || _bittest64((const signed __int64 *)(v11 + 40), 0x35u) )
    goto LABEL_28;
  v16 = *(_DWORD *)(v11 + 32);
  v17 = (int *)(v11 + 32);
  v18 = *(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v19 = 0;
  if ( (_WORD)v16 )
  {
    if ( (_WORD)v16 == 1 )
    {
      if ( v18 || (*(_BYTE *)(v11 + 34) & 8) != 0 )
        v19 = 1;
      if ( !v19 )
        goto LABEL_28;
    }
    else if ( (_WORD)v16 != 2 || !v18 || (*(_BYTE *)(v11 + 34) & 8) == 0 )
    {
      goto LABEL_28;
    }
  }
  v26 = 0;
  if ( *(__int64 *)(v11 + 40) < 0 && (*(_DWORD *)(v11 + 16) & 0x400LL) != 0 )
  {
LABEL_74:
    v26 = 1;
    v27 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL));
    if ( (unsigned int)MiChargeCommit(v27, 1LL, 4LL, v8) )
      goto LABEL_59;
  }
  else
  {
    if ( (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
    {
      if ( (*(_BYTE *)(v11 + 35) & 0x20) != 0 )
        goto LABEL_74;
      v27 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL));
    }
    else
    {
      v27 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL));
    }
LABEL_59:
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
    if ( (unsigned int)MiChargePartitionResidentAvailable(v27, 1LL, 0xFFFFFFFFLL, v8) )
    {
LABEL_28:
      v20 = *(_DWORD *)(v11 + 32);
      v17 = (int *)(v11 + 32);
      *v2 = v20;
      *(_WORD *)v2 = v20 + 1;
      *(_DWORD *)(v11 + 32) = *v2;
    }
    else if ( v26 )
    {
      MiReturnCommit((__int64)v27, 1LL, 0);
    }
  }
  if ( CurrentIrql != 17 )
    *a2 = CurrentIrql;
  v21 = (volatile signed __int64 *)(*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
  v22 = (*(_BYTE *)(v11 + 34) & 0x20) == 0;
  *(_OWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_OWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  *(_OWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
  *(_OWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
  if ( v22 )
  {
    v23 = *v17;
    *v2 = *v17;
    *(_BYTE *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = BYTE2(v23) | 0x20;
    *(_DWORD *)(v11 + 32) = *v2;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
    LeafPfnBuddy = MiGetLeafPfnBuddy(v11, 1LL, v15, v8);
    if ( LeafPfnBuddy )
    {
      v32 = *(_QWORD **)(LeafPfnBuddy + 8);
      if ( *v32 != LeafPfnBuddy )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v32;
      *(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
      *v32 = v2 + 16;
      *(_QWORD *)(LeafPfnBuddy + 8) = v2 + 16;
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)v11 = ((unsigned __int64)(v2 + 16) >> 3) ^ (*(_QWORD *)v11 ^ ((unsigned __int64)(v2 + 16) >> 3)) & 0xFFFFF00000000001uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiSpinForProtoPoolLock(v2 + 16);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
  }
  if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 && (*v21 & 0x20) == 0 )
    MiWriteValidPteVolatile(v21, 1, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v11;
}
