/*
 * XREFs of MiRewritePteWithLockBit @ 0x14020CBCC
 * Callers:
 *     MiExamineZeroChunks @ 0x14020B260 (MiExamineZeroChunks.c)
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14028E960 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiWriteLargePte @ 0x1403090A0 (MiWriteLargePte.c)
 *     MiDecommitLargePoolVa @ 0x1403A3F50 (MiDecommitLargePoolVa.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiZeroPageWorkMapping @ 0x14042FE70 (MiZeroPageWorkMapping.c)
 *     MiMakePteClean @ 0x1404326A0 (MiMakePteClean.c)
 *     MiDeleteUltraMapHierarchy @ 0x1404697BC (MiDeleteUltraMapHierarchy.c)
 *     MiMakeVaRangeNoAccess @ 0x140498B94 (MiMakeVaRangeNoAccess.c)
 *     MiDeleteLargeUserPde @ 0x1404B9CA4 (MiDeleteLargeUserPde.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiMapMdlWithLargePages @ 0x1404C71D0 (MiMapMdlWithLargePages.c)
 *     MiDecommitLargePte @ 0x1404C7F24 (MiDecommitLargePte.c)
 *     MiDereferenceHugeContext @ 0x1404CFD8C (MiDereferenceHugeContext.c)
 *     MiWriteAweClusterPte @ 0x1404D6FE4 (MiWriteAweClusterPte.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E7EC0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiLockPte @ 0x140233D30 (MiLockPte.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140285DE4 (MiUnlockNestedPageTableWritePte.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewPage @ 0x1403A28B8 (MiWriteValidPteNewPage.c)
 *     MiReplicatePteChange @ 0x1404F761C (MiReplicatePteChange.c)
 */

void __fastcall MiRewritePteWithLockBit(__int64 a1, int a2, volatile __int64 *a3, ULONG_PTR a4)
{
  int v7; // r14d
  BOOL v8; // esi
  bool v9; // zf
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  ULONG_PTR v16; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR v17; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  v8 = (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBEDFFFuLL;
  if ( !a1 )
  {
    if ( v8 )
    {
      v7 = 1;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
    }
    MiLockPte((ULONG_PTR)a3);
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( _bittest64(&MiFlags, 0x24u)
      && (a4 & 1) != 0
      && (a4 & 0x20) == 0
      && (unsigned __int64)a3 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a3, a4);
    }
    _InterlockedExchange64(a3, a4);
    v9 = (unsigned int)MiPteInShadowRange(a3) == 0;
    goto LABEL_10;
  }
  if ( !a2 )
  {
    MiLockNestedPageTable(a1, a3);
    MiUnlockNestedPageTableWritePte(a1, a3, a4, 0LL);
    return;
  }
  if ( v8 && (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    v7 = 1;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
  }
  v10 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (a4 & 1) != 0 )
  {
    if ( (v10 & 1) != 0 )
    {
      if ( ((a4 ^ v10) & 0xFFFFFFFFFF000LL) != 0 )
        MiWriteValidPteNewPage((ULONG_PTR)a3);
      else
        MiWriteValidPteNewProtection((ULONG_PTR)a3);
      goto LABEL_12;
    }
    if ( !v8 )
    {
      if ( _bittest64(&MiFlags, 0x24u) && (a4 & 0x20) == 0 && (unsigned __int64)a3 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a3, a4);
      goto LABEL_20;
    }
    v16 = a4;
    v11 = 0;
    if ( (unsigned int)MiPteInShadowRange(a3) )
    {
      v15 = MiSanitizeShadowPxe(v14, &v16);
      a4 = v16;
      v11 = v15;
    }
    if ( _bittest64(&MiFlags, 0x24u) && (a4 & 0x20) == 0 && (unsigned __int64)a3 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a3, a4);
LABEL_28:
    *a3 = a4;
    v9 = v11 == 0;
LABEL_10:
    if ( !v9 )
      MiWritePteShadow(a3, a4);
    goto LABEL_12;
  }
  if ( v8 )
  {
    v17 = a4;
    v11 = 0;
    if ( (unsigned int)MiPteInShadowRange(a3) )
    {
      v13 = MiSanitizeShadowPxe(v12, &v17);
      a4 = v17;
      v11 = v13;
    }
    goto LABEL_28;
  }
LABEL_20:
  *a3 = a4;
LABEL_12:
  if ( v7 )
  {
    MiReplicatePteChange(a3, 1LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
  }
}
