/*
 * XREFs of MiInsertPageInList @ 0x140300420
 * Callers:
 *     MiDecommitFreePage @ 0x1402068E0 (MiDecommitFreePage.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x14024D700 (MiPfnShareCountIsZero.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiCreateDecayPfn @ 0x1402FE8EC (MiCreateDecayPfn.c)
 *     MiRelinkStandbyPage @ 0x140300158 (MiRelinkStandbyPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiRelinkTransitionSlabPages @ 0x14043C4D4 (MiRelinkTransitionSlabPages.c)
 *     MiFreeModifiedReservations @ 0x1404F676C (MiFreeModifiedReservations.c)
 *     MiReturnBadPagesToBadList @ 0x140675644 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067C654 (MiMarkFileOnlyPfnBad.c)
 *     MiRepointPteAtExtendedStandby @ 0x140685FA4 (MiRepointPteAtExtendedStandby.c)
 *     MiMoveBadPagePartition @ 0x14068C184 (MiMoveBadPagePartition.c)
 *     MiMoveModifiedPagesToCompressList @ 0x14068CE38 (MiMoveModifiedPagesToCompressList.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiLockPageListAndLastPage @ 0x140219C30 (MiLockPageListAndLastPage.c)
 *     MiInsertSecondaryListStandbyPage @ 0x140224720 (MiInsertSecondaryListStandbyPage.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiWakeModifiedPageWriter @ 0x140261468 (MiWakeModifiedPageWriter.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x140261770 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiDetermineModifiedPageListHead @ 0x140300F80 (MiDetermineModifiedPageListHead.c)
 *     MiInsertDecayClusterTimer @ 0x140301274 (MiInsertDecayClusterTimer.c)
 *     MiSynchronizeFastPageInsert @ 0x140301300 (MiSynchronizeFastPageInsert.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1403E2544 (MiGetSlabRepurposedStandbyListWorker.c)
 *     MiRebuildStandbyLookasideList @ 0x1403E73E0 (MiRebuildStandbyLookasideList.c)
 *     MiIsStandbyPageCorrupted @ 0x140423260 (MiIsStandbyPageCorrupted.c)
 *     MiGetEnclavePageList @ 0x14049FC58 (MiGetEnclavePageList.c)
 *     MiWakeFileOnlyReaper @ 0x1404C87B0 (MiWakeFileOnlyReaper.c)
 *     MiBadPageInserted @ 0x1404CCDF4 (MiBadPageInserted.c)
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiInsertPageInList(ULONG_PTR a1, unsigned int a2)
{
  unsigned int v2; // r14d
  ULONG_PTR v4; // r12
  unsigned int v5; // ebx
  ULONG *v6; // r13
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // cf
  int PfnSlabType; // r15d
  __int64 *EnclavePageList; // r15
  int v12; // r14d
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r9d
  unsigned int v21; // eax
  _QWORD *v22; // rcx
  unsigned int v23; // r9d
  _QWORD *v24; // rsi
  unsigned int v25; // ecx
  __int64 i; // r11
  __int64 v27; // rcx
  ULONG_PTR *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // r15d
  char v32; // cl
  volatile signed __int32 *v33; // rcx
  unsigned int PfnPriority; // eax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r11
  int v38; // ecx
  __int64 v39; // r10
  int v40; // eax
  __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // rax
  volatile LONG *v44; // rsi
  char *v45; // rsi
  _QWORD *v46; // r8
  __int64 v47; // rsi
  __int64 v48; // rsi
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rsi
  bool v52; // sf
  volatile signed __int64 *v53; // rax
  _QWORD *v54; // r8
  __int64 v55; // rsi
  struct _KEVENT *v56; // rsi
  signed __int32 v57[8]; // [rsp+0h] [rbp-108h] BYREF
  int v58; // [rsp+30h] [rbp-D8h]
  int v59; // [rsp+34h] [rbp-D4h]
  int v60; // [rsp+38h] [rbp-D0h]
  __int64 *v61; // [rsp+40h] [rbp-C8h]
  _QWORD *v62; // [rsp+48h] [rbp-C0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+50h] [rbp-B8h]
  _BYTE v64[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int8 v65; // [rsp+62h] [rbp-A6h]
  __int64 v66; // [rsp+68h] [rbp-A0h]
  __int64 v67; // [rsp+70h] [rbp-98h]
  char v68; // [rsp+78h] [rbp-90h]
  __int64 v69; // [rsp+80h] [rbp-88h]
  __int64 v70; // [rsp+88h] [rbp-80h]
  char v71; // [rsp+90h] [rbp-78h]
  __int64 v72; // [rsp+A0h] [rbp-68h]
  char v73; // [rsp+A8h] [rbp-60h]
  __int64 v74; // [rsp+B8h] [rbp-50h]
  char v75; // [rsp+C0h] [rbp-48h]
  __int64 retaddr; // [rsp+108h] [rbp+0h]

  v2 = a2;
  v59 = a2;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  while ( 1 )
  {
    v5 = 0;
    v6 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    memset_0(v64, 0, 0x68uLL);
    v9 = _bittest64((const signed __int64 *)(a1 + 40), 0x35u);
    PfnSlabType = 9;
    v60 = 9;
    if ( v9 )
    {
      v5 = 1;
    }
    else if ( v4 >= qword_140E35C40 && v4 < qword_140E35C40 + 2048 )
    {
      v5 = 4;
    }
    else
    {
      PfnSlabType = MiGetPfnSlabType(a1);
      v60 = PfnSlabType;
    }
    if ( (v5 & 1) != 0 && (v2 & 8) != 0 && byte_140E2DC80 )
    {
      v2 = v2 & 0xFFFFFFF3 | 4;
      v59 = v2;
      MiSetPfnModified(a1, 0);
    }
    if ( (v2 & 4) != 0 )
    {
      EnclavePageList = (__int64 *)(v6 + 784);
    }
    else if ( (v2 & 8) != 0 )
    {
      EnclavePageList = (__int64 *)(v6 + 4848);
    }
    else if ( (v2 & 0x10) != 0 )
    {
      EnclavePageList = (__int64 *)(v6 + 4880);
    }
    else if ( (v2 & 0x100) != 0 )
    {
      EnclavePageList = (__int64 *)MiGetEnclavePageList(v6, v4);
    }
    else if ( (v2 & 0x800) != 0 )
    {
      v48 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      v49 = MI_NODE_FROM_PFN(a1);
      EnclavePageList = (__int64 *)MiGetSlabRepurposedStandbyListWorker(
                                     232LL * PfnSlabType + 57216LL * v49 + *(_QWORD *)(v48 + 16) + 15696LL,
                                     a1);
      if ( EnclavePageList == (__int64 *)-1LL )
        goto LABEL_103;
    }
    else
    {
      EnclavePageList = (__int64 *)(v6 + 1760);
    }
    if ( (v5 & 1) != 0 && ((*(_DWORD *)(a1 + 32) & 0x40000000) != 0 || (*(_DWORD *)(a1 + 32) & 0x10000000) != 0) )
    {
      v12 = dword_140E2D69C;
      EnclavePageList = &qword_140E2D690;
      v61 = &qword_140E2D690;
      v62 = 0LL;
      v6 = &MiSystemPartition;
      v58 = dword_140E2D69C;
    }
    else
    {
      v12 = *((_DWORD *)EnclavePageList + 3);
      v58 = v12;
      v61 = EnclavePageList;
      v62 = 0LL;
      if ( (v5 & 1) == 0 )
      {
        _InterlockedOr(v57, 0);
        *(_QWORD *)(a1 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
      }
    }
    if ( v12 != 2 )
      break;
    if ( (*(_DWORD *)(a1 + 32) & 0x40000000) == 0 || v60 != 9 )
    {
      if ( (dword_140FC5200 & 2) != 0
        && v5 < 4
        && v60 == 9
        && (v6[1] & 0x80u) == 0
        && (*(_DWORD *)(a1 + 16) & 0x400LL) == 0
        && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(a1 + 16))
        && (*(_DWORD *)(a1 + 32) & 0x40000000) == 0
        && (MiGetPagePrivilege(a1, 1, 0LL) & 0x10) == 0
        && (unsigned int)MiIsStandbyPageCorrupted(v4) )
      {
        LODWORD(v61) = *(_DWORD *)(a1 + 32);
        BYTE2(v61) = BYTE2(v61) & 0xF8 | 2;
        *(_DWORD *)(a1 + 32) = (_DWORD)v61;
LABEL_103:
        MiRestoreTransitionPte(a1, 0);
        MiInsertPageInFreeOrZeroedList(v4, 2LL);
        return;
      }
      if ( (v5 & 1) != 0 )
      {
        LODWORD(v61) = *(_DWORD *)(a1 + 32);
        BYTE2(v61) = BYTE2(v61) & 0xF8 | 2;
        *(_DWORD *)(a1 + 32) = (_DWORD)v61;
        return;
      }
      PfnPriority = MiGetPfnPriority(a1);
      v38 = v60;
      v39 = PfnPriority;
      v40 = v59 & 0x800;
      LODWORD(v61) = v40;
      if ( (v59 & 0x800) == 0 )
      {
        EnclavePageList = (__int64 *)&v6[22 * v39 + 816];
        if ( v5 < 4 && v60 == 9 )
        {
          v41 = 1LL;
          v42 = 1;
          v43 = 1808LL;
          v35 = 16320LL;
          if ( *(__int64 *)(a1 + 40) >= 0 )
            v42 = v37;
          if ( !v42 )
            v43 = 4080LL;
          _InterlockedIncrement64((volatile signed __int64 *)&v6[v43]);
          v44 = (volatile LONG *)_InterlockedIncrement64((volatile signed __int64 *)v6 + 2336);
          SpinLock = v44;
          if ( (unsigned __int64)v44 <= 0x420 )
          {
            if ( v44 != (volatile LONG *)160 )
            {
              if ( v44 == (volatile LONG *)1056 )
              {
                v41 = 2LL;
              }
              else
              {
                if ( v44 != (volatile LONG *)34 )
                {
                  if ( v44 == (volatile LONG *)288 )
                    MiSlabDemotionLowMemoryConditionUpdate((__int64)v6, 1);
                  goto LABEL_80;
                }
                v41 = v37;
              }
            }
            v56 = (struct _KEVENT *)&v6[8 * v41];
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 4048);
            KeSetEvent(v56 + 675, 0, 0);
            ++v56[676].Header.LockNV;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 + 4048);
            v12 = v58;
            v44 = SpinLock;
          }
LABEL_80:
          v45 = (char *)v44 - 1;
          if ( v45 == *((char **)v6 + 2080) || v45 == *((char **)v6 + 2081) )
            MiUpdateAvailableEventsAtDpc((__int64)v6);
          v38 = v60;
          v40 = (int)v61;
        }
      }
      v61 = EnclavePageList;
      if ( (v59 & 0x80u) == 0 )
      {
        if ( v38 < 9 && v40 )
        {
          MiLockPageListAndLastPage((__int64)EnclavePageList, (__int64)v64, v35, v36);
        }
        else
        {
          MiSynchronizeFastPageInsert((_DWORD)v6, (_DWORD)EnclavePageList, a1, v38, 0LL, (__int64)v64);
          if ( !v64[0] && v65 != 3 )
            MiRebuildStandbyLookasideList(a1, v65, v64[1]);
        }
      }
      goto LABEL_32;
    }
    MiRestoreTransitionPte(a1, 0);
    v2 = 32;
    v59 = 32;
  }
  if ( v12 == 3 )
  {
    if ( *(__int64 *)(a1 + 40) >= 0 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 2040);
    else
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 904);
  }
  else
  {
    if ( v12 != 4 )
    {
      if ( EnclavePageList != &qword_140E2D690 && (*(_DWORD *)(a1 + 32) & 0x40000000) != 0 )
        MiSetPfnRemovalRequested(a1, 0LL, 1LL);
      if ( (v59 & 0x100) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)EnclavePageList + 8);
        *(_QWORD *)(a1 + 8) = -8LL;
      }
      else if ( EnclavePageList == &qword_140E2D690 )
      {
        v61 = (__int64 *)(v6 + 1760);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 1768);
      }
      else
      {
        MiClearPfnImageVerified(a1, 12LL, v7, v8);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 1768);
        *(_QWORD *)(a1 + 8) = -4LL;
        v61 = (__int64 *)(v6 + 1760);
        if ( v6 == &MiSystemPartition )
        {
          MiBadPageInserted(1LL);
        }
        else
        {
          v5 |= 8u;
          v61 = (__int64 *)(v6 + 1760);
        }
      }
      goto LABEL_32;
    }
    v50 = *(_QWORD *)(a1 + 16);
    if ( qword_140E2DCC0 && (v50 & 0x10) == 0 )
      v50 &= ~qword_140E2DCC0;
    v51 = *(_QWORD *)(v50 >> 16);
    v52 = *(__int64 *)(a1 + 40) < 0;
    v62 = (_QWORD *)v51;
    v53 = (volatile signed __int64 *)(v6 + 4080);
    if ( v52 )
      v53 = (volatile signed __int64 *)(v6 + 1808);
    _InterlockedIncrement64(v53);
    SpinLock = (PEX_SPIN_LOCK)(EnclavePageList + 4);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)EnclavePageList + 8);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v51 + 72));
    if ( (*(_DWORD *)(v51 + 56) & 8) != 0 )
      goto LABEL_32;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v51 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    v12 = 3;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v6 + 2424);
  v13 = *(_DWORD *)(a1 + 16);
  v58 = v59 & 0x80;
  if ( (v13 & 0x400) != 0 )
  {
    v47 = *(unsigned int *)(*((_QWORD *)v6 + 2200) + 24LL);
    EnclavePageList = (__int64 *)&v6[22 * v47 + 1408];
    if ( (v59 & 0x80) == 0 )
      MiLockPageListAndLastPage((__int64)&v6[22 * v47 + 1408], (__int64)v64, v7, v8);
    v17 = (__int64 *)(v6 + 4904);
    *(_BYTE *)(a1 + 36) ^= (*(_BYTE *)(a1 + 36) ^ v47) & 0xF;
  }
  else
  {
    v14 = MiDetermineModifiedPageListHead(a1, v6, (v59 & 0x80) == 0);
    EnclavePageList = (__int64 *)v14;
    if ( !v58 )
      MiLockPageListAndLastPage(v14, (__int64)v64, v15, v16);
    if ( !*EnclavePageList )
      v5 |= 2u;
    v17 = (__int64 *)(v6 + 4904);
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 2452);
  }
  _InterlockedIncrement((volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].AvailableCpuState);
  v18 = *((_QWORD *)v6 + 2336);
  if ( v18 < 0x420 )
  {
    v19 = *((_QWORD *)v6 + 2);
    v20 = (unsigned __int16)KeNumberNodes;
    v58 = dword_140E2DD0C;
    v21 = 0;
    v22 = (_QWORD *)(v19 + 14944);
    LODWORD(v61) = (unsigned __int16)KeNumberNodes;
    while ( 1 )
    {
      v62 = v22;
      if ( v21 >= v20 )
        break;
      v23 = 0;
      v24 = v22;
      v25 = v58;
      for ( i = 0LL; i <= 1; ++i )
      {
        while ( v23 < v25 )
        {
          v18 += *(unsigned __int16 *)(*v24 + 16LL * v23);
          if ( v18 >= 0x420 )
            goto LABEL_31;
          v25 = v58;
          ++v23;
        }
        ++v24;
        v23 = 0;
      }
      v20 = (unsigned int)v61;
      v22 = v62 + 7152;
      ++v21;
    }
    v55 = *v17;
    if ( (unsigned __int64)*v17 >= 0x10 )
      MiWakeModifiedPageWriter((__int64)v6, -1LL);
    if ( (unsigned __int64)(*((_QWORD *)v6 + 2424) - v55) >= 0x10 )
      KeSetEvent((PRKEVENT)v6 + 35, 0, 0);
  }
LABEL_31:
  v62 = 0LL;
  v61 = EnclavePageList;
LABEL_32:
  if ( (v5 & 4) != 0 )
  {
    MiInsertDecayClusterTimer(a1);
  }
  else if ( v60 == 9 || (v59 & 0x800) != 0 || v12 != 2 )
  {
    _InterlockedIncrement64(EnclavePageList);
  }
  if ( v64[0] )
  {
    v27 = v66;
    v28 = (ULONG_PTR *)v67;
    v29 = v69;
    v30 = v70;
  }
  else
  {
    v27 = EnclavePageList[3];
    v28 = (ULONG_PTR *)(48 * v27 - 0x220000000000LL);
    v29 = 0x3FFFFFFFFFLL;
    v30 = 0LL;
  }
  if ( v27 == 0x3FFFFFFFFFLL )
    EnclavePageList[2] = v4;
  else
    *v28 = v4 ^ (v4 ^ *v28) & 0xFFFFFF0000000000uLL;
  *(_QWORD *)a1 = v29 ^ (v29 ^ *(_QWORD *)a1) & 0xFFFFFF0000000000uLL;
  *(_QWORD *)(a1 + 24) = v27 ^ (v27 ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFF0000000000uLL;
  if ( v29 == 0x3FFFFFFFFFLL )
    EnclavePageList[3] = v4;
  else
    *(_QWORD *)(v30 + 24) = v4 ^ (*(_QWORD *)(v30 + 24) ^ v4) & 0xFFFFFF0000000000uLL;
  v58 = *(_DWORD *)(a1 + 32);
  if ( EnclavePageList == &qword_140E2D690 )
  {
    BYTE2(v58) = BYTE2(v58) & 0xF8 | 2;
    *(_DWORD *)(a1 + 32) = v58;
    v58 = *(_DWORD *)(a1 + 32);
    HIBYTE(v58) |= 0x10u;
    *(_DWORD *)(a1 + 32) = v58;
    MiWakeFileOnlyReaper();
  }
  else
  {
    BYTE2(v58) ^= (BYTE2(v58) ^ v12) & 7;
    *(_DWORD *)(a1 + 32) = v58;
  }
  v31 = v60;
  if ( v12 == 2 )
  {
    if ( v60 < 9 )
    {
      v32 = v59;
      if ( (v59 & 0x800) != 0 )
      {
        v58 = *(_DWORD *)(a1 + 32);
        HIBYTE(v58) |= 8u;
        *(_DWORD *)(a1 + 32) = v58;
      }
      else
      {
        v54 = v64;
        if ( !v64[0] )
          v54 = 0LL;
        MiInsertSecondaryListStandbyPage(a1, v60, v54);
        v32 = v59;
      }
    }
    else
    {
      if ( (v5 & 4) == 0 )
      {
        v46 = v64;
        if ( !v64[0] )
          v46 = 0LL;
        MiInsertSecondaryListStandbyPage(a1, 9, v46);
      }
      v32 = v59;
    }
  }
  else
  {
    v32 = v59;
  }
  if ( v62 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v62 + 18);
    v32 = v59;
  }
  if ( v64[0] )
  {
    if ( v68 )
      _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v71 )
      _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v73 )
      _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v75 )
      _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v33 = (volatile signed __int32 *)(v61 + 4);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v33, 0xBFFFFFFF);
      _InterlockedDecrement(v33);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v33, retaddr);
    }
  }
  else if ( v32 >= 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v61 + 8);
  }
  if ( v12 <= 4 && v31 == 9 && (v5 & 5) == 0 )
    MiUpdateLargePageCandidateValue((__int64)v6, v4, 3, 3, 0LL);
  if ( (v5 & 2) != 0 )
    KeSetEvent((PRKEVENT)(v6 + 232), 0, 0);
  if ( v5 >= 8 )
    MiBadPageInserted(0LL);
}
