/*
 * XREFs of ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x140008B04 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiClearFlipDevice @ 0x14001CD04 (VidSchiClearFlipDevice.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003AB00 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003BB2C (VidSchiPropagateCrossAdapterSignal.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003F374 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140040328 (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x140041B5C (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1400461F0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140048068 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 *     VidSchCancelPresentAtFlips @ 0x140048750 (VidSchCancelPresentAtFlips.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1400493D0 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     ?VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004ADA4 (-VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessAsyncLiveDump @ 0x14004F770 (VidSchiProcessAsyncLiveDump.c)
 *     VidSchiQueueAsyncLiveDump @ 0x14004FC28 (VidSchiQueueAsyncLiveDump.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140050418 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1400507D8 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1400508A0 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchEscape @ 0x140050DE0 (VidSchEscape.c)
 *     VidSchInsertNativeFenceUmdHandle @ 0x1400511E0 (VidSchInsertNativeFenceUmdHandle.c)
 *     VidSchPresentDurationPlane @ 0x140051330 (VidSchPresentDurationPlane.c)
 *     VidSchRemoveNativeFenceUmdHandle @ 0x1400516A0 (VidSchRemoveNativeFenceUmdHandle.c)
 *     ?VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT@@@Z @ 0x140051A20 (-VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOU.c)
 *     VidSchCreateDoorbell @ 0x1400520F0 (VidSchCreateDoorbell.c)
 *     VidSchTerminateDoorbell @ 0x140052350 (VidSchTerminateDoorbell.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1400523B8 (VidSchiCreateNodeSchedulingLog.c)
 *     VidSchiResetHwEngine @ 0x140052878 (VidSchiResetHwEngine.c)
 *     VidSchiCleanupQueuedCommand @ 0x140053090 (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140053138 (VidSchiCompleteAllPendingCommand.c)
 *     ?VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z @ 0x14005433C (-VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z.c)
 *     ?VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z @ 0x1400547AC (-VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

AcquireSpinLock *__fastcall AcquireSpinLock::AcquireSpinLock(
        AcquireSpinLock *this,
        unsigned __int64 *a2,
        char a3,
        char a4)
{
  struct _KLOCK_QUEUE_HANDLE *v6; // rdx
  AcquireSpinLock *result; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 32) = 0;
  *((_BYTE *)this + 33) = a4;
  if ( !a3 )
    return this;
  v6 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
  if ( !a4 )
  {
    KeAcquireInStackQueuedSpinLock(a2, v6);
    *((_BYTE *)this + 32) = 1;
    return this;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(a2, v6);
  result = this;
  *((_BYTE *)this + 32) = 1;
  return result;
}
