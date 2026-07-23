/*
 * XREFs of MiUnlockProtoPoolPage @ 0x14029C7F0
 * Callers:
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiDeleteMergedPte @ 0x140205D9C (MiDeleteMergedPte.c)
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiReplaceLockedPage @ 0x1402158AC (MiReplaceLockedPage.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiWaitForPageWriteCompletion @ 0x140270FAC (MiWaitForPageWriteCompletion.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiAllocateInPageSupport @ 0x140341520 (MiAllocateInPageSupport.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiCopyHeaderIfResident @ 0x1403F0510 (MiCopyHeaderIfResident.c)
 *     MiInitializeNewImageSectionProtos @ 0x1403F0B48 (MiInitializeNewImageSectionProtos.c)
 *     MiCombineWithStandbyExisting @ 0x1403F1098 (MiCombineWithStandbyExisting.c)
 *     MiCopyDataPageToImagePage @ 0x1403F1624 (MiCopyDataPageToImagePage.c)
 *     MiUnlockDataCopyPages @ 0x1403F1C20 (MiUnlockDataCopyPages.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403F1ED8 (MiFinishMdlForMappedFileFault.c)
 *     MiInitializeImageProtos @ 0x1403F26E0 (MiInitializeImageProtos.c)
 *     MmCopyMemory @ 0x1403F3930 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x140426D4C (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     MiAnyProtosAreMapped @ 0x1404506B8 (MiAnyProtosAreMapped.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047AADC (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MiMakeImageReadOnly @ 0x14048C870 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140490370 (MiDeletePerSessionProtos.c)
 *     MiReleasePageFileSectionInfo @ 0x14049A6D8 (MiReleasePageFileSectionInfo.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiInsertLargeVadMapping @ 0x1404CE7F4 (MiInsertLargeVadMapping.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x14067BA38 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14067BC54 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14067BE48 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14067CD7C (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiBadRefCount @ 0x14029D568 (MiBadRefCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRestockOverCommit @ 0x14042CEF4 (MiRestockOverCommit.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockProtoPoolPage(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int16 v13; // di
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rax
  char v17; // al
  __int64 result; // rax
  __int64 v19; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v22; // zf
  signed __int32 v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r15
  struct _KPRCB *v28; // r8
  __int64 i; // rdx
  signed __int32 v30; // eax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 HasShadow; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  volatile LONG *v39; // rcx
  KIRQL v40; // r15
  unsigned __int64 v41; // rdx
  struct _KEVENT *v42; // rcx
  struct _KEVENT *v43; // rcx
  struct _KEVENT *v44; // rcx
  struct _KEVENT *v45; // rcx
  volatile LONG *v46; // rcx
  unsigned __int64 v47; // [rsp+70h] [rbp+8h]
  int v48; // [rsp+78h] [rbp+10h]
  int v49; // [rsp+78h] [rbp+10h]
  int v50; // [rsp+78h] [rbp+10h]
  KIRQL v51; // [rsp+78h] [rbp+10h]

  v4 = (unsigned __int8)a2;
  v5 = 0;
  if ( (_BYTE)a2 == 18 )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  if ( (*(_QWORD *)a1 & 0xFFFFFFFFFFELL) != 0 )
  {
    v8 = *(_QWORD *)a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
    v9 = *(_QWORD *)(8 * v8);
    v7 = 8 * v8;
    if ( v9 == 8 * v8 )
    {
      a2 = 0xFFFFF00000000001uLL;
      *(_QWORD *)a1 &= 0xFFFFF00000000001uLL;
    }
    else
    {
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)(v9 + 8) != v7 || *(_QWORD *)(v10 + 8) != v9 )
        __fastfail(3u);
      *(_QWORD *)v7 = v10;
      *(_QWORD *)(v10 + 8) = v7;
      if ( *(_QWORD *)v7 == v7 )
      {
        *(_QWORD *)v9 = v9;
        v11 = (_QWORD *)v9;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v7 + 8LL) = v9;
        v11 = *(_QWORD **)(v7 + 8);
        *v11 = v9;
      }
      *(_QWORD *)(v9 + 8) = v11;
      a2 = 0xFFFFF00000000001uLL;
      *(_QWORD *)a1 = (2 * (v9 >> 4)) ^ ((2 * (v9 >> 4)) ^ *(_QWORD *)a1) & 0xFFFFF00000000001uLL;
    }
  }
  else
  {
    v7 = 0LL;
    v48 = *(_DWORD *)(a1 + 32);
    BYTE2(v48) &= ~0x20u;
    *(_DWORD *)(a1 + 32) = v48;
  }
  if ( !(unsigned __int16)*(_DWORD *)(a1 + 32) )
    MiBadRefCount(a1, a2, a3);
  v12 = 0x20000000000000LL;
  HIWORD(v49) = HIWORD(*(_DWORD *)(a1 + 32));
  v13 = *(_DWORD *)(a1 + 32) - 1;
  LOWORD(v49) = v13;
  *(_DWORD *)(a1 + 32) = v49;
  if ( !v13 && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
  {
LABEL_57:
    if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(
        0x4Eu,
        7uLL,
        0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
        *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL,
        0LL);
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
      {
        v50 = *(_DWORD *)(a1 + 32);
        HIBYTE(v50) &= ~0x10u;
        *(_DWORD *)(a1 + 32) = v50;
      }
      v47 = *(_QWORD *)(a1 + 16);
      if ( (v47 & 0x400) == 0 && ((v47 & 4) != 0 || (v47 & 2) != 0) && v47 )
        MiReleasePageFileInfo(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), v47, 1LL, a4);
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 2LL);
    }
    else
    {
      v24 = *(_QWORD *)(a1 + 16);
      v25 = a1 + 16;
      if ( (unsigned __int64)(a1 + 16) >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL && (v24 & 1) != 0 )
      {
        LOBYTE(v12) = (v24 & 0x42) != 0;
        if ( ((unsigned __int8)v12 & ((v24 & 0x20) != 0)) == 0 )
        {
          HasShadow = MiPteHasShadow(v12, v24, v25, a4);
          if ( HasShadow )
          {
            v36 = *(_QWORD *)(HasShadow + 1288);
            if ( v36 )
            {
              v37 = *(_QWORD *)(v36 + 8 * ((v25 >> 3) & 0x1FF));
              if ( (v37 & 0x20) != 0 )
                v24 |= 0x20uLL;
              v38 = v24;
              v24 |= 0x42uLL;
              if ( (v37 & 0x42) == 0 )
                v24 = v38;
            }
          }
        }
      }
      v26 = -9LL;
      if ( (v24 & 0x400) != 0 )
        v26 = -2049LL;
      *(_QWORD *)v25 = v24 & v26;
      if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
        MiInsertPageInList(a1, 8LL);
      else
        MiInsertPageInList(a1, 4LL);
    }
    goto LABEL_33;
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_33;
  v14 = *(_DWORD *)(a1 + 32);
  v15 = 0;
  v16 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !(_WORD)v14 )
  {
LABEL_28:
    a4 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
      || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
    {
      v17 = *(_BYTE *)(a1 + 35);
      if ( (v17 & 0x20) != 0 )
      {
        *(_BYTE *)(a1 + 35) = v17 & 0xDF;
        goto LABEL_32;
      }
    }
    v19 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    if ( (*(__int64 *)(a1 + 40) >= 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0)
      && ((*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
       || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
       || (*(_BYTE *)(a1 + 35) & 0x20) == 0)
      && (v13 || (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0) )
    {
      goto LABEL_42;
    }
    v27 = 1LL;
    if ( *(_QWORD *)(v19 + 16904) )
    {
      v39 = (volatile LONG *)(v19 + 16888);
      if ( KeGetCurrentIrql() == 2 )
      {
        v51 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v39);
      }
      else
      {
        v51 = ExAcquireSpinLockExclusive(v39);
      }
      v27 = MiRestockOverCommit(v19, 1LL);
      MiReleaseSpinLockExclusive(v19 + 16888, v51);
      if ( !v27 )
      {
LABEL_42:
        a4 = 1LL;
        if ( (ULONG *)v19 == &MiSystemPartition )
        {
LABEL_43:
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          if ( CachedResidentAvailable == -1 )
          {
            a4 = 1LL;
          }
          else
          {
            do
            {
              if ( (unsigned __int64)(CachedResidentAvailable + 1LL) > 0x100 )
                break;
              v23 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v22 = CachedResidentAvailable == v23;
              CachedResidentAvailable = v23;
              if ( v22 )
                goto LABEL_32;
            }
            while ( v23 != -1 );
            if ( CachedResidentAvailable > 192
              && CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
            {
              a4 = CachedResidentAvailable - 192 + 1LL;
            }
            if ( !a4 )
              goto LABEL_32;
          }
        }
        _InterlockedAdd64((volatile signed __int64 *)(v19 + 18752), a4);
LABEL_32:
        if ( v13 )
          goto LABEL_33;
        v12 = 0x20000000000000LL;
        goto LABEL_57;
      }
    }
    if ( (ULONG *)v19 == &MiSystemPartition )
    {
      v28 = KeGetCurrentPrcb();
      _m_prefetchw((const void *)&v28->CachedCommit);
      for ( i = v28->CachedCommit; (unsigned __int64)(i + v27) <= 0x100; i = v30 )
      {
        v30 = _InterlockedCompareExchange((volatile signed __int32 *)&v28->CachedCommit, i + v27, i);
        if ( v30 == i )
        {
          a4 = 1LL;
          goto LABEL_43;
        }
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(v19 + 19328), -v27);
    v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 19264), -v27);
    v32 = *(_QWORD *)(v19 + 16864);
    v33 = *(_QWORD *)(v19 + 16856);
    v34 = v31 - v27;
    if ( v31 - v27 > v31 )
    {
      if ( (v34 < v32 || v31 >= v32) && (v34 < v33 || v31 >= v33) )
        goto LABEL_42;
    }
    else if ( (v31 < v32 || v34 >= v32) && (v31 < v33 || v34 >= v33) )
    {
      goto LABEL_42;
    }
    v46 = (volatile LONG *)(v19 + 16888);
    if ( KeGetCurrentIrql() == 2 )
    {
      v40 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v46);
    }
    else
    {
      v40 = ExAcquireSpinLockExclusive(v46);
    }
    v41 = *(_QWORD *)(v19 + 19264);
    if ( v41 < *(_QWORD *)(v19 + 16856) )
    {
      v44 = *(struct _KEVENT **)(v19 + 296);
      if ( !v44->Header.SignalState )
        KeSetEvent(v44, 0, 0);
      v45 = *(struct _KEVENT **)(v19 + 304);
      if ( v45->Header.SignalState != 1 )
        goto LABEL_139;
      KeResetEvent(v45);
      v43 = *(struct _KEVENT **)(v19 + 312);
    }
    else
    {
      v42 = *(struct _KEVENT **)(v19 + 304);
      if ( v41 >= *(_QWORD *)(v19 + 16864) )
      {
        if ( !v42->Header.SignalState )
          KeSetEvent(v42, 0, 0);
        if ( *(_QWORD *)(v19 + 19608) == *(_QWORD *)(v19 + 16840) )
          KeSetEvent(*(PRKEVENT *)(v19 + 312), 0, 0);
        v43 = *(struct _KEVENT **)(v19 + 296);
        if ( v43->Header.SignalState != 1 )
          goto LABEL_139;
      }
      else
      {
        if ( v42->Header.SignalState == 1 )
        {
          KeResetEvent(v42);
          KeResetEvent(*(PRKEVENT *)(v19 + 312));
        }
        v43 = *(struct _KEVENT **)(v19 + 296);
        if ( v43->Header.SignalState != 1 )
          goto LABEL_139;
      }
    }
    KeResetEvent(v43);
LABEL_139:
    MiReleaseSpinLockExclusive(v19 + 16888, v40);
    goto LABEL_42;
  }
  if ( (_WORD)v14 != 1 )
  {
    if ( (_WORD)v14 != 2 || !v16 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
      goto LABEL_33;
    goto LABEL_28;
  }
  if ( v16 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
    v15 = 1;
  if ( v15 )
    goto LABEL_28;
LABEL_33:
  if ( v7 )
    *(_DWORD *)(v7 + 16) = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v4 <= 1u )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v4);
    __writecr8(v4);
  }
  return result;
}
