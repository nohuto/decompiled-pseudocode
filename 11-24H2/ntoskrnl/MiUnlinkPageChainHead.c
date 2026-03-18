/*
 * XREFs of MiUnlinkPageChainHead @ 0x1402E8490
 * Callers:
 *     MiLinkPoolCommitChain @ 0x14023F6A0 (MiLinkPoolCommitChain.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiReturnPhysicalPoolPages @ 0x1402EA2D4 (MiReturnPhysicalPoolPages.c)
 *     MiAllocateEnclavePages @ 0x140394D84 (MiAllocateEnclavePages.c)
 *     MiFreeLargePageChain @ 0x1403D5A54 (MiFreeLargePageChain.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiAllocateEnclavePagesForMdl @ 0x1404136E4 (MiAllocateEnclavePagesForMdl.c)
 *     MiFreeUnmappedPageTables @ 0x14045A680 (MiFreeUnmappedPageTables.c)
 *     MiGetPageForEnclave @ 0x1404741F8 (MiGetPageForEnclave.c)
 *     MiReleasePrefetchGapPages @ 0x1404915EC (MiReleasePrefetchGapPages.c)
 *     MiGetClusterPage @ 0x1404D2DE4 (MiGetClusterPage.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F4DE4 (MiFlushFileOnlyDeleteChain.c)
 *     MiReturnPfnList @ 0x140679AA0 (MiReturnPfnList.c)
 *     MiGetDanglingExtent @ 0x14067B174 (MiGetDanglingExtent.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406808E8 (MiPrepareEnclaveMetadataPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 *     MmCreateShadowMapping @ 0x1407F674C (MmCreateShadowMapping.c)
 *     MiCreateHardwareEnclave @ 0x1407F719C (MiCreateHardwareEnclave.c)
 *     MiFreeReadListPages @ 0x140956090 (MiFreeReadListPages.c)
 *     MiReturnReservedEnclavePages @ 0x140B63810 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiUnlinkPageChainHead(__int64 a1)
{
  __int64 *result; // rax
  __int64 v2; // rdx
  bool v3; // zf

  result = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v2 = *result;
    v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
    *(_QWORD *)a1 = v2;
    if ( v3 )
      *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
