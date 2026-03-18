/*
 * XREFs of MiUnlinkPageFromListEx @ 0x14021A1F0
 * Callers:
 *     MiUnlinkStandbyPfn @ 0x14020EBB4 (MiUnlinkStandbyPfn.c)
 *     MiRelinkStandbyPage @ 0x14021A0E8 (MiRelinkStandbyPage.c)
 *     MiPrepareDecayNodeForReuse @ 0x14021C5C0 (MiPrepareDecayNodeForReuse.c)
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiAddPageToFlushMdl @ 0x14022FA30 (MiAddPageToFlushMdl.c)
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x1402C5DA4 (MiGetRepurposedSlabStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiRepurposeStandbySlabPage @ 0x1403B9694 (MiRepurposeStandbySlabPage.c)
 *     MiRepurposeDecayNode @ 0x1403EDFB0 (MiRepurposeDecayNode.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x14040DA18 (MiReferencePageForModifiedWrite.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiDecayPfnFullyInitialized @ 0x140440EE8 (MiDecayPfnFullyInitialized.c)
 *     MiMirrorPerformBrownWrites @ 0x140455630 (MiMirrorPerformBrownWrites.c)
 *     MiPurgeSlabEntry @ 0x140481BF0 (MiPurgeSlabEntry.c)
 *     MiUnlinkTransitionSlabPages @ 0x1404B32A0 (MiUnlinkTransitionSlabPages.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReuseStandbyPage @ 0x1404C2648 (MiReuseStandbyPage.c)
 *     MiFreeModifiedReservations @ 0x1404F6770 (MiFreeModifiedReservations.c)
 *     MiWalkResetCommitPte @ 0x14065EF40 (MiWalkResetCommitPte.c)
 *     MiEnableLargeSubsection @ 0x14066F2B4 (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x14066FCB4 (MiMarkFileOnlyPfnBad.c)
 *     MiNoPagesLastChance @ 0x140679124 (MiNoPagesLastChance.c)
 *     MiRepointPteAtExtendedStandby @ 0x1406795EC (MiRepointPteAtExtendedStandby.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140680478 (MiMoveModifiedPagesToCompressList.c)
 * Callees:
 *     MiAcquirePageListLock @ 0x1402122F0 (MiAcquirePageListLock.c)
 *     MiReplaceStandbyLookaside @ 0x140214750 (MiReplaceStandbyLookaside.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x140215A30 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiRemoveDecayClusterTimer @ 0x14021AD58 (MiRemoveDecayClusterTimer.c)
 *     MiDetermineModifiedPageListHead @ 0x14021BAB0 (MiDetermineModifiedPageListHead.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14021BE10 (MiUnlinkProtectedStandbyPfn.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x14021E2D0 (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x14021E35C (MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiUpdateLargePageCandidateValue @ 0x14024FD70 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiUnlinkPageFromBadList @ 0x1403BA1C4 (MiUnlinkPageFromBadList.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403BEBFC (MiUpdateAvailableEventsAtDpc.c)
 *     MiObtainFreePages @ 0x1403BF484 (MiObtainFreePages.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403BF540 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiUnlinkPageFromListEx(ULONG_PTR BugCheckParameter2, char a2)
{
  int v2; // r14d
  __int64 v5; // r10
  __int64 v6; // r13
  signed __int64 v7; // r8
  bool v8; // zf
  int v9; // ebx
  unsigned int v10; // ebx
  ULONG_PTR v11; // rsi
  __int64 v12; // r10
  __int64 PfnPriority; // r15
  int v14; // r9d
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r11
  ULONG_PTR v17; // r14
  ULONG_PTR v18; // r14
  unsigned int v19; // r14d
  __int64 v20; // r9
  signed __int64 v21; // rdx
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  int v24; // r14d
  __int64 v25; // rdx
  signed __int64 v26; // rdx
  signed __int64 v27; // r8
  signed __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 result; // rax
  __int64 v31; // rcx
  volatile signed __int32 *v32; // rcx
  signed __int64 v33; // rcx
  unsigned __int64 v34; // rsi
  struct _KTHREAD *CurrentThread; // rdx
  int v36; // ecx
  volatile signed __int64 *v37; // rax
  __int64 v38; // rax
  char v39; // r9
  __int64 v40; // rcx
  __int64 SlabAllocatorRepurposedStandbyList; // rax
  __int64 v42; // rax
  ULONG_PTR v43; // r9
  unsigned __int64 v44; // rdx
  unsigned int v45; // eax
  unsigned __int64 v46; // rcx
  unsigned int v47; // r14d
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // [rsp+30h] [rbp-C8h]
  int v51; // [rsp+30h] [rbp-C8h]
  unsigned int v52; // [rsp+30h] [rbp-C8h]
  int v53; // [rsp+34h] [rbp-C4h]
  unsigned int v54; // [rsp+38h] [rbp-C0h]
  __int64 v55; // [rsp+40h] [rbp-B8h]
  _BYTE v56[16]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-98h]
  char v58; // [rsp+68h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-80h]
  char v60; // [rsp+80h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-68h]
  char v62; // [rsp+98h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-50h]
  char v64; // [rsp+B0h] [rbp-48h]
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v2 = 9;
  v53 = 9;
  if ( (a2 & 4) == 0
    && (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    KeBugCheckEx(0x1Au, 0x8889uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v54 = 0;
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
    memset_0(v56, 0, 0x68uLL);
    v5 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
    v55 = v5;
    v6 = *(_QWORD *)(v5 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 7136);
    v7 = *(unsigned int *)(v6 + 12);
    v50 = *(_DWORD *)(v6 + 12);
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
    if ( v11 >= qword_140E358C0 && v11 < qword_140E358C0 + 2048 )
    {
      v10 |= 2u;
    }
    else
    {
      if ( byte_140E3C8A6 && *(_BYTE *)(qword_140E3CF00 + 2 * (v11 >> 9)) )
        v2 = *(unsigned __int8 *)(qword_140E3CF00 + 2 * (v11 >> 9)) - 1;
      v53 = v2;
    }
    if ( (_DWORD)v7 != 2 )
    {
      if ( (_DWORD)v7 == 3 )
      {
        _InterlockedDecrement64((volatile signed __int64 *)v6);
        v31 = 7232LL;
        if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
          v31 = 16320LL;
        _InterlockedDecrement64((volatile signed __int64 *)(v31 + v5));
        if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
        {
          v6 = v5 + 88 * ((*(_BYTE *)(BugCheckParameter2 + 36) & 0xF) + 64LL);
          if ( v10 < 0x80 )
          {
            MiAcquirePageListLock(v6, BugCheckParameter2, v53, 1, (__int64)v56);
            v10 |= 0x100u;
          }
          *(_BYTE *)(BugCheckParameter2 + 36) &= 0xF0u;
        }
        else
        {
          v6 = MiDetermineModifiedPageListHead(BugCheckParameter2, v5, v10 < 0x80 ? 2 : 0);
          if ( v10 < 0x80 )
          {
            MiAcquirePageListLock(v6, BugCheckParameter2, v53, 1, (__int64)v56);
            v10 |= 0x100u;
          }
          _InterlockedDecrement64((volatile signed __int64 *)(v55 + 19616));
        }
      }
      else
      {
        v37 = (volatile signed __int64 *)(v5 + 7232);
        if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
          v37 = (volatile signed __int64 *)(v5 + 16320);
        _InterlockedDecrement64(v37);
        if ( v10 < 0x80 )
        {
          MiAcquirePageListLock(v6, BugCheckParameter2, v53, 1, (__int64)v56);
          v10 |= 0x100u;
        }
      }
      v15 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
      v16 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFFLL;
LABEL_36:
      if ( v15 == 0x3FFFFFFFFFLL )
      {
        v19 = v10 >> 2;
        if ( (v10 & 4) == 0 )
          *(_QWORD *)(v6 + 24) = v16;
      }
      else
      {
        v20 = 48 * v15 - 0x220000000000LL;
        v21 = *(_QWORD *)(v20 + 24);
        v22 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v20 + 24),
                v16 | v21 & 0xFFFFFF0000000000uLL,
                v21);
        v7 = v22;
        if ( v50 == 2 )
        {
          if ( v21 != v22 )
          {
            do
            {
              v23 = v7;
              v7 = _InterlockedCompareExchange64(
                     (volatile signed __int64 *)(v20 + 24),
                     v16 | v7 & 0xFFFFFF0000000000uLL,
                     v7);
            }
            while ( v23 != v7 );
          }
        }
        else if ( v21 != v22 )
        {
          do
          {
            v33 = v7;
            v7 = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v20 + 24),
                   v16 | v7 & 0xFFFFFF0000000000uLL,
                   v7);
          }
          while ( v33 != v7 );
        }
        v19 = v10 >> 2;
      }
      if ( v16 == 0x3FFFFFFFFFLL )
      {
        v24 = v19 & 1;
        if ( !v24 )
          *(_QWORD *)(v6 + 16) = v15;
      }
      else
      {
        *(_QWORD *)(48 * v16 - 0x220000000000LL) = v15 | *(_QWORD *)(48 * v16 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
        v24 = v19 & 1;
      }
      v25 = v50;
      if ( (v10 & 0x10) != 0 )
        _InterlockedDecrement64((volatile signed __int64 *)v6);
      if ( v50 == 2 && (v10 & 0xA) == 0 )
      {
        MiUnlinkSecondaryListStandbyPage(BugCheckParameter2, v53);
        if ( v24 )
        {
          v51 = *(_DWORD *)(BugCheckParameter2 + 32);
          HIBYTE(v51) &= ~8u;
          *(_DWORD *)(BugCheckParameter2 + 32) = v51;
        }
      }
      if ( (v10 & 8) != 0 )
      {
        v52 = *(_DWORD *)(BugCheckParameter2 + 32);
        v38 = MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY(BugCheckParameter2, v25, v7, HIBYTE(v52));
        _InterlockedDecrement((volatile signed __int32 *)(v38 + 88));
        v40 = *(_QWORD *)(v38 + 56);
        if ( *(_DWORD *)(v40 + 128) == 8 )
          _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(v40 + 24) + 18304LL));
        HIBYTE(v52) = v39 & 0xF7;
        *(_DWORD *)(BugCheckParameter2 + 32) = v52;
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
      }
      else
      {
        *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFF0000000000uLL;
        if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0 && dword_140E2FE0C == 1 )
        {
          v43 = v11 & 0x1F;
          LOBYTE(v44) = 1;
          v7 = *((_QWORD *)&xmmword_140E2FE60 + 1) + 4 * (v11 >> 5);
          if ( v43 + 1 > 0x20 )
          {
            if ( (v11 & 0x1F) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v7, ((1 << (32 - (v11 & 0x1F))) - 1) << v43);
              v7 += 4LL;
              v44 = 1LL - (32 - (unsigned int)(v11 & 0x1F));
              if ( v44 >= 0x20 )
              {
                v46 = v44 >> 5;
                v44 += -32LL * (v44 >> 5);
                do
                {
                  *(_DWORD *)v7 = -1;
                  v7 += 4LL;
                  --v46;
                }
                while ( v46 );
              }
              if ( !v44 )
                goto LABEL_58;
            }
            v45 = (1 << v44) - 1;
          }
          else
          {
            v45 = 1 << v43;
          }
          _InterlockedOr((volatile signed __int32 *)v7, v45);
        }
      }
LABEL_58:
      *(_DWORD *)(BugCheckParameter2 + 36) = 0;
      if ( (v10 & 0x80u) == 0 )
      {
        if ( (v10 & 0x100) != 0 && v56[0] )
        {
          if ( v58 )
            _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v60 )
            _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v62 )
            _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v64 )
            _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v32 = (volatile signed __int32 *)(v6 + 32);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v32, 0xBFFFFFFF);
            _InterlockedDecrement(v32);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v32, retaddr, v7);
          }
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 32));
        }
      }
      if ( v53 != 9 || (v10 & 2) != 0 )
      {
        v29 = v55;
      }
      else
      {
        v8 = (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0;
        v29 = v55;
        if ( v8 )
          MiUpdateLargePageCandidateValue(v55, v11, 3LL);
      }
      if ( (v10 & 1) == 0 )
        return v54;
      v34 = _InterlockedDecrement64((volatile signed __int64 *)(v29 + 18688));
      if ( v34 == *(_QWORD *)(v29 + 16640) || v34 == *(_QWORD *)(v29 + 16648) )
        MiUpdateAvailableEventsAtDpc(v29);
      if ( v34 <= 0x420 )
      {
        v42 = *(_QWORD *)(v29 + 17600);
        if ( !v42 || !*(_BYTE *)(v42 + 52) )
          MiObtainFreePages(v29);
        if ( v34 < 0xA0 && v34 + 1 >= 0xA0 )
        {
          MiSlabDemotionLowMemoryConditionUpdate(v29, 1LL);
          if ( *(_DWORD *)(v29 + 1204) != -1 )
            KeSetEvent((PRKEVENT)(v29 + 1056), 0, 0);
        }
      }
      if ( v34 >= 0x9F )
        return v54;
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) == 8 )
        return v54;
      if ( ((v36 = *(_DWORD *)(v29 + 4), v34 >= 0x20) || (v36 & 4) == 0)
        && ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 && v34 >= 0x21 || (v36 & 0x10) != 0) )
      {
        return v54;
      }
      else
      {
        return v54 | 2;
      }
    }
    if ( !_bittest64((const signed __int64 *)(BugCheckParameter2 + 40), 0x35u) )
    {
      v10 |= 1u;
      PfnPriority = (unsigned int)MiGetPfnPriority(BugCheckParameter2);
      if ( (v10 & 2) != 0 )
      {
        v10 &= 0xFFFFFFEE;
      }
      else if ( v2 == 9 && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
      {
        v10 |= 4u;
        v6 = v12 + 88 * PfnPriority + 3264;
LABEL_18:
        if ( (v10 & 1) != 0 )
        {
          if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
            _InterlockedDecrement64((volatile signed __int64 *)(v12 + 16320));
          else
            _InterlockedDecrement64((volatile signed __int64 *)(v12 + 7232));
        }
        if ( (v10 & 0x80u) == 0 )
        {
          v10 |= 0x100u;
          MiAcquirePageListLock(v6, BugCheckParameter2, v2, 1, (__int64)v56);
        }
        if ( (v10 & 8) == 0 )
        {
          v14 = 0;
          if ( (v10 & 0x40) != 0 || v56[0] )
            v14 = 1;
          MiReplaceStandbyLookaside(
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
            0xFFFFFFFFFFFFFFFFuLL,
            v2,
            v14);
        }
        if ( (v10 & 4) != 0 )
        {
          MiUnlinkProtectedStandbyPfn(BugCheckParameter2);
          v15 = 0x3FFFFFFFFFLL;
          v16 = 0x3FFFFFFFFFLL;
        }
        else
        {
          v15 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
          v16 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFFLL;
          if ( v15 != 0x3FFFFFFFFFLL && (v15 < qword_140E358C0 || v15 >= qword_140E358C0 + 2048) )
          {
            v17 = 48 * v15 - 0x220000000000LL;
            if ( (_DWORD)PfnPriority != (unsigned int)MiGetPfnPriority(v17) )
            {
              v48 = MiGetPfnPriority(v17);
              KeBugCheckEx(
                0x1Au,
                0x8886uLL,
                BugCheckParameter2,
                v17,
                (unsigned int)((_DWORD)PfnPriority << 8) | (unsigned __int64)v48);
            }
          }
          if ( v16 != 0x3FFFFFFFFFLL && (v16 < qword_140E358C0 || v16 >= qword_140E358C0 + 2048) )
          {
            v18 = 48 * v16 - 0x220000000000LL;
            if ( (_DWORD)PfnPriority != (unsigned int)MiGetPfnPriority(v18) )
            {
              v49 = MiGetPfnPriority(v18);
              KeBugCheckEx(
                0x1Au,
                0x8887uLL,
                BugCheckParameter2,
                v18,
                (unsigned int)((_DWORD)PfnPriority << 8) | (unsigned __int64)v49);
            }
          }
        }
        if ( (unsigned int)PfnPriority < *(unsigned __int8 *)(v55 + 16100) && (v10 & 8) == 0 )
          v54 = 1;
        goto LABEL_36;
      }
      v6 = v12 + 88 * PfnPriority + 3264;
      if ( v2 < 9 )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
        {
          SlabAllocatorRepurposedStandbyList = MiGetSlabAllocatorRepurposedStandbyList(
                                                 BugCheckParameter2,
                                                 (unsigned int)v2,
                                                 0LL);
          v12 = v55;
          v10 = v10 & 0xFFFFFFF6 | 8;
          v6 = SlabAllocatorRepurposedStandbyList;
        }
        else
        {
          v10 &= 0xFFFFFFEE;
        }
      }
      goto LABEL_18;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x10) != 0 )
    {
      v47 = 128;
      if ( v10 < 0x80 )
        v47 = 0;
      MiUnlinkPageFromBadList(BugCheckParameter2, v47);
    }
    *(_QWORD *)BugCheckParameter2 = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFF0000000000uLL;
    result = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 36) = 0;
  }
  return result;
}
