/*
 * XREFs of VidSchMarkDeviceAsError @ 0x14001F860
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x140017660 (VidSchiSendToExecutionQueue.c)
 *     VidSchInvalidateHwContext @ 0x1400521E0 (VidSchInvalidateHwContext.c)
 *     VidSchiMarkDevicesInError @ 0x140090280 (VidSchiMarkDevicesInError.c)
 *     VidMmValidateHistoryBuffers @ 0x140097280 (VidMmValidateHistoryBuffers.c)
 *     ?MarkAllDevicesAsError@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@W4_VIDSCH_ERROR_CODE@@@Z @ 0x140099578 (-MarkAllDevicesAsError@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@W4_VIDSCH_ERROR_CODE@@@Z.c)
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009EBB0 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009F494 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1400A8050 (VidSchiMarkTdrFaultingDevice.c)
 *     VidSchFlushDevice @ 0x1400B5320 (VidSchFlushDevice.c)
 *     VidSchiSubmitRenderCommand @ 0x1400B7268 (VidSchiSubmitRenderCommand.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400B93C8 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1400D9BB4 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEA.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400ED714 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 *     ValidateAllocationReferences @ 0x1400FBAF0 (ValidateAllocationReferences.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14010C590 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x140111D60 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAI.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x14001FF30 (VidSchiMarkDeviceAsError.c)
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VidSchMarkDeviceAsError(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+28h] [rbp-48h] BYREF
  char v7; // [rsp+38h] [rbp-38h]
  int v8; // [rsp+3Ch] [rbp-34h]
  _QWORD v9[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v10; // [rsp+60h] [rbp-10h]

  v2 = 0;
  if ( !*(_DWORD *)(a1 + 200) && ((_DWORD)a2 == 14 || (int)a2 < 0) )
  {
    v2 = 1;
    LOBYTE(a2) = 1;
    VidSchSuspendResumeDevice(a1, a2, 0LL, 0LL);
  }
  v4 = *(_QWORD *)(a1 + 32);
  v10 = 0;
  v9[0] = v4 + 1984;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v9);
  v5 = *(_QWORD *)(a1 + 32);
  v7 = 0;
  v6[1] = v6;
  v8 = 2;
  v6[0] = v6;
  VidSchiMarkDeviceAsError((struct HwQueueStagingList *)&v5);
  if ( !v7 && v8 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v5, 0LL);
  AcquireSpinLock::Release((AcquireSpinLock *)v9);
  if ( v2 )
    VidSchSuspendResumeDevice(a1, 0LL, 0LL, 0LL);
}
