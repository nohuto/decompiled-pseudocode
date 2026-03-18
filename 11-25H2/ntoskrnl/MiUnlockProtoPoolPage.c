/*
 * XREFs of MiUnlockProtoPoolPage @ 0x1402353A0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 *     MiReservePageFileSpace @ 0x1402471FC (MiReservePageFileSpace.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiHandleCollidedFault @ 0x14033D7C8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiDeleteMergedPte @ 0x14033FD38 (MiDeleteMergedPte.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiFinishMdlForMappedFileFault @ 0x14034EE44 (MiFinishMdlForMappedFileFault.c)
 *     MmCopyMemory @ 0x140378030 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiAllocateInPageSupport @ 0x14037C3C0 (MiAllocateInPageSupport.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiInsertLargeVadMapping @ 0x1403EC828 (MiInsertLargeVadMapping.c)
 *     MiReplaceLockedPage @ 0x1403FE3AC (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiWaitForPageWriteCompletion @ 0x140417F6C (MiWaitForPageWriteCompletion.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404536FC (MiInitializeNewImageSectionProtos.c)
 *     MiInitializeImageProtos @ 0x140453928 (MiInitializeImageProtos.c)
 *     MiUnlockDataCopyPages @ 0x1404568CC (MiUnlockDataCopyPages.c)
 *     MiAnyProtosAreMapped @ 0x14045BF40 (MiAnyProtosAreMapped.c)
 *     MiCopyHeaderIfResident @ 0x140476ABC (MiCopyHeaderIfResident.c)
 *     MiDeletePerSessionProtos @ 0x1404967DC (MiDeletePerSessionProtos.c)
 *     MiMakeImageReadOnly @ 0x14049C768 (MiMakeImageReadOnly.c)
 *     MiReleasePageFileSectionInfo @ 0x1404A0974 (MiReleasePageFileSectionInfo.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x14066F098 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14066F2B4 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14066F4A8 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x1406703DC (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiBadRefCount @ 0x1402360FC (MiBadRefCount.c)
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRestockOverCommit @ 0x14040ADD4 (MiRestockOverCommit.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockProtoPoolPage(ULONG_PTR a1, unsigned __int8 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int16 v12; // di
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rax
  char v16; // al
  __int64 result; // rax
  __int64 v18; // rbp
  struct _KPRCB *v19; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v21; // zf
  signed __int32 v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r15
  struct _KPRCB *CurrentPrcb; // r8
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
  unsigned __int64 v40; // rdx
  struct _KEVENT *v41; // rcx
  struct _KEVENT *v42; // rcx
  struct _KEVENT *v43; // rcx
  struct _KEVENT *v44; // rcx
  KIRQL v45; // r15
  volatile LONG *v46; // rcx
  unsigned __int64 v47; // [rsp+70h] [rbp+8h]
  int v48; // [rsp+78h] [rbp+10h]
  int v49; // [rsp+78h] [rbp+10h]
  int v50; // [rsp+78h] [rbp+10h]
  KIRQL v51; // [rsp+78h] [rbp+10h]

  v4 = a2;
  v5 = 0;
  if ( a2 == 18 )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
    MiBadRefCount(a1);
  HIWORD(v49) = HIWORD(*(_DWORD *)(a1 + 32));
  v12 = *(_DWORD *)(a1 + 32) - 1;
  LOWORD(v49) = v12;
  *(_DWORD *)(a1 + 32) = v49;
  if ( !v12 && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
  {
LABEL_52:
    v23 = 0x4000000000000000LL;
    if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(
        0x4Eu,
        7uLL,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4),
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
        MiReleasePageFileInfo(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), v47, 1);
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
    }
    else
    {
      v24 = *(_QWORD *)(a1 + 16);
      v25 = a1 + 16;
      if ( a1 + 16 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL && (v24 & 1) != 0 )
      {
        LOBYTE(v23) = (v24 & 0x42) != 0;
        if ( ((unsigned __int8)v23 & ((v24 & 0x20) != 0)) == 0 )
        {
          HasShadow = MiPteHasShadow(v23, v24, v25, a4);
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
        MiInsertPageInList(a1, 8u);
      else
        MiInsertPageInList(a1, 4u);
    }
    goto LABEL_33;
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_33;
  v13 = *(_DWORD *)(a1 + 32);
  v14 = 0;
  v15 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !(_WORD)v13 )
  {
LABEL_28:
    a4 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
      || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
    {
      v16 = *(_BYTE *)(a1 + 35);
      if ( (v16 & 0x20) != 0 )
      {
        *(_BYTE *)(a1 + 35) = v16 & 0xDF;
        goto LABEL_32;
      }
    }
    v18 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    if ( *(__int64 *)(a1 + 40) < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
      || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
      && (*(_BYTE *)(a1 + 35) & 0x20) != 0
      || !v12 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      v27 = 1LL;
      if ( !*(_QWORD *)(v18 + 16904) )
        goto LABEL_64;
      v39 = (volatile LONG *)(v18 + 16888);
      if ( KeGetCurrentIrql() == 2 )
      {
        v51 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v39);
      }
      else
      {
        v51 = ExAcquireSpinLockExclusive(v39);
      }
      v27 = MiRestockOverCommit(v18, 1LL);
      MiReleaseSpinLockExclusive(v18 + 16888, v51);
      if ( v27 )
      {
LABEL_64:
        if ( (ULONG *)v18 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
          for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v27) <= 0x100; i = v30 )
          {
            v30 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v27, i);
            if ( v30 == i )
            {
              a4 = 1LL;
              goto LABEL_43;
            }
          }
        }
        _InterlockedAdd64((volatile signed __int64 *)(v18 + 19328), -v27);
        v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 19264), -v27);
        v32 = *(_QWORD *)(v18 + 16864);
        v33 = *(_QWORD *)(v18 + 16856);
        v34 = v31 - v27;
        if ( v31 - v27 > v31 )
        {
          if ( v34 >= v32 && v31 < v32 || v34 >= v33 && v31 < v33 )
          {
LABEL_143:
            v46 = (volatile LONG *)(v18 + 16888);
            if ( KeGetCurrentIrql() == 2 )
            {
              v45 = 17;
              ExAcquireSpinLockExclusiveAtDpcLevel(v46);
            }
            else
            {
              v45 = ExAcquireSpinLockExclusive(v46);
            }
            v40 = *(_QWORD *)(v18 + 19264);
            if ( v40 < *(_QWORD *)(v18 + 16856) )
            {
              v43 = *(struct _KEVENT **)(v18 + 296);
              if ( !v43->Header.SignalState )
                KeSetEvent(v43, 0, 0);
              v44 = *(struct _KEVENT **)(v18 + 304);
              if ( v44->Header.SignalState != 1 )
                goto LABEL_136;
              KeResetEvent(v44);
              v42 = *(struct _KEVENT **)(v18 + 312);
            }
            else
            {
              v41 = *(struct _KEVENT **)(v18 + 304);
              if ( v40 >= *(_QWORD *)(v18 + 16864) )
              {
                if ( !v41->Header.SignalState )
                  KeSetEvent(v41, 0, 0);
                if ( *(_QWORD *)(v18 + 19608) == *(_QWORD *)(v18 + 16840) )
                  KeSetEvent(*(PRKEVENT *)(v18 + 312), 0, 0);
                v42 = *(struct _KEVENT **)(v18 + 296);
                if ( v42->Header.SignalState != 1 )
                  goto LABEL_136;
              }
              else
              {
                if ( v41->Header.SignalState == 1 )
                {
                  KeResetEvent(v41);
                  KeResetEvent(*(PRKEVENT *)(v18 + 312));
                }
                v42 = *(struct _KEVENT **)(v18 + 296);
                if ( v42->Header.SignalState != 1 )
                  goto LABEL_136;
              }
            }
            KeResetEvent(v42);
LABEL_136:
            MiReleaseSpinLockExclusive(v18 + 16888, v45);
          }
        }
        else if ( v31 >= v32 && v34 < v32 || v31 >= v33 && v34 < v33 )
        {
          goto LABEL_143;
        }
      }
    }
    a4 = 1LL;
    if ( (ULONG *)v18 == &MiSystemPartition )
    {
LABEL_43:
      v19 = KeGetCurrentPrcb();
      CachedResidentAvailable = v19->CachedResidentAvailable;
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
          v22 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v19->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v21 = CachedResidentAvailable == v22;
          CachedResidentAvailable = v22;
          if ( v21 )
            goto LABEL_32;
        }
        while ( v22 != -1 );
        if ( CachedResidentAvailable > 192
          && CachedResidentAvailable == _InterlockedCompareExchange(
                                          (volatile signed __int32 *)&v19->CachedResidentAvailable,
                                          192,
                                          CachedResidentAvailable) )
        {
          a4 = CachedResidentAvailable - 192 + 1LL;
        }
        if ( !a4 )
        {
LABEL_32:
          if ( v12 )
            goto LABEL_33;
          goto LABEL_52;
        }
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(v18 + 18752), a4);
    goto LABEL_32;
  }
  if ( (_WORD)v13 != 1 )
  {
    if ( (_WORD)v13 != 2 || !v15 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
      goto LABEL_33;
    goto LABEL_28;
  }
  if ( v15 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
    v14 = 1;
  if ( v14 )
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
