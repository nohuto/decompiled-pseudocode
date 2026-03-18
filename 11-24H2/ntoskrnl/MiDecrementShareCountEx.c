/*
 * XREFs of MiDecrementShareCountEx @ 0x140220590
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiMakeSystemCacheRangeValid @ 0x140243570 (MiMakeSystemCacheRangeValid.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiAddPageToInsertList @ 0x1402F2180 (MiAddPageToInsertList.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MiFreeDeferredCrcPages @ 0x1402FA444 (MiFreeDeferredCrcPages.c)
 *     MiDuplicateCloneLeaf @ 0x140396854 (MiDuplicateCloneLeaf.c)
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiOutPageSingleKernelStack @ 0x14039F510 (MiOutPageSingleKernelStack.c)
 *     MiFreeContiguousPages @ 0x1403A95E8 (MiFreeContiguousPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmOutSwapProcess @ 0x14042D50C (MmOutSwapProcess.c)
 *     MiFreeUnmappedPageTables @ 0x14045A680 (MiFreeUnmappedPageTables.c)
 *     MiDeleteTopLevelPage @ 0x14045BEF4 (MiDeleteTopLevelPage.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14046511C (MiRewriteTrimPteAsDemandZero.c)
 *     MiTrimSystemImagePages @ 0x1404A7A78 (MiTrimSystemImagePages.c)
 *     MiFinishLastForkPageTable @ 0x1404A903C (MiFinishLastForkPageTable.c)
 *     MiDecrementLargeSubsections @ 0x1404C8E10 (MiDecrementLargeSubsections.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiDecrementProtoShareCounts @ 0x14067A6F4 (MiDecrementProtoShareCounts.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5428C (MmInitializeImageViewExtensionCfg.c)
 *     MiTradeBootImagePage @ 0x140C5BB90 (MiTradeBootImagePage.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140C65450 (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiBadShareCount @ 0x14023EE28 (MiBadShareCount.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiInsertProtectedStandbyPage @ 0x1402F09B0 (MiInsertProtectedStandbyPage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementShareCountEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // r8
  __int64 *v9; // r10
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // al
  int v17; // [rsp+80h] [rbp+8h]
  unsigned __int64 v18; // [rsp+90h] [rbp+18h]

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = ((v4 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v4 ^ ((v4 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
  if ( (v4 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    v17 = *(_DWORD *)(a1 + 32);
    if ( *(__int64 *)(a1 + 40) < 0 )
    {
      v6 = *(_QWORD *)(a1 + 16) >> 5;
      v7 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 3) & 0x1FF;
      v8 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
      v9 = (__int64 *)(v8 + 8 * v7);
      v10 = ((unsigned __int64)*v9 >> 12) & 0xFFFFFFFFFFLL;
      if ( 48 * v10 - 0x220000000000LL != a1 )
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4),
          (ULONG_PTR)v9,
          *(_QWORD *)(v8 + 8 * v7));
      v11 = 32 * ((v10 << 7) | v6 & 0x1F | 0x40);
      if ( qword_140E2DB80 )
      {
        if ( (v11 & qword_140E2DB80) != 0 )
          v11 |= 0x10uLL;
        else
          v11 |= qword_140E2DB80;
      }
      *v9 = v11;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    LOWORD(v17) = v17 - 1;
    if ( (_WORD)v17 )
    {
      if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      {
        BYTE2(v17) |= 7u;
      }
      else
      {
        if ( (v17 & 0x100000) != 0 )
        {
          v16 = BYTE2(v17) & 0xF8 | 3;
        }
        else if ( (v17 & 0x80000) != 0 )
        {
          v16 = BYTE2(v17) & 0xF8 | 3;
        }
        else
        {
          v16 = BYTE2(v17) & 0xF8 | 2;
        }
        BYTE2(v17) = v16;
      }
      *(_DWORD *)(a1 + 32) = v17;
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(a1 + 16)) )
        *(_BYTE *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
      return 3;
    }
    else if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v17 & 0x10000000) != 0 )
        HIBYTE(v17) &= ~0x10u;
      *(_DWORD *)(a1 + 32) = v17;
      v18 = *(_QWORD *)(a1 + 16);
      if ( (v18 & 0x400) == 0 && ((v18 & 4) != 0 || (v18 & 2) != 0) )
      {
        if ( v18 )
          MiReleasePageFileInfo(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), v18, 1LL);
      }
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
      return 4;
    }
    else
    {
      v14 = MI_READ_PTE_LOCK_FREE(a1 + 16);
      v15 = -9LL;
      v12 = 4;
      if ( (v14 & 0x400) != 0 )
        v15 = -2049LL;
      *(_QWORD *)(a1 + 16) = v14 & v15;
      if ( (v17 & 0x100000) != 0 )
      {
        *(_DWORD *)(a1 + 32) = v17;
      }
      else
      {
        BYTE2(v17) = BYTE2(v17) & 0xF8 | 2;
        *(_DWORD *)(a1 + 32) = v17;
        if ( a2 && (unsigned int)MiGetPfnPriority(a1) < 5 )
        {
          MiInsertProtectedStandbyPage(a2, a1);
          return v12;
        }
      }
      MiInsertPageInList(a1);
    }
  }
  else
  {
    return 2;
  }
  return v12;
}
