/*
 * XREFs of MiRewritePteWithLockBit @ 0x140335F2C
 * Callers:
 *     MiMakePteClean @ 0x140200C78 (MiMakePteClean.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiDecommitLargePoolVa @ 0x14021BCD4 (MiDecommitLargePoolVa.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14029E560 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiWriteLargePte @ 0x140312F80 (MiWriteLargePte.c)
 *     MiExamineZeroChunks @ 0x140333040 (MiExamineZeroChunks.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiZeroPageWorkMapping @ 0x140421920 (MiZeroPageWorkMapping.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiDeleteUltraMapHierarchy @ 0x140462310 (MiDeleteUltraMapHierarchy.c)
 *     MiMakeVaRangeNoAccess @ 0x14049351C (MiMakeVaRangeNoAccess.c)
 *     MiDeleteLargeUserPde @ 0x1404B4B44 (MiDeleteLargeUserPde.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     MiDecommitLargePte @ 0x1404C1658 (MiDecommitLargePte.c)
 *     MiDereferenceHugeContext @ 0x1404C8E3C (MiDereferenceHugeContext.c)
 *     MiWriteAweClusterPte @ 0x1404D0434 (MiWriteAweClusterPte.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E8490 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402023A0 (MiUnlockNestedPageTableWritePte.c)
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiLockPte @ 0x140203900 (MiLockPte.c)
 *     MiWriteValidPteNewPage @ 0x140217188 (MiWriteValidPteNewPage.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReplicatePteChange @ 0x1404F4EFC (MiReplicatePteChange.c)
 */

void __fastcall MiRewritePteWithLockBit(__int64 a1, int a2, volatile __int64 *a3, ULONG_PTR a4)
{
  int v7; // r14d
  BOOL v8; // esi
  bool v9; // zf
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // esi
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  ULONG_PTR v20; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR v21; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  v8 = (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBEDFFFuLL;
  if ( !a1 )
  {
    if ( v8 )
    {
      v7 = 1;
      ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
    }
    MiLockPte((ULONG_PTR)a3, 0);
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( _bittest64(&MiFlags, 0x24u)
      && (a4 & 1) != 0
      && (a4 & 0x20) == 0
      && (unsigned __int64)a3 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a3, a4, 128LL);
    }
    _InterlockedExchange64(a3, a4);
    v9 = !MiPteInShadowRange((unsigned __int64)a3);
    goto LABEL_10;
  }
  if ( !a2 )
  {
    MiLockNestedPageTable(a1, (ULONG_PTR)a3);
    MiUnlockNestedPageTableWritePte(a1, (unsigned __int64)a3, a4, 0);
    return;
  }
  if ( v8 && (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    v7 = 1;
    ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
  }
  v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  if ( (a4 & 1) != 0 )
  {
    if ( (v12 & 1) != 0 )
    {
      if ( ((a4 ^ v12) & 0xFFFFFFFFFF000LL) != 0 )
        MiWriteValidPteNewPage(a3, a4, 0LL, v14);
      else
        MiWriteValidPteNewProtection((ULONG_PTR)a3, a4, v13);
      goto LABEL_12;
    }
    if ( !v8 )
    {
      if ( _bittest64(&MiFlags, 0x24u) && (a4 & 0x20) == 0 && (unsigned __int64)a3 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a3, a4, 128LL);
      goto LABEL_20;
    }
    v20 = a4;
    v15 = 0;
    if ( MiPteInShadowRange((unsigned __int64)a3) )
    {
      v19 = MiSanitizeShadowPxe(v18, (__int64)&v20, v10);
      a4 = v20;
      v15 = v19;
    }
    if ( _bittest64(&MiFlags, 0x24u) && (a4 & 0x20) == 0 && (unsigned __int64)a3 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a3, a4, 128LL);
LABEL_28:
    *a3 = a4;
    v9 = v15 == 0;
LABEL_10:
    if ( !v9 )
      MiWritePteShadow((__int64)a3, a4, v10, v11);
    goto LABEL_12;
  }
  if ( v8 )
  {
    v21 = a4;
    v15 = 0;
    if ( MiPteInShadowRange((unsigned __int64)a3) )
    {
      v17 = MiSanitizeShadowPxe(v16, (__int64)&v21, v10);
      a4 = v21;
      v15 = v17;
    }
    goto LABEL_28;
  }
LABEL_20:
  *a3 = a4;
LABEL_12:
  if ( v7 )
  {
    MiReplicatePteChange(a3, 1LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  }
}
