/*
 * XREFs of MiChangePageAttribute @ 0x14024C2DC
 * Callers:
 *     MiZeroAndReleasePages @ 0x140217770 (MiZeroAndReleasePages.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiInitializePfn @ 0x14024B260 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiGetPageChainSmallPageProcess @ 0x140253A70 (MiGetPageChainSmallPageProcess.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MiGetFastLargePages @ 0x14026499C (MiGetFastLargePages.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiDemoteLocalLargePage @ 0x14033E130 (MiDemoteLocalLargePage.c)
 *     MiAssignNonPagedPoolPte @ 0x14034CC00 (MiAssignNonPagedPoolPte.c)
 *     MiDeleteClusterPage @ 0x14034E8B0 (MiDeleteClusterPage.c)
 *     MiFreeSlabEntry @ 0x1403533C8 (MiFreeSlabEntry.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140393500 (MiPageAttributeBatchChangeNeeded.c)
 *     MiCopySinglePage @ 0x1403F4224 (MiCopySinglePage.c)
 *     MiZeroAndConvertPage @ 0x1403F8F1C (MiZeroAndConvertPage.c)
 *     MiSetPfnOwnedAndActive @ 0x140450A30 (MiSetPfnOwnedAndActive.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14049DD64 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiAddExpansionNonPagedPool @ 0x14067DBDC (MiAddExpansionNonPagedPool.c)
 *     MiResolveAwePageConflict @ 0x1406840F8 (MiResolveAwePageConflict.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406942A8 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiMirrorInSingleProcessorMode @ 0x14026C0E4 (MiMirrorInSingleProcessorMode.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiPfnZeroingNeeded @ 0x1403934B0 (MiPfnZeroingNeeded.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14039D220 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x14039D290 (KeInvalidateAllCaches.c)
 *     MiAbortCombineScan @ 0x1403A9DB0 (MiAbortCombineScan.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x140446A68 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiPageCombiningActive @ 0x14044E5A8 (MiPageCombiningActive.c)
 */

char __fastcall MiChangePageAttribute(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rbp
  int v4; // eax
  char v5; // r8
  char v6; // si
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // r10d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  char v15; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbx
  unsigned int v18; // r14d
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbx
  unsigned int v21; // r12d
  unsigned int v22; // ebx
  int v23; // r8d
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  signed __int32 v27[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v28; // [rsp+20h] [rbp-68h]
  int v29; // [rsp+24h] [rbp-64h]
  unsigned __int64 v30; // [rsp+28h] [rbp-60h]
  unsigned __int64 v31; // [rsp+30h] [rbp-58h]

  v3 = a1;
  v4 = MiMirrorInSingleProcessorMode();
  v6 = v5 | 1;
  if ( !v4 )
    v6 = v5;
  v9 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(v3)];
  if ( (v6 & 8) != 0 )
  {
    v11 = MiPfnZeroingNeeded(v3, a2);
    v12 = 0;
    if ( v11 )
    {
      CurrentPrcb = (struct _KPRCB *)(v3 + 16);
      if ( (*(_QWORD *)(v3 + 16) & 0x3E0LL) == 0 )
        MiSetOriginalPtePfnFromFreeList(CurrentPrcb, v7, v9, v10);
    }
  }
  else
  {
    v12 = 0;
  }
  LODWORD(v13) = HIWORD(*(_DWORD *)(v3 + 32));
  v14 = v3;
  v15 = 17;
  v16 = v3 + 48 * v9;
  v17 = (unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(v3 + 32)) >> 6;
  v31 = v16;
  v30 = v17;
  if ( v3 < v16 )
  {
    do
    {
      v18 = v12;
      v28 = v12;
      v19 = v14;
      while ( v14 < v16 )
      {
        if ( (v6 & 1) == 0 )
        {
          if ( v18 )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
              break;
          }
          else if ( (v6 & 0x10) != 0 )
          {
            v22 = v12;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v22 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentPrcb, v7, v9, v10) )
                {
                  HvlNotifyLongSpinWait(v22);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v14 + 24) < 0 );
            }
          }
          else
          {
            v15 = MiLockPageInline(v14);
          }
        }
        LODWORD(v13) = MiPageCombiningActive(0LL);
        if ( (_DWORD)v13 )
        {
          LOBYTE(v13) = MiAbortCombineScan(v14);
          v6 = v6 & 0xF9 | 2;
          v12 = 0;
        }
        ++v18;
        v14 += 48LL;
        if ( (unsigned __int8)v15 < 2u && (v18 & 0x3F) == 0 )
        {
          LODWORD(v13) = KeShouldYieldProcessor();
          v12 = 0;
          if ( (_DWORD)v13 )
            break;
        }
      }
      v20 = v30;
      if ( v30 == 3 )
      {
        v7 = v28;
      }
      else
      {
        if ( (v6 & 4) == 0 )
        {
          if ( (v6 & 2) != 0
            || (v25 = (*(_QWORD *)(v3 + 24) >> 59) & 7LL, ((*(_QWORD *)(v3 + 24) >> 59) & 7) == 0)
            || (_InterlockedOr(v27, v12),
                LOBYTE(v13) = MiTbFlushTimeStampMayNeedFlush(v25, (unsigned int)KiTbFlushTimeStamp, 7LL),
                (_BYTE)v13) )
          {
            LOBYTE(v13) = MiFlushEntireTbDueToAttributeChange();
          }
        }
        if ( v20 == 1 && v18 >= dword_140E2DC9C )
        {
          ++dword_140E2DC94;
          LOBYTE(v13) = KeInvalidateAllCaches();
          v7 = 1LL;
          v28 = 1;
        }
        else
        {
          v7 = v28;
        }
        v12 = 0;
      }
      v14 = v19;
      v21 = v12;
      if ( v18 )
      {
        LOBYTE(CurrentPrcb) = (_BYTE)a2 << 6;
        do
        {
          v10 = v14 + 32;
          v29 = *(_DWORD *)(v14 + 32);
          BYTE2(v29) = (unsigned __int8)CurrentPrcb | BYTE2(v29) & 0x3F;
          *(_DWORD *)(v14 + 32) = v29;
          if ( !(_DWORD)v7 && v20 == 1 )
          {
            ++dword_140E2DC98;
            v23 = 2;
            if ( a2 != 2 )
              v23 = v12;
            v24 = MiMapPageInHyperSpaceWorker(
                    0xAAAAAAAAAAAAAAABuLL * ((__int64)(v14 + 0x220000000000LL) >> 4),
                    0LL,
                    v23 | 0xC0000000);
            KeInvalidateRangeAllCachesNoIpi(v24, 4096LL);
            CurrentPrcb = KeGetCurrentPrcb();
            v12 = 0;
            *(_QWORD *)CurrentPrcb->MmInternal = 0LL;
            *(_QWORD *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
            if ( a2 == 3 )
            {
              MiFlushEntireTbDueToAttributeChange();
              v12 = 0;
            }
            v7 = v28;
            v20 = v30;
            LOBYTE(CurrentPrcb) = (_BYTE)a2 << 6;
          }
          v9 = 0xC7FFFFFFFFFFFFFFuLL;
          v13 = *(_QWORD *)(v14 + 24) & 0xC7FFFFFFFFFFFFFFuLL;
          *(_QWORD *)(v14 + 24) = v13;
          if ( (v6 & 1) == 0 )
          {
            LOBYTE(v13) = v18 - 1;
            if ( v21 < v18 - 1 )
              _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v14 += 48LL;
          ++v21;
        }
        while ( v21 < v18 );
        v3 = a1;
        v16 = v31;
      }
      if ( (v6 & 1) == 0 )
      {
        if ( (unsigned __int8)v15 < 2u )
        {
          LOBYTE(v7) = v15;
          LOBYTE(v13) = MiUnlockPage(v14 - 48, v7);
          v12 = 0;
        }
        else
        {
          LOBYTE(v13) = -1;
          _InterlockedAnd64((volatile signed __int64 *)(v14 - 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
    while ( v14 < v16 );
  }
  return v13;
}
