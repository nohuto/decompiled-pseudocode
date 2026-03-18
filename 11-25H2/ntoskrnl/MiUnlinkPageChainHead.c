/*
 * XREFs of MiUnlinkPageChainHead @ 0x14033BAF0
 * Callers:
 *     MiLinkPoolCommitChain @ 0x140238250 (MiLinkPoolCommitChain.c)
 *     MiReturnPhysicalPoolPages @ 0x1402C4578 (MiReturnPhysicalPoolPages.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiFreeUnmappedPageTables @ 0x140377C70 (MiFreeUnmappedPageTables.c)
 *     MiAllocateEnclavePages @ 0x1403B9BC4 (MiAllocateEnclavePages.c)
 *     MiGetPageForEnclave @ 0x1403FD3A4 (MiGetPageForEnclave.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiAllocateEnclavePagesForMdl @ 0x140416C3C (MiAllocateEnclavePagesForMdl.c)
 *     MiReleasePrefetchGapPages @ 0x1404921E0 (MiReleasePrefetchGapPages.c)
 *     MiFreeLargePageChain @ 0x1404AE044 (MiFreeLargePageChain.c)
 *     MiGetClusterPage @ 0x1404D2FFC (MiGetClusterPage.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F0DD4 (MiFlushFileOnlyDeleteChain.c)
 *     MiReturnPfnList @ 0x14066E1F4 (MiReturnPfnList.c)
 *     MiGetDanglingExtent @ 0x14066F9B4 (MiGetDanglingExtent.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406750C8 (MiPrepareEnclaveMetadataPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 *     MmCreateShadowMapping @ 0x1407E68BC (MmCreateShadowMapping.c)
 *     MiCreateHardwareEnclave @ 0x1407E730C (MiCreateHardwareEnclave.c)
 *     MiFreeReadListPages @ 0x1409C98F0 (MiFreeReadListPages.c)
 *     MiReturnReservedEnclavePages @ 0x140B536C0 (MiReturnReservedEnclavePages.c)
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
