/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x14028C530
 * Callers:
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiHandleCollidedFault @ 0x14023B504 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiProbeLockFrame @ 0x140282AC0 (MiProbeLockFrame.c)
 *     MiProbeUnlockPage @ 0x14028A3B0 (MiProbeUnlockPage.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiUnlockCodePage @ 0x1402C7618 (MiUnlockCodePage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402C86D0 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x1402E6850 (MiReturnPfnReferenceCountAtDpc.c)
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiHardFaultPageRelease @ 0x1402F303C (MiHardFaultPageRelease.c)
 *     MiInitializeImageProtos @ 0x140313060 (MiInitializeImageProtos.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiUnlockPagedAddress @ 0x1403F85B4 (MiUnlockPagedAddress.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiDoubleUnlockMdlPage @ 0x140447B0C (MiDoubleUnlockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x140455840 (MiMirrorPerformBrownWrites.c)
 *     MiMakeFaultPfnActive @ 0x140462FB4 (MiMakeFaultPfnActive.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047FE9C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiJumpStackTarget @ 0x140480E20 (MiJumpStackTarget.c)
 *     MiFinalizeImageHeaderPage @ 0x14049EAB8 (MiFinalizeImageHeaderPage.c)
 *     MiFinishLastForkPageTable @ 0x1404A903C (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1404CA2DC (MiLockDownWorkingSet.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14067FD28 (MmDbgMarkPfnModifiedWorker.c)
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
 *     MiRestockOverCommit @ 0x14043A6C0 (MiRestockOverCommit.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rbx
  __int16 v4; // di
  int v5; // edx
  int v6; // ecx
  __int64 v7; // rax
  char v8; // al
  __int64 v10; // rsi
  unsigned __int64 v11; // r9
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
  _KPROCESS *v27; // rax
  unsigned __int64 KernelWaitTime; // rcx
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

  v3 = a1;
  if ( !(unsigned __int16)*(_DWORD *)(a1 + 32) )
    MiBadRefCount(a1, a2, a3);
  HIWORD(v41) = HIWORD(*(_DWORD *)(a1 + 32));
  v4 = *(_DWORD *)(a1 + 32) - 1;
  LOWORD(v41) = v4;
  *(_DWORD *)(a1 + 32) = v41;
  if ( v4 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
  {
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
      return 0LL;
    v5 = *(_DWORD *)(a1 + 32);
    v6 = 0;
    v7 = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (_WORD)v5 )
    {
      if ( (_WORD)v5 == 1 )
      {
        if ( v7 || (*(_BYTE *)(v3 + 34) & 8) != 0 )
          v6 = 1;
        if ( !v6 )
          return 0LL;
      }
      else if ( (_WORD)v5 != 2 || !v7 || (*(_BYTE *)(v3 + 34) & 8) == 0 )
      {
        return 0LL;
      }
    }
    if ( (*(_QWORD *)(v3 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
      || (*(_QWORD *)(v3 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
    {
      v8 = *(_BYTE *)(v3 + 35);
      if ( (v8 & 0x20) != 0 )
      {
        *(_BYTE *)(v3 + 35) = v8 & 0xDF;
        goto LABEL_15;
      }
    }
    v10 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
    if ( *(__int64 *)(v3 + 40) < 0 && (*(_DWORD *)(v3 + 16) & 0x400LL) != 0
      || (*(_QWORD *)(v3 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v3 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
      && (*(_BYTE *)(v3 + 35) & 0x20) != 0
      || !v4 && (*(_QWORD *)(v3 + 24) & 0x4000000000000000LL) != 0 )
    {
      v19 = 1LL;
      if ( !*(_QWORD *)(v10 + 16904) )
        goto LABEL_47;
      v32 = (volatile LONG *)(v10 + 16888);
      if ( KeGetCurrentIrql() == 2 )
      {
        v33 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v32);
      }
      else
      {
        v33 = ExAcquireSpinLockExclusive(v32);
      }
      v19 = MiRestockOverCommit(v10, 1LL);
      MiReleaseSpinLockExclusive(v10 + 16888, v33);
      if ( v19 )
      {
LABEL_47:
        if ( (ULONG *)v10 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
          for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v19) <= 0x100; i = v22 )
          {
            v22 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v19, i);
            if ( v22 == i )
            {
              v11 = 1LL;
              goto LABEL_23;
            }
          }
        }
        _InterlockedAdd64((volatile signed __int64 *)(v10 + 19328), -v19);
        v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 19264), -v19);
        v24 = *(_QWORD *)(v10 + 16864);
        v25 = *(_QWORD *)(v10 + 16856);
        v26 = v23 - v19;
        if ( v23 - v19 > v23 )
        {
          if ( v26 >= v24 && v23 < v24 || v26 >= v25 && v23 < v25 )
          {
LABEL_112:
            v40 = (volatile LONG *)(v10 + 16888);
            if ( KeGetCurrentIrql() == 2 )
            {
              v39 = 17;
              ExAcquireSpinLockExclusiveAtDpcLevel(v40);
            }
            else
            {
              v39 = ExAcquireSpinLockExclusive(v40);
            }
            v34 = *(_QWORD *)(v10 + 19264);
            if ( v34 < *(_QWORD *)(v10 + 16856) )
            {
              v37 = *(struct _KEVENT **)(v10 + 296);
              if ( !v37->Header.SignalState )
                KeSetEvent(v37, 0, 0);
              v38 = *(struct _KEVENT **)(v10 + 304);
              if ( v38->Header.SignalState != 1 )
                goto LABEL_105;
              KeResetEvent(v38);
              v36 = *(struct _KEVENT **)(v10 + 312);
            }
            else
            {
              v35 = *(_QWORD *)(v10 + 304);
              if ( v34 >= *(_QWORD *)(v10 + 16864) )
              {
                if ( !*(_DWORD *)(v35 + 4) )
                  KeSetEvent(*(PRKEVENT *)(v10 + 304), 0, 0);
                if ( *(_QWORD *)(v10 + 19608) == *(_QWORD *)(v10 + 16840) )
                  KeSetEvent(*(PRKEVENT *)(v10 + 312), 0, 0);
                v36 = *(struct _KEVENT **)(v10 + 296);
                if ( v36->Header.SignalState != 1 )
                  goto LABEL_105;
              }
              else
              {
                if ( *(_DWORD *)(v35 + 4) == 1 )
                {
                  KeResetEvent(*(PRKEVENT *)(v10 + 304));
                  KeResetEvent(*(PRKEVENT *)(v10 + 312));
                }
                v36 = *(struct _KEVENT **)(v10 + 296);
                if ( v36->Header.SignalState != 1 )
                  goto LABEL_105;
              }
            }
            KeResetEvent(v36);
LABEL_105:
            MiReleaseSpinLockExclusive(v10 + 16888, v39);
          }
        }
        else if ( v23 >= v24 && v26 < v24 || v23 >= v25 && v26 < v25 )
        {
          goto LABEL_112;
        }
      }
    }
    v11 = 1LL;
    if ( (ULONG *)v10 == &MiSystemPartition )
    {
LABEL_23:
      v12 = KeGetCurrentPrcb();
      CachedResidentAvailable = v12->CachedResidentAvailable;
      if ( CachedResidentAvailable == -1 )
      {
        v11 = 1LL;
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
          v11 = CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v11 )
        {
LABEL_15:
          if ( !v4 )
          {
            a1 = v3;
            goto LABEL_34;
          }
          return 0LL;
        }
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(v10 + 18752), v11);
    goto LABEL_15;
  }
LABEL_34:
  if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
    KeBugCheckEx(
      0x4Eu,
      7uLL,
      0xAAAAAAAAAAAAAAABuLL * ((__int64)(v3 + 0x220000000000LL) >> 4),
      *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL,
      0LL);
  if ( (*(_QWORD *)(v3 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 35) & 0x10) != 0 && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
    {
      v42 = *(_DWORD *)(v3 + 32);
      HIBYTE(v42) &= ~0x10u;
      *(_DWORD *)(v3 + 32) = v42;
    }
    v31 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    v43 = *(_QWORD *)(v3 + 16);
    if ( (v43 & 0x400) == 0 && ((v43 & 4) != 0 || (v43 & 2) != 0) && v43 )
      MiReleasePageFileInfo(v31, v43, 1LL);
    MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v3 + 0x220000000000LL) >> 4), 2LL);
    return 1LL;
  }
  v16 = *(_QWORD *)(v3 + 16);
  v17 = v3 + 16;
  if ( v3 + 16 >= 0xFFFFF6FB7DBED000uLL
    && v17 <= 0xFFFFF6FB7DBED7F8uLL
    && (v16 & 1) != 0
    && ((v16 & 0x42) == 0 || (v16 & 0x20) == 0) )
  {
    v27 = MiPteHasShadow();
    if ( v27 )
    {
      KernelWaitTime = v27[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v29 = *(_QWORD *)(KernelWaitTime + 8 * ((v17 >> 3) & 0x1FF));
        if ( (v29 & 0x20) != 0 )
          v16 |= 0x20uLL;
        v30 = v16;
        v16 |= 0x42uLL;
        if ( (v29 & 0x42) == 0 )
          v16 = v30;
      }
    }
  }
  v18 = -9LL;
  if ( (v16 & 0x400) != 0 )
    v18 = -2049LL;
  *(_QWORD *)v17 = v16 & v18;
  if ( (*(_BYTE *)(v3 + 34) & 0x10) != 0 )
  {
    MiInsertPageInList(v3, 8u);
    return 1LL;
  }
  MiInsertPageInList(v3, 4u);
  return 1LL;
}
