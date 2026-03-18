/*
 * XREFs of MiChangePageAttribute @ 0x14024DE74
 * Callers:
 *     MiPageAttributeBatchChangeNeeded @ 0x1402247A0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiDemoteLocalLargePage @ 0x140229CD0 (MiDemoteLocalLargePage.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiInitializePfn @ 0x14024CD40 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiAssignNonPagedPoolPte @ 0x1402C3250 (MiAssignNonPagedPoolPte.c)
 *     MiDeleteClusterPage @ 0x1402C48B0 (MiDeleteClusterPage.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x1402C7A50 (MiGetPageChainSmallPageProcess.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiCoalesceFreeSmallPages @ 0x140345720 (MiCoalesceFreeSmallPages.c)
 *     MiCopySinglePage @ 0x140377E44 (MiCopySinglePage.c)
 *     MiZeroAndReleasePages @ 0x14038C180 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x140390BD8 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePages @ 0x140392454 (MiGetFastLargePages.c)
 *     MiFreeSlabEntry @ 0x1403B6480 (MiFreeSlabEntry.c)
 *     MiZeroAndConvertPage @ 0x1403F8AEC (MiZeroAndConvertPage.c)
 *     MiSetPfnOwnedAndActive @ 0x14045C318 (MiSetPfnOwnedAndActive.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1404A8AC8 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiAddExpansionNonPagedPool @ 0x14067123C (MiAddExpansionNonPagedPool.c)
 *     MiResolveAwePageConflict @ 0x1406776E8 (MiResolveAwePageConflict.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140687D78 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiPfnZeroingNeeded @ 0x140224750 (MiPfnZeroingNeeded.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026F550 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14026F580 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x14026F5F0 (KeInvalidateAllCaches.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMirrorInSingleProcessorMode @ 0x140390068 (MiMirrorInSingleProcessorMode.c)
 *     MiAbortCombineScan @ 0x1403B7B64 (MiAbortCombineScan.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14044FFB8 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiPageCombiningActive @ 0x140458C94 (MiPageCombiningActive.c)
 */

char __fastcall MiChangePageAttribute(unsigned __int64 a1, int a2)
{
  unsigned __int64 v3; // rbp
  int v4; // eax
  char v5; // r8
  char v6; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v8; // r8
  BOOL v9; // eax
  unsigned int v10; // r10d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  char v13; // r13
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rbx
  unsigned int v16; // r14d
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned int v20; // r12d
  unsigned int v21; // ebx
  __int64 v22; // rcx
  int v23; // r8d
  unsigned __int64 v24; // rbx
  signed __int32 v26[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v27; // [rsp+20h] [rbp-68h]
  int v28; // [rsp+24h] [rbp-64h]
  unsigned __int64 v29; // [rsp+28h] [rbp-60h]
  unsigned __int64 v30; // [rsp+30h] [rbp-58h]

  v3 = a1;
  v4 = MiMirrorInSingleProcessorMode();
  v6 = v5 | 1;
  if ( !v4 )
    v6 = v5;
  v8 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(v3)];
  if ( (v6 & 8) != 0 )
  {
    v9 = MiPfnZeroingNeeded(v3, a2);
    v10 = 0;
    if ( v9 )
    {
      CurrentPrcb = (struct _KPRCB *)(v3 + 16);
      if ( (*(_QWORD *)(v3 + 16) & 0x3E0LL) == 0 )
        MiSetOriginalPtePfnFromFreeList((__int64 *)CurrentPrcb);
    }
  }
  else
  {
    v10 = 0;
  }
  LODWORD(v11) = HIWORD(*(_DWORD *)(v3 + 32));
  v12 = v3;
  v13 = 17;
  v14 = v3 + 48 * v8;
  v15 = (unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(v3 + 32)) >> 6;
  v30 = v14;
  v29 = v15;
  if ( v3 < v14 )
  {
    do
    {
      v16 = v10;
      v27 = v10;
      v17 = v12;
      while ( v12 < v14 )
      {
        if ( (v6 & 1) == 0 )
        {
          if ( v16 )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
              break;
          }
          else if ( (v6 & 0x10) != 0 )
          {
            v21 = v10;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v21 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentPrcb) )
                {
                  HvlNotifyLongSpinWait(v21);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v12 + 24) < 0 );
            }
          }
          else
          {
            v13 = MiLockPageInline(v12);
          }
        }
        LODWORD(v11) = MiPageCombiningActive(0LL);
        if ( (_DWORD)v11 )
        {
          LOBYTE(v11) = MiAbortCombineScan(v12);
          v6 = v6 & 0xF9 | 2;
          v10 = 0;
        }
        ++v16;
        v12 += 48LL;
        if ( (unsigned __int8)v13 < 2u && (v16 & 0x3F) == 0 )
        {
          LODWORD(v11) = KeShouldYieldProcessor();
          v10 = 0;
          if ( (_DWORD)v11 )
            break;
        }
      }
      v18 = v29;
      if ( v29 == 3 )
      {
        v19 = v27;
      }
      else
      {
        if ( (v6 & 4) == 0 )
        {
          if ( (v6 & 2) != 0
            || (v22 = (*(_QWORD *)(v3 + 24) >> 59) & 7LL, ((*(_QWORD *)(v3 + 24) >> 59) & 7) == 0)
            || (_InterlockedOr(v26, v10),
                LOBYTE(v11) = MiTbFlushTimeStampMayNeedFlush(v22, (unsigned int)KiTbFlushTimeStamp, 7LL),
                (_BYTE)v11) )
          {
            LOBYTE(v11) = MiFlushEntireTbDueToAttributeChange();
          }
        }
        if ( v18 == 1 && v16 >= dword_140E2D91C )
        {
          ++dword_140E2D914;
          LOBYTE(v11) = KeInvalidateAllCaches();
          v19 = 1LL;
          v27 = 1;
        }
        else
        {
          v19 = v27;
        }
        v10 = 0;
      }
      v12 = v17;
      v20 = v10;
      if ( v16 )
      {
        LOBYTE(CurrentPrcb) = (_BYTE)a2 << 6;
        do
        {
          v28 = *(_DWORD *)(v12 + 32);
          BYTE2(v28) = (unsigned __int8)CurrentPrcb | BYTE2(v28) & 0x3F;
          *(_DWORD *)(v12 + 32) = v28;
          if ( !(_DWORD)v19 && v18 == 1 )
          {
            ++dword_140E2D918;
            v23 = 2;
            if ( a2 != 2 )
              v23 = v10;
            v24 = MiMapPageInHyperSpaceWorker(
                    0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4),
                    0LL,
                    v23 | 0xC0000000);
            KeInvalidateRangeAllCachesNoIpi(v24, 4096LL);
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = 0;
            *(_QWORD *)CurrentPrcb->MmInternal = 0LL;
            *(_QWORD *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
            if ( a2 == 3 )
            {
              MiFlushEntireTbDueToAttributeChange();
              v10 = 0;
            }
            v19 = v27;
            v18 = v29;
            LOBYTE(CurrentPrcb) = (_BYTE)a2 << 6;
          }
          v11 = *(_QWORD *)(v12 + 24) & 0xC7FFFFFFFFFFFFFFuLL;
          *(_QWORD *)(v12 + 24) = v11;
          if ( (v6 & 1) == 0 )
          {
            LOBYTE(v11) = v16 - 1;
            if ( v20 < v16 - 1 )
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v12 += 48LL;
          ++v20;
        }
        while ( v20 < v16 );
        v3 = a1;
        v14 = v30;
      }
      if ( (v6 & 1) == 0 )
      {
        if ( (unsigned __int8)v13 < 2u )
        {
          LOBYTE(v19) = v13;
          LOBYTE(v11) = MiUnlockPage(v12 - 48, v19);
          v10 = 0;
        }
        else
        {
          LOBYTE(v11) = -1;
          _InterlockedAnd64((volatile signed __int64 *)(v12 - 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
    while ( v12 < v14 );
  }
  return v11;
}
