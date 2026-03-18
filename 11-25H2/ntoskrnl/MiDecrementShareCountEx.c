/*
 * XREFs of MiDecrementShareCountEx @ 0x1403427F0
 * Callers:
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140226334 (MiRewriteTrimPteAsDemandZero.c)
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MiFreeDeferredCrcPages @ 0x140239B68 (MiFreeDeferredCrcPages.c)
 *     MiAddPageToInsertList @ 0x14023DD30 (MiAddPageToInsertList.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MmOutSwapProcess @ 0x1402F1C40 (MmOutSwapProcess.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 *     MiFreeUnmappedPageTables @ 0x140377C70 (MiFreeUnmappedPageTables.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 *     MiFreeContiguousPages @ 0x14038B910 (MiFreeContiguousPages.c)
 *     MiDeleteTopLevelPage @ 0x14045D230 (MiDeleteTopLevelPage.c)
 *     MiTrimSystemImagePages @ 0x1404A70E0 (MiTrimSystemImagePages.c)
 *     MiFinishLastForkPageTable @ 0x1404AEE2C (MiFinishLastForkPageTable.c)
 *     MiDecrementLargeSubsections @ 0x1404C8190 (MiDecrementLargeSubsections.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 *     MiDecrementProtoShareCounts @ 0x14066EF34 (MiDecrementProtoShareCounts.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 *     MiTradeBootImagePage @ 0x140C4A804 (MiTradeBootImagePage.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140C5413C (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiInsertProtectedStandbyPage @ 0x14023C818 (MiInsertProtectedStandbyPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiBadShareCount @ 0x140340DD8 (MiBadShareCount.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementShareCountEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v11; // rbp
  __int64 v12; // rdi
  unsigned __int64 v13; // r8
  __int64 *v14; // r10
  __int64 v15; // r9
  __int64 v16; // rax
  char v17; // al
  int v18; // [rsp+80h] [rbp+8h]
  unsigned __int64 v19; // [rsp+90h] [rbp+18h]

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = ((v4 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v4 ^ ((v4 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
  if ( (v4 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    v18 = *(_DWORD *)(a1 + 32);
    if ( *(__int64 *)(a1 + 40) < 0 )
    {
      v11 = *(_QWORD *)(a1 + 16) >> 5;
      v12 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 3) & 0x1FF;
      v13 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
      v14 = (__int64 *)(v13 + 8 * v12);
      v15 = ((unsigned __int64)*v14 >> 12) & 0xFFFFFFFFFFLL;
      if ( 48 * v15 - 0x220000000000LL != a1 )
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4),
          (ULONG_PTR)v14,
          *(_QWORD *)(v13 + 8 * v12));
      v16 = 32 * ((v15 << 7) | v11 & 0x1F | 0x40);
      if ( qword_140E2D940 )
      {
        if ( (v16 & qword_140E2D940) != 0 )
          v16 |= 0x10uLL;
        else
          v16 |= qword_140E2D940;
      }
      *v14 = v16;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    LOWORD(v18) = v18 - 1;
    if ( (_WORD)v18 )
    {
      if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      {
        BYTE2(v18) |= 7u;
      }
      else
      {
        if ( (v18 & 0x100000) != 0 )
        {
          v17 = BYTE2(v18) & 0xF8 | 3;
        }
        else if ( (v18 & 0x80000) != 0 )
        {
          v17 = BYTE2(v18) & 0xF8 | 3;
        }
        else
        {
          v17 = BYTE2(v18) & 0xF8 | 2;
        }
        BYTE2(v18) = v17;
      }
      *(_DWORD *)(a1 + 32) = v18;
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(a1 + 16)) )
        *(_BYTE *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
      return 3;
    }
    else if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v18 & 0x10000000) != 0 )
        HIBYTE(v18) &= ~0x10u;
      *(_DWORD *)(a1 + 32) = v18;
      v19 = *(_QWORD *)(a1 + 16);
      if ( (v19 & 0x400) == 0 && ((v19 & 4) != 0 || (v19 & 2) != 0) )
      {
        if ( v19 )
          MiReleasePageFileInfo(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), v19, 1);
      }
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
      return 4;
    }
    else
    {
      v7 = MI_READ_PTE_LOCK_FREE(a1 + 16);
      v8 = -9LL;
      v5 = 4;
      if ( (v7 & 0x400) != 0 )
        v8 = -2049LL;
      *(_QWORD *)(a1 + 16) = v7 & v8;
      if ( (v18 & 0x100000) != 0 )
      {
        v9 = 8;
        *(_DWORD *)(a1 + 32) = v18;
      }
      else
      {
        BYTE2(v18) = BYTE2(v18) & 0xF8 | 2;
        *(_DWORD *)(a1 + 32) = v18;
        if ( a2 && (unsigned int)MiGetPfnPriority(a1) < 5 )
        {
          MiInsertProtectedStandbyPage(a2, a1);
          return v5;
        }
        v9 = 4;
      }
      MiInsertPageInList(a1, v9);
    }
  }
  else
  {
    return 2;
  }
  return v5;
}
