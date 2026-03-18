/*
 * XREFs of McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC
 * Callers:
 *     VidSchiProcessIsrVSync @ 0x140005D2C (VidSchiProcessIsrVSync.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x14000F7D0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400C1C80 (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z @ 0x1400D1E54 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400D2B70 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1400D5120 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z.c)
 *     ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1400E297C (-PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E2B68 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@H@Z @ 0x1400F4DA0 (-NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@H@Z.c)
 *     VidMmReportDmaPoolState @ 0x1400F6D70 (VidMmReportDmaPoolState.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400190D0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 McTemplateK0pqx_EtwWriteTransfer()
{
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context);
}
