/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x14024BEF0
 * Callers:
 *     MiPteForProtoPoolMadeDemandFill @ 0x140200488 (MiPteForProtoPoolMadeDemandFill.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140200A7C (MiRewriteTrimPteAsDemandZero.c)
 *     MiDecommitFreePage @ 0x1402068E0 (MiDecommitFreePage.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiConfirmPageIsZero @ 0x140249FB0 (MiConfirmPageIsZero.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14024BCF0 (MiFillPhysicalPages.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x14024D700 (MiPfnShareCountIsZero.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 *     MiBuildMappedCluster @ 0x1402EC958 (MiBuildMappedCluster.c)
 *     MiInitializeImageHeaderPage @ 0x1402EE5B0 (MiInitializeImageHeaderPage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402EE8E8 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializeSelfmap @ 0x1402EF544 (MiInitializeSelfmap.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiCopyTopLevelMappings @ 0x14038D368 (MiCopyTopLevelMappings.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiFlushCacheForAttributeChange @ 0x14039CF08 (MiFlushCacheForAttributeChange.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     MiCopyToUserVa @ 0x1403C9340 (MiCopyToUserVa.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiInitializeImageProtos @ 0x1403F26E0 (MiInitializeImageProtos.c)
 *     MiCopySinglePage @ 0x1403F4224 (MiCopySinglePage.c)
 *     MmStealTopLevelPage @ 0x1403F4960 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14041D540 (MiMirrorOmitPagesFromCopy.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiComputePageHash @ 0x140426970 (MiComputePageHash.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 *     MiClearContainingMapping @ 0x140451394 (MiClearContainingMapping.c)
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MmUpdateUserShadowStackValue @ 0x140482448 (MmUpdateUserShadowStackValue.c)
 *     MiWriteRepurposedTransitionPte @ 0x1404A19F0 (MiWriteRepurposedTransitionPte.c)
 *     MiFinishLastForkPageTable @ 0x1404A345C (MiFinishLastForkPageTable.c)
 *     MiPersistMdl @ 0x1404C10C8 (MiPersistMdl.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiApplyDebuggerPatches @ 0x1404F4300 (MiApplyDebuggerPatches.c)
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 *     MiStackTheftFreezeProcessors @ 0x140676544 (MiStackTheftFreezeProcessors.c)
 *     MiPersistPage @ 0x14067CAF8 (MiPersistPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplicatePteChangeToProcess @ 0x14068E570 (MiReplicatePteChangeToProcess.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406942A8 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUserPdeOrAbove @ 0x1402127C8 (MiUserPdeOrAbove.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiIsAddressGlobal @ 0x14034E540 (MiIsAddressGlobal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v3; // esi
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
  v10 = (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ v9) & 0xFFFFFFFFFFFFFEFFuLL) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    *a2 = CurrentIrql;
  }
  v11 = 16LL;
  if ( (a3 & 0x10000000) == 0 )
    v11 = 1LL;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  UltraMapping = MiGetUltraMapping(
                   &MmInternal[4 * (3 - (unsigned int)((a3 & 0x10000000) != 0)) + 1],
                   3 - (unsigned int)((a3 & 0x10000000) != 0),
                   v11,
                   4LL);
  v14 = (ULONG_PTR *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *MmInternal = v14;
  do
  {
    if ( a3 >= 0 )
    {
      if ( _bittest64(&MiFlags, 0x24u) && (v10 & 0x20) == 0 && (unsigned __int64)v14 >= 0xFFFFF6C000000000uLL )
LABEL_24:
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v14, v10, 128LL);
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
