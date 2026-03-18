/*
 * XREFs of McTemplateK0pqq_EtwWriteTransfer @ 0x14000DBE8
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x14001AC80 (VidSchiUpdateContextStatus.c)
 *     VidSchiExecuteMmIoFlip @ 0x14002D920 (VidSchiExecuteMmIoFlip.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x140036C4C (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140038C68 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140044190 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400C6EF0 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400C7364 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1400C794C (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1400D9BB4 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEA.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1400DA3A4 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLO.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400EF688 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000DC70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

__int64 McTemplateK0pqq_EtwWriteTransfer()
{
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context);
}
