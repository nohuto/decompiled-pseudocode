/*
 * XREFs of MiInsertPageInList @ 0x14022CB10
 * Callers:
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x1402209B0 (MiPfnShareCountIsZero.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiCreateDecayPfn @ 0x14022AFD8 (MiCreateDecayPfn.c)
 *     MiRelinkStandbyPage @ 0x14022C848 (MiRelinkStandbyPage.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiDecommitFreePage @ 0x14023E790 (MiDecommitFreePage.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiOutSwapWorkingSetPte @ 0x140302690 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiRelinkTransitionSlabPages @ 0x14044334C (MiRelinkTransitionSlabPages.c)
 *     MiFreeModifiedReservations @ 0x1404F8E8C (MiFreeModifiedReservations.c)
 *     MiReturnBadPagesToBadList @ 0x140674474 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067B474 (MiMarkFileOnlyPfnBad.c)
 *     MiRepointPteAtExtendedStandby @ 0x140684E78 (MiRepointPteAtExtendedStandby.c)
 *     MiMoveBadPagePartition @ 0x14068B054 (MiMoveBadPagePartition.c)
 *     MiMoveModifiedPagesToCompressList @ 0x14068BD08 (MiMoveModifiedPagesToCompressList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiDetermineModifiedPageListHead @ 0x14022D670 (MiDetermineModifiedPageListHead.c)
 *     MiInsertDecayClusterTimer @ 0x14022D964 (MiInsertDecayClusterTimer.c)
 *     MiSynchronizeFastPageInsert @ 0x14022D9F0 (MiSynchronizeFastPageInsert.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiInsertSecondaryListStandbyPage @ 0x14026F190 (MiInsertSecondaryListStandbyPage.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiUpdateLargePageCandidateValue @ 0x140272210 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiLockPageListAndLastPage @ 0x1402C46F0 (MiLockPageListAndLastPage.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0460 (MiWakeModifiedPageWriter.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1402D1890 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1402D19B0 (MiUpdateAvailableEventsAtDpc.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1403EF5C0 (MiGetSlabRepurposedStandbyListWorker.c)
 *     MiRebuildStandbyLookasideList @ 0x1403F43F0 (MiRebuildStandbyLookasideList.c)
 *     MiGetEnclavePageList @ 0x1404A4EC8 (MiGetEnclavePageList.c)
 *     MiWakeFileOnlyReaper @ 0x1404CF4E8 (MiWakeFileOnlyReaper.c)
 *     MiBadPageInserted @ 0x1404D3BF0 (MiBadPageInserted.c)
 *     MiIsStandbyPageCorrupted @ 0x1404D4DBC (MiIsStandbyPageCorrupted.c)
 *     MiSetPfnRemovalRequested @ 0x1406745D0 (MiSetPfnRemovalRequested.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall MiInsertPageInList(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // r14d
  ULONG_PTR v4; // r12
  unsigned int v5; // ebx
  ULONG *v6; // r13
  unsigned __int8 v7; // cf
  int PfnSlabType; // r15d
  __int64 *EnclavePageList; // r15
  int v10; // r14d
  int v11; // eax
  __int64 v12; // rax
  __int64 *v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // eax
  _QWORD *v18; // rcx
  unsigned int v19; // r9d
  _QWORD *v20; // rsi
  unsigned int v21; // ecx
  __int64 i; // r11
  __int64 v23; // rcx
  ULONG_PTR *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r15d
  char v28; // cl
  volatile signed __int32 *v29; // rcx
  unsigned int PfnPriority; // eax
  __int64 v31; // r11
  int v32; // ecx
  __int64 v33; // r10
  int v34; // eax
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // r8
  volatile LONG *v39; // rsi
  char *v40; // rsi
  _BYTE *v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rsi
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rsi
  bool v47; // sf
  volatile signed __int64 *v48; // rax
  _BYTE *v49; // r8
  __int64 v50; // rsi
  struct _KEVENT *v51; // rsi
  signed __int32 v52[8]; // [rsp+0h] [rbp-108h] BYREF
  __int64 v53; // [rsp+20h] [rbp-E8h]
  int v54; // [rsp+30h] [rbp-D8h]
  int v55; // [rsp+34h] [rbp-D4h]
  int v56; // [rsp+38h] [rbp-D0h]
  __int64 *v57; // [rsp+40h] [rbp-C8h]
  _QWORD *v58; // [rsp+48h] [rbp-C0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+50h] [rbp-B8h]
  _BYTE v60[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int8 v61; // [rsp+62h] [rbp-A6h]
  __int64 v62; // [rsp+68h] [rbp-A0h]
  __int64 v63; // [rsp+70h] [rbp-98h]
  char v64; // [rsp+78h] [rbp-90h]
  __int64 v65; // [rsp+80h] [rbp-88h]
  __int64 v66; // [rsp+88h] [rbp-80h]
  char v67; // [rsp+90h] [rbp-78h]
  __int64 v68; // [rsp+A0h] [rbp-68h]
  char v69; // [rsp+A8h] [rbp-60h]
  __int64 v70; // [rsp+B8h] [rbp-50h]
  char v71; // [rsp+C0h] [rbp-48h]
  void *retaddr; // [rsp+108h] [rbp+0h]

  v2 = a2;
  v55 = a2;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  while ( 1 )
  {
    v5 = 0;
    v6 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
    memset_0(v60, 0, 0x68uLL);
    v7 = _bittest64((const signed __int64 *)(BugCheckParameter2 + 40), 0x35u);
    PfnSlabType = 9;
    v56 = 9;
    if ( v7 )
    {
      v5 = 1;
    }
    else if ( v4 >= qword_140E35B00 && v4 < qword_140E35B00 + 2048 )
    {
      v5 = 4;
    }
    else
    {
      PfnSlabType = MiGetPfnSlabType(BugCheckParameter2);
      v56 = PfnSlabType;
    }
    if ( (v5 & 1) != 0 && (v2 & 8) != 0 && byte_140E2DB40 )
    {
      v2 = v2 & 0xFFFFFFF3 | 4;
      v55 = v2;
      MiSetPfnModified(BugCheckParameter2, 0LL);
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
      v43 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
      v44 = MI_NODE_FROM_PFN(BugCheckParameter2);
      EnclavePageList = (__int64 *)MiGetSlabRepurposedStandbyListWorker(
                                     232LL * PfnSlabType + 57216LL * v44 + *(_QWORD *)(v43 + 16) + 15696LL,
                                     BugCheckParameter2);
      if ( EnclavePageList == (__int64 *)-1LL )
        goto LABEL_103;
    }
    else
    {
      EnclavePageList = (__int64 *)(v6 + 1760);
    }
    if ( (v5 & 1) != 0
      && ((*(_DWORD *)(BugCheckParameter2 + 32) & 0x40000000) != 0
       || (*(_DWORD *)(BugCheckParameter2 + 32) & 0x10000000) != 0) )
    {
      v10 = dword_140E2D55C;
      EnclavePageList = &qword_140E2D550;
      v57 = &qword_140E2D550;
      v58 = 0LL;
      v6 = &MiSystemPartition;
      v54 = dword_140E2D55C;
    }
    else
    {
      v10 = *((_DWORD *)EnclavePageList + 3);
      v54 = v10;
      v57 = EnclavePageList;
      v58 = 0LL;
      if ( (v5 & 1) == 0 )
      {
        _InterlockedOr(v52, 0);
        *(_QWORD *)(BugCheckParameter2 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
      }
    }
    if ( v10 != 2 )
      break;
    if ( (*(_DWORD *)(BugCheckParameter2 + 32) & 0x40000000) == 0 || v56 != 9 )
    {
      if ( (dword_140FC4200 & 2) != 0
        && v5 < 4
        && v56 == 9
        && (v6[1] & 0x80u) == 0
        && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
        && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(BugCheckParameter2 + 16))
        && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x40000000) == 0
        && (MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) & 0x10) == 0
        && (unsigned int)MiIsStandbyPageCorrupted(v4) )
      {
        LODWORD(v57) = *(_DWORD *)(BugCheckParameter2 + 32);
        BYTE2(v57) = BYTE2(v57) & 0xF8 | 2;
        *(_DWORD *)(BugCheckParameter2 + 32) = (_DWORD)v57;
LABEL_103:
        MiRestoreTransitionPte(BugCheckParameter2);
        MiInsertPageInFreeOrZeroedList(v4, 2LL);
        return;
      }
      if ( (v5 & 1) != 0 )
      {
        LODWORD(v57) = *(_DWORD *)(BugCheckParameter2 + 32);
        BYTE2(v57) = BYTE2(v57) & 0xF8 | 2;
        *(_DWORD *)(BugCheckParameter2 + 32) = (_DWORD)v57;
        return;
      }
      PfnPriority = MiGetPfnPriority(BugCheckParameter2);
      v32 = v56;
      v33 = PfnPriority;
      v34 = v55 & 0x800;
      LODWORD(v57) = v34;
      if ( (v55 & 0x800) == 0 )
      {
        EnclavePageList = (__int64 *)&v6[22 * v33 + 816];
        if ( v5 < 4 && v56 == 9 )
        {
          v35 = 1LL;
          v36 = 1;
          v37 = 1808LL;
          v38 = 16320LL;
          if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
            v36 = v31;
          if ( !v36 )
            v37 = 4080LL;
          _InterlockedIncrement64((volatile signed __int64 *)&v6[v37]);
          v39 = (volatile LONG *)_InterlockedIncrement64((volatile signed __int64 *)v6 + 2336);
          SpinLock = v39;
          if ( (unsigned __int64)v39 <= 0x420 )
          {
            if ( v39 != (volatile LONG *)160 )
            {
              if ( v39 == (volatile LONG *)1056 )
              {
                v35 = 2LL;
              }
              else
              {
                if ( v39 != (volatile LONG *)34 )
                {
                  if ( v39 == (volatile LONG *)288 )
                    MiSlabDemotionLowMemoryConditionUpdate(v6, 1LL, 16320LL);
                  goto LABEL_80;
                }
                v35 = v31;
              }
            }
            v51 = (struct _KEVENT *)&v6[8 * v35];
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 4048);
            KeSetEvent(v51 + 675, 0, 0);
            ++v51[676].Header.LockNV;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 + 4048);
            v10 = v54;
            v39 = SpinLock;
          }
LABEL_80:
          v40 = (char *)v39 - 1;
          if ( v40 == *((char **)v6 + 2080) || v40 == *((char **)v6 + 2081) )
            MiUpdateAvailableEventsAtDpc(v6, v35, v38);
          v32 = v56;
          v34 = (int)v57;
        }
      }
      v57 = EnclavePageList;
      if ( (v55 & 0x80u) == 0 )
      {
        if ( v32 < 9 && v34 )
        {
          MiLockPageListAndLastPage(EnclavePageList, v60);
        }
        else
        {
          MiSynchronizeFastPageInsert((_DWORD)v6, (_DWORD)EnclavePageList, BugCheckParameter2, v32, 0LL, (__int64)v60);
          if ( !v60[0] && v61 != 3 )
            MiRebuildStandbyLookasideList(BugCheckParameter2, v61, v60[1]);
        }
      }
      goto LABEL_32;
    }
    MiRestoreTransitionPte(BugCheckParameter2);
    v2 = 32;
    v55 = 32;
  }
  if ( v10 == 3 )
  {
    if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 2040);
    else
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 904);
  }
  else
  {
    if ( v10 != 4 )
    {
      if ( EnclavePageList != &qword_140E2D550 && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x40000000) != 0 )
        MiSetPfnRemovalRequested(BugCheckParameter2, 0LL, 1LL);
      if ( (v55 & 0x100) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)EnclavePageList + 8);
        *(_QWORD *)(BugCheckParameter2 + 8) = -8LL;
      }
      else if ( EnclavePageList == &qword_140E2D550 )
      {
        v57 = (__int64 *)(v6 + 1760);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 1768);
      }
      else
      {
        MiClearPfnImageVerified(BugCheckParameter2, 12LL);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 1768);
        *(_QWORD *)(BugCheckParameter2 + 8) = -4LL;
        v57 = (__int64 *)(v6 + 1760);
        if ( v6 == &MiSystemPartition )
        {
          MiBadPageInserted(1LL);
        }
        else
        {
          v5 |= 8u;
          v57 = (__int64 *)(v6 + 1760);
        }
      }
      goto LABEL_32;
    }
    v45 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( qword_140E2DB80 && (v45 & 0x10) == 0 )
      v45 &= ~qword_140E2DB80;
    v46 = *(_QWORD *)(v45 >> 16);
    v47 = *(__int64 *)(BugCheckParameter2 + 40) < 0;
    v58 = (_QWORD *)v46;
    v48 = (volatile signed __int64 *)(v6 + 4080);
    if ( v47 )
      v48 = (volatile signed __int64 *)(v6 + 1808);
    _InterlockedIncrement64(v48);
    SpinLock = (PEX_SPIN_LOCK)(EnclavePageList + 4);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)EnclavePageList + 8);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v46 + 72));
    if ( (*(_DWORD *)(v46 + 56) & 8) != 0 )
      goto LABEL_32;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    v10 = 3;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v6 + 2424);
  v11 = *(_DWORD *)(BugCheckParameter2 + 16);
  v54 = v55 & 0x80;
  if ( (v11 & 0x400) != 0 )
  {
    v42 = *(unsigned int *)(*((_QWORD *)v6 + 2200) + 24LL);
    EnclavePageList = (__int64 *)&v6[22 * v42 + 1408];
    if ( (v55 & 0x80) == 0 )
      MiLockPageListAndLastPage(&v6[22 * v42 + 1408], v60);
    v13 = (__int64 *)(v6 + 4904);
    *(_BYTE *)(BugCheckParameter2 + 36) ^= (*(_BYTE *)(BugCheckParameter2 + 36) ^ v42) & 0xF;
  }
  else
  {
    v12 = MiDetermineModifiedPageListHead(BugCheckParameter2, v6, (v55 & 0x80) == 0);
    EnclavePageList = (__int64 *)v12;
    if ( !v54 )
      MiLockPageListAndLastPage(v12, v60);
    if ( !*EnclavePageList )
      v5 |= 2u;
    v13 = (__int64 *)(v6 + 4904);
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 2452);
  }
  _InterlockedIncrement((volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].AvailableCpuState);
  v14 = *((_QWORD *)v6 + 2336);
  if ( v14 < 0x420 )
  {
    v15 = *((_QWORD *)v6 + 2);
    v16 = (unsigned __int16)KeNumberNodes;
    v54 = dword_140E2DBCC;
    v17 = 0;
    v18 = (_QWORD *)(v15 + 14944);
    LODWORD(v57) = (unsigned __int16)KeNumberNodes;
    while ( 1 )
    {
      v58 = v18;
      if ( v17 >= v16 )
        break;
      v19 = 0;
      v20 = v18;
      v21 = v54;
      for ( i = 0LL; i <= 1; ++i )
      {
        while ( v19 < v21 )
        {
          v14 += *(unsigned __int16 *)(*v20 + 16LL * v19);
          if ( v14 >= 0x420 )
            goto LABEL_31;
          v21 = v54;
          ++v19;
        }
        ++v20;
        v19 = 0;
      }
      v16 = (unsigned int)v57;
      v18 = v58 + 7152;
      ++v17;
    }
    v50 = *v13;
    if ( (unsigned __int64)*v13 >= 0x10 )
      MiWakeModifiedPageWriter(v6, -1LL);
    if ( (unsigned __int64)(*((_QWORD *)v6 + 2424) - v50) >= 0x10 )
      KeSetEvent((PRKEVENT)v6 + 35, 0, 0);
  }
LABEL_31:
  v58 = 0LL;
  v57 = EnclavePageList;
LABEL_32:
  if ( (v5 & 4) != 0 )
  {
    MiInsertDecayClusterTimer(BugCheckParameter2);
  }
  else if ( v56 == 9 || (v55 & 0x800) != 0 || v10 != 2 )
  {
    _InterlockedIncrement64(EnclavePageList);
  }
  if ( v60[0] )
  {
    v23 = v62;
    v24 = (ULONG_PTR *)v63;
    v25 = v65;
    v26 = v66;
  }
  else
  {
    v23 = EnclavePageList[3];
    v24 = (ULONG_PTR *)(48 * v23 - 0x220000000000LL);
    v25 = 0x3FFFFFFFFFLL;
    v26 = 0LL;
  }
  if ( v23 == 0x3FFFFFFFFFLL )
    EnclavePageList[2] = v4;
  else
    *v24 = v4 ^ (v4 ^ *v24) & 0xFFFFFF0000000000uLL;
  *(_QWORD *)BugCheckParameter2 = v25 ^ (v25 ^ *(_QWORD *)BugCheckParameter2) & 0xFFFFFF0000000000uLL;
  *(_QWORD *)(BugCheckParameter2 + 24) = v23 ^ (v23 ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0xFFFFFF0000000000uLL;
  if ( v25 == 0x3FFFFFFFFFLL )
    EnclavePageList[3] = v4;
  else
    *(_QWORD *)(v26 + 24) = v4 ^ (*(_QWORD *)(v26 + 24) ^ v4) & 0xFFFFFF0000000000uLL;
  v54 = *(_DWORD *)(BugCheckParameter2 + 32);
  if ( EnclavePageList == &qword_140E2D550 )
  {
    BYTE2(v54) = BYTE2(v54) & 0xF8 | 2;
    *(_DWORD *)(BugCheckParameter2 + 32) = v54;
    v54 = *(_DWORD *)(BugCheckParameter2 + 32);
    HIBYTE(v54) |= 0x10u;
    *(_DWORD *)(BugCheckParameter2 + 32) = v54;
    MiWakeFileOnlyReaper();
  }
  else
  {
    BYTE2(v54) ^= (BYTE2(v54) ^ v10) & 7;
    *(_DWORD *)(BugCheckParameter2 + 32) = v54;
  }
  v27 = v56;
  if ( v10 == 2 )
  {
    if ( v56 < 9 )
    {
      v28 = v55;
      if ( (v55 & 0x800) != 0 )
      {
        v54 = *(_DWORD *)(BugCheckParameter2 + 32);
        HIBYTE(v54) |= 8u;
        *(_DWORD *)(BugCheckParameter2 + 32) = v54;
      }
      else
      {
        v49 = v60;
        if ( !v60[0] )
          v49 = 0LL;
        MiInsertSecondaryListStandbyPage(BugCheckParameter2, (unsigned int)v56, v49);
        v28 = v55;
      }
    }
    else
    {
      if ( (v5 & 4) == 0 )
      {
        v41 = v60;
        if ( !v60[0] )
          v41 = 0LL;
        MiInsertSecondaryListStandbyPage(BugCheckParameter2, 9LL, v41);
      }
      v28 = v55;
    }
  }
  else
  {
    v28 = v55;
  }
  if ( v58 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v58 + 18);
    v28 = v55;
  }
  if ( v60[0] )
  {
    if ( v64 )
      _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v67 )
      _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v69 )
      _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v71 )
      _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v29 = (volatile signed __int32 *)(v57 + 4);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v29, 0xBFFFFFFF);
      _InterlockedDecrement(v29);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v29, retaddr);
    }
  }
  else if ( v28 >= 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v57 + 8);
  }
  if ( v10 <= 4 && v27 == 9 && (v5 & 5) == 0 )
  {
    v53 = 0LL;
    MiUpdateLargePageCandidateValue(v6, v4, 3LL);
  }
  if ( (v5 & 2) != 0 )
    KeSetEvent((PRKEVENT)(v6 + 232), 0, 0);
  if ( v5 >= 8 )
    MiBadPageInserted(0LL);
}
