/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x14021F1A0
 * Callers:
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiConfirmPageIsZero @ 0x14021D260 (MiConfirmPageIsZero.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14021EFA0 (MiFillPhysicalPages.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x1402209B0 (MiPfnShareCountIsZero.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiDecommitFreePage @ 0x14023E790 (MiDecommitFreePage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402666A8 (MiReadWriteAnyLevelShadowPte.c)
 *     MiChangePageAttributeBatch @ 0x1402668E4 (MiChangePageAttributeBatch.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MmStealTopLevelPage @ 0x1403116F0 (MmStealTopLevelPage.c)
 *     MiInitializeImageProtos @ 0x140313060 (MiInitializeImageProtos.c)
 *     MiBuildMappedCluster @ 0x14036ABB8 (MiBuildMappedCluster.c)
 *     MiWriteRepurposedTransitionPte @ 0x14036D574 (MiWriteRepurposedTransitionPte.c)
 *     MiCopyTopLevelMappings @ 0x140393D4C (MiCopyTopLevelMappings.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiCopySinglePage @ 0x140395C54 (MiCopySinglePage.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiFlushCacheForAttributeChange @ 0x1403AE6F8 (MiFlushCacheForAttributeChange.c)
 *     MiCopyToUserVa @ 0x1403E2DBC (MiCopyToUserVa.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiMirrorOmitPagesFromCopy @ 0x1404293F0 (MiMirrorOmitPagesFromCopy.c)
 *     MmOutSwapProcess @ 0x14042D50C (MmOutSwapProcess.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiComputePageHash @ 0x140434B10 (MiComputePageHash.c)
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 *     MiClearContainingMapping @ 0x14045BFFC (MiClearContainingMapping.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14046511C (MiRewriteTrimPteAsDemandZero.c)
 *     MiAddPagesToEnclave @ 0x140473CEC (MiAddPagesToEnclave.c)
 *     MmUpdateUserShadowStackValue @ 0x1404873D8 (MmUpdateUserShadowStackValue.c)
 *     MiInitializeImageHeaderPage @ 0x14048E2E4 (MiInitializeImageHeaderPage.c)
 *     MiPteForProtoPoolMadeDemandFill @ 0x1404986F8 (MiPteForProtoPoolMadeDemandFill.c)
 *     MiInitializeSelfmap @ 0x1404A6DD0 (MiInitializeSelfmap.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiFinishLastForkPageTable @ 0x1404A903C (MiFinishLastForkPageTable.c)
 *     MiPersistMdl @ 0x1404C7C68 (MiPersistMdl.c)
 *     MiArePageContentsZero @ 0x1404CA060 (MiArePageContentsZero.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiApplyDebuggerPatches @ 0x1404F6A1C (MiApplyDebuggerPatches.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MiStackTheftFreezeProcessors @ 0x140675374 (MiStackTheftFreezeProcessors.c)
 *     MiPersistPage @ 0x14067B918 (MiPersistPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplicatePteChangeToProcess @ 0x14068D440 (MiReplicatePteChangeToProcess.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406931D8 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUserPdeOrAbove @ 0x140238638 (MiUserPdeOrAbove.c)
 *     MiIsAddressGlobal @ 0x1402ECF00 (MiIsAddressGlobal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  int v3; // esi
  int v4; // ebp
  int v6; // eax
  signed int v7; // esi
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  ULONG_PTR v10; // rbx
  __int64 v11; // r14
  _QWORD *MmInternal; // rdi
  unsigned __int64 UltraMapping; // r15
  ULONG_PTR *v14; // rsi
  unsigned __int8 CurrentIrql; // di

  v3 = 1;
  if ( (a3 & 0x20000000) == 0 )
    v3 = 4;
  v4 = a3;
  if ( (a3 & 0x40000000) != 0 )
  {
    v6 = a3 & 3;
    if ( v6 == 2 )
    {
      v3 |= 0x2000000u;
      goto LABEL_28;
    }
  }
  else
  {
    v6 = (unsigned __int8)BYTE2(*(_DWORD *)(48 * a1 - 0x220000000000LL + 32)) >> 6;
  }
  if ( !v6 || v6 == 3 )
  {
    v3 |= 8u;
    goto LABEL_8;
  }
  if ( v6 == 2 )
LABEL_28:
    v3 |= 0x18u;
LABEL_8:
  v7 = v3 | 0xA0000000;
  v8 = v7 & 0x1F;
  v9 = ((a1 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v8] & 0xFFF0000000000E7FuLL | 0x163;
  if ( (v7 & 5) != 4 || v7 >= 0 )
    v9 = ((a1 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v8] & 0xFFF0000000000E7FuLL | 0x121;
  v10 = (((unsigned __int64)(unsigned __int8)word_140E2ED84 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2ED84 << 8) ^ v9) & 0xFFFFFFFFFFFFFEFFuLL) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
    *a2 = CurrentIrql;
  }
  v11 = 16LL;
  if ( (v4 & 0x10000000) == 0 )
    v11 = 1LL;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  UltraMapping = MiGetUltraMapping(
                   (__int64)&MmInternal[4 * (3 - (unsigned int)((v4 & 0x10000000) != 0)) + 1],
                   3 - (unsigned int)((v4 & 0x10000000) != 0),
                   v11,
                   4);
  v14 = (ULONG_PTR *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *MmInternal = v14;
  do
  {
    if ( v4 >= 0 )
    {
      if ( _bittest64(&MiFlags, 0x24u) && (v10 & 0x20) == 0 && (unsigned __int64)v14 >= 0xFFFFF6C000000000uLL )
LABEL_24:
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v14, v10);
    }
    else if ( _bittest64(&MiFlags, 0x24u) && (v10 & 0x20) == 0 && (unsigned __int64)v14 >= 0xFFFFF6C000000000uLL )
    {
      goto LABEL_24;
    }
    *v14++ = v10;
    v10 = (v10 + 4096) ^ (v10 ^ (v10 + 4096)) & 0xFFF0000000000FFFuLL;
    --v11;
  }
  while ( v11 );
  return UltraMapping;
}
