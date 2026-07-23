/*
 * XREFs of MiDecrementShareCountEx @ 0x14024D2E0
 * Callers:
 *     MiRewriteTrimPteAsDemandZero @ 0x140200A7C (MiRewriteTrimPteAsDemandZero.c)
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiOutPageSingleKernelStack @ 0x140215F40 (MiOutPageSingleKernelStack.c)
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 *     MiFreeDeferredCrcPages @ 0x140345FC8 (MiFreeDeferredCrcPages.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 *     MiFreeContiguousPages @ 0x140398278 (MiFreeContiguousPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiFreeUnmappedPageTables @ 0x14044FAD0 (MiFreeUnmappedPageTables.c)
 *     MiDeleteTopLevelPage @ 0x14045128C (MiDeleteTopLevelPage.c)
 *     MiTrimSystemImagePages @ 0x1404A24CC (MiTrimSystemImagePages.c)
 *     MiFinishLastForkPageTable @ 0x1404A345C (MiFinishLastForkPageTable.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiDecrementProtoShareCounts @ 0x14067B8D4 (MiDecrementProtoShareCounts.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 *     MiTradeBootImagePage @ 0x140C5DD20 (MiTradeBootImagePage.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140C675CC (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     MiBadShareCount @ 0x140206F78 (MiBadShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402567C0 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementShareCountEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  __int64 *v11; // r10
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  int v20; // [rsp+80h] [rbp+8h]
  unsigned __int64 v21; // [rsp+90h] [rbp+18h]

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = ((v6 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v6 ^ ((v6 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
  if ( (v6 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    v20 = *(_DWORD *)(a1 + 32);
    if ( *(__int64 *)(a1 + 40) < 0 )
    {
      v8 = *(_QWORD *)(a1 + 16) >> 5;
      v9 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 3) & 0x1FF;
      v10 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
      v11 = (__int64 *)(v10 + 8 * v9);
      v12 = ((unsigned __int64)*v11 >> 12) & 0xFFFFFFFFFFLL;
      if ( 48 * v12 - 0x220000000000LL != a1 )
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
          (ULONG_PTR)v11,
          *(_QWORD *)(v10 + 8 * v9));
      a4 = v12 << 7;
      v13 = 32 * (a4 | v8 & 0x1F | 0x40);
      if ( qword_140E2DCC0 )
      {
        if ( (v13 & qword_140E2DCC0) != 0 )
          v13 |= 0x10uLL;
        else
          v13 |= qword_140E2DCC0;
      }
      *v11 = v13;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    LOWORD(v20) = v20 - 1;
    if ( (_WORD)v20 )
    {
      if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      {
        BYTE2(v20) |= 7u;
      }
      else
      {
        if ( (v20 & 0x100000) != 0 )
        {
          v19 = BYTE2(v20) & 0xF8 | 3;
        }
        else if ( (v20 & 0x80000) != 0 )
        {
          v19 = BYTE2(v20) & 0xF8 | 3;
        }
        else
        {
          v19 = BYTE2(v20) & 0xF8 | 2;
        }
        BYTE2(v20) = v19;
      }
      *(_DWORD *)(a1 + 32) = v20;
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(a1 + 16)) )
        *(_BYTE *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
      return 3;
    }
    else if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v20 & 0x10000000) != 0 )
        HIBYTE(v20) &= ~0x10u;
      *(_DWORD *)(a1 + 32) = v20;
      v21 = *(_QWORD *)(a1 + 16);
      if ( (v21 & 0x400) == 0 && ((v21 & 4) != 0 || (v21 & 2) != 0) )
      {
        if ( v21 )
          MiReleasePageFileInfo(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), v21, 1LL, a4);
      }
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
      return 4;
    }
    else
    {
      v16 = MI_READ_PTE_LOCK_FREE(a1 + 16);
      v17 = -9LL;
      v14 = 4;
      if ( (v16 & 0x400) != 0 )
        v17 = -2049LL;
      *(_QWORD *)(a1 + 16) = v16 & v17;
      if ( (v20 & 0x100000) != 0 )
      {
        v18 = 8LL;
        *(_DWORD *)(a1 + 32) = v20;
      }
      else
      {
        BYTE2(v20) = BYTE2(v20) & 0xF8 | 2;
        *(_DWORD *)(a1 + 32) = v20;
        if ( a2 && (unsigned int)MiGetPfnPriority(a1) < 5 )
        {
          MiInsertProtectedStandbyPage(a2, a1);
          return v14;
        }
        v18 = 4LL;
      }
      MiInsertPageInList(a1, v18);
    }
  }
  else
  {
    return 2;
  }
  return v14;
}
