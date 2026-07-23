/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x14029C130
 * Callers:
 *     MiUnlockCodePage @ 0x140203B44 (MiUnlockCodePage.c)
 *     MiProbeLockFrame @ 0x140238050 (MiProbeLockFrame.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiHardFaultPageRelease @ 0x140258B7C (MiHardFaultPageRelease.c)
 *     MiMakeFaultPfnActive @ 0x14025A13C (MiMakeFaultPfnActive.c)
 *     MiProbeUnlockPage @ 0x140299FB0 (MiProbeUnlockPage.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140347E90 (MiReturnPfnReferenceCountAtDpc.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiUnlockPagedAddress @ 0x1403EE6C4 (MiUnlockPagedAddress.c)
 *     MiInitializeImageProtos @ 0x1403F26E0 (MiInitializeImageProtos.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiHandleCollidedFault @ 0x140426D4C (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14043A2FC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDoubleUnlockMdlPage @ 0x14044022C (MiDoubleUnlockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x14044A580 (MiMirrorPerformBrownWrites.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047AADC (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 *     MiFinalizeImageHeaderPage @ 0x1404998B8 (MiFinalizeImageHeaderPage.c)
 *     MiFinishLastForkPageTable @ 0x1404A345C (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1404C3800 (MiLockDownWorkingSet.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140680F28 (MmDbgMarkPfnModifiedWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiBadRefCount @ 0x14029D568 (MiBadRefCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRestockOverCommit @ 0x14042CEF4 (MiRestockOverCommit.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int16 v5; // di
  int v6; // edx
  int v7; // ecx
  __int64 v8; // rax
  char v9; // al
  __int64 v11; // rsi
  struct _KPRCB *v12; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v14; // zf
  signed __int32 v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  __int64 i; // rdx
  signed __int32 v22; // eax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 HasShadow; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  volatile LONG *v32; // rcx
  KIRQL v33; // r12
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  struct _KEVENT *v36; // rcx
  struct _KEVENT *v37; // rcx
  struct _KEVENT *v38; // rcx
  KIRQL v39; // bp
  volatile LONG *v40; // rcx
  int v41; // [rsp+70h] [rbp+8h]
  int v42; // [rsp+70h] [rbp+8h]
  unsigned __int64 v43; // [rsp+78h] [rbp+10h]

  v4 = a1;
  if ( !(unsigned __int16)*(_DWORD *)(a1 + 32) )
    MiBadRefCount(a1, a2, a3);
  HIWORD(v41) = HIWORD(*(_DWORD *)(a1 + 32));
  v5 = *(_DWORD *)(a1 + 32) - 1;
  LOWORD(v41) = v5;
  *(_DWORD *)(a1 + 32) = v41;
  if ( v5 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
  {
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
      return 0LL;
    v6 = *(_DWORD *)(a1 + 32);
    v7 = 0;
    v8 = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (_WORD)v6 )
    {
      if ( (_WORD)v6 == 1 )
      {
        if ( v8 || (*(_BYTE *)(v4 + 34) & 8) != 0 )
          v7 = 1;
        if ( !v7 )
          return 0LL;
      }
      else if ( (_WORD)v6 != 2 || !v8 || (*(_BYTE *)(v4 + 34) & 8) == 0 )
      {
        return 0LL;
      }
    }
    a4 = 0xFFFFF68000000000uLL;
    if ( (*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
      || (*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
    {
      v9 = *(_BYTE *)(v4 + 35);
      if ( (v9 & 0x20) != 0 )
      {
        *(_BYTE *)(v4 + 35) = v9 & 0xDF;
        goto LABEL_15;
      }
    }
    v11 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
    if ( *(__int64 *)(v4 + 40) < 0 && (*(_DWORD *)(v4 + 16) & 0x400LL) != 0
      || (*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
      && (*(_BYTE *)(v4 + 35) & 0x20) != 0
      || !v5 && (*(_QWORD *)(v4 + 24) & 0x4000000000000000LL) != 0 )
    {
      v19 = 1LL;
      if ( !*(_QWORD *)(v11 + 16904) )
        goto LABEL_47;
      v32 = (volatile LONG *)(v11 + 16888);
      if ( KeGetCurrentIrql() == 2 )
      {
        v33 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v32);
      }
      else
      {
        v33 = ExAcquireSpinLockExclusive(v32);
      }
      v19 = MiRestockOverCommit(v11, 1LL);
      MiReleaseSpinLockExclusive(v11 + 16888, v33);
      if ( v19 )
      {
LABEL_47:
        if ( (ULONG *)v11 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
          for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v19) <= 0x100; i = v22 )
          {
            v22 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v19, i);
            if ( v22 == i )
            {
              a4 = 1LL;
              goto LABEL_23;
            }
          }
        }
        _InterlockedAdd64((volatile signed __int64 *)(v11 + 19328), -v19);
        v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 19264), -v19);
        v24 = *(_QWORD *)(v11 + 16864);
        v25 = *(_QWORD *)(v11 + 16856);
        v26 = v23 - v19;
        if ( v23 - v19 > v23 )
        {
          if ( v26 >= v24 && v23 < v24 || v26 >= v25 && v23 < v25 )
          {
LABEL_112:
            v40 = (volatile LONG *)(v11 + 16888);
            if ( KeGetCurrentIrql() == 2 )
            {
              v39 = 17;
              ExAcquireSpinLockExclusiveAtDpcLevel(v40);
            }
            else
            {
              v39 = ExAcquireSpinLockExclusive(v40);
            }
            v34 = *(_QWORD *)(v11 + 19264);
            if ( v34 < *(_QWORD *)(v11 + 16856) )
            {
              v37 = *(struct _KEVENT **)(v11 + 296);
              if ( !v37->Header.SignalState )
                KeSetEvent(v37, 0, 0);
              v38 = *(struct _KEVENT **)(v11 + 304);
              if ( v38->Header.SignalState != 1 )
                goto LABEL_105;
              KeResetEvent(v38);
              v36 = *(struct _KEVENT **)(v11 + 312);
            }
            else
            {
              v35 = *(_QWORD *)(v11 + 304);
              if ( v34 >= *(_QWORD *)(v11 + 16864) )
              {
                if ( !*(_DWORD *)(v35 + 4) )
                  KeSetEvent(*(PRKEVENT *)(v11 + 304), 0, 0);
                if ( *(_QWORD *)(v11 + 19608) == *(_QWORD *)(v11 + 16840) )
                  KeSetEvent(*(PRKEVENT *)(v11 + 312), 0, 0);
                v36 = *(struct _KEVENT **)(v11 + 296);
                if ( v36->Header.SignalState != 1 )
                  goto LABEL_105;
              }
              else
              {
                if ( *(_DWORD *)(v35 + 4) == 1 )
                {
                  KeResetEvent(*(PRKEVENT *)(v11 + 304));
                  KeResetEvent(*(PRKEVENT *)(v11 + 312));
                }
                v36 = *(struct _KEVENT **)(v11 + 296);
                if ( v36->Header.SignalState != 1 )
                  goto LABEL_105;
              }
            }
            KeResetEvent(v36);
LABEL_105:
            MiReleaseSpinLockExclusive(v11 + 16888, v39);
          }
        }
        else if ( v23 >= v24 && v26 < v24 || v23 >= v25 && v26 < v25 )
        {
          goto LABEL_112;
        }
      }
    }
    a4 = 1LL;
    if ( (ULONG *)v11 == &MiSystemPartition )
    {
LABEL_23:
      v12 = KeGetCurrentPrcb();
      CachedResidentAvailable = v12->CachedResidentAvailable;
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
          v15 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v12->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v14 = CachedResidentAvailable == v15;
          CachedResidentAvailable = v15;
          if ( v14 )
            goto LABEL_15;
        }
        while ( v15 != -1 );
        if ( CachedResidentAvailable > 192
          && CachedResidentAvailable == _InterlockedCompareExchange(
                                          (volatile signed __int32 *)&v12->CachedResidentAvailable,
                                          192,
                                          CachedResidentAvailable) )
        {
          a4 = CachedResidentAvailable - 192 + 1LL;
        }
        if ( !a4 )
        {
LABEL_15:
          if ( !v5 )
          {
            a1 = v4;
            goto LABEL_34;
          }
          return 0LL;
        }
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(v11 + 18752), a4);
    goto LABEL_15;
  }
LABEL_34:
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
    KeBugCheckEx(
      0x4Eu,
      7uLL,
      0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4),
      *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL,
      0LL);
  if ( (*(_QWORD *)(v4 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (*(_BYTE *)(v4 + 35) & 0x10) != 0 && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
    {
      v42 = *(_DWORD *)(v4 + 32);
      HIBYTE(v42) &= ~0x10u;
      *(_DWORD *)(v4 + 32) = v42;
    }
    v31 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    v43 = *(_QWORD *)(v4 + 16);
    if ( (v43 & 0x400) == 0 && ((v43 & 4) != 0 || (v43 & 2) != 0) && v43 )
      MiReleasePageFileInfo(v31, v43, 1LL, a4);
    MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4), 2LL);
    return 1LL;
  }
  v16 = *(_QWORD *)(v4 + 16);
  v17 = v4 + 16;
  if ( (unsigned __int64)(v4 + 16) >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL && (v16 & 1) != 0 )
  {
    LOBYTE(a1) = (v16 & 0x42) != 0;
    if ( ((unsigned __int8)a1 & ((v16 & 0x20) != 0)) == 0 )
    {
      HasShadow = MiPteHasShadow(a1, v16, v17, a4);
      if ( HasShadow )
      {
        v28 = *(_QWORD *)(HasShadow + 1288);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 8 * ((v17 >> 3) & 0x1FF));
          if ( (v29 & 0x20) != 0 )
            v16 |= 0x20uLL;
          v30 = v16;
          v16 |= 0x42uLL;
          if ( (v29 & 0x42) == 0 )
            v16 = v30;
        }
      }
    }
  }
  v18 = -9LL;
  if ( (v16 & 0x400) != 0 )
    v18 = -2049LL;
  *(_QWORD *)v17 = v16 & v18;
  if ( (*(_BYTE *)(v4 + 34) & 0x10) != 0 )
  {
    MiInsertPageInList(v4, 8LL);
    return 1LL;
  }
  MiInsertPageInList(v4, 4LL);
  return 1LL;
}
