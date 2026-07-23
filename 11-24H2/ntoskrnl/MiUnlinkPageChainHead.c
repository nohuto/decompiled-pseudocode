/*
 * XREFs of MiUnlinkPageChainHead @ 0x140349AD0
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1402077F0 (MiLinkPoolCommitChain.c)
 *     MiFreeLargePageChain @ 0x1402648B8 (MiFreeLargePageChain.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiReturnPhysicalPoolPages @ 0x14034B914 (MiReturnPhysicalPoolPages.c)
 *     MiAllocateEnclavePagesForMdl @ 0x1403956D0 (MiAllocateEnclavePagesForMdl.c)
 *     MiAllocateEnclavePages @ 0x1403F85DC (MiAllocateEnclavePages.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiFreeUnmappedPageTables @ 0x14044FAD0 (MiFreeUnmappedPageTables.c)
 *     MiGetPageForEnclave @ 0x14046DE64 (MiGetPageForEnclave.c)
 *     MiReleasePrefetchGapPages @ 0x14048C0E4 (MiReleasePrefetchGapPages.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F26E4 (MiFlushFileOnlyDeleteChain.c)
 *     MiReturnPfnList @ 0x14067AC80 (MiReturnPfnList.c)
 *     MiGetDanglingExtent @ 0x14067C354 (MiGetDanglingExtent.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140681AE8 (MiPrepareEnclaveMetadataPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 *     MmCreateShadowMapping @ 0x1407F6EC0 (MmCreateShadowMapping.c)
 *     MiCreateHardwareEnclave @ 0x1407F7910 (MiCreateHardwareEnclave.c)
 *     MiFreeReadListPages @ 0x140939A40 (MiFreeReadListPages.c)
 *     MiReturnReservedEnclavePages @ 0x140B658E0 (MiReturnReservedEnclavePages.c)
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
