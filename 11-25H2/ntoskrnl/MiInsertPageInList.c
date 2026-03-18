/*
 * XREFs of MiInsertPageInList @ 0x14021AFB0
 * Callers:
 *     MiRelinkStandbyPage @ 0x14021A0E8 (MiRelinkStandbyPage.c)
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiCreateDecayPfn @ 0x14021C248 (MiCreateDecayPfn.c)
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiRelinkTransitionSlabPages @ 0x1404CAA48 (MiRelinkTransitionSlabPages.c)
 *     MiFreeModifiedReservations @ 0x1404F6770 (MiFreeModifiedReservations.c)
 *     MiReturnBadPagesToBadList @ 0x140668A14 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14066FCB4 (MiMarkFileOnlyPfnBad.c)
 *     MiRepointPteAtExtendedStandby @ 0x1406795EC (MiRepointPteAtExtendedStandby.c)
 *     MiMoveBadPagePartition @ 0x14067F7C4 (MiMoveBadPagePartition.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140680478 (MiMoveModifiedPagesToCompressList.c)
 * Callees:
 *     MiInsertSecondaryListStandbyPage @ 0x140216890 (MiInsertSecondaryListStandbyPage.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiSynchronizeFastPageInsert @ 0x140217140 (MiSynchronizeFastPageInsert.c)
 *     MiDetermineModifiedPageListHead @ 0x14021BAB0 (MiDetermineModifiedPageListHead.c)
 *     MiInsertDecayClusterTimer @ 0x14021BD80 (MiInsertDecayClusterTimer.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x14021C78C (MiGetSlabRepurposedStandbyListWorker.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiUpdateLargePageCandidateValue @ 0x14024FD70 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     MiLockPageListAndLastPage @ 0x1402FCA40 (MiLockPageListAndLastPage.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403BEBFC (MiUpdateAvailableEventsAtDpc.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403BF540 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiWakeModifiedPageWriter @ 0x1403C1310 (MiWakeModifiedPageWriter.c)
 *     MiRebuildStandbyLookasideList @ 0x1403ED9D0 (MiRebuildStandbyLookasideList.c)
 *     MiGetEnclavePageList @ 0x1404A4998 (MiGetEnclavePageList.c)
 *     MiBadPageInserted @ 0x1404D3E18 (MiBadPageInserted.c)
 *     MiIsStandbyPageCorrupted @ 0x1404D54E4 (MiIsStandbyPageCorrupted.c)
 *     MiWakeFileOnlyReaper @ 0x1404DAD18 (MiWakeFileOnlyReaper.c)
 *     MiSetPfnRemovalRequested @ 0x140668B70 (MiSetPfnRemovalRequested.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall MiInsertPageInList(ULONG_PTR a1, unsigned int a2)
{
  unsigned int v2; // edi
  ULONG_PTR v4; // r12
  unsigned int v5; // ebx
  ULONG *v6; // r13
  unsigned __int8 v7; // cf
  int PfnSlabType; // r15d
  __int64 *EnclavePageList; // r15
  int v10; // esi
  int v11; // eax
  __int64 v12; // rax
  __int64 *v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // eax
  _QWORD *v18; // rcx
  unsigned int v19; // r9d
  _QWORD *v20; // rdi
  unsigned int v21; // ecx
  __int64 i; // r11
  __int64 v23; // rcx
  ULONG_PTR *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r15d
  char v28; // cl
  __int64 *v29; // rax
  unsigned int PfnPriority; // eax
  int v31; // ecx
  __int64 v32; // r10
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  volatile LONG *v36; // rdi
  char *v37; // rdi
  _BYTE *v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rdi
  bool v44; // sf
  volatile signed __int64 *v45; // rax
  _BYTE *v46; // r8
  __int64 v47; // rdi
  struct _KEVENT *v48; // rdi
  signed __int32 v49[8]; // [rsp+0h] [rbp-108h] BYREF
  __int64 v50; // [rsp+20h] [rbp-E8h]
  int v51; // [rsp+30h] [rbp-D8h]
  int v52; // [rsp+34h] [rbp-D4h]
  int v53; // [rsp+38h] [rbp-D0h]
  __int64 *v54; // [rsp+40h] [rbp-C8h]
  _QWORD *v55; // [rsp+48h] [rbp-C0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+50h] [rbp-B8h]
  _BYTE v57[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int8 v58; // [rsp+62h] [rbp-A6h]
  __int64 v59; // [rsp+68h] [rbp-A0h]
  __int64 v60; // [rsp+70h] [rbp-98h]
  char v61; // [rsp+78h] [rbp-90h]
  __int64 v62; // [rsp+80h] [rbp-88h]
  __int64 v63; // [rsp+88h] [rbp-80h]
  char v64; // [rsp+90h] [rbp-78h]
  __int64 v65; // [rsp+A0h] [rbp-68h]
  char v66; // [rsp+A8h] [rbp-60h]
  __int64 v67; // [rsp+B8h] [rbp-50h]
  char v68; // [rsp+C0h] [rbp-48h]
  void *retaddr; // [rsp+108h] [rbp+0h]

  v2 = a2;
  v52 = a2;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  while ( 1 )
  {
    v5 = 0;
    v6 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    memset_0(v57, 0, 0x68uLL);
    v7 = _bittest64((const signed __int64 *)(a1 + 40), 0x35u);
    PfnSlabType = 9;
    v53 = 9;
    if ( v7 )
    {
      v5 = 1;
    }
    else if ( v4 >= qword_140E358C0 && v4 < qword_140E358C0 + 2048 )
    {
      v5 = 4;
    }
    else
    {
      PfnSlabType = MiGetPfnSlabType(a1);
      v53 = PfnSlabType;
    }
    if ( (v2 & 8) != 0 && (v5 & 1) != 0 && byte_140E2D900 )
    {
      v2 = v2 & 0xFFFFFFF3 | 4;
      v52 = v2;
      MiSetPfnModified(a1, 0LL);
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
      v40 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      v41 = MI_NODE_FROM_PFN(a1);
      EnclavePageList = (__int64 *)MiGetSlabRepurposedStandbyListWorker(
                                     232LL * PfnSlabType + 57216LL * v41 + *(_QWORD *)(v40 + 16) + 15696LL,
                                     a1);
      if ( EnclavePageList == (__int64 *)-1LL )
        goto LABEL_101;
    }
    else
    {
      EnclavePageList = (__int64 *)(v6 + 1760);
    }
    if ( (v5 & 1) != 0 && ((*(_DWORD *)(a1 + 32) & 0x40000000) != 0 || (*(_DWORD *)(a1 + 32) & 0x10000000) != 0) )
    {
      v10 = dword_140E2D31C;
      EnclavePageList = &qword_140E2D310;
      v54 = &qword_140E2D310;
      v6 = &MiSystemPartition;
      v51 = dword_140E2D31C;
      v55 = 0LL;
    }
    else
    {
      v10 = *((_DWORD *)EnclavePageList + 3);
      v51 = v10;
      v54 = EnclavePageList;
      v55 = 0LL;
      if ( (v5 & 1) == 0 )
      {
        _InterlockedOr(v49, 0);
        *(_QWORD *)(a1 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
      }
    }
    if ( v10 != 2 )
      break;
    if ( (*(_DWORD *)(a1 + 32) & 0x40000000) == 0 || v53 != 9 )
    {
      if ( (dword_140FC41F0 & 2) != 0
        && v5 < 4
        && v53 == 9
        && (v6[1] & 0x80u) == 0
        && (*(_DWORD *)(a1 + 16) & 0x400LL) == 0
        && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(a1 + 16))
        && (*(_DWORD *)(a1 + 32) & 0x40000000) == 0
        && (MiGetPagePrivilege(a1) & 0x10) == 0
        && (unsigned int)MiIsStandbyPageCorrupted(v4) )
      {
        LODWORD(v54) = *(_DWORD *)(a1 + 32);
        BYTE2(v54) = BYTE2(v54) & 0xF8 | 2;
        *(_DWORD *)(a1 + 32) = (_DWORD)v54;
LABEL_101:
        MiRestoreTransitionPte(a1);
        MiInsertPageInFreeOrZeroedList(v4);
        return;
      }
      if ( (v5 & 1) != 0 )
      {
        LODWORD(v54) = *(_DWORD *)(a1 + 32);
        BYTE2(v54) = BYTE2(v54) & 0xF8 | 2;
        *(_DWORD *)(a1 + 32) = (_DWORD)v54;
        return;
      }
      PfnPriority = MiGetPfnPriority(a1);
      v31 = v53;
      v32 = PfnPriority;
      v33 = v52 & 0x800;
      LODWORD(v54) = v33;
      if ( (v52 & 0x800) == 0 )
      {
        EnclavePageList = (__int64 *)&v6[22 * v32 + 816];
        if ( v53 == 9 && v5 < 4 )
        {
          v34 = 1808LL;
          if ( *(__int64 *)(a1 + 40) >= 0 )
            v34 = 4080LL;
          _InterlockedIncrement64((volatile signed __int64 *)&v6[v34]);
          v35 = 1LL;
          v36 = (volatile LONG *)_InterlockedIncrement64((volatile signed __int64 *)v6 + 2336);
          SpinLock = v36;
          if ( (unsigned __int64)v36 <= 0x420 )
          {
            if ( v36 != (volatile LONG *)160 )
            {
              if ( v36 == (volatile LONG *)1056 )
              {
                v35 = 2LL;
              }
              else
              {
                if ( v36 != (volatile LONG *)34 )
                {
                  if ( v36 == (volatile LONG *)288 )
                    MiSlabDemotionLowMemoryConditionUpdate(v6, 1LL);
                  goto LABEL_78;
                }
                v35 = 0LL;
              }
            }
            v48 = (struct _KEVENT *)&v6[8 * v35];
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 4048);
            KeSetEvent(v48 + 675, 0, 0);
            ++v48[676].Header.LockNV;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 + 4048);
            v10 = v51;
            v36 = SpinLock;
          }
LABEL_78:
          v37 = (char *)v36 - 1;
          if ( v37 == *((char **)v6 + 2080) || v37 == *((char **)v6 + 2081) )
            MiUpdateAvailableEventsAtDpc(v6);
          v31 = v53;
          v33 = (int)v54;
        }
      }
      v54 = EnclavePageList;
      if ( (v52 & 0x80u) == 0 )
      {
        if ( v31 < 9 && v33 )
        {
          MiLockPageListAndLastPage(EnclavePageList, v57);
        }
        else
        {
          MiSynchronizeFastPageInsert((__int64)v6, (__int64)EnclavePageList, a1, v31, 0LL, v57);
          if ( !v57[0] && v58 != 3 )
            MiRebuildStandbyLookasideList(a1, v58, v57[1]);
        }
      }
      goto LABEL_30;
    }
    MiRestoreTransitionPte(a1);
    v2 = 32;
    v52 = 32;
  }
  if ( v10 == 3 )
  {
    if ( *(__int64 *)(a1 + 40) >= 0 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 2040);
    else
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 904);
  }
  else
  {
    if ( v10 != 4 )
    {
      if ( EnclavePageList != &qword_140E2D310 && (*(_DWORD *)(a1 + 32) & 0x40000000) != 0 )
        MiSetPfnRemovalRequested(a1, 0LL, 1LL);
      if ( (v52 & 0x100) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)EnclavePageList + 8);
        *(_QWORD *)(a1 + 8) = -8LL;
      }
      else if ( EnclavePageList == &qword_140E2D310 )
      {
        v54 = (__int64 *)(v6 + 1760);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 1768);
      }
      else
      {
        MiClearPfnImageVerified(a1, 12LL);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 1768);
        *(_QWORD *)(a1 + 8) = -4LL;
        v54 = (__int64 *)(v6 + 1760);
        if ( v6 == &MiSystemPartition )
        {
          MiBadPageInserted(1LL);
        }
        else
        {
          v5 |= 8u;
          v54 = (__int64 *)(v6 + 1760);
        }
      }
      goto LABEL_30;
    }
    v42 = *(_QWORD *)(a1 + 16);
    if ( qword_140E2D940 && (v42 & 0x10) == 0 )
      v42 &= ~qword_140E2D940;
    v43 = *(_QWORD *)(v42 >> 16);
    v44 = *(__int64 *)(a1 + 40) < 0;
    v55 = (_QWORD *)v43;
    v45 = (volatile signed __int64 *)(v6 + 4080);
    if ( v44 )
      v45 = (volatile signed __int64 *)(v6 + 1808);
    _InterlockedIncrement64(v45);
    SpinLock = (PEX_SPIN_LOCK)(EnclavePageList + 4);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)EnclavePageList + 8);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v43 + 72));
    if ( (*(_DWORD *)(v43 + 56) & 8) != 0 )
      goto LABEL_30;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v43 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    v10 = 3;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v6 + 2424);
  v11 = *(_DWORD *)(a1 + 16);
  v51 = v52 & 0x80;
  if ( (v11 & 0x400) != 0 )
  {
    v39 = *(unsigned int *)(*((_QWORD *)v6 + 2200) + 24LL);
    EnclavePageList = (__int64 *)&v6[22 * v39 + 1408];
    if ( (v52 & 0x80) == 0 )
      MiLockPageListAndLastPage(&v6[22 * v39 + 1408], v57);
    v13 = (__int64 *)(v6 + 4904);
    *(_BYTE *)(a1 + 36) ^= (*(_BYTE *)(a1 + 36) ^ v39) & 0xF;
  }
  else
  {
    v12 = MiDetermineModifiedPageListHead(a1, v6, (v52 & 0x80) == 0);
    EnclavePageList = (__int64 *)v12;
    if ( !v51 )
      MiLockPageListAndLastPage(v12, v57);
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
    v51 = dword_140E2D98C;
    v17 = 0;
    v18 = (_QWORD *)(v15 + 14944);
    LODWORD(v54) = (unsigned __int16)KeNumberNodes;
    while ( 1 )
    {
      v55 = v18;
      if ( v17 >= v16 )
        break;
      v19 = 0;
      v20 = v18;
      v21 = v51;
      for ( i = 0LL; i <= 1; ++i )
      {
        while ( v19 < v21 )
        {
          v14 += *(unsigned __int16 *)(*v20 + 16LL * v19);
          if ( v14 >= 0x420 )
            goto LABEL_29;
          v21 = v51;
          ++v19;
        }
        ++v20;
        v19 = 0;
      }
      v16 = (unsigned int)v54;
      v18 = v55 + 7152;
      ++v17;
    }
    v47 = *v13;
    if ( (unsigned __int64)*v13 >= 0x10 )
      MiWakeModifiedPageWriter(v6, -1LL);
    if ( (unsigned __int64)(*((_QWORD *)v6 + 2424) - v47) >= 0x10 )
      KeSetEvent((PRKEVENT)v6 + 35, 0, 0);
  }
LABEL_29:
  v55 = 0LL;
  v54 = EnclavePageList;
LABEL_30:
  if ( (v5 & 4) != 0 )
  {
    MiInsertDecayClusterTimer(a1);
  }
  else if ( v53 == 9 || (v52 & 0x800) != 0 || v10 != 2 )
  {
    _InterlockedIncrement64(EnclavePageList);
  }
  if ( v57[0] )
  {
    v23 = v59;
    v24 = (ULONG_PTR *)v60;
    v25 = v62;
    v26 = v63;
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
  *(_QWORD *)a1 = v25 ^ (v25 ^ *(_QWORD *)a1) & 0xFFFFFF0000000000uLL;
  *(_QWORD *)(a1 + 24) = v23 ^ (v23 ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFF0000000000uLL;
  if ( v25 == 0x3FFFFFFFFFLL )
    EnclavePageList[3] = v4;
  else
    *(_QWORD *)(v26 + 24) = v4 ^ (*(_QWORD *)(v26 + 24) ^ v4) & 0xFFFFFF0000000000uLL;
  v51 = *(_DWORD *)(a1 + 32);
  if ( EnclavePageList == &qword_140E2D310 )
  {
    BYTE2(v51) = BYTE2(v51) & 0xF8 | 2;
    *(_DWORD *)(a1 + 32) = v51;
    v51 = *(_DWORD *)(a1 + 32);
    HIBYTE(v51) |= 0x10u;
    *(_DWORD *)(a1 + 32) = v51;
    MiWakeFileOnlyReaper();
  }
  else
  {
    BYTE2(v51) ^= (BYTE2(v51) ^ v10) & 7;
    *(_DWORD *)(a1 + 32) = v51;
  }
  v27 = v53;
  if ( v10 == 2 )
  {
    if ( v53 < 9 )
    {
      v28 = v52;
      if ( (v52 & 0x800) != 0 )
      {
        v51 = *(_DWORD *)(a1 + 32);
        HIBYTE(v51) |= 8u;
        *(_DWORD *)(a1 + 32) = v51;
      }
      else
      {
        v46 = v57;
        if ( !v57[0] )
          v46 = 0LL;
        MiInsertSecondaryListStandbyPage(a1, v53, (unsigned __int64)v46);
        v28 = v52;
      }
    }
    else
    {
      if ( (v5 & 4) == 0 )
      {
        v38 = v57;
        if ( !v57[0] )
          v38 = 0LL;
        MiInsertSecondaryListStandbyPage(a1, 9, (unsigned __int64)v38);
      }
      v28 = v52;
    }
  }
  else
  {
    v28 = v52;
  }
  if ( v55 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v55 + 18);
    v28 = v52;
  }
  if ( v57[0] )
  {
    if ( v61 )
      _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v64 )
      _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v66 )
      _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v68 )
      _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v29 = v54;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd((volatile signed __int32 *)v54 + 8, 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)v29 + 8);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v54 + 4, retaddr, v25);
    }
  }
  else if ( v28 >= 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v54 + 8);
  }
  if ( v10 <= 4 && v27 == 9 && (v5 & 5) == 0 )
  {
    v50 = 0LL;
    MiUpdateLargePageCandidateValue(v6, v4, 3LL);
  }
  if ( (v5 & 2) != 0 )
    KeSetEvent((PRKEVENT)(v6 + 232), 0, 0);
  if ( v5 >= 8 )
    MiBadPageInserted(0LL);
}
