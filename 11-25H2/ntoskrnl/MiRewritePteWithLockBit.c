/*
 * XREFs of MiRewritePteWithLockBit @ 0x1402110AC
 * Callers:
 *     MiExamineZeroChunks @ 0x14020FF30 (MiExamineZeroChunks.c)
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiMakePteClean @ 0x140239F0C (MiMakePteClean.c)
 *     MiWriteLargePte @ 0x1402C3820 (MiWriteLargePte.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x1403292C0 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiDecommitLargePoolVa @ 0x14038BEF0 (MiDecommitLargePoolVa.c)
 *     MiDeleteLargeUserPde @ 0x1403FB6F0 (MiDeleteLargeUserPde.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiZeroPageWorkMapping @ 0x14043AE70 (MiZeroPageWorkMapping.c)
 *     MiDeleteUltraMapHierarchy @ 0x140450B18 (MiDeleteUltraMapHierarchy.c)
 *     MiMakeVaRangeNoAccess @ 0x1404A0378 (MiMakeVaRangeNoAccess.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiMapMdlWithLargePages @ 0x1404C6BAC (MiMapMdlWithLargePages.c)
 *     MiDecommitLargePte @ 0x1404C9F9C (MiDecommitLargePte.c)
 *     MiDereferenceHugeContext @ 0x1404CFC80 (MiDereferenceHugeContext.c)
 *     MiWriteAweClusterPte @ 0x1404D8144 (MiWriteAweClusterPte.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407D8000 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402FBBD4 (MiUnlockNestedPageTableWritePte.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockPte @ 0x1403E9E50 (MiLockPte.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiWriteValidPteNewPage @ 0x1403FF2B0 (MiWriteValidPteNewPage.c)
 *     MiReplicatePteChange @ 0x1404F4ED8 (MiReplicatePteChange.c)
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
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37180);
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37180);
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
LABEL_24:
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
    goto LABEL_24;
  }
LABEL_20:
  *a3 = a4;
LABEL_12:
  if ( v7 )
  {
    MiReplicatePteChange(a3, 1LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E37180);
  }
}
