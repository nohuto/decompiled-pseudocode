/*
 * XREFs of MiUnlinkPageFromListEx @ 0x14033B030
 * Callers:
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiUnlinkStandbyPfn @ 0x140210560 (MiUnlinkStandbyPfn.c)
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x140218448 (MiGetRepurposedSlabStandbyPage.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x1402EC7E8 (MiReferencePageForModifiedWrite.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiPrepareDecayNodeForReuse @ 0x1402FEC64 (MiPrepareDecayNodeForReuse.c)
 *     MiRelinkStandbyPage @ 0x140300158 (MiRelinkStandbyPage.c)
 *     MiAddPageToFlushMdl @ 0x14033A230 (MiAddPageToFlushMdl.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRepurposeDecayNode @ 0x1403E79C0 (MiRepurposeDecayNode.c)
 *     MiCombineWithStandbyExisting @ 0x1403F1098 (MiCombineWithStandbyExisting.c)
 *     MiRepurposeStandbySlabPage @ 0x1403F80A4 (MiRepurposeStandbySlabPage.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     MiDecayPfnFullyInitialized @ 0x140437598 (MiDecayPfnFullyInitialized.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReuseStandbyPage @ 0x14043BE20 (MiReuseStandbyPage.c)
 *     MiUnlinkTransitionSlabPages @ 0x14043C5B4 (MiUnlinkTransitionSlabPages.c)
 *     MiMirrorPerformBrownWrites @ 0x14044A580 (MiMirrorPerformBrownWrites.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MiPurgeSlabEntry @ 0x14047DBD4 (MiPurgeSlabEntry.c)
 *     MiFreeModifiedReservations @ 0x1404F676C (MiFreeModifiedReservations.c)
 *     MiWalkResetCommitPte @ 0x14066BBF0 (MiWalkResetCommitPte.c)
 *     MiEnableLargeSubsection @ 0x14067BC54 (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067C654 (MiMarkFileOnlyPfnBad.c)
 *     MiNoPagesLastChance @ 0x140685ADC (MiNoPagesLastChance.c)
 *     MiRepointPteAtExtendedStandby @ 0x140685FA4 (MiRepointPteAtExtendedStandby.c)
 *     MiMoveModifiedPagesToCompressList @ 0x14068CE38 (MiMoveModifiedPagesToCompressList.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiReplaceStandbyLookaside @ 0x140222270 (MiReplaceStandbyLookaside.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x1402238C0 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x140224F70 (MiUnlinkProtectedStandbyPfn.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiAcquirePageListLock @ 0x140240AB0 (MiAcquirePageListLock.c)
 *     MiObtainFreePages @ 0x1402616B4 (MiObtainFreePages.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x140261770 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 *     MiDetermineModifiedPageListHead @ 0x140300F80 (MiDetermineModifiedPageListHead.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x14033BBF8 (MiRemoveDecayClusterTimer.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1403E2438 (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1403E24C4 (MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 *     MiUnlinkPageFromBadList @ 0x1403F6AAC (MiUnlinkPageFromBadList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  int v13; // r9d
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r14
  __int64 v18; // r9
  signed __int64 v19; // rdx
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  unsigned int v22; // r14d
  int v23; // r14d
  __int64 v24; // rdx
  volatile signed __int32 *v25; // rcx
  __int64 result; // rax
  signed __int64 v27; // rdx
  signed __int64 v28; // r8
  signed __int64 v29; // rcx
  __int64 v30; // rax
  signed __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  int v34; // ecx
  volatile signed __int64 *v35; // rax
  __int64 v36; // rax
  char v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rax
  ULONG_PTR v40; // r9
  unsigned __int64 v41; // rdx
  volatile signed __int32 *v42; // r8
  unsigned int v43; // eax
  unsigned __int64 v44; // rcx
  unsigned int v45; // r14d
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // [rsp+30h] [rbp-B8h]
  int v49; // [rsp+30h] [rbp-B8h]
  unsigned int v50; // [rsp+30h] [rbp-B8h]
  unsigned int v51; // [rsp+34h] [rbp-B4h]
  unsigned int v52; // [rsp+38h] [rbp-B0h]
  unsigned int v53; // [rsp+3Ch] [rbp-ACh]
  _BYTE v54[16]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+50h] [rbp-98h]
  char v56; // [rsp+58h] [rbp-90h]
  __int64 v57; // [rsp+68h] [rbp-80h]
  char v58; // [rsp+70h] [rbp-78h]
  __int64 v59; // [rsp+80h] [rbp-68h]
  char v60; // [rsp+88h] [rbp-60h]
  __int64 v61; // [rsp+98h] [rbp-50h]
  char v62; // [rsp+A0h] [rbp-48h]
  __int64 retaddr; // [rsp+E8h] [rbp+0h]

  v2 = 9;
  v51 = 9;
  if ( (a2 & 4) == 0
    && (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    KeBugCheckEx(0x1Au, 0x8889uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v52 = 0;
  if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32) )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(
        0x4Eu,
        2uLL,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
        qword_140E3D588,
        (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32));
    return 0LL;
  }
  else
  {
    memset_0(v54, 0, 0x68uLL);
    v5 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
    SlabAllocatorRepurposedStandbyList = *(_QWORD *)(v5 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 7136);
    v7 = *(unsigned int *)(SlabAllocatorRepurposedStandbyList + 12);
    v48 = *(_DWORD *)(SlabAllocatorRepurposedStandbyList + 12);
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
    if ( v11 >= qword_140E35C40 && v11 < qword_140E35C40 + 2048 )
    {
      v10 |= 2u;
    }
    else
    {
      if ( byte_140E3CC26 && *(_BYTE *)(qword_140E3D280 + 2 * (v11 >> 9)) )
        v2 = *(unsigned __int8 *)(qword_140E3D280 + 2 * (v11 >> 9)) - 1;
      v51 = v2;
    }
    if ( (_DWORD)v7 != 2 )
    {
      if ( (_DWORD)v7 == 3 )
      {
        _InterlockedDecrement64((volatile signed __int64 *)SlabAllocatorRepurposedStandbyList);
        v30 = 7232LL;
        if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
          v30 = 16320LL;
        _InterlockedDecrement64((volatile signed __int64 *)(v30 + v5));
        if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
        {
          SlabAllocatorRepurposedStandbyList = v5 + 88 * ((*(_BYTE *)(BugCheckParameter2 + 36) & 0xF) + 64LL);
          if ( v10 < 0x80 )
          {
            MiAcquirePageListLock(SlabAllocatorRepurposedStandbyList, BugCheckParameter2, v51, 1LL, (__int64)v54);
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
            MiAcquirePageListLock(SlabAllocatorRepurposedStandbyList, BugCheckParameter2, v51, 1LL, (__int64)v54);
            v10 |= 0x100u;
          }
          _InterlockedDecrement64((volatile signed __int64 *)(v5 + 19616));
        }
      }
      else
      {
        v35 = (volatile signed __int64 *)(v5 + 7232);
        if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
          v35 = (volatile signed __int64 *)(v5 + 16320);
        _InterlockedDecrement64(v35);
        if ( v10 < 0x80 )
        {
          MiAcquirePageListLock(SlabAllocatorRepurposedStandbyList, BugCheckParameter2, v51, 1LL, (__int64)v54);
          v10 |= 0x100u;
        }
      }
      v14 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
      v15 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFFLL;
LABEL_42:
      if ( v14 == 0x3FFFFFFFFFLL )
      {
        v22 = v10 >> 2;
        if ( (v10 & 4) == 0 )
          *(_QWORD *)(SlabAllocatorRepurposedStandbyList + 24) = v15;
      }
      else
      {
        v18 = 48 * v14 - 0x220000000000LL;
        v19 = *(_QWORD *)(v18 + 24);
        v20 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v18 + 24),
                v15 | v19 & 0xFFFFFF0000000000uLL,
                v19);
        v7 = v20;
        if ( v48 == 2 )
        {
          if ( v19 != v20 )
          {
            do
            {
              v21 = v7;
              v7 = _InterlockedCompareExchange64(
                     (volatile signed __int64 *)(v18 + 24),
                     v15 | v7 & 0xFFFFFF0000000000uLL,
                     v7);
            }
            while ( v21 != v7 );
          }
        }
        else if ( v19 != v20 )
        {
          do
          {
            v31 = v7;
            v7 = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v18 + 24),
                   v15 | v7 & 0xFFFFFF0000000000uLL,
                   v7);
          }
          while ( v31 != v7 );
        }
        v22 = v10 >> 2;
      }
      if ( v15 == 0x3FFFFFFFFFLL )
      {
        v23 = v22 & 1;
        if ( !v23 )
          *(_QWORD *)(SlabAllocatorRepurposedStandbyList + 16) = v14;
      }
      else
      {
        *(_QWORD *)(48 * v15 - 0x220000000000LL) = v14 | *(_QWORD *)(48 * v15 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
        v23 = v22 & 1;
      }
      v24 = v48;
      if ( (v10 & 0x10) != 0 )
        _InterlockedDecrement64((volatile signed __int64 *)SlabAllocatorRepurposedStandbyList);
      if ( v48 == 2 && (v10 & 0xA) == 0 )
      {
        MiUnlinkSecondaryListStandbyPage(BugCheckParameter2, v51);
        if ( v23 )
        {
          v49 = *(_DWORD *)(BugCheckParameter2 + 32);
          HIBYTE(v49) &= ~8u;
          *(_DWORD *)(BugCheckParameter2 + 32) = v49;
        }
      }
      if ( (v10 & 8) != 0 )
      {
        v50 = *(_DWORD *)(BugCheckParameter2 + 32);
        v36 = MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY(BugCheckParameter2, v24, v7, HIBYTE(v50));
        _InterlockedDecrement((volatile signed __int32 *)(v36 + 88));
        v38 = *(_QWORD *)(v36 + 56);
        if ( *(_DWORD *)(v38 + 128) == 8 )
          _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(v38 + 24) + 18304LL));
        HIBYTE(v50) = v37 & 0xF7;
        *(_DWORD *)(BugCheckParameter2 + 32) = v50;
      }
      *(_QWORD *)BugCheckParameter2 = 0LL;
      if ( (v10 & 2) != 0 )
      {
        v27 = *(_QWORD *)(BugCheckParameter2 + 24);
        v28 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(BugCheckParameter2 + 24),
                v27 & 0xFFFFFF0000000000uLL,
                v27);
        if ( v27 != v28 )
        {
          do
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(BugCheckParameter2 + 24),
                    v28 & 0xFFFFFF0000000000uLL,
                    v28);
          }
          while ( v29 != v28 );
        }
        MiRemoveDecayClusterTimer(BugCheckParameter2);
        goto LABEL_56;
      }
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFF0000000000uLL;
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0 && dword_140E3018C == 1 )
      {
        v40 = v11 & 0x1F;
        LOBYTE(v41) = 1;
        v42 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 4 * (v11 >> 5));
        if ( v40 + 1 > 0x20 )
        {
          if ( (v11 & 0x1F) != 0 )
          {
            _InterlockedOr(v42++, ((1 << (32 - (v11 & 0x1F))) - 1) << v40);
            v41 = 1LL - (32 - (unsigned int)(v11 & 0x1F));
            if ( v41 >= 0x20 )
            {
              v44 = v41 >> 5;
              v41 += -32LL * (v41 >> 5);
              do
              {
                *v42++ = -1;
                --v44;
              }
              while ( v44 );
            }
            if ( !v41 )
              goto LABEL_56;
          }
          v43 = (1 << v41) - 1;
        }
        else
        {
          v43 = 1 << v40;
        }
        _InterlockedOr(v42, v43);
      }
LABEL_56:
      *(_DWORD *)(BugCheckParameter2 + 36) = 0;
      if ( (v10 & 0x80u) == 0 )
      {
        if ( (v10 & 0x100) != 0 && v54[0] )
        {
          if ( v56 )
            _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v58 )
            _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v60 )
            _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v62 )
            _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v25 = (volatile signed __int32 *)(SlabAllocatorRepurposedStandbyList + 32);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v25, 0xBFFFFFFF);
            _InterlockedDecrement(v25);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v25, retaddr);
          }
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(SlabAllocatorRepurposedStandbyList + 32));
        }
      }
      if ( v51 == 9 && (v10 & 2) == 0 && (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0 )
        MiUpdateLargePageCandidateValue(
          v5,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
          3,
          2,
          0LL);
      if ( (v10 & 1) == 0 )
        return v52;
      v32 = _InterlockedDecrement64((volatile signed __int64 *)(v5 + 18688));
      if ( v32 == *(_QWORD *)(v5 + 16640) || v32 == *(_QWORD *)(v5 + 16648) )
        MiUpdateAvailableEventsAtDpc(v5);
      if ( v32 <= 0x420 )
      {
        v39 = *(_QWORD *)(v5 + 17600);
        if ( !v39 || !*(_BYTE *)(v39 + 52) )
          MiObtainFreePages(v5);
        if ( v32 < 0xA0 && v32 + 1 >= 0xA0 )
        {
          MiSlabDemotionLowMemoryConditionUpdate(v5, 1);
          if ( *(_DWORD *)(v5 + 1204) != -1 )
            KeSetEvent((PRKEVENT)(v5 + 1056), 0, 0);
        }
      }
      if ( v32 >= 0x9F )
        return v52;
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) == 8 )
        return v52;
      if ( ((v34 = *(_DWORD *)(v5 + 4), v32 >= 0x20) || (v34 & 4) == 0)
        && ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 && v32 >= 0x21 || (v34 & 0x10) != 0) )
      {
        return v52;
      }
      else
      {
        return v52 | 2;
      }
    }
    if ( !_bittest64((const signed __int64 *)(BugCheckParameter2 + 40), 0x35u) )
    {
      PfnPriority = MiGetPfnPriority(BugCheckParameter2);
      v10 |= 1u;
      v53 = PfnPriority;
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
          MiAcquirePageListLock(
            SlabAllocatorRepurposedStandbyList,
            BugCheckParameter2,
            (unsigned int)v2,
            1LL,
            (__int64)v54);
        }
        if ( (v10 & 8) == 0 )
        {
          v13 = 0;
          if ( (v10 & 0x40) != 0 || v54[0] )
            v13 = 1;
          MiReplaceStandbyLookaside(
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
            0xFFFFFFFFFFFFFFFFuLL,
            v2,
            v13);
        }
        if ( (v10 & 4) != 0 )
        {
          MiUnlinkProtectedStandbyPfn((_QWORD *)BugCheckParameter2);
          v14 = 0x3FFFFFFFFFLL;
          v15 = 0x3FFFFFFFFFLL;
        }
        else
        {
          v14 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
          v15 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFFLL;
          if ( v14 != 0x3FFFFFFFFFLL && (v14 < qword_140E35C40 || v14 >= qword_140E35C40 + 2048) )
          {
            v16 = 48 * v14 - 0x220000000000LL;
            if ( v53 != (unsigned int)MiGetPfnPriority(v16) )
            {
              v46 = MiGetPfnPriority(v16);
              KeBugCheckEx(0x1Au, 0x8886uLL, BugCheckParameter2, v16, (v53 << 8) | (unsigned __int64)v46);
            }
          }
          if ( v15 != 0x3FFFFFFFFFLL && (v15 < qword_140E35C40 || v15 >= qword_140E35C40 + 2048) )
          {
            v17 = 48 * v15 - 0x220000000000LL;
            if ( v53 != (unsigned int)MiGetPfnPriority(v17) )
            {
              v47 = MiGetPfnPriority(v17);
              KeBugCheckEx(0x1Au, 0x8887uLL, BugCheckParameter2, v17, (v53 << 8) | (unsigned __int64)v47);
            }
          }
        }
        if ( v53 < *(unsigned __int8 *)(v5 + 16100) && (v10 & 8) == 0 )
          v52 = 1;
        goto LABEL_42;
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
      v45 = 128;
      if ( v10 < 0x80 )
        v45 = 0;
      MiUnlinkPageFromBadList(BugCheckParameter2, v45);
    }
    *(_QWORD *)BugCheckParameter2 = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFF0000000000uLL;
    result = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 36) = 0;
  }
  return result;
}
