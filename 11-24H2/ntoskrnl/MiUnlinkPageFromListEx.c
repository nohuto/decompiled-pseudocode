/*
 * XREFs of MiUnlinkPageFromListEx @ 0x140211CD0
 * Callers:
 *     MiAddPageToFlushMdl @ 0x140210ED0 (MiAddPageToFlushMdl.c)
 *     MiHandleTransitionFault @ 0x14021B1A0 (MiHandleTransitionFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiPrepareDecayNodeForReuse @ 0x14022B350 (MiPrepareDecayNodeForReuse.c)
 *     MiRelinkStandbyPage @ 0x14022C848 (MiRelinkStandbyPage.c)
 *     MiUnlinkStandbyPfn @ 0x1402363D0 (MiUnlinkStandbyPfn.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiOutSwapWorkingSetPte @ 0x140302690 (MiOutSwapWorkingSetPte.c)
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x14036AA48 (MiReferencePageForModifiedWrite.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x1403A18E8 (MiGetRepurposedSlabStandbyPage.c)
 *     MiRepurposeStandbySlabPage @ 0x1403A3810 (MiRepurposeStandbySlabPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRepurposeDecayNode @ 0x1403F49D0 (MiRepurposeDecayNode.c)
 *     MiDecayPfnFullyInitialized @ 0x140440AC8 (MiDecayPfnFullyInitialized.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReuseStandbyPage @ 0x140442E50 (MiReuseStandbyPage.c)
 *     MiUnlinkTransitionSlabPages @ 0x14044342C (MiUnlinkTransitionSlabPages.c)
 *     MiMirrorPerformBrownWrites @ 0x140455840 (MiMirrorPerformBrownWrites.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MiPurgeSlabEntry @ 0x1404829DC (MiPurgeSlabEntry.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiFreeModifiedReservations @ 0x1404F8E8C (MiFreeModifiedReservations.c)
 *     MiWalkResetCommitPte @ 0x14066AA20 (MiWalkResetCommitPte.c)
 *     MiEnableLargeSubsection @ 0x14067AA74 (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067B474 (MiMarkFileOnlyPfnBad.c)
 *     MiNoPagesLastChance @ 0x1406849B0 (MiNoPagesLastChance.c)
 *     MiRepointPteAtExtendedStandby @ 0x140684E78 (MiRepointPteAtExtendedStandby.c)
 *     MiMoveModifiedPagesToCompressList @ 0x14068BD08 (MiMoveModifiedPagesToCompressList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x140212898 (MiRemoveDecayClusterTimer.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiDetermineModifiedPageListHead @ 0x14022D670 (MiDetermineModifiedPageListHead.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiReplaceStandbyLookaside @ 0x14026CCE0 (MiReplaceStandbyLookaside.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x14026E330 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14026F9E0 (MiUnlinkProtectedStandbyPfn.c)
 *     MiUpdateLargePageCandidateValue @ 0x140272210 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiObtainFreePages @ 0x1402D17D4 (MiObtainFreePages.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1402D1890 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1402D19B0 (MiUpdateAvailableEventsAtDpc.c)
 *     MiAcquirePageListLock @ 0x1402DF1D0 (MiAcquirePageListLock.c)
 *     MiUnlinkPageFromBadList @ 0x14039398C (MiUnlinkPageFromBadList.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1403EF4B4 (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1403EF540 (MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiUnlinkPageFromListEx(ULONG_PTR BugCheckParameter2, char a2)
{
  int v2; // r14d
  __int64 v5; // r13
  __int64 SlabAllocatorRepurposedStandbyList; // r15
  signed __int64 v7; // r8
  bool v8; // zf
  int v9; // ebx
  unsigned int v10; // ebx
  ULONG_PTR v11; // rsi
  unsigned int PfnPriority; // eax
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  ULONG_PTR v15; // r14
  ULONG_PTR v16; // r14
  __int64 v17; // r9
  signed __int64 v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  unsigned int v21; // r14d
  int v22; // r14d
  unsigned __int64 v23; // rdx
  volatile signed __int32 *v24; // rcx
  __int64 result; // rax
  signed __int64 v26; // rdx
  signed __int64 v27; // r8
  signed __int64 v28; // rcx
  __int64 v29; // rax
  signed __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  int v33; // ecx
  volatile signed __int64 *v34; // rax
  __int64 v35; // rax
  char v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rax
  ULONG_PTR v39; // r9
  unsigned int v40; // eax
  unsigned __int64 v41; // rcx
  unsigned int v42; // r14d
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // [rsp+30h] [rbp-B8h]
  int v46; // [rsp+30h] [rbp-B8h]
  unsigned int v47; // [rsp+30h] [rbp-B8h]
  unsigned int v48; // [rsp+34h] [rbp-B4h]
  unsigned int v49; // [rsp+38h] [rbp-B0h]
  unsigned int v50; // [rsp+3Ch] [rbp-ACh]
  _BYTE v51[16]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-98h]
  char v53; // [rsp+58h] [rbp-90h]
  __int64 v54; // [rsp+68h] [rbp-80h]
  char v55; // [rsp+70h] [rbp-78h]
  __int64 v56; // [rsp+80h] [rbp-68h]
  char v57; // [rsp+88h] [rbp-60h]
  __int64 v58; // [rsp+98h] [rbp-50h]
  char v59; // [rsp+A0h] [rbp-48h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v2 = 9;
  v48 = 9;
  if ( (a2 & 4) == 0
    && (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    KeBugCheckEx(0x1Au, 0x8889uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v49 = 0;
  if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32) )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(
        0x4Eu,
        2uLL,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
        BugCheckParameter3,
        (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32));
    return 0LL;
  }
  else
  {
    memset_0(v51, 0, 0x68uLL);
    v5 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
    SlabAllocatorRepurposedStandbyList = *(_QWORD *)(v5 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 7136);
    v7 = *(unsigned int *)(SlabAllocatorRepurposedStandbyList + 12);
    v45 = *(_DWORD *)(SlabAllocatorRepurposedStandbyList + 12);
    if ( (a2 & 1) != 0 )
    {
      v9 = 160;
    }
    else
    {
      v8 = (a2 & 2) == 0;
      v9 = 0;
      if ( !v8 )
        v9 = 192;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
    {
      MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
      return 0LL;
    }
    v10 = v9 | 0x10;
    v11 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
    if ( v11 >= qword_140E35B00 && v11 < qword_140E35B00 + 2048 )
    {
      v10 |= 2u;
    }
    else
    {
      if ( byte_140E3CAE6 && *(_BYTE *)(qword_140E3D140 + 2 * (v11 >> 9)) )
        v2 = *(unsigned __int8 *)(qword_140E3D140 + 2 * (v11 >> 9)) - 1;
      v48 = v2;
    }
    if ( (_DWORD)v7 != 2 )
    {
      if ( (_DWORD)v7 == 3 )
      {
        _InterlockedDecrement64((volatile signed __int64 *)SlabAllocatorRepurposedStandbyList);
        v29 = 7232LL;
        if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
          v29 = 16320LL;
        _InterlockedDecrement64((volatile signed __int64 *)(v29 + v5));
        if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
        {
          SlabAllocatorRepurposedStandbyList = v5 + 88 * ((*(_BYTE *)(BugCheckParameter2 + 36) & 0xF) + 64LL);
          if ( v10 < 0x80 )
          {
            MiAcquirePageListLock(SlabAllocatorRepurposedStandbyList, BugCheckParameter2, v48, 1, (__int64)v51);
            v10 |= 0x100u;
          }
          *(_BYTE *)(BugCheckParameter2 + 36) &= 0xF0u;
        }
        else
        {
          SlabAllocatorRepurposedStandbyList = MiDetermineModifiedPageListHead(
                                                 BugCheckParameter2,
                                                 v5,
                                                 v10 < 0x80 ? 2 : 0);
          if ( v10 < 0x80 )
          {
            MiAcquirePageListLock(SlabAllocatorRepurposedStandbyList, BugCheckParameter2, v48, 1, (__int64)v51);
            v10 |= 0x100u;
          }
          _InterlockedDecrement64((volatile signed __int64 *)(v5 + 19616));
        }
      }
      else
      {
        v34 = (volatile signed __int64 *)(v5 + 7232);
        if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
          v34 = (volatile signed __int64 *)(v5 + 16320);
        _InterlockedDecrement64(v34);
        if ( v10 < 0x80 )
        {
          MiAcquirePageListLock(SlabAllocatorRepurposedStandbyList, BugCheckParameter2, v48, 1, (__int64)v51);
          v10 |= 0x100u;
        }
      }
      v13 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
      v14 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFFLL;
LABEL_39:
      if ( v13 == 0x3FFFFFFFFFLL )
      {
        v21 = v10 >> 2;
        if ( (v10 & 4) == 0 )
          *(_QWORD *)(SlabAllocatorRepurposedStandbyList + 24) = v14;
      }
      else
      {
        v17 = 48 * v13 - 0x220000000000LL;
        v18 = *(_QWORD *)(v17 + 24);
        v19 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v17 + 24),
                v14 | v18 & 0xFFFFFF0000000000uLL,
                v18);
        v7 = v19;
        if ( v45 == 2 )
        {
          if ( v18 != v19 )
          {
            do
            {
              v20 = v7;
              v7 = _InterlockedCompareExchange64(
                     (volatile signed __int64 *)(v17 + 24),
                     v14 | v7 & 0xFFFFFF0000000000uLL,
                     v7);
            }
            while ( v20 != v7 );
          }
        }
        else if ( v18 != v19 )
        {
          do
          {
            v30 = v7;
            v7 = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v17 + 24),
                   v14 | v7 & 0xFFFFFF0000000000uLL,
                   v7);
          }
          while ( v30 != v7 );
        }
        v21 = v10 >> 2;
      }
      if ( v14 == 0x3FFFFFFFFFLL )
      {
        v22 = v21 & 1;
        if ( !v22 )
          *(_QWORD *)(SlabAllocatorRepurposedStandbyList + 16) = v13;
      }
      else
      {
        *(_QWORD *)(48 * v14 - 0x220000000000LL) = v13 | *(_QWORD *)(48 * v14 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
        v22 = v21 & 1;
      }
      v23 = v45;
      if ( (v10 & 0x10) != 0 )
        _InterlockedDecrement64((volatile signed __int64 *)SlabAllocatorRepurposedStandbyList);
      if ( v45 == 2 && (v10 & 0xA) == 0 )
      {
        MiUnlinkSecondaryListStandbyPage(BugCheckParameter2, v48, v7);
        if ( v22 )
        {
          v46 = *(_DWORD *)(BugCheckParameter2 + 32);
          HIBYTE(v46) &= ~8u;
          *(_DWORD *)(BugCheckParameter2 + 32) = v46;
        }
      }
      if ( (v10 & 8) != 0 )
      {
        v47 = *(_DWORD *)(BugCheckParameter2 + 32);
        v35 = MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY(BugCheckParameter2, v23, v7, HIBYTE(v47));
        _InterlockedDecrement((volatile signed __int32 *)(v35 + 88));
        v37 = *(_QWORD *)(v35 + 56);
        if ( *(_DWORD *)(v37 + 128) == 8 )
          _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(v37 + 24) + 18304LL));
        HIBYTE(v47) = v36 & 0xF7;
        *(_DWORD *)(BugCheckParameter2 + 32) = v47;
      }
      *(_QWORD *)BugCheckParameter2 = 0LL;
      if ( (v10 & 2) != 0 )
      {
        v26 = *(_QWORD *)(BugCheckParameter2 + 24);
        v27 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(BugCheckParameter2 + 24),
                v26 & 0xFFFFFF0000000000uLL,
                v26);
        if ( v26 != v27 )
        {
          do
          {
            v28 = v27;
            v27 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(BugCheckParameter2 + 24),
                    v27 & 0xFFFFFF0000000000uLL,
                    v27);
          }
          while ( v28 != v27 );
        }
        MiRemoveDecayClusterTimer(BugCheckParameter2, v26, v27);
        goto LABEL_53;
      }
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFF0000000000uLL;
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0 && dword_140E3004C == 1 )
      {
        v39 = v11 & 0x1F;
        v23 = 1LL;
        v7 = *((_QWORD *)&xmmword_140E300A0 + 1) + 4 * (v11 >> 5);
        if ( v39 + 1 > 0x20 )
        {
          if ( (v11 & 0x1F) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)v7, ((1 << (32 - (v11 & 0x1F))) - 1) << v39);
            v7 += 4LL;
            v23 = 1LL - (32 - (unsigned int)(v11 & 0x1F));
            if ( v23 >= 0x20 )
            {
              v41 = v23 >> 5;
              v23 += -32LL * (v23 >> 5);
              do
              {
                *(_DWORD *)v7 = -1;
                v7 += 4LL;
                --v41;
              }
              while ( v41 );
            }
            if ( !v23 )
              goto LABEL_53;
          }
          v40 = (1 << v23) - 1;
        }
        else
        {
          v40 = 1 << v39;
        }
        _InterlockedOr((volatile signed __int32 *)v7, v40);
      }
LABEL_53:
      *(_DWORD *)(BugCheckParameter2 + 36) = 0;
      if ( (v10 & 0x80u) == 0 )
      {
        if ( (v10 & 0x100) != 0 && v51[0] )
        {
          if ( v53 )
            _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v55 )
            _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v57 )
            _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v59 )
            _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v24 = (volatile signed __int32 *)(SlabAllocatorRepurposedStandbyList + 32);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v24, 0xBFFFFFFF);
            _InterlockedDecrement(v24);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v24, retaddr);
          }
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(SlabAllocatorRepurposedStandbyList + 32));
        }
      }
      if ( v48 == 9 && (v10 & 2) == 0 && (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0 )
        MiUpdateLargePageCandidateValue(
          v5,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
          3LL);
      if ( (v10 & 1) == 0 )
        return v49;
      v31 = _InterlockedDecrement64((volatile signed __int64 *)(v5 + 18688));
      if ( v31 == *(_QWORD *)(v5 + 16640) || v31 == *(_QWORD *)(v5 + 16648) )
        MiUpdateAvailableEventsAtDpc(v5, v23, v7);
      if ( v31 <= 0x420 )
      {
        v38 = *(_QWORD *)(v5 + 17600);
        if ( !v38 || !*(_BYTE *)(v38 + 52) )
          MiObtainFreePages(v5, v23, v7);
        if ( v31 < 0xA0 && v31 + 1 >= 0xA0 )
        {
          MiSlabDemotionLowMemoryConditionUpdate(v5, 1LL, v7);
          if ( *(_DWORD *)(v5 + 1204) != -1 )
            KeSetEvent((PRKEVENT)(v5 + 1056), 0, 0);
        }
      }
      if ( v31 >= 0x9F )
        return v49;
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) == 8 )
        return v49;
      if ( ((v33 = *(_DWORD *)(v5 + 4), v31 >= 0x20) || (v33 & 4) == 0)
        && ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 && v31 >= 0x21 || (v33 & 0x10) != 0) )
      {
        return v49;
      }
      else
      {
        return v49 | 2;
      }
    }
    if ( !_bittest64((const signed __int64 *)(BugCheckParameter2 + 40), 0x35u) )
    {
      PfnPriority = MiGetPfnPriority(BugCheckParameter2);
      v10 |= 1u;
      v50 = PfnPriority;
      if ( (v10 & 2) != 0 )
      {
        v10 &= 0xFFFFFFEE;
      }
      else if ( v2 == 9 && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
      {
        v10 |= 4u;
        SlabAllocatorRepurposedStandbyList = v5 + 88LL * PfnPriority + 3264;
LABEL_22:
        if ( (v10 & 1) != 0 )
        {
          if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
            _InterlockedDecrement64((volatile signed __int64 *)(v5 + 16320));
          else
            _InterlockedDecrement64((volatile signed __int64 *)(v5 + 7232));
        }
        if ( (v10 & 0x80u) == 0 )
        {
          v10 |= 0x100u;
          MiAcquirePageListLock(SlabAllocatorRepurposedStandbyList, BugCheckParameter2, v2, 1, (__int64)v51);
        }
        if ( (v10 & 8) == 0 )
          MiReplaceStandbyLookaside(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
        if ( (v10 & 4) != 0 )
        {
          MiUnlinkProtectedStandbyPfn(BugCheckParameter2);
          v13 = 0x3FFFFFFFFFLL;
          v14 = 0x3FFFFFFFFFLL;
        }
        else
        {
          v13 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
          v14 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFFLL;
          if ( v13 != 0x3FFFFFFFFFLL && (v13 < qword_140E35B00 || v13 >= qword_140E35B00 + 2048) )
          {
            v15 = 48 * v13 - 0x220000000000LL;
            if ( v50 != (unsigned int)MiGetPfnPriority(v15) )
            {
              v43 = MiGetPfnPriority(v15);
              KeBugCheckEx(0x1Au, 0x8886uLL, BugCheckParameter2, v15, (v50 << 8) | (unsigned __int64)v43);
            }
          }
          if ( v14 != 0x3FFFFFFFFFLL && (v14 < qword_140E35B00 || v14 >= qword_140E35B00 + 2048) )
          {
            v16 = 48 * v14 - 0x220000000000LL;
            if ( v50 != (unsigned int)MiGetPfnPriority(v16) )
            {
              v44 = MiGetPfnPriority(v16);
              KeBugCheckEx(0x1Au, 0x8887uLL, BugCheckParameter2, v16, (v50 << 8) | (unsigned __int64)v44);
            }
          }
        }
        if ( v50 < *(unsigned __int8 *)(v5 + 16100) && (v10 & 8) == 0 )
          v49 = 1;
        goto LABEL_39;
      }
      SlabAllocatorRepurposedStandbyList = v5 + 88LL * PfnPriority + 3264;
      if ( v2 < 9 )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
        {
          SlabAllocatorRepurposedStandbyList = MiGetSlabAllocatorRepurposedStandbyList(
                                                 BugCheckParameter2,
                                                 (unsigned int)v2,
                                                 0LL);
          v10 = v10 & 0xFFFFFFF6 | 8;
        }
        else
        {
          v10 &= 0xFFFFFFEE;
        }
      }
      goto LABEL_22;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x10) != 0 )
    {
      v42 = 128;
      if ( v10 < 0x80 )
        v42 = 0;
      MiUnlinkPageFromBadList(BugCheckParameter2, v42);
    }
    *(_QWORD *)BugCheckParameter2 = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFF0000000000uLL;
    result = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 36) = 0;
  }
  return result;
}
