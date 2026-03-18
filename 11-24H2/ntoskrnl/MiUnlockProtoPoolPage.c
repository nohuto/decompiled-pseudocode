/*
 * XREFs of MiUnlockProtoPoolPage @ 0x14028CBF0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x14021B1A0 (MiHandleTransitionFault.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x14023A108 (MiFinishMdlForMappedFileFault.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiHandleCollidedFault @ 0x14023B504 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiDeleteMergedPte @ 0x14023E00C (MiDeleteMergedPte.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiGetPageProtection @ 0x1403019B0 (MiGetPageProtection.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiInitializeNewImageSectionProtos @ 0x140312D98 (MiInitializeNewImageSectionProtos.c)
 *     MiInitializeImageProtos @ 0x140313060 (MiInitializeImageProtos.c)
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     MiUnlockDataCopyPages @ 0x1403148D4 (MiUnlockDataCopyPages.c)
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiReleasePageFileSectionInfo @ 0x14037012C (MiReleasePageFileSectionInfo.c)
 *     MmCopyMemory @ 0x140395E40 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiReplaceLockedPage @ 0x14039F10C (MiReplaceLockedPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiInsertLargeVadMapping @ 0x1403F3B88 (MiInsertLargeVadMapping.c)
 *     MiWaitForPageWriteCompletion @ 0x14041514C (MiWaitForPageWriteCompletion.c)
 *     MiAllocateInPageSupport @ 0x140444CE0 (MiAllocateInPageSupport.c)
 *     MiAnyProtosAreMapped @ 0x14045B2B8 (MiAnyProtosAreMapped.c)
 *     MiCopyHeaderIfResident @ 0x1404765F4 (MiCopyHeaderIfResident.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047FE9C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MiMakeImageReadOnly @ 0x140491960 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140495AB0 (MiDeletePerSessionProtos.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiInitializeDynamicPfns @ 0x14066D8BC (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x14067A858 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14067AA74 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14067AC68 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14067BB9C (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiBadRefCount @ 0x14028D968 (MiBadRefCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRestockOverCommit @ 0x14043A6C0 (MiRestockOverCommit.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockProtoPoolPage(ULONG_PTR a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int16 v11; // di
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rax
  char v15; // al
  __int64 result; // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // r9
  struct _KPRCB *v19; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v21; // zf
  signed __int32 v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r15
  struct _KPRCB *CurrentPrcb; // r8
  __int64 i; // rdx
  signed __int32 v29; // eax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  _KPROCESS *v34; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  volatile LONG *v38; // rcx
  KIRQL v39; // r15
  unsigned __int64 v40; // rdx
  struct _KEVENT *v41; // rcx
  struct _KEVENT *v42; // rcx
  struct _KEVENT *v43; // rcx
  struct _KEVENT *v44; // rcx
  volatile LONG *v45; // rcx
  unsigned __int64 v46; // [rsp+70h] [rbp+8h]
  int v47; // [rsp+78h] [rbp+10h]
  int v48; // [rsp+78h] [rbp+10h]
  int v49; // [rsp+78h] [rbp+10h]
  KIRQL v50; // [rsp+78h] [rbp+10h]

  v3 = (unsigned __int8)a2;
  v4 = 0;
  if ( (_BYTE)a2 == 18 )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v4);
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
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v4);
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
    v7 = *(_QWORD *)a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
    v8 = *(_QWORD *)(8 * v7);
    v6 = 8 * v7;
    if ( v8 == 8 * v7 )
    {
      a2 = 0xFFFFF00000000001uLL;
      *(_QWORD *)a1 &= 0xFFFFF00000000001uLL;
    }
    else
    {
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(v8 + 8) != v6 || *(_QWORD *)(v9 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)v6 = v9;
      *(_QWORD *)(v9 + 8) = v6;
      if ( *(_QWORD *)v6 == v6 )
      {
        *(_QWORD *)v8 = v8;
        v10 = (_QWORD *)v8;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = v8;
        v10 = *(_QWORD **)(v6 + 8);
        *v10 = v8;
      }
      *(_QWORD *)(v8 + 8) = v10;
      a2 = 0xFFFFF00000000001uLL;
      *(_QWORD *)a1 = (2 * (v8 >> 4)) ^ ((2 * (v8 >> 4)) ^ *(_QWORD *)a1) & 0xFFFFF00000000001uLL;
    }
  }
  else
  {
    v6 = 0LL;
    v47 = *(_DWORD *)(a1 + 32);
    BYTE2(v47) &= ~0x20u;
    *(_DWORD *)(a1 + 32) = v47;
  }
  if ( !(unsigned __int16)*(_DWORD *)(a1 + 32) )
    MiBadRefCount(a1, a2, a3);
  HIWORD(v48) = HIWORD(*(_DWORD *)(a1 + 32));
  v11 = *(_DWORD *)(a1 + 32) - 1;
  LOWORD(v48) = v11;
  *(_DWORD *)(a1 + 32) = v48;
  if ( !v11 && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
  {
LABEL_56:
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
        v49 = *(_DWORD *)(a1 + 32);
        HIBYTE(v49) &= ~0x10u;
        *(_DWORD *)(a1 + 32) = v49;
      }
      v46 = *(_QWORD *)(a1 + 16);
      if ( (v46 & 0x400) == 0 && ((v46 & 4) != 0 || (v46 & 2) != 0) && v46 )
        MiReleasePageFileInfo(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), v46, 1LL);
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), 2LL);
    }
    else
    {
      v23 = *(_QWORD *)(a1 + 16);
      v24 = a1 + 16;
      if ( a1 + 16 >= 0xFFFFF6FB7DBED000uLL
        && v24 <= 0xFFFFF6FB7DBED7F8uLL
        && (v23 & 1) != 0
        && ((v23 & 0x42) == 0 || (v23 & 0x20) == 0) )
      {
        v34 = MiPteHasShadow();
        if ( v34 )
        {
          KernelWaitTime = v34[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v36 = *(_QWORD *)(KernelWaitTime + 8 * ((v24 >> 3) & 0x1FF));
            if ( (v36 & 0x20) != 0 )
              v23 |= 0x20uLL;
            v37 = v23;
            v23 |= 0x42uLL;
            if ( (v36 & 0x42) == 0 )
              v23 = v37;
          }
        }
      }
      v25 = -9LL;
      if ( (v23 & 0x400) != 0 )
        v25 = -2049LL;
      *(_QWORD *)v24 = v23 & v25;
      if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
        MiInsertPageInList(a1, 8u);
      else
        MiInsertPageInList(a1, 4u);
    }
    goto LABEL_33;
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_33;
  v12 = *(_DWORD *)(a1 + 32);
  v13 = 0;
  v14 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !(_WORD)v12 )
  {
LABEL_28:
    if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
      || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
    {
      v15 = *(_BYTE *)(a1 + 35);
      if ( (v15 & 0x20) != 0 )
      {
        *(_BYTE *)(a1 + 35) = v15 & 0xDF;
        goto LABEL_32;
      }
    }
    v17 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    if ( *(__int64 *)(a1 + 40) < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
      || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
      && (*(_BYTE *)(a1 + 35) & 0x20) != 0
      || !v11 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      v26 = 1LL;
      if ( !*(_QWORD *)(v17 + 16904) )
        goto LABEL_68;
      v38 = (volatile LONG *)(v17 + 16888);
      if ( KeGetCurrentIrql() == 2 )
      {
        v50 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v38);
      }
      else
      {
        v50 = ExAcquireSpinLockExclusive(v38);
      }
      v26 = MiRestockOverCommit(v17, 1LL);
      MiReleaseSpinLockExclusive(v17 + 16888, v50);
      if ( v26 )
      {
LABEL_68:
        if ( (ULONG *)v17 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
          for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v26) <= 0x100; i = v29 )
          {
            v29 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v26, i);
            if ( v29 == i )
            {
              v18 = 1LL;
              goto LABEL_43;
            }
          }
        }
        _InterlockedAdd64((volatile signed __int64 *)(v17 + 19328), -v26);
        v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 19264), -v26);
        v31 = *(_QWORD *)(v17 + 16864);
        v32 = *(_QWORD *)(v17 + 16856);
        v33 = v30 - v26;
        if ( v30 - v26 > v30 )
        {
          if ( v33 >= v31 && v30 < v31 || v33 >= v32 && v30 < v32 )
          {
LABEL_144:
            v45 = (volatile LONG *)(v17 + 16888);
            if ( KeGetCurrentIrql() == 2 )
            {
              v39 = 17;
              ExAcquireSpinLockExclusiveAtDpcLevel(v45);
            }
            else
            {
              v39 = ExAcquireSpinLockExclusive(v45);
            }
            v40 = *(_QWORD *)(v17 + 19264);
            if ( v40 < *(_QWORD *)(v17 + 16856) )
            {
              v43 = *(struct _KEVENT **)(v17 + 296);
              if ( !v43->Header.SignalState )
                KeSetEvent(v43, 0, 0);
              v44 = *(struct _KEVENT **)(v17 + 304);
              if ( v44->Header.SignalState != 1 )
                goto LABEL_138;
              KeResetEvent(v44);
              v42 = *(struct _KEVENT **)(v17 + 312);
            }
            else
            {
              v41 = *(struct _KEVENT **)(v17 + 304);
              if ( v40 >= *(_QWORD *)(v17 + 16864) )
              {
                if ( !v41->Header.SignalState )
                  KeSetEvent(v41, 0, 0);
                if ( *(_QWORD *)(v17 + 19608) == *(_QWORD *)(v17 + 16840) )
                  KeSetEvent(*(PRKEVENT *)(v17 + 312), 0, 0);
                v42 = *(struct _KEVENT **)(v17 + 296);
                if ( v42->Header.SignalState != 1 )
                  goto LABEL_138;
              }
              else
              {
                if ( v41->Header.SignalState == 1 )
                {
                  KeResetEvent(v41);
                  KeResetEvent(*(PRKEVENT *)(v17 + 312));
                }
                v42 = *(struct _KEVENT **)(v17 + 296);
                if ( v42->Header.SignalState != 1 )
                  goto LABEL_138;
              }
            }
            KeResetEvent(v42);
LABEL_138:
            MiReleaseSpinLockExclusive(v17 + 16888, v39);
          }
        }
        else if ( v30 >= v31 && v33 < v31 || v30 >= v32 && v33 < v32 )
        {
          goto LABEL_144;
        }
      }
    }
    v18 = 1LL;
    if ( (ULONG *)v17 == &MiSystemPartition )
    {
LABEL_43:
      v19 = KeGetCurrentPrcb();
      CachedResidentAvailable = v19->CachedResidentAvailable;
      if ( CachedResidentAvailable == -1 )
      {
        v18 = 1LL;
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
          v18 = CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v18 )
        {
LABEL_32:
          if ( v11 )
            goto LABEL_33;
          goto LABEL_56;
        }
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(v17 + 18752), v18);
    goto LABEL_32;
  }
  if ( (_WORD)v12 != 1 )
  {
    if ( (_WORD)v12 != 2 || !v14 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
      goto LABEL_33;
    goto LABEL_28;
  }
  if ( v14 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
    v13 = 1;
  if ( v13 )
    goto LABEL_28;
LABEL_33:
  if ( v6 )
    *(_DWORD *)(v6 + 16) = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v3 <= 1u )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v3);
    __writecr8(v3);
  }
  return result;
}
