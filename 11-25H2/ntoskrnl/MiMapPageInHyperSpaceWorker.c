/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x14024DAC0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140226334 (MiRewriteTrimPteAsDemandZero.c)
 *     MiComputePageHash @ 0x140226B00 (MiComputePageHash.c)
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiConfirmPageIsZero @ 0x14024D480 (MiConfirmPageIsZero.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14024D8D0 (MiFillPhysicalPages.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     MiFlushCacheForAttributeChange @ 0x14026F3B4 (MiFlushCacheForAttributeChange.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MmOutSwapProcess @ 0x1402F1C40 (MmOutSwapProcess.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiCopySinglePage @ 0x140377E44 (MiCopySinglePage.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiCopyToUserVa @ 0x1403DDE48 (MiCopyToUserVa.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiCopyTopLevelMappings @ 0x1403FDDF4 (MiCopyTopLevelMappings.c)
 *     MmStealTopLevelPage @ 0x14040B140 (MmStealTopLevelPage.c)
 *     MiBuildMappedCluster @ 0x14040DB84 (MiBuildMappedCluster.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiInitializeSelfmap @ 0x14040F5E4 (MiInitializeSelfmap.c)
 *     MiInitializeImageHeaderPage @ 0x14040F8D4 (MiInitializeImageHeaderPage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14040FC0C (MiReadWriteAnyLevelShadowPte.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140430070 (MiMirrorOmitPagesFromCopy.c)
 *     MiInitializeImageProtos @ 0x140453928 (MiInitializeImageProtos.c)
 *     MiClearContainingMapping @ 0x14045D338 (MiClearContainingMapping.c)
 *     MmUpdateUserShadowStackValue @ 0x14048789C (MmUpdateUserShadowStackValue.c)
 *     MiPteForProtoPoolMadeDemandFill @ 0x140498A8C (MiPteForProtoPoolMadeDemandFill.c)
 *     MiWriteRepurposedTransitionPte @ 0x1404A6730 (MiWriteRepurposedTransitionPte.c)
 *     MiFinishLastForkPageTable @ 0x1404AEE2C (MiFinishLastForkPageTable.c)
 *     MiPersistMdl @ 0x1404C7140 (MiPersistMdl.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiApplyDebuggerPatches @ 0x1404F41FC (MiApplyDebuggerPatches.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MiStackTheftFreezeProcessors @ 0x140669914 (MiStackTheftFreezeProcessors.c)
 *     MiPersistPage @ 0x140670158 (MiPersistPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplicatePteChangeToProcess @ 0x140681BB0 (MiReplicatePteChangeToProcess.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140687D78 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14020F170 (MiUserPdeOrAbove.c)
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiIsAddressGlobal @ 0x1402C3B60 (MiIsAddressGlobal.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  char v3; // al
  int v7; // ecx
  __int64 v8; // rax
  ULONG_PTR v9; // rbx
  __int64 v10; // rbp
  _QWORD *MmInternal; // rdi
  unsigned __int64 UltraMapping; // r15
  ULONG_PTR *v13; // r14
  unsigned __int64 v15; // rbx
  unsigned __int8 CurrentIrql; // bp

  v3 = 1;
  if ( (a3 & 0x20000000) == 0 )
    v3 = 4;
  if ( (a3 & 0x40000000) != 0 )
  {
    v7 = a3 & 3;
    if ( v7 == 2 )
      goto LABEL_20;
  }
  else
  {
    v7 = (unsigned __int8)BYTE2(*(_DWORD *)(48 * a1 - 0x220000000000LL + 32)) >> 6;
  }
  if ( !v7 || v7 == 3 )
  {
    v3 |= 8u;
    goto LABEL_8;
  }
  if ( v7 == 2 )
LABEL_20:
    v3 |= 0x18u;
LABEL_8:
  v8 = v3 & 0x1F;
  v15 = ((a1 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v8] & 0xFFF0000000000E7FuLL | 0x121;
  if ( (v8 & 5) == 4 )
    v15 = ((a1 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v8] & 0xFFF0000000000E7FuLL | 0x163;
  v9 = (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ v15) & 0xFFFFFFFFFFFFFEFFuLL) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    *a2 = CurrentIrql;
  }
  v10 = 16LL;
  if ( (a3 & 0x10000000) == 0 )
    v10 = 1LL;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  UltraMapping = MiGetUltraMapping(
                   (__int64)&MmInternal[4 * (3 - (unsigned int)((a3 & 0x10000000) != 0)) + 1],
                   3 - (unsigned int)((a3 & 0x10000000) != 0),
                   v10,
                   4);
  v13 = (ULONG_PTR *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *MmInternal = v13;
  do
  {
    if ( a3 >= 0 )
    {
      if ( (MiFlags & 0x1000000000LL) != 0 && (v9 & 0x20) == 0 && (unsigned __int64)v13 >= 0xFFFFF6C000000000uLL )
LABEL_30:
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v13, v9);
    }
    else if ( (MiFlags & 0x1000000000LL) != 0 && (v9 & 0x20) == 0 && (unsigned __int64)v13 >= 0xFFFFF6C000000000uLL )
    {
      goto LABEL_30;
    }
    *v13++ = v9;
    v9 = (v9 + 4096) ^ (v9 ^ (v9 + 4096)) & 0xFFF0000000000FFFuLL;
    --v10;
  }
  while ( v10 );
  return UltraMapping;
}
